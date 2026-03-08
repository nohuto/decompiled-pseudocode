/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802870E0
 * Callers:
 *     ?GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1801C1500 (-GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180287060 (-GetPresentStatistics@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatisticsDWM(
        CDDisplaySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
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
  _DWORD *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  _DWORD *v17; // [rsp+78h] [rbp+38h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 45);
  if ( v2 )
  {
    v15 = 0LL;
    v17 = 0LL;
    v4 = *v2;
    v16 = 0LL;
    v14 = DisplaySource_FrameStatistics;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v4 + 64))(v2, &v14, &v16);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x42Eu, 0LL);
    }
    else
    {
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v8 = (**v16)(v16, &GUID_905a0fef_bc53_11df_8c49_001e4fc686da, &v15);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x42Fu, 0LL);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v15 + 24LL))(v15, &v17);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x430u, 0LL);
        }
        else
        {
          v12 = v17;
          *(_DWORD *)a2 = *v17;
          *((_DWORD *)a2 + 1) = v12[1];
          *((_QWORD *)a2 + 1) = *((_QWORD *)v12 + 1);
          *((_DWORD *)a2 + 4) = v12[4];
          *((_QWORD *)a2 + 3) = *((_QWORD *)v12 + 3);
          *((_DWORD *)a2 + 9) = v12[4];
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  else
  {
    v7 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x43Bu, 0LL);
  }
  return v7;
}
