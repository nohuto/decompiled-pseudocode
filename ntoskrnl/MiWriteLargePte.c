/*
 * XREFs of MiWriteLargePte @ 0x1402443C4
 * Callers:
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

unsigned __int64 __fastcall MiWriteLargePte(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 ValidPte; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // r15
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // r15d
  __int64 v18; // rax
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // rdi
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf

  v4 = a3;
  v5 = a4;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 1uLL )
  {
    v25 = 2LL - a3;
    do
    {
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v25;
    }
    while ( v25 );
  }
  if ( a4 )
    ValidPte = MiMakeValidPte(v6, a2, a4);
  else
    ValidPte = 0LL;
  if ( (unsigned int)v4 > 2 )
    v8 = 1LL;
  else
    v8 = MiPtesToSupportLargePageSizes[v4];
  if ( v5 )
  {
    v17 = 0;
    if ( !v8 )
      return v6;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = (unsigned __int64 *)(v6 + 8 * v18);
      v20 = ValidPte;
      v21 = 0;
      if ( (unsigned int)MiPteInShadowRange(v19) )
      {
        if ( (unsigned int)MiPteHasShadow(v23, v22, v24) )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v26 = (ValidPte & 1) == 0;
            goto LABEL_31;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v26 = (ValidPte & 1) == 0;
LABEL_31:
          if ( !v26 )
            v20 = ValidPte | 0x8000000000000000uLL;
        }
      }
      *v19 = v20;
      if ( v21 )
        MiWritePteShadow(v19, v20);
      ++v17;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
      v18 = v17;
      if ( v17 >= v8 )
        return v6;
    }
  }
  if ( v8 )
  {
    v9 = 0LL;
    do
    {
      v10 = ZeroPte;
      v11 = (unsigned __int64 *)(v6 + 8 * v9);
      v12 = 0;
      if ( (unsigned int)MiPteInShadowRange(v11) )
      {
        if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
        {
          v12 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_37;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_37:
          if ( (ZeroPte & 1) != 0 )
            v10 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v11 = v10;
      if ( v12 )
        MiWritePteShadow(v11, v10);
      v9 = ++v5;
    }
    while ( v5 < v8 );
  }
  return v6;
}
