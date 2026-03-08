/*
 * XREFs of MiFreePartitionNodePages @ 0x1406576A8
 * Callers:
 *     MiFreePartitionTree @ 0x1406578D0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, int a3)
{
  unsigned int v6; // edx
  __int16 *v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  v6 = 4;
  v8[0] = a1;
  if ( (a3 & 4) != 0 )
  {
    v6 = (a3 & 0x20 | 0x10u) >> 4;
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 2;
    HIDWORD(v8[2]) = 2;
    if ( (a3 & 0x30) != 0x30 )
      v6 = 0;
  }
  MiActOnPartitionNodePages(a2, v6, a3, v8);
  return LODWORD(v8[3]);
}
