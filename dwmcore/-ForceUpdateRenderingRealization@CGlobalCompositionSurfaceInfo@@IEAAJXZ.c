/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800D6DE0
 * Callers:
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x1800D6D90 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1802575E8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18025869C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x1800409A4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1801DCA60 (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180258A30 (McTemplateU0t_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int CompositionSurfaceRenderingRealization; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int updated; // eax
  _DWORD v10[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B8h]
  HGDIOBJ ho; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+108h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  memset_0(v10, 0, 0xE0uLL);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 82) + 40LL))(*((_QWORD *)g_pComposition
                                                                                               + 82)) )
  {
    CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v10);
    if ( CompositionSurfaceRenderingRealization < 0 )
    {
      v3 = CompositionSurfaceRenderingRealization | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        v6,
        0LL,
        0,
        CompositionSurfaceRenderingRealization | 0x10000000,
        0x1B0u,
        0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          v6,
          (unsigned int)&CompSurfInfo_ForceUpdateRealization_Start,
          *((_QWORD *)this + 5),
          v11,
          v12);
      if ( (unsigned int)(v10[0] - 2) <= 1 && v10[1] == *((_DWORD *)this + 10) && v10[2] == *((_DWORD *)this + 11) )
      {
        v7 = *((_QWORD *)this + 16);
        if ( !v7 || v7 == v11 )
        {
          v14 |= 0x400u;
          *((_BYTE *)this + 96) = 1;
          updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                      this,
                      (const struct CSM_SURFACE_UPDATE_ *)v10);
          v3 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x1CCu, 0LL);
          *((_BYTE *)this + 96) = 0;
          v2 = 1;
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0t_EventWriteTransfer(v6, v5, v2);
    }
  }
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v3;
}
