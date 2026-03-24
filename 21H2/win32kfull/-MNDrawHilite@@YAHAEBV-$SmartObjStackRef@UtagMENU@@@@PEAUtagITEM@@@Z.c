/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044AE0
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00447AC (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0044958 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxMNInvertItem @ 0x1C024CD80 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00490D0 (MNIsUAHMenu.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C024BF54 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 **a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  __int64 *v6; // rcx
  struct tagITEM *v7; // r10

  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v4 & 0x80u) != 0 && (v4 & 0xC0000000) == 0 )
  {
    v6 = a1[2];
    if ( !v6 )
      v6 = (__int64 *)**a1;
    if ( (unsigned int)MNIsUAHMenu(v6, a2, 0LL) || !(unsigned int)MNIsCachedBmpOnly(v7) )
      return 1;
  }
  return v3;
}
