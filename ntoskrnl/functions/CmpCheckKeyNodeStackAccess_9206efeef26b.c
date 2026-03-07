__int64 __fastcall CmpCheckKeyNodeStackAccess(__int64 a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, char a4)
{
  ULONG_PTR v8; // rbx
  __int64 CellFlat; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v14 = 0LL;
  BugCheckParameter3[0] = 0LL;
  HvpGetCellContextReinitialize(&v14);
  CmpGetSecurityCellForKeyNodeStack(a1, BugCheckParameter3, &BugCheckParameter4);
  v8 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4, &v14);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3[0], BugCheckParameter4, (unsigned int *)&v14);
  v10 = CellFlat;
  v11 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20), a2, a3, a4);
  if ( v10 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, &v14);
    else
      HvpReleaseCellPaged(v8, (unsigned int *)&v14);
  }
  return v11;
}
