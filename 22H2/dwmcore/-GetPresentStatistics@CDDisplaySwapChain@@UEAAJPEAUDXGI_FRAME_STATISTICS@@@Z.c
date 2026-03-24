/*
 * XREFs of ?GetPresentStatistics@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180239D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatistics(CDDisplaySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  LARGE_INTEGER *v12; // rcx
  LARGE_INTEGER v13; // rax
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  UINT *v18; // [rsp+78h] [rbp+38h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 15);
  v16 = 0LL;
  v18 = 0LL;
  v4 = *v2;
  v17 = 0LL;
  v15 = DisplaySource_FrameStatistics;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v4 + 64))(v2, &v15, &v17);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x20Cu, 0LL);
  }
  else
  {
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v8 = (**v17)(v17, &GUID_905a0fef_bc53_11df_8c49_001e4fc686da, &v16);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x20Du, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, UINT **))(*(_QWORD *)v16 + 24LL))(v16, &v18);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Eu, 0LL);
      }
      else
      {
        v12 = (LARGE_INTEGER *)v18;
        a2->PresentCount = *v18;
        a2->PresentRefreshCount = v12->HighPart;
        a2->SyncRefreshCount = v12[2].LowPart;
        v13 = v12[3];
        a2->SyncGPUTime.QuadPart = 0LL;
        a2->SyncQPCTime = v13;
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v7;
}
