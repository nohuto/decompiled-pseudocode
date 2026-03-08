/*
 * XREFs of MiCheckKernelShadow @ 0x1403CA298
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x1403CA158 (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfnEx @ 0x140384AD0 (MiVaToPfnEx.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403BA720 (MiReadWriteAnyLevelShadowPte.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiCheckKernelShadow(char a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 i; // rbp
  ULONG_PTR v9; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v11; // rdi
  ULONG_PTR v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0LL;
  v7 = 0xFFFFFFFFLL;
  if ( v4 <= v5 )
  {
    for ( i = a2; ; i += 4096LL )
    {
      v9 = MiReadWriteAnyLevelShadowPte(v4, 0, 0, ZeroPte);
      v14 = v9;
      BugCheckParameter4 = v9;
      if ( (v9 & 1) == 0 )
        break;
      v11 = MiVaToPfnEx(i);
      if ( v11 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL) )
      {
        if ( (a1 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3603uLL, v4, BugCheckParameter4, BugCheckParameter4);
        return i;
      }
      v4 += 8LL;
      v6 += 4096LL;
      if ( v4 > v5 )
        return v7;
    }
    if ( (a1 & 8) == 0 )
      KeBugCheckEx(0x1Au, 0x3602uLL, v4, v9, v9);
    return v6 + a2;
  }
  return v7;
}
