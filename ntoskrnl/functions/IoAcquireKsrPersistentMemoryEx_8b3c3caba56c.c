__int64 __fastcall IoAcquireKsrPersistentMemoryEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rdi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v12 = *(_QWORD *)(a2 + 8);
      if ( v12 )
      {
        IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
        v13 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v14 )
      {
        v15 = (unsigned __int16 *)(v14 + 40);
        IoAddTriageDumpDataBlock(v14, (PVOID)0x388);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
        }
        v16 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v17 )
        {
          if ( *(_WORD *)(v17 + 56) )
          {
            IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
            v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  if ( ExIsSoftBoot() )
    return PipGetPersistentMemory(a1, a2, a3, a4, a5, a7, a6, 1);
  else
    return 3221225659LL;
}
