/*
 * XREFs of BgkSetCursor @ 0x140AEE120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054CB88 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14054CBD4 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140C6A7E8 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
