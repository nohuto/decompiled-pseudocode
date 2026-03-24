/*
 * XREFs of MiAllocateAccessLog @ 0x14033DCF0
 * Callers:
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolMm @ 0x1402BBA40 (ExAllocatePoolMm.c)
 *     MiInitializePageAccessLogging @ 0x14033DE30 (MiInitializePageAccessLogging.c)
 *     MiSufficientAvailablePages @ 0x14033E480 (MiSufficientAvailablePages.c)
 */

PVOID **__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rdi
  SIZE_T v3; // rbp
  PVOID **v4; // rdi
  PVOID *v5; // rsi
  PVOID *PoolMm; // rax
  PVOID **v7; // rdx
  PVOID **result; // rax
  _QWORD *v9; // rax

  v2 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( (unsigned int)MiSufficientAvailablePages(v2, 1056LL)
    && *(__int64 *)(v2 + 7168) >= 1056
    && (unsigned __int64)(MiState[0] - qword_140C4C8C8) >= 0x800 )
  {
    v3 = 4096LL;
  }
  else
  {
    v3 = 512LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v4 = (PVOID **)&unk_140C4F7A8;
  else
    v4 = (PVOID **)(a1 + 232);
  v5 = *v4;
  if ( *v4 )
  {
    v9 = *v5;
    if ( v3 == 512 || v9 && *v9 )
    {
      MiEmptyPageAccessLog(*v4);
      v5 = 0LL;
      *v4 = 0LL;
    }
  }
  do
  {
    PoolMm = (PVOID *)ExAllocatePoolMm(
                        64,
                        v3,
                        0x63416D4Du,
                        KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] | 0x80000000);
    if ( PoolMm )
    {
      *v4 = PoolMm;
      MiInitializePageAccessLogging(a1, PoolMm, v3);
      result = v7;
      *v7 = v5;
      return result;
    }
    if ( *v4 )
    {
      MiEmptyPageAccessLog(*v4);
      v5 = 0LL;
      *v4 = 0LL;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x200 );
  return 0LL;
}
