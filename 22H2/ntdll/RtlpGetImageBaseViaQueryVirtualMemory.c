/*
 * XREFs of RtlpGetImageBaseViaQueryVirtualMemory @ 0x180033544
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpGetImageBaseViaQueryVirtualMemory(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  char v7; // [rsp+40h] [rbp-18h]

  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v5, 24LL, 0LL) < 0 )
    return 0LL;
  result = v5;
  if ( !v5 || (v7 & 2) != 0 || (v7 & 1) != 0 || a1 < v5 )
    return 0LL;
  *a2 = v6;
  return result;
}
