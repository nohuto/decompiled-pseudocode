/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402B73B0
 * Callers:
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140314278 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, v6, a3, a4) )
  {
    v6 |= 0x20uLL;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    v6 = 32LL;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v6 & 0x20) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(a1, v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v8, v7, v9, v10) )
      {
        if ( !HIBYTE(word_140C4E008) && (a2 & 1) != 0 )
          a2 |= 0x8000000000000000uLL;
        *a1 = a2;
        MiWritePteShadow(a1, a2);
        return 1LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (a2 & 1) != 0 )
        a2 |= 0x8000000000000000uLL;
    }
    *a1 = a2;
    return 1LL;
  }
  return (MI_INTERLOCKED_EXCHANGE_PTE(a1, a2) & 0x20) != 0;
}
