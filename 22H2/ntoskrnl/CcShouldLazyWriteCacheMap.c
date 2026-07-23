/*
 * XREFs of CcShouldLazyWriteCacheMap @ 0x140276694
 * Callers:
 *     CcLazyWriteScan @ 0x140275F14 (CcLazyWriteScan.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 */

bool __fastcall CcShouldLazyWriteCacheMap(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // ecx
  int v8; // r8d
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // r9
  int Partition; // eax

  v6 = *(_DWORD *)(a1 + 152);
  if ( (v6 & 0x400820) != 0 )
    return 0;
  if ( (v6 & 0x10000) != 0 )
    return 1;
  if ( *(_DWORD *)(a1 + 516) )
    return 0;
  v8 = *(_DWORD *)(a1 + 4);
  if ( !v8 && (!*(_DWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 8)) || (v6 & 0x40000000) != 0 )
    return 1;
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 || !a2 )
    return 0;
  v10 = *(_DWORD *)(a1 + 268) + 1;
  *(_DWORD *)(a1 + 268) = v10;
  if ( (v6 & 0x1000000) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 240);
    return *(_DWORD *)(v11 + 104)
        || MEMORY[0xFFFFF78000000320] > (__int64)(*(_QWORD *)(v11 + 136) + 0x9896800uLL / KeMaximumIncrement)
        || *(_DWORD *)(a1 + 112) >= 0x40u;
  }
  if ( (v6 & 0x200) != 0 )
  {
    if ( (v10 & 0xF) == 0 || v9 >= 0x40 )
      return 1;
    return a4 == 16;
  }
  else
  {
    if ( (*(_DWORD *)(a3 + 80) & 0x8000) == 0 || !v8 )
      return 1;
    Partition = CcGetPartition(a1);
    return (unsigned __int8)CcCanIWriteStreamEx(Partition, a3, 0x1000000, 0, 8, 0LL) == 0;
  }
}
