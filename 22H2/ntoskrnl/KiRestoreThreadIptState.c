/*
 * XREFs of KiRestoreThreadIptState @ 0x140572D80
 * Callers:
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x140572BAC (KiInitIptState.c)
 *     KiRestoreIptState @ 0x140572C80 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
