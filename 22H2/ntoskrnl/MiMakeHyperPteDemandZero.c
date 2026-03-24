/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140305668
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14021B4A0 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x1403054DC (MiFillHyperPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf

  if ( !*(_DWORD *)a3 )
    goto LABEL_5;
  v5 = MiSwizzleInvalidPte(128LL);
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v8, v7, v9, v10) )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v11 = (v5 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v11 = (v5 & 1) == 0;
    }
    if ( !v11 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow(a1, v5);
LABEL_5:
  ++*(_QWORD *)(a3 + 8);
}
