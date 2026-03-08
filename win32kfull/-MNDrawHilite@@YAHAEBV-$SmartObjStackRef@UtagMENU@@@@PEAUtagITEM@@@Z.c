/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236514
 * Callers:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C02368A0 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C0236A2C (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  __int64 v5; // rcx
  struct tagITEM *v6; // r10

  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v4 & 0x80u) != 0 && (v4 & 0xC0000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      v5 = **(_QWORD **)a1;
    if ( (unsigned int)MNIsUAHMenu(v5) || !(unsigned int)MNIsCachedBmpOnly(v6) )
      return 1;
  }
  return v3;
}
