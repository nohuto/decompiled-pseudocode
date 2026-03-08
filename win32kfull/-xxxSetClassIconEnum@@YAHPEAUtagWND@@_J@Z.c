/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C014A550
 * Callers:
 *     xxxSetClassIcon @ 0x1C0223360 (xxxSetClassIcon.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C00A1060 (SendDwmIconChange.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x1C012F204 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20) != 0 )
      DestroyWindowSmIcon((__int64 *)a1);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) )
      xxxRedrawTitle(a1, 12);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
  }
  return 1LL;
}
