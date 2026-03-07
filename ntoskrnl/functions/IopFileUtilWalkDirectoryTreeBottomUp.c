__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  __int64 Length; // rdx
  int v3; // edi
  UNICODE_STRING *Pool2; // rax
  PVOID *v5; // rbx
  _QWORD *v6; // rax
  PVOID v7; // rcx
  __int64 v8; // rax
  PVOID v10; // rbx
  PVOID *v11; // rax
  int v12; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+48h] [rbp-B8h]
  __int64 v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  Length = SourceString->Length;
  p_P = &P;
  P = &P;
  v15[1] = (__int64)v15;
  v3 = 0;
  v15[0] = (__int64)v15;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, Length + 38, 1967550281LL);
  v5 = (PVOID *)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    goto LABEL_6;
  }
  Pool2[1].Length = 0;
  Pool2[1].MaximumLength = SourceString->Length;
  Pool2[1].Buffer = &Pool2[2].Length;
  RtlCopyUnicodeString(Pool2 + 1, SourceString);
  v6 = P;
  if ( *((PVOID **)P + 1) != &P )
LABEL_12:
    __fastfail(3u);
  *v5 = P;
  v5[1] = &P;
  v6[1] = v5;
  P = v5;
  while ( v5 != &P )
  {
    v3 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v12, (__int64)&P);
    if ( v3 < 0 )
      goto LABEL_6;
    v5 = (PVOID *)*v5;
  }
  while ( P != &P )
  {
    v10 = p_P;
    if ( *(PVOID **)p_P != &P )
      goto LABEL_12;
    v11 = (PVOID *)*((_QWORD *)p_P + 1);
    if ( *v11 != p_P )
      goto LABEL_12;
    p_P = (PVOID)*((_QWORD *)p_P + 1);
    *v11 = &P;
    v3 = IopFileUtilWalkDirectoryTreeHelper(
           (int)v10 + 16,
           7,
           (int)PpLastGoodDeleteFilesCallback,
           0,
           FileInformation,
           v12,
           (__int64)v15);
    ExFreePoolWithTag(v10, 0x75466F49u);
  }
  if ( v3 < 0 )
  {
LABEL_6:
    while ( 1 )
    {
      v7 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_12;
      v8 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_12;
      P = *(PVOID *)P;
      *(_QWORD *)(v8 + 8) = &P;
      ExFreePoolWithTag(v7, 0x75466F49u);
    }
  }
  return (unsigned int)v3;
}
