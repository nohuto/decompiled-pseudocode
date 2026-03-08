/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C001F800
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C001F074 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C001F3D0 (DxgkEngFindViewDesktopPosition.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C001F730 (DrvGetWDDMAdapterInfo.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0193D30 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( v2 == -4 && _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1768) + 40LL) + 2552LL) + 240LL);
  if ( !v2 || _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return 0LL;
  return (struct _LUID *)(v2 + 240);
}
