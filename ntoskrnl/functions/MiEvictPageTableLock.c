__int64 __fastcall MiEvictPageTableLock(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int16 v13; // ax

  MiLockPageTableInternal(a1, a2, 0);
  if ( MiGetLeafVa(a2) > 0x7FFFFFFEFFFFLL )
  {
    v9 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL);
    if ( (*(_BYTE *)(a1 + 184) & 7) != 1 || a2 < 0xFFFFF6FB7DBED000uLL || (v10 = 2LL, a2 > 0xFFFFF6FB7DBEDFFFuLL) )
      v10 = 1LL;
    if ( (unsigned __int16)v9 == v10 )
    {
      v11 = a2 << 25;
      if ( (a4 & 1) == 0 || RtlCompareMemoryUlong((PVOID)(v11 >> 16), 0x1000uLL, 0) == 4096 )
      {
        if ( (a4 & 2) == 0 )
          goto LABEL_3;
        v12 = v11 >> 16;
        while ( 1 )
        {
          v13 = MI_READ_PTE_LOCK_FREE(v12);
          if ( MiIsPoolPteInUse(v13) )
            break;
          v12 += 8LL;
          if ( (v12 & 0xFFF) == 0 )
            goto LABEL_3;
        }
      }
    }
  }
  else if ( (*(_DWORD *)(MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16 << 25 >> 16) + 16) & 0x3FF0000) == 0 )
  {
LABEL_3:
    MiUnlockNestedPageTableWritePte(a1, (__int64 *)a2, a3, 0);
    return 1LL;
  }
  MiUnlockPageTableInternal(a1, a2);
  return 0LL;
}
