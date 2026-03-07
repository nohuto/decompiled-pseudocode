char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  ULONG v5; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  int v11; // r9d
  unsigned __int8 v12; // r11
  __int64 v13; // rdx
  ULONG Flags; // edi
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rdx
  int v19; // r10d
  __int16 v20; // ax
  char v21; // r11
  int v22; // eax
  char result; // al
  __int64 v24; // rcx
  _BYTE v25[4]; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+54h] [rbp-15h] BYREF
  int v27; // [rsp+58h] [rbp-11h] BYREF
  int v28; // [rsp+5Ch] [rbp-Dh]
  __int128 v29; // [rsp+60h] [rbp-9h]
  __int128 v30; // [rsp+70h] [rbp+7h]

  v2 = *(_DWORD *)a2;
  v27 = 0;
  v5 = 0;
  v25[0] = 0;
  v29 = 0LL;
  v26 = 0;
  v30 = 0LL;
  if ( v2 > *(_DWORD *)(a2 + 8) )
    return 0;
  while ( 1 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v2, &v26) )
    {
      v9 = byte_1C006E524[8 * v26];
      if ( v9 != -1 )
      {
        if ( (v9 & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_13;
        }
        else if ( v6 )
        {
          goto LABEL_13;
        }
        goto LABEL_22;
      }
    }
    if ( !(unsigned __int8)IcIsInterruptTypeSecondary(v7) )
      break;
    if ( (int)AcpiIrqTranslateSecondaryInterruptToNtResources() >= 0 )
      goto LABEL_13;
LABEL_22:
    if ( ++v2 > *(_DWORD *)(a2 + 8) )
      return 0;
  }
  ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v27);
LABEL_13:
  if ( (int)IcGetPossibleInput(v7, v8, v25) >= 0 && v10 != v25[0] || !(unsigned __int8)IcIsInputValid(v7) )
    goto LABEL_22;
  v13 = *(_QWORD *)(a2 + 40);
  Flags = v5 | 1;
  v15 = *(_QWORD *)(a2 + 72);
  v16 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL);
  v17 = *(_DWORD *)(v13 + 36);
  v18 = *(_QWORD *)(v13 + 40);
  v19 = v17 & 1;
  v20 = *(_WORD *)(v16 + 4);
  if ( !v19 )
    Flags = v5;
  v28 &= v11;
  v5 = Flags;
  v21 = v20 & 1 | (v12 >> 2) & 2;
  v22 = v19 | 2;
  LOBYTE(v28) = v21;
  if ( (*(_BYTE *)(v16 + 4) & 8) == 0 )
    v22 = v19;
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
              v18,
              v15,
              1LL,
              v7,
              v28,
              v22,
              1) < 0
    || RtlFindRange(*(PRTL_RANGE_LIST *)(a1 + 48), v2, v2, 1u, 1u, Flags, *(_BYTE *)(a2 + 67), 0LL, 0LL, (PULONGLONG)a2) < 0 )
  {
    goto LABEL_22;
  }
  v24 = *(_QWORD *)(a2 + 40);
  result = 1;
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(v24 + 16) = 1LL;
  return result;
}
