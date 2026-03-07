__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    result = HvpGetCellPaged(BugCheckParameter3);
  if ( (*(_DWORD *)(result + 12))-- == 1 )
  {
    CmpRemoveSecurityCellList(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v6);
    return HvFreeCell(BugCheckParameter3, v3);
  }
  else if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v6);
  }
  return result;
}
