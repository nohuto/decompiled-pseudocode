/*
 * XREFs of ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C0201BA8
 * Callers:
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C0224EB0 (xxxGetSysMenu.c)
 */

struct tagMENU *__fastcall xxxGetInitMenuParam(struct tagWND *a1, int *a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v2 & 0x20) != 0
    || (v2 & 0xC0) == 0x40
    || (v3 = *((_QWORD *)a1 + 21)) == 0
    || !*(_DWORD *)(*(_QWORD *)(v3 + 40) + 44LL) )
  {
    if ( a2 )
      *a2 = 1;
    return (struct tagMENU *)xxxGetSysMenu(a1, 0LL);
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return (struct tagMENU *)*((_QWORD *)a1 + 21);
  }
}
