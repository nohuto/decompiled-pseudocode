/*
 * XREFs of DwmGetClassStyle @ 0x1C0098E00
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edi
  _QWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 8LL);
  if ( v3 )
  {
    v7 = MNLookUpItem(v3, 0xF060u, 0, 0LL);
    if ( !v7
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 0x8060u, 0, 0LL)) == 0LL
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 160), 0xC070u, 0, 0LL)) == 0LL
      || (*(_DWORD *)(*v7 + 4LL) & 3) != 0 )
    {
      v4 = 512;
    }
    v5 |= v4;
  }
  return v5;
}
