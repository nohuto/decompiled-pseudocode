__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // r8
  unsigned int i; // edx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  bool v14; // zf
  unsigned int v15; // ecx
  int FileKind; // ebx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v20 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; (int)i < 34; ++i )
  {
    if ( i > 0xE )
    {
      if ( i > 0x1A )
      {
        if ( i == 27 || i == 28 || i == 29 || i == 30 )
          goto LABEL_34;
        v15 = i - 31;
        v14 = i == 31;
      }
      else
      {
        if ( i == 26 || i == 15 || i == 16 || i == 17 || i == 18 || i == 19 )
          goto LABEL_34;
        v15 = i - 22;
        v14 = i == 22;
      }
      if ( v14 )
        goto LABEL_34;
      v13 = v15 == 2;
    }
    else
    {
      if ( i == 14 )
        goto LABEL_34;
      if ( i > 7 )
      {
        v7 = i == 8;
        v8 = i - 8;
      }
      else
      {
        if ( i == 7 || !i )
          goto LABEL_34;
        v8 = i - 1;
        v7 = i == 1;
      }
      if ( v7 )
        goto LABEL_34;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_34;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_34;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_34;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_34;
      v13 = v12 == 1;
    }
    if ( !v13 )
      *v5 |= 2u;
LABEL_34:
    v5 += 8;
  }
  FileKind = AslpFileLargeMapCreate(&v20, a2 + 8, v5);
  if ( FileKind >= 0 )
  {
    v17 = v20;
    if ( (int)AslpFileLargeGetChecksumAttributes(a1, v20) < 0 )
      AslLogCallPrintf(1LL);
    if ( v17 )
    {
      *(_QWORD *)(a2 + 16) = v17[1];
      *(_BYTE *)(a2 + 57) = 1;
      v18 = v17[5];
      v17[1] = 0LL;
      *(_QWORD *)(a2 + 48) = v18;
      v19 = v17[2];
      v17[5] = 0LL;
      *(_QWORD *)(a2 + 32) = v19;
      *(_QWORD *)(a2 + 40) = v17[3];
      *(_WORD *)(a2 + 58) = 1;
      *(_DWORD *)(a2 + 84) = 1;
      v17[2] = 0LL;
      v17[3] = 0LL;
      AslpFileLargeMapDelete(&v20);
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a2 + 8), (int *)(a2 + 64));
    }
    else
    {
      FileKind = -1073741584;
    }
  }
  AslpFileLargeMapDelete(&v20);
  return (unsigned int)FileKind;
}
