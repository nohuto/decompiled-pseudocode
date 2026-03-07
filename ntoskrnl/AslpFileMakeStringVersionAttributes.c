__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int16 *v5; // r14
  unsigned __int64 v6; // r12
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int16 *v9; // r15
  _WORD *v10; // rax
  _WORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  const wchar_t *v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int16 *v19; // r14
  unsigned int v20; // r11d
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  int VersionString; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _DWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  _WORD *v33; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v34; // [rsp+48h] [rbp-38h]
  _WORD *v35; // [rsp+50h] [rbp-30h]
  unsigned __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  int v37[2]; // [rsp+60h] [rbp-20h] BYREF
  int v38[2]; // [rsp+70h] [rbp-10h] BYREF
  __int16 v40; // [rsp+D0h] [rbp+50h]
  int v41; // [rsp+D0h] [rbp+50h]
  int v42; // [rsp+D8h] [rbp+58h]

  v3 = (__int64)a2;
  *(_QWORD *)v37 = 0LL;
  v4 = 0LL;
  *(_QWORD *)v38 = 0LL;
  v36 = 0LL;
  if ( !a2 )
  {
    v29 = (_DWORD *)(a1 + 184);
    v30 = 8LL;
    do
    {
      *v29 |= 2u;
      v29 += 8;
      --v30;
    }
    while ( v30 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  v5 = a2;
  P = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  if ( !a2[2] )
  {
    v7 = AslStringDuplicate((wchar_t **)&P, L"\\VarFileInfo\\Translation");
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_21;
    }
    v8 = *v5;
    if ( (__int16)v8 >= 8 )
    {
      v9 = (unsigned __int16 *)((char *)v5 + v8);
      v10 = (unsigned __int16 *)((char *)v5 + v8 - 2);
      v40 = *v10;
      v11 = P;
      v35 = v10;
      *v10 = 0;
      v34 = AslpFileStringTokenize(v11, 0LL, &v33);
      if ( v34 )
      {
        v12 = (int)v9;
        v42 = (int)v9;
LABEL_7:
        v13 = v12 - (_DWORD)v5;
        if ( (unsigned int)(v12 - (_DWORD)v5) >= 8
          && *v5 <= v13
          && AslpFileVerBlockGetValueOffset(&v31, (__int64)v5, v13) >= 0 )
        {
          v15 = *v5;
          v16 = v31 + ((v5[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
          v31 = v16;
          if ( v16 <= v15 )
          {
            v9 = (unsigned __int16 *)((char *)v5 + v15);
            v5 = (unsigned __int16 *)((char *)v5 + v16);
            if ( v5 < v9 )
            {
              while ( 1 )
              {
                v17 = *v5;
                if ( (unsigned __int16)v17 <= 8u || v17 > (char *)v9 - (char *)v5 )
                  break;
                if ( !wcsicmp(v14, v5 + 3) )
                {
                  v34 = AslpFileStringTokenize(0LL, v18, &v33);
                  if ( !v34 )
                    goto LABEL_40;
                  v12 = v42;
                  goto LABEL_7;
                }
                v5 = (unsigned __int16 *)((char *)v5 + ((*v5 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL));
                if ( v5 >= v9 )
                  break;
                v14 = v34;
              }
            }
          }
        }
        v7 = -1073741275;
        v4 = 0LL;
      }
      else
      {
LABEL_40:
        v7 = 0;
        v6 = (char *)v9 - (char *)v5;
        v4 = (__int64)v5;
      }
      *v35 = v40;
      goto LABEL_21;
    }
  }
  v7 = -1073741811;
  AslLogCallPrintf(1LL);
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  if ( v7 == -1073741275 )
  {
    v19 = 0LL;
    v20 = 0;
  }
  else
  {
    if ( v7 < 0 )
    {
LABEL_52:
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    v19 = 0LL;
    if ( AslpFileVerBlockGetValueOffset(&v36, v4, v6) >= 0 && v36 < v6 )
    {
      v19 = (unsigned __int16 *)(v36 + v4);
      v20 = v6 - v36;
    }
  }
  v21 = 0LL;
  v22 = (unsigned __int64)v20 >> 2;
  do
  {
    v41 = *(_DWORD *)&byte_1400070B0[v21];
    VersionString = AslpFileQueryVersionString(v37, v38, v3, v19, v22, *(NTSTRSAFE_PCWSTR *)&byte_1400070B0[v21 + 8]);
    v7 = VersionString;
    if ( VersionString < 0 )
    {
      if ( VersionString != -1073741275 )
        goto LABEL_52;
      *(_DWORD *)(32LL * v41 + a1 + 24) |= 2u;
    }
    else
    {
      v24 = *(_QWORD *)v37;
      v7 = AslStringXmlSanitize(*(_QWORD *)v37, 0LL);
      if ( v7 < 0 )
        goto LABEL_52;
      v25 = 32LL * v41;
      v26 = -1LL;
      *(_DWORD *)(v25 + a1) = 4;
      do
        ++v26;
      while ( *(_WORD *)(v24 + 2 * v26) );
      *(_DWORD *)(v25 + a1 + 24) |= 1u;
      *(_QWORD *)(v25 + a1 + 16) = v24;
      v3 = (__int64)a2;
      *(_QWORD *)(v25 + a1 + 8) = v26;
    }
    v21 += 16LL;
  }
  while ( v21 < 0x80 );
  if ( v19 && v22 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v27 = *v19;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v27;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
  }
  return 0;
}
