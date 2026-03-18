/*
 * XREFs of MiMapDummyPages @ 0x140B4710C
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x140282E20 (MiComputeHash64.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  unsigned __int64 v1; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v3; // rbx
  int v4; // r14d
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r8
  bool v11; // zf
  bool v12; // zf

  result = MiReservePtes((__int64)&qword_140C69A40, 2u);
  v1 = result;
  if ( !result )
    return result;
  ValidPte = MiMakeValidPte(result, qword_140C69810, 536870913LL);
  v3 = ValidPte;
  v4 = 0;
  if ( MiPteInShadowRange(v1) )
  {
    if ( MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140C66DFC) )
        goto LABEL_3;
      v11 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v11 = (ValidPte & 1) == 0;
    }
    if ( !v11 )
      v3 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v1 = v3;
  if ( v4 )
    MiWritePteShadow(v1, v3, v5);
  qword_140C69818 = (void *)((__int64)(v1 << 25) >> 16);
  v6 = MiComputeHash64((__int64)(v1 << 25) >> 16);
  v7 = v1 + 8;
  qword_140C69828 = v6;
  v8 = ValidPte ^ (ValidPte ^ (qword_140C697F8 << 12)) & 0xFFFFFFFFFF000LL;
  v9 = 0;
  if ( !MiPteInShadowRange(v7) )
    goto LABEL_6;
  if ( MiPteHasShadow() )
  {
    v9 = 1;
    if ( !HIBYTE(word_140C66DFC) )
    {
      v12 = (v8 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v12 = (v8 & 1) == 0;
LABEL_22:
    if ( !v12 )
      v8 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v7 = v8;
  if ( v9 )
    MiWritePteShadow(v7, v8, v10);
  qword_140C69820 = (PVOID)((__int64)(v7 << 25) >> 16);
  qword_140C69830 = MiComputeHash64((__int64)qword_140C69820);
  return 1LL;
}
