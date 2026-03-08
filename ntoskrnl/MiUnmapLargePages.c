/*
 * XREFs of MiUnmapLargePages @ 0x1403D0D9C
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiUnmapLargeDriver @ 0x140A472B8 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

unsigned __int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  unsigned __int64 v4; // rsi
  __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r8
  bool v13; // zf

  v3 = 13;
  v4 = a2;
  if ( a3 != 9 )
    v3 = a3;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = (unsigned __int64 *)(v6 + (a2 >> 21 << 12));
    v8 = v6 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    while ( (unsigned __int64)v7 < v8 )
    {
      if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v7) )
        break;
      v10 = ZeroPte;
      v11 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v7) )
      {
        if ( MiPteHasShadow() )
        {
          v11 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v13 = (ZeroPte & 1) == 0;
            goto LABEL_14;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (ZeroPte & 1) == 0;
LABEL_14:
          if ( !v13 )
            v10 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v7 = v10;
      if ( v11 )
        MiWritePteShadow((__int64)v7, v10, v12);
      ++v7;
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3, 0LL);
}
