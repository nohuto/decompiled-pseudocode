/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800BD7CC
 * Callers:
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x1800BD780 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z @ 0x1801F8D50 (-SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18009CCCC (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  int CompositionSurfaceRenderingRealization; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  int updated; // eax
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-D8h]
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]
  int v12; // [rsp+ECh] [rbp-2Ch]

  v2 = 0;
  memset_0(v9, 0, 0xC8uLL);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 63) + 104LL))(*((_QWORD *)g_pComposition
                                                                                                + 63)) )
  {
    CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v9);
    if ( CompositionSurfaceRenderingRealization < 0 )
    {
      v2 = CompositionSurfaceRenderingRealization | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        v4,
        0LL,
        0,
        CompositionSurfaceRenderingRealization | 0x10000000,
        0x1B7u,
        0LL);
    }
    else if ( v9[0] == 200 && v9[1] == *((_DWORD *)this + 10) && v9[2] == *((_DWORD *)this + 11) )
    {
      v5 = *((_QWORD *)this + 17);
      if ( !v5 || v5 == v10 )
      {
        v12 |= 0x400u;
        *((_BYTE *)this + 80) = 1;
        updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                    this,
                    (const struct CSM_SURFACE_UPDATE *)v9);
        v2 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, 0x1C9u, 0LL);
        *((_BYTE *)this + 80) = 0;
      }
    }
  }
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v2;
}
