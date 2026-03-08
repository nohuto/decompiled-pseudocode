/*
 * XREFs of HalpFindGhesEntry @ 0x14037D5E8
 * Callers:
 *     HalpGenInitialRead @ 0x140A88528 (HalpGenInitialRead.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall HalpFindGhesEntry(int a1, __int64 **a2)
{
  __int64 *result; // rax

  for ( result = *a2; result != (__int64 *)a2; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 29) == a1 )
      return result;
  }
  return 0LL;
}
