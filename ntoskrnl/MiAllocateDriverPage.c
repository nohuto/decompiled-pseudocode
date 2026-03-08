/*
 * XREFs of MiAllocateDriverPage @ 0x1407290FC
 * Callers:
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 * Callees:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x1402A6DA0 (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiGetNextPageColor @ 0x1402A6DC8 (MiGetNextPageColor.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiPreInitializeSystemImagePage @ 0x14062A1BC (MiPreInitializeSystemImagePage.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiGetSlabCurrentTime @ 0x14065475C (MiGetSlabCurrentTime.c)
 */

__int64 __fastcall MiAllocateDriverPage(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // r11d
  unsigned int NextPageColor; // esi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+70h] [rbp+27h] BYREF
  __int128 v11; // [rsp+78h] [rbp+2Fh] BYREF

  v11 = 0LL;
  MiInitializePageColorBase(0LL, 0, (__int64)&v11);
  NextPageColor = MiGetNextPageColor((__int64)&v11);
  v7 = -1LL;
  if ( !(unsigned int)MiUseProtectedSlabAllocatorForDriverPage(a1, v5)
    || (result = MiGetSlabPage(a1, 0, NextPageColor, 2LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL), v10 = result, result == -1) )
  {
    result = MiGetSlabPage(a1, 4u, NextPageColor, 6LL, (__int64 *)0xFFFFFFFFFFFFFFFFLL);
    v10 = result;
    if ( result == -1 )
    {
      if ( (a3 & 1) != 0 )
      {
        return -1LL;
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 16264) )
          *(_QWORD *)(a1 + 16264) = MiGetSlabCurrentTime();
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 16256));
        if ( (int)MiFindContiguousPagesEx(
                    a1,
                    0LL,
                    *(_QWORD *)(a1 + 16248),
                    0LL,
                    0,
                    1uLL,
                    1u,
                    0x80000000,
                    0x80000000,
                    1610612737,
                    0,
                    0LL,
                    &v10) < 0 )
        {
          *(_QWORD *)(a1 + 16248) = -1LL;
          while ( 1 )
          {
            result = MiGetPage(a1, NextPageColor, 0);
            v10 = result;
            if ( result != -1 )
              break;
            if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              return -1LL;
            MiWaitForFreePage((_QWORD *)a1);
          }
        }
        else
        {
          ++*(_QWORD *)(a1 + 16240);
          v9 = v10;
          if ( (*(_QWORD *)(a1 + 16240) & 0x1FFLL) != 0 )
            v7 = v10 - 1;
          *(_QWORD *)(a1 + 16248) = v7;
          MiPreInitializeSystemImagePage(48 * v9 - 0x220000000000LL);
          return v10;
        }
      }
    }
  }
  return result;
}
