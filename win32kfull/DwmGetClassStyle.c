/*
 * XREFs of DwmGetClassStyle @ 0x1C007E918
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A6850 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 8LL);
  if ( v3 )
  {
    v7 = MNLookUpItem(v3, 61536LL, 0LL, 0LL);
    if ( !v7
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 32864LL, 0LL, 0LL)) == 0
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 49264LL, 0LL, 0LL)) == 0
      || (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 3) != 0 )
    {
      v4 = 512;
    }
    v5 |= v4;
  }
  return v5;
}
