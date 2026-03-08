/*
 * XREFs of MiNumberNodeDomains @ 0x1402A7108
 * Callers:
 *     MiCreatePerNodeZeroingConductor @ 0x14085B8B8 (MiCreatePerNodeZeroingConductor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberNodeDomains(unsigned __int16 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(KeNodeBlock[a1] + 292);
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
