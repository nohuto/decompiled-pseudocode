/*
 * XREFs of MxInitializePageTablePfns @ 0x140B4F520
 * Callers:
 *     MxZeroPageTablePfns @ 0x140B4F484 (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

bool __fastcall MxInitializePageTablePfns(__int64 a1, unsigned __int64 a2, int a3)
{
  char v5; // bl
  bool result; // al
  _OWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(a2);
  v5 = v9;
  if ( (v9 & 1) == 0 )
    return 0;
  v7 = (_OWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL);
  *(_OWORD *)(8 * v8 - 0x220000000000LL) = 0LL;
  *(_OWORD *)(8 * v8 - 0x220000000000LL + 16) = 0LL;
  *(_OWORD *)(8 * v8 - 0x220000000000LL + 32) = 0LL;
  result = a3 && v5 < 0 || (*v7 = 0LL, v7[1] = 0LL, v7[2] = 0LL, a2 == 0xFFFFF6FB7DBEDF68uLL) || a3 <= 1;
  return result;
}
