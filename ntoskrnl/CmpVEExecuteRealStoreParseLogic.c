/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x140A17568
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpBlockHiveWrites @ 0x140A10B04 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A10CD4 (CmpUnblockHiveWrites.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpFindPathByName @ 0x140A16940 (CmpFindPathByName.c)
 *     CmpVirtualBranchIsReplicated @ 0x140A1798C (CmpVirtualBranchIsReplicated.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __m128i *a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  volatile signed __int32 *v6; // r14
  __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  int v11; // ebx
  char PathByName; // al
  char v13; // r12
  __int64 CellFlat; // rax
  wchar_t *Buffer; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int BugCheckParameter4[3]; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  DestinationString = 0LL;
  v17[0] = 0;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  HvpGetCellContextReinitialize(&BugCheckParameter4[1]);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( CmpIsKeyDeleted(a1) )
  {
    v13 = 0;
  }
  else
  {
    v11 = CmpBlockHiveWrites(*(__int64 **)(a1 + 32), 0, 0LL);
    if ( v11 < 0 )
      goto LABEL_24;
    v6 = *(volatile signed __int32 **)(a1 + 32);
    PathByName = CmpFindPathByName(a1, a2, 0LL, BugCheckParameter4, &BugCheckParameter3);
    v8 = BugCheckParameter3;
    v13 = PathByName;
    if ( PathByName )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      v7 = CellFlat;
      if ( !CellFlat )
      {
        v11 = -1073741670;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(CellFlat + 52) & 0x200000) != 0 )
      {
LABEL_23:
        v11 = -1073741199;
        goto LABEL_24;
      }
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v8, &BugCheckParameter4[1]);
      else
        HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
    }
    CmpUnblockHiveWrites(*(volatile signed __int32 **)(a1 + 32), 0, 0LL);
  }
  v6 = 0LL;
  v7 = 0LL;
  v11 = CmRealKCBToVirtualPath(a1, a2, a5, &DestinationString);
  if ( v11 < 0 )
    goto LABEL_24;
  *a3 |= 8u;
  if ( !(unsigned __int8)CmpVirtualBranchIsReplicated(0LL, &DestinationString, v17)
    && ((*a3 & 1) == 0 || v13 || !v17[0]) )
  {
    goto LABEL_23;
  }
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 260;
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, &BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
  }
  if ( v6 )
    CmpUnblockHiveWrites(v6, 0, 0LL);
  return (unsigned int)v11;
}
