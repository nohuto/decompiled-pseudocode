/*
 * XREFs of IrqArbpFindSuitableRangeIsa @ 0x1C0096EE8
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C00918B0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000E31C (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C004AEB4 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 *     IcGetPossibleInput @ 0x1C0091E28 (IcGetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00934D8 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C00938DC (IrqArbGsivFromIrq.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00951E8 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcIsInputValid @ 0x1C0096C34 (IcIsInputValid.c)
 */

char __fastcall IrqArbpFindSuitableRangeIsa(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // r12d
  __int16 v6; // di
  unsigned int v7; // r15d
  __int64 v8; // rdx
  char v9; // r11
  char v10; // r11
  unsigned __int8 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rdx
  int v17; // r10d
  ULONG Flags; // edi
  __int16 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  char result; // al
  _BYTE v25[4]; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+54h] [rbp-15h] BYREF
  int v27; // [rsp+58h] [rbp-11h] BYREF
  int v28; // [rsp+5Ch] [rbp-Dh]
  __int128 v29; // [rsp+60h] [rbp-9h]
  __int128 i; // [rsp+70h] [rbp+7h]

  v2 = *(_DWORD *)a2;
  v27 = 0;
  v5 = 0;
  v25[0] = 0;
  v29 = 0LL;
  v26 = 0;
  for ( i = 0LL; v2 <= *(_DWORD *)(a2 + 8); ++v2 )
  {
    v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 1;
    v7 = IrqArbGsivFromIrq(v2);
    if ( IrqArbpLookupIsaOverrideByGsiv(v2, &v26) && (v9 = byte_1C0081374[8 * v26], v9 != -1) )
    {
      if ( (v9 & 1) != 0 )
      {
        if ( v6 )
          continue;
      }
      else if ( !v6 )
      {
        continue;
      }
    }
    else if ( IcIsInterruptTypeSecondary(v7) )
    {
      if ( (int)AcpiIrqTranslateSecondaryInterruptToNtResources() < 0 )
        continue;
    }
    else
    {
      ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), v2, &v27);
    }
    if ( ((int)IcGetPossibleInput(v7, v8, v25) < 0 || v10 == v25[0]) && IcIsInputValid(v7) )
    {
      v12 = *(_QWORD *)(a2 + 40);
      v13 = *(_QWORD *)(a2 + 72);
      v14 = v5 | 1;
      v15 = *(_DWORD *)(v12 + 36);
      v16 = *(_QWORD *)(v12 + 40);
      v17 = v15 & 1;
      if ( !v17 )
        v14 = v5;
      v28 = 0;
      v5 = v14;
      Flags = v14;
      v19 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL);
      v20 = *(_QWORD *)(a2 + 32);
      v21 = v17 | 2;
      v28 = v19 & 1 | (v11 >> 2) & 2;
      v22 = *(_QWORD *)(v20 + 32);
      if ( (v19 & 8) == 0 )
        v21 = v17;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int, int, int, int))ProcessorFindIdtEntries)(
                  v22,
                  v16,
                  v13,
                  1LL,
                  v7,
                  v28,
                  v21,
                  1) >= 0
        && RtlFindRange(
             *(PRTL_RANGE_LIST *)(a1 + 48),
             v2,
             v2,
             1u,
             1u,
             Flags,
             *(_BYTE *)(a2 + 67),
             0LL,
             0LL,
             (PULONGLONG)a2) >= 0 )
      {
        v23 = *(_QWORD *)(a2 + 40);
        result = 1;
        *(_QWORD *)a2 = v2;
        *(_QWORD *)(a2 + 8) = v2;
        *(_QWORD *)(v23 + 16) = 1LL;
        return result;
      }
    }
  }
  return 0;
}
