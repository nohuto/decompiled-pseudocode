/*
 * XREFs of ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C024BF54
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00447AC (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044AE0 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MNIsCachedBmpOnly(struct tagITEM *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x20000000) != 0 )
    return *((_QWORD *)a1 + 3) == 0LL;
  return result;
}
