/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140065954
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140065A7C (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140065B00 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140065E30 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016FCC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140066C34 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140067640 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rdi
  int v3; // edx
  int v4; // r8d
  void *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  volatile signed __int32 *v8; // rdi

  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v2 = (__int64 *)((char *)this + 776);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 97);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, v3, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  v6 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 162);
  if ( v7 )
    operator delete(v7);
  *((_QWORD *)this + 162) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 784));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 91);
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
