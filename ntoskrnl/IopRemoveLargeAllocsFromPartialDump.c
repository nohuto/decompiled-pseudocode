/*
 * XREFs of IopRemoveLargeAllocsFromPartialDump @ 0x14055B490
 * Callers:
 *     ExpHeapDumpEnumLargeAllocs @ 0x14060CF78 (ExpHeapDumpEnumLargeAllocs.c)
 * Callees:
 *     IopRemovePageDumpRange @ 0x1405511AC (IopRemovePageDumpRange.c)
 */

unsigned __int64 __fastcall IopRemoveLargeAllocsFromPartialDump(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]
  char v8; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  result = (unsigned int)MinRemoveAllocSize;
  if ( MinRemoveAllocSize )
  {
    result = (unsigned __int64)(unsigned int)MinRemoveAllocSize << 20;
    if ( a2 >= result )
    {
      v3 = 0LL;
      v7 = a2 >> 12;
      v6 = a1;
      v4 = 1;
      return IopRemovePageDumpRange((__int64)&v3, &v8);
    }
  }
  return result;
}
