char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int8 v6; // bl
  unsigned __int64 v7; // rax

  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v5) = (*(_BYTE *)(a1 + 184) ^ a3) & 7;
  *(_BYTE *)(a1 + 184) ^= v5;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) |= 0x80u;
      v5 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 120) = v5;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v6 = MiLockWorkingSetShared(a1);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0);
    v7 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(
      a1,
      (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL,
      (_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL),
      0,
      ZeroPte,
      0,
      0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v5) = MiUnlockWorkingSetShared(a1, v6);
  }
  return v5;
}
