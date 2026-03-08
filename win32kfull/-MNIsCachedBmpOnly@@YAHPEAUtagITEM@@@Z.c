/*
 * XREFs of ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C0236A2C
 * Callers:
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236514 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
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
