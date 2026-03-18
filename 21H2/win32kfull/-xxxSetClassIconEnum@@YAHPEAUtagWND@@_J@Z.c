/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C016DFC0
 * Callers:
 *     xxxSetClassIcon @ 0x1C0239060 (xxxSetClassIcon.c)
 * Callees:
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     xxxRedrawTitle @ 0x1C00A6034 (xxxRedrawTitle.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    v3 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v3 + 23) & 0x20) != 0 )
    {
      DestroyWindowSmIcon((__int64)a1, a2);
      v3 = *((_QWORD *)a1 + 5);
    }
    if ( !*(_QWORD *)(v3 + 264) )
      xxxRedrawTitle((unsigned __int64 *)a1, 12);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
  }
  return 1LL;
}
