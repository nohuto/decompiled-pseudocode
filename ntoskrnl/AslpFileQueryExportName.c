__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int v4; // edx
  int ImageNtHeader; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  const char *v9; // rax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  v13 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v13, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  LOBYTE(v4) = *(_BYTE *)(a2 + 59);
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a2 + 32), v4, 0, (int)&v12);
  v7 = v6;
  if ( !v6 || v12 < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v6 )
      return (unsigned int)ImageNtHeader;
LABEL_17:
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( v7 < v8 || v7 + 40 > v8 + *(_QWORD *)(a2 + 24) )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v9 = (const char *)AslpImageRvaToVa(v13, a2 + 8, *(unsigned int *)(v7 + 12));
  if ( !v9 || (unsigned __int64)v9 >= *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 32) || !*v9 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v10 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32) - (_DWORD)v9;
  if ( v10 > 0x100 )
    v10 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v10, v9);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
