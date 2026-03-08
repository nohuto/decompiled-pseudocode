/*
 * XREFs of NtQueryDebugFilterState @ 0x1402BDF40
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1405A53C0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall NtQueryDebugFilterState(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  v2 = 3;
  if ( a1 < 0x9C )
    v2 = a2;
  v3 = 101LL;
  if ( a1 < 0x9C )
    v3 = a1;
  if ( v2 <= 0x1F )
    v2 = 1 << v2;
  return (v2 & Kd_WIN2000_Mask) != 0 || (v2 & *(_DWORD *)*(&KdComponentTable + v3)) != 0;
}
