/*
 * XREFs of MiForcedTrim @ 0x1406324C0
 * Callers:
 *     MiSelfTrim @ 0x14064DCAC (MiSelfTrim.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 *     MiTrimWorkingSet @ 0x1402F08AC (MiTrimWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x140632480 (MiForceAgeWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, __int8 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r14
  __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r9
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned int v18; // edx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax

  v4 = 0LL;
  v5 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v6 = v5[2115];
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v5, 6u);
  v9 = *(_QWORD *)(a1 + 144);
  v10 = AvailablePagesBelowPriority;
  v11 = *(_QWORD *)(v6 + 2400);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v9 <= v12 )
    return 0LL;
  v14 = *(_QWORD *)(v8 + 17040);
  v15 = v9 - v12;
  v16 = (_QWORD *)(a1 + 48);
  v17 = 0LL;
  v18 = 1;
  v19 = 15 * v15 / 0x64;
  do
  {
    v17 += *v16;
    if ( v17 >= v19 )
      break;
    ++v18;
    ++v16;
  }
  while ( v18 < 8 );
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    v20 = 16 * v11;
    v21 = v15;
    v22 = v14 / 0xA;
    if ( v20 <= v14 / 0xA )
      v22 = v20;
    if ( v15 >= v14 )
      v21 = *(_QWORD *)(v8 + 17040);
    v11 = v22 * (100 * v21 / v14) / 0x64;
    if ( v11 > v15 / 0xA )
      v11 = v15 / 0xA;
  }
  if ( v10 < v11 )
  {
    v23 = v11 - v10;
    v24 = 0LL;
    if ( v23 < 0x10 )
      v23 = 16LL;
    v25 = 7;
    while ( 1 )
    {
      v24 += *(_QWORD *)(a1 + 8LL * v25 + 40);
      if ( v24 >= v23 )
        break;
      if ( --v25 == 1 )
        goto LABEL_21;
    }
    v24 = v23;
LABEL_21:
    if ( v24 && ((*(_BYTE *)(a1 + 184) & 7) != 0 || v10 < *(_QWORD *)(v8 + 16152) >> 1) )
    {
      v26 = MiTrimWorkingSet(a1, v24, a2, v25, 57);
      *(_QWORD *)(v6 + 2480) += v26;
      v4 = v26;
    }
  }
  if ( v17 < v19 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    MiForceAgeWorkingSet(a1, a2);
  return v4;
}
