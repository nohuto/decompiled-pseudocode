__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3, _BYTE *a4)
{
  unsigned int v7; // r15d
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rax
  int v12; // edi
  unsigned int ValueByName; // edi
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  _DWORD *v17; // r14
  __int64 v18; // rax
  NTSTATUS v19; // eax
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  int v25; // edi
  unsigned int v26; // edi
  __int64 v27; // rax
  _DWORD *v28; // rcx
  __int64 CellPaged; // rax
  _BYTE *v31; // rdi
  __int64 *v32; // rdx
  bool v33; // zf
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  char DstBuf[128]; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+100h] [rbp+0h] BYREF

  HIDWORD(BugCheckParameter4a) = 0;
  v36 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v40 = 0xFFFFFFFFLL;
  v34 = 0xFFFFFFFFLL;
  v7 = BugCheckParameter4;
  v39 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4, &v34);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v34);
  v9 = CellFlat;
  if ( !CellFlat )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  LODWORD(BugCheckParameter4a) = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, (__int64)&DestinationString, &BugCheckParameter4a);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  v10 = BugCheckParameter4a;
  if ( (_DWORD)BugCheckParameter4a == -1 )
    return 0xFFFFFFFFLL;
  v11 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4a, &v34)
      : HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4a, (unsigned int *)&v34);
  v12 = v11;
  if ( !v11 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  ValueByName = CmpFindValueByName(BugCheckParameter3, v12, (int)&DestinationString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  if ( ValueByName == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, ValueByName, &v36);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, ValueByName, (unsigned int *)&v36);
    if ( !CellPaged )
      return 0xFFFFFFFFLL;
    v31 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v39);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v36);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v36);
    if ( !v31 )
      return 0xFFFFFFFFLL;
    *a4 = *v31;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v39);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v39);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v14 = HvpGetCellFlat(BugCheckParameter3, v10, &v34);
  else
    v14 = HvpGetCellPaged(BugCheckParameter3, v10, (unsigned int *)&v34);
  if ( !v14 )
    return 0xFFFFFFFFLL;
  v15 = CmpFindValueByName(BugCheckParameter3, v14, a3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  if ( v15 == -1 )
    return 0xFFFFFFFFLL;
  v16 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v15, &v36)
      : HvpGetCellPaged(BugCheckParameter3, v15, (unsigned int *)&v36);
  if ( !v16 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v16 + 12) != 4 )
  {
    v32 = &v36;
LABEL_87:
    v33 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    goto LABEL_88;
  }
  v17 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v35);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v36);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v36);
  if ( !v17 )
    return 0xFFFFFFFFLL;
  sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v17);
  v18 = -1LL;
  do
    ++v18;
  while ( DstBuf[v18] );
  SourceString.MaximumLength = v18;
  SourceString.Length = v18;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  SourceString.Buffer = DstBuf;
  DestinationString.Buffer = (wchar_t *)&v43;
  v19 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  v20 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( v19 < 0 )
  {
    v32 = &v35;
    v33 = v20 == 0;
LABEL_88:
    v22 = BugCheckParameter3;
LABEL_89:
    if ( v33 )
      HvpReleaseCellPaged(v22, (unsigned int *)v32);
    else
      HvpReleaseCellFlat(v22, v32);
    return 0xFFFFFFFFLL;
  }
  if ( v20 )
    v21 = HvpGetCellFlat(BugCheckParameter3, v7, &v34);
  else
    v21 = HvpGetCellPaged(BugCheckParameter3, v7, (unsigned int *)&v34);
  v22 = BugCheckParameter3;
  if ( !v21 )
  {
    v33 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v32 = &v35;
    goto LABEL_89;
  }
  LODWORD(BugCheckParameter4a) = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v21, (__int64)&DestinationString, &BugCheckParameter4a);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  v22 = BugCheckParameter3;
  v23 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( (_DWORD)BugCheckParameter4a == -1 )
  {
    v32 = &v35;
    v33 = v23 == 0;
    goto LABEL_89;
  }
  if ( v23 )
    v24 = HvpGetCellFlat(BugCheckParameter3, v10, &v34);
  else
    v24 = HvpGetCellPaged(BugCheckParameter3, v10, (unsigned int *)&v34);
  v25 = v24;
  if ( !v24 )
    goto LABEL_86;
  RtlInitUnicodeString(&DestinationString, L"Current");
  v26 = CmpFindValueByName(BugCheckParameter3, v25, (int)&DestinationString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  if ( v26 == -1 )
    goto LABEL_51;
  v27 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v26, &v36)
      : HvpGetCellPaged(BugCheckParameter3, v26, (unsigned int *)&v36);
  if ( !v27 )
  {
LABEL_86:
    v32 = &v35;
    goto LABEL_87;
  }
  if ( *(_DWORD *)(v27 + 12) == 4 )
  {
    v28 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v40);
    if ( v28 )
    {
      *v28 = *v17;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v40);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v40);
      goto LABEL_49;
    }
    goto LABEL_86;
  }
LABEL_49:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v36);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v36);
LABEL_51:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v35);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
  return (unsigned int)BugCheckParameter4a;
}
