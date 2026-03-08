/*
 * XREFs of IaLpssReadCmdStatus @ 0x14067A3AC
 * Callers:
 *     IaLpssPciSetPower @ 0x14067A238 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssReadCmdStatus(_DWORD *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  *a1 = off_140C06B40[0]();
  return 0LL;
}
