__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // r14d
  __int16 v9; // dx
  __int16 v10; // r15
  int v11; // ecx
  int v12; // eax
  int ImageNtHeader; // ebx
  __int64 v14; // rax
  __int16 v16; // [rsp+30h] [rbp-68h]
  _QWORD v17[10]; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2;
  v17[0] = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_23;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_5;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v17, a5);
  if ( ImageNtHeader < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
LABEL_5:
    v9 = 0;
LABEL_6:
    v11 = 0;
    v12 = 0;
    v7 = a2;
    goto LABEL_23;
  }
  v9 = *(_WORD *)(v17[0] + 4LL);
  v16 = v9;
  v10 = *(_WORD *)(v17[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_11;
  if ( v10 == 267 )
  {
    v8 = *(_DWORD *)(v17[0] + 232LL);
  }
  else if ( v10 == 523 )
  {
    v8 = *(_DWORD *)(v17[0] + 248LL);
  }
  if ( !v8 )
  {
LABEL_11:
    ImageNtHeader = 0;
    goto LABEL_6;
  }
  v14 = AslpImageRvaToVa(v17[0], a5 + 8, v8);
  if ( v14 )
  {
    v11 = 1;
    v12 = *(_DWORD *)(v14 + 16);
    ImageNtHeader = 0;
  }
  else
  {
    AslLogCallPrintf(2LL);
    ImageNtHeader = 0;
    v12 = 0;
    v11 = 0;
  }
  v9 = v16;
  v7 = a2;
LABEL_23:
  if ( a1 )
    *a1 = v9;
  if ( v7 )
    *v7 = v10;
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v12;
  return (unsigned int)ImageNtHeader;
}
