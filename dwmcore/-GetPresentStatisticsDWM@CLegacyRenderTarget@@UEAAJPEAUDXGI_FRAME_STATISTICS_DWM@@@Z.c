/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacyRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800DF3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentStatisticsDWM(
        CLegacyRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v2 + 112LL))(v2, a2);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802EB290, 2u, v3, 0x386u, 0LL);
  }
  else
  {
    v5 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802EB290, 2u, -2003304307, 0x38Au, 0LL);
  }
  return v5;
}
