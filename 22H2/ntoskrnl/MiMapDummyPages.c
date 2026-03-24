/*
 * XREFs of MiMapDummyPages @ 0x140A70FCC
 * Callers:
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiComputeHash64 @ 0x140371420 (MiComputeHash64.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // r8
  bool v16; // zf
  bool v17; // zf

  result = MiReservePtes((__int64)&qword_140C4EF40, 2u, a3, a4);
  v6 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C4ED80, 536870913LL, v5);
  v8 = ValidPte;
  v9 = 0;
  if ( MiPteInShadowRange(v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v16 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v16 = (ValidPte & 1) == 0;
    }
    if ( !v16 )
      v8 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v6 = v8;
  if ( v9 )
    MiWritePteShadow(v6, v8, v10);
  qword_140C4ED88 = (__int64)(v6 << 25) >> 16;
  v11 = MiComputeHash64((__int64)(v6 << 25) >> 16);
  v12 = v6 + 8;
  qword_140C4ED98 = v11;
  v13 = ValidPte ^ (ValidPte ^ (qword_140C4ED68 << 12)) & 0xFFFFFFFFF000LL;
  v14 = 0;
  if ( !MiPteInShadowRange(v12) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v14 = 1;
    if ( !HIBYTE(word_140C4E008) )
    {
      v17 = (v13 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v17 = (v13 & 1) == 0;
LABEL_22:
    if ( !v17 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v12 = v13;
  if ( v14 )
    MiWritePteShadow(v12, v13, v15);
  qword_140C4ED90 = (__int64)(v12 << 25) >> 16;
  qword_140C4EDA0 = MiComputeHash64(qword_140C4ED90);
  return 1LL;
}
