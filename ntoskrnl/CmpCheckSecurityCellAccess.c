/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x14074C9BC
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140A18390 (CmpCheckKeyAccess.c)
 * Callees:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v7);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( CellFlat )
  {
    v5 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
