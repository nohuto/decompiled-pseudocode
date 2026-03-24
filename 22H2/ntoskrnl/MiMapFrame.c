/*
 * XREFs of MiMapFrame @ 0x140536EC4
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x140536FE4 (MiMapSystemCachePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  int v6; // eax
  unsigned __int64 ValidPte; // rbx
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf

  v5 = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v6 = *(unsigned __int8 *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
    if ( !v6 || v6 == 3 )
    {
      v5 = 12;
    }
    else if ( v6 == 2 )
    {
      v5 = 28;
    }
  }
  ValidPte = MiMakeValidPte(a1, a2, v5 | 0xA0000000, a4);
  v8 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_16:
  *(_QWORD *)a1 = ValidPte;
  if ( v8 )
    MiWritePteShadow(a1, ValidPte, v9);
  return (__int64)(a1 << 25) >> 16;
}
