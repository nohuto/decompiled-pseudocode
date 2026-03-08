/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403482CC
 * Callers:
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140346F70 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(volatile __int64 *a1, __int64 a2, char a3)
{
  volatile __int64 v3; // rdi
  int v7; // ebp
  unsigned int v8; // ecx
  int v10; // edi
  __int64 v11; // r8
  bool v12; // zf

  v3 = *a1;
  v7 = a3 & 2;
  if ( (a3 & 2) == 0 && MiPteInShadowRange((unsigned __int64)a1) && MiPteHasShadow() )
    goto LABEL_9;
  v8 = ((unsigned int)MiFlags >> 26) & 3;
  if ( v8 > 1 )
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    goto LABEL_6;
  }
  if ( !v8 )
  {
LABEL_9:
    if ( (a3 & 4) != 0 )
      return 1LL;
    if ( v7 )
    {
      *a1 = a2;
      return 1LL;
    }
    v10 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a1) )
    {
      if ( MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v12 = (a2 & 1) == 0;
          goto LABEL_26;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v12 = (a2 & 1) == 0;
LABEL_26:
        if ( !v12 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    *a1 = a2;
    if ( v10 )
      MiWritePteShadow((__int64)a1, a2, v11);
    return 1LL;
  }
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)a1 <= 0xFFFFF6FB7FFFFFFFuLL
    && (v3 & 0x80u) == 0LL )
  {
    LOBYTE(v3) = 32;
  }
LABEL_6:
  if ( (v3 & 0x20) != 0 )
    goto LABEL_9;
  return (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) != 0;
}
