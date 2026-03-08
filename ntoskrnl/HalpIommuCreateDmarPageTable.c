/*
 * XREFs of HalpIommuCreateDmarPageTable @ 0x14037CA68
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A43AC (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140A8775C (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuInitializeDmarPageTable @ 0x14037C398 (HalpIommuInitializeDmarPageTable.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuCreateDmarPageTable(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char **a7)
{
  int v9; // r14d
  char *MemoryInternal; // rax
  __int64 v11; // r9
  char *v12; // rbx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+20h] [rbp-28h]

  v9 = a1;
  if ( a6 )
    MemoryInternal = (char *)HalpMmAllocateMemoryInternal(96, 1u);
  else
    MemoryInternal = (char *)HalpMmAllocCtxAlloc(a1, 96LL);
  v12 = MemoryInternal;
  if ( !MemoryInternal )
    return 3221225626LL;
  if ( a3 > 6 || a2 < 2 || a3 < a2 )
    return 3221225485LL;
  v14 = HalpIommuInitializeDmarPageTable(v9, a2, a3, v11, v18, a6, MemoryInternal);
  if ( v14 < 0 )
  {
    *a7 = 0LL;
    if ( !a6 )
      HalpMmAllocCtxFree(v13, v12, v15, v16);
  }
  else
  {
    *a7 = v12;
  }
  return (unsigned int)v14;
}
