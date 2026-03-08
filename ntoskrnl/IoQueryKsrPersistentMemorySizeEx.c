/*
 * XREFs of IoQueryKsrPersistentMemorySizeEx @ 0x14094F800
 * Callers:
 *     IoQueryKsrPersistentMemorySize @ 0x14094F7D0 (IoQueryKsrPersistentMemorySize.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140380700 (ExIsSoftBoot.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PipGetPersistentMemory @ 0x1409503F8 (PipGetPersistentMemory.c)
 */

__int64 __fastcall IoQueryKsrPersistentMemorySizeEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v11 = *(_QWORD *)(a2 + 8);
      if ( v11 )
      {
        IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
        v12 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock(v13, (PVOID)0x388);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
        }
        v15 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v16 )
        {
          if ( *(_WORD *)(v16 + 56) )
          {
            IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  *a6 = 0LL;
  if ( !ExIsSoftBoot() )
    return 3221225659LL;
  result = PipGetPersistentMemory(a1, a2, a3, a4, a5, a6, 0LL, 0);
  if ( (_DWORD)result == -1073741789 && *a6 )
    return 0LL;
  return result;
}
