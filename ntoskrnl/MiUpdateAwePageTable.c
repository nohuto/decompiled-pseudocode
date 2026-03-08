/*
 * XREFs of MiUpdateAwePageTable @ 0x140649AB0
 * Callers:
 *     MiDeleteEnclavePage @ 0x140645874 (MiDeleteEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiDecreaseUsedPtesCount @ 0x1402D0E90 (MiDecreaseUsedPtesCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUpdateAwePageTable(unsigned __int64 a1, __int64 a2, signed int a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 UsedPtesHandle; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (__int64)(a1 << 25) >> 16 << 25 >> 16;
  if ( a2 )
  {
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL || !a3 )
    return 0LL;
  UsedPtesHandle = MiGetUsedPtesHandle(v7);
  if ( a3 <= 0 )
  {
    if ( !(unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)-a3) )
      return 1;
  }
  else
  {
    MiIncreaseUsedPtesCount(UsedPtesHandle, a3);
  }
  return v6;
}
