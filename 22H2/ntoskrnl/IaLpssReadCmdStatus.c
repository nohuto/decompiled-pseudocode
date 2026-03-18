/*
 * XREFs of IaLpssReadCmdStatus @ 0x14067C9FC
 * Callers:
 *     IaLpssPciSetPower @ 0x14067C888 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IaLpssReadCmdStatus(_DWORD *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  *a1 = off_140C06B30[0]();
  return 0LL;
}
