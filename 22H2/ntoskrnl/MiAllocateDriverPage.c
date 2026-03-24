/*
 * XREFs of MiAllocateDriverPage @ 0x1406FF348
 * Callers:
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiGetNextPageColor @ 0x140357168 (MiGetNextPageColor.c)
 *     MiPreInitializeSystemImagePage @ 0x140358FF8 (MiPreInitializeSystemImagePage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1403592B4 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateDriverPage(ULONG_PTR *a1, int a2, char a3)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int16 v10; // ax
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = 0;
  v14 = 0LL;
  v13 = -1LL;
  if ( !(unsigned int)MiUseSlabAllocatorForDriverPage((__int64)a1, a2, &v15)
    || (result = MiGetSlabPage(v6, v5, v15, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0), v13 = result, result == -1) )
  {
    if ( (a3 & 1) != 0 )
    {
      return -1LL;
    }
    else if ( (int)MiFindContiguousPages(
                     (__int64)a1,
                     0LL,
                     qword_140C4CCF0,
                     0LL,
                     1uLL,
                     1u,
                     0x80000000,
                     0x80000000,
                     0x20000000,
                     0LL,
                     &v13) < 0 )
    {
      qword_140C4CCF0 = -1LL;
      MiInitializePageColorBase(0LL, 0, (__int64)&v14);
      NextPageColor = MiGetNextPageColor((__int64)&v14);
      for ( i = NextPageColor; ; i = NextPageColor )
      {
        result = MiGetPage((__int64)a1, i, 0LL);
        v13 = result;
        if ( result != -1 )
          break;
        if ( KeGetCurrentIrql() == 2 )
          return -1LL;
        MiWaitForFreePage(a1);
      }
    }
    else
    {
      v10 = ++qword_140C4CD40;
      if ( a1 == &MiSystemPartition )
      {
        if ( (v10 & 0x1FF) != 0 )
          qword_140C4CCF0 = v13 - 1;
        else
          qword_140C4CCF0 = -1LL;
      }
      MiPreInitializeSystemImagePage(48 * v13 - 0x58000000000LL, (__int64)&MiSystemPartition, v8, v9);
      return v13;
    }
  }
  return result;
}
