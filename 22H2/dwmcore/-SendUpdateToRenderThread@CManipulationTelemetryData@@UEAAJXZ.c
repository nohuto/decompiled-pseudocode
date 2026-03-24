/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x180232170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180062AE8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801C5F30 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443333344@Z @ 0x180231A0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@-$_tlgWri.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  LARGE_INTEGER v5; // rdx
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct CManipulationManager *v10; // rbx
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-50h] BYREF
  CManipulationTelemetryData *v25; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+100h] [rbp+0h]
  struct IMessageCallSendHost *v31; // [rsp+140h] [rbp+40h] BYREF
  struct CManipulationManager *v32; // [rsp+148h] [rbp+48h] BYREF
  CManipulationTelemetryData *v33; // [rsp+150h] [rbp+50h] BYREF
  __int64 v34; // [rsp+158h] [rbp+58h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v5 = PerformanceCount;
  *((LARGE_INTEGER *)this + 11) = PerformanceCount;
  v26 = 0LL;
  *(_QWORD *)&v28 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 2) != 0 && (qword_180344ED0 & 2) == qword_180344ED0 )
  {
    LODWORD(v31) = *((_DWORD *)this + 25);
    LODWORD(v32) = *((_DWORD *)this + 24);
    v21 = *((_QWORD *)this + 10);
    v22 = v27;
    v23 = *((_QWORD *)&v26 + 1);
    v24 = v26;
    LODWORD(v33) = *((_DWORD *)this + 8);
    LODWORD(v34) = *((_DWORD *)this + 7);
    v18 = *((_DWORD *)this + 6);
    v20 = v5;
    v25 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      byte_1802ECDF8,
      v3,
      v4,
      (__int64)&v25,
      (__int64)&v18,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v32,
      (__int64)&v31);
  }
  v6 = (CComposition *)*((_QWORD *)this + 22);
  v32 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  ManipulationManager = CComposition::GetManipulationManager(v6, &v32);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v17 = 51;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  v10 = v32;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v32, &v31);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v17 = 53;
    goto LABEL_14;
  }
  v11 = *((_QWORD *)v10 + 10);
  if ( v11 )
  {
    (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
    v12 = *(_OWORD *)((char *)this + 40);
    v26 = *(_OWORD *)((char *)this + 24);
    v13 = *(_OWORD *)((char *)this + 56);
    v27 = v12;
    v14 = *(_OWORD *)((char *)this + 72);
    v28 = v13;
    v15 = *(_OWORD *)((char *)this + 88);
    v29 = v14;
    v30 = v15;
    v33 = this;
    v34 = v11;
    ManipulationManager = CoreUICallSend(v31, &v34, 1LL, 11LL, 0, &unk_1802CE78A);
    v9 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 22) + 504LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 504LL),
        0LL,
        0x4000LL);
      goto LABEL_15;
    }
    v17 = 65;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, v17, 0LL);
    goto LABEL_15;
  }
  v9 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x38u, 0LL);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  return v9;
}
