/*
 * XREFs of MiResetAccessBitsEPTCallback @ 0x140632BC0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResetAccessBitPteWorker @ 0x140463BAC (MiResetAccessBitPteWorker.c)
 */

__int64 __fastcall MiResetAccessBitsEPTCallback(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  char v9; // di
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v14 = MI_READ_PTE_LOCK_FREE(a3);
  v9 = 0;
  v10 = *a2;
  v11 = a5;
  if ( (v10 & 2) != 0 )
  {
LABEL_5:
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
    MiResetAccessBitPteWorker(v5, a3, a4, 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v11, v9);
    return 0LL;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( *(_QWORD *)(a5 + 8) )
      v9 = 4;
    goto LABEL_5;
  }
  return 0LL;
}
