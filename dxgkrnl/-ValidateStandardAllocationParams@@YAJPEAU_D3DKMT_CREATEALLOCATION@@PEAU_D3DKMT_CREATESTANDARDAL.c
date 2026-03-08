/*
 * XREFs of ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C02D4244
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0195B40 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ValidateStandardAllocationParams(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a2,
        char a3)
{
  const wchar_t *v4; // r9
  ULONG64 pStandardAllocation; // rdx
  SIZE_T Size; // rdx

  if ( a1->PrivateDriverDataSize )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v4 = L"PrivateDriverData Size must be zero when Creating StandardAllocation,                returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a1->NumAllocations != 1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v4 = L"StandardAllocation supports only 1 allocation, returning 0x%I64x";
    goto LABEL_3;
  }
  if ( a3 )
  {
    pStandardAllocation = (ULONG64)a1->pStandardAllocation;
    if ( pStandardAllocation >= MmUserProbeAddress )
      pStandardAllocation = MmUserProbeAddress;
    *(_OWORD *)&a2->Type = *(_OWORD *)pStandardAllocation;
    *(_QWORD *)&a2->Flags.0 = *(_QWORD *)(pStandardAllocation + 16);
  }
  else
  {
    *a2 = *a1->pStandardAllocation;
  }
  if ( a2->Type == D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP )
  {
    if ( (*(_DWORD *)&a1->Flags & 0x20020) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v4 = L"StandardAllocation is only allowed with ExistingSysMem or ExistingSection,                    returning 0x%I64x";
      goto LABEL_3;
    }
    if ( (*(_DWORD *)&a1->Flags & 0x20020) == 0x20020 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v4 = L"Invalid Flags specified with StandardAllocation,                     returning 0x%I64x";
      goto LABEL_3;
    }
  }
  else
  {
    if ( a2->Type != 2 )
    {
      WdLogSingleEntry1(3LL, a2->Type);
      return -1073741811LL;
    }
    if ( (*(_DWORD *)&a1->Flags & 0x20020) != 0 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      return 3221225485LL;
    }
  }
  if ( a2->Flags.Value )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v4 = L"StandardAllocation Reserved Flags should not be set, returning 0x%I64x";
    goto LABEL_3;
  }
  Size = a2->ExistingHeapData.Size;
  if ( Size - 1 > 0xFFFFFFFE )
  {
    WdLogSingleEntry2(2LL, Size, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid StandardAllocation Size:0x%I64x, Returning 0x%I64x",
      a2->ExistingHeapData.Size,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return 0LL;
}
