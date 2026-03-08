/*
 * XREFs of KeDetectHeterogeneousSets @ 0x14067C998
 * Callers:
 *     KeDoesSystemHaveHeterogeneousCoreTypes @ 0x14037F8D8 (KeDoesSystemHaveHeterogeneousCoreTypes.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeDetectHeterogeneousSets(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  bool v10; // cf
  __int64 v11; // r10
  __int64 *v12; // rsi
  _BYTE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  char v16; // dl
  unsigned __int8 *v17; // rcx

  v1 = (unsigned int)KeNumberProcessors_0;
  v3 = *(_BYTE *)(KiProcessorBlock[0] + 34059);
  v4 = v3;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    return 0LL;
  v5 = &qword_140D20988;
  v6 = (unsigned int)(KeNumberProcessors_0 - 1);
  do
  {
    v7 = *v5++;
    v8 = v4;
    v9 = v3;
    v4 = *(_BYTE *)(v7 + 34059);
    v10 = v3 < v4;
    v3 = v4;
    if ( v10 )
      v3 = v9;
    if ( v8 > v4 )
      v4 = v8;
    --v6;
  }
  while ( v6 );
  if ( v3 == v4 )
    return 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    v12 = KiProcessorBlock;
    v13 = (_BYTE *)(a1 + 24);
    do
    {
      v14 = *v12;
      v15 = *(_QWORD *)(a1 + 8);
      ++v12;
      v16 = *(_BYTE *)(v14 + 34059);
      v13[1] = v16;
      *v13 = v4 - v16;
      v13 += 4;
      *(_BYTE *)(v11 + v15) = v16;
      ++v11;
      v17 = *(unsigned __int8 **)(a1 + 16);
      *v17 = v4;
      v17[1] = v4;
      --v1;
    }
    while ( v1 );
  }
  KiEfficiencyClassSystem = 1;
  return 1LL;
}
