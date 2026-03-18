/*
 * XREFs of BgkGetConsoleState @ 0x140AF2040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14054F028 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14054F074 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140C6AC68 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
