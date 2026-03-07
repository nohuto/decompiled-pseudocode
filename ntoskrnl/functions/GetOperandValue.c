__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        char a6,
        unsigned int a7,
        int a8,
        char a9)
{
  unsigned int *v9; // r15
  unsigned int AttributeName; // esi
  char v14; // r13
  PVOID v15; // rax
  PSID v16; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  char v22; // r12
  unsigned int v23; // edx
  void *v24; // r8
  unsigned int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r14d
  void *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  wchar_t v31; // dx
  char v32; // r14
  __int64 v33; // r14
  bool v34; // zf
  __int64 v35; // rdi
  PSID v36; // rcx
  unsigned int v37; // r13d
  __int64 v38; // rax
  __int64 v39; // r14
  PVOID v40; // rax
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  wint_t *v47; // rdx
  unsigned __int64 v48; // r13
  wchar_t v49; // ax
  unsigned __int64 v50; // rax
  __int16 v51; // r15
  wint_t *v52; // rbx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  PVOID v56; // [rsp+58h] [rbp-28h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  wint_t *v58; // [rsp+68h] [rbp-18h] BYREF
  wchar_t *v59; // [rsp+70h] [rbp-10h] BYREF
  char v61; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  a7 = 0;
  a6 = 0;
  v61 = 0;
  v58 = 0LL;
  AttributeName = 0;
  Sid = 0LL;
  v14 = 0;
  a9 = 0;
  v56 = 0LL;
  v59 = 0LL;
  a8 = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, v9);
LABEL_80:
    if ( AttributeName )
      goto LABEL_81;
    goto LABEL_7;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, v9);
    if ( !AttributeName )
      goto LABEL_7;
    goto LABEL_80;
  }
  if ( *a1 == 123 )
  {
    v18 = *a4;
    a7 = 1;
    *(_BYTE *)(v18 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
        if ( AttributeName )
          goto LABEL_81;
        v19 = &a1[a7];
        if ( *v19 == 123 )
          goto LABEL_37;
        AttributeName = GetOperandValue((_DWORD)v19, 0, 0, (unsigned int)&v56, (__int64)v9, 0, 0, 0, 0);
        if ( AttributeName )
          goto LABEL_81;
        if ( a3 )
        {
          if ( v14 && v14 != *((_BYTE *)v56 + 1) )
            goto LABEL_37;
          v14 = *((_BYTE *)v56 + 1);
        }
        LOBYTE(v20) = *((_BYTE *)v56 + 1);
        v22 = IsValueSizeFixed(v20);
        v23 = v22 != 0 ? 1 : 5;
        v24 = *(void **)(*a4 + 8);
        if ( v24 )
        {
          v25 = *(_DWORD *)(*a4 + 4);
          v26 = v25 + *(_DWORD *)(v21 + 4);
          if ( v26 < v25 || (v27 = v23 + v26, v23 + v26 < v26) )
          {
LABEL_38:
            AttributeName = 534;
            goto LABEL_81;
          }
          v28 = SddlpReAlloc(v25, v27, v24);
          v29 = *a4;
          *(_QWORD *)(*a4 + 8) = v28;
          if ( !v28 )
            goto LABEL_2;
        }
        else
        {
          v27 = v23 + *(_DWORD *)(v21 + 4);
          if ( v27 < v23 )
            goto LABEL_38;
          v29 = *a4;
          *(_QWORD *)(v29 + 8) = SddlpAlloc(v27);
        }
        v30 = *(_QWORD *)(v29 + 8);
        if ( !v30 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v29 + 4) + v30) = *((_BYTE *)v56 + 1);
        if ( !v22 )
          *(_DWORD *)(*(unsigned int *)(v29 + 4) + *(_QWORD *)(v29 + 8) + 1LL) = *((_DWORD *)v56 + 1);
        memmove(
          (void *)(*(_QWORD *)(v29 + 8) + *(unsigned int *)(v29 + 4)
                                        + (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                                        + 5),
          *((const void **)v56 + 1),
          *((unsigned int *)v56 + 1));
        *(_DWORD *)(v29 + 4) = v27;
        FreeOperandValue(v56);
        v56 = 0LL;
        a7 += *v9;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
        if ( AttributeName )
          goto LABEL_81;
        v31 = a1[a7];
        if ( v31 != 44 )
        {
          v16 = 0LL;
          if ( v31 != 125 )
            goto LABEL_41;
          *v9 = a7 + 1;
          goto LABEL_8;
        }
        if ( !a1[++a7] )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v32 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    a7 = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7);
    if ( AttributeName )
      goto LABEL_81;
    if ( a1[a7] == 40 )
    {
      v33 = a7 + 1;
      AttributeName = LocalGetSidForString(&a1[v33], (__int64 *)&Sid, &v59, &a9);
      if ( AttributeName || (a7 = v33 + &v59[-v33] - a1, (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a7)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v34 = a1[a7] == 41;
        v16 = Sid;
        if ( v34 )
        {
          v35 = *a4;
          v36 = Sid;
          *v9 = a7 + 1;
          *(_BYTE *)(v35 + 1) = 81;
          *(_DWORD *)(v35 + 4) = RtlLengthSid(v36);
          v34 = a9 == 0;
          *(_QWORD *)(v35 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v35 = v34;
          goto LABEL_8;
        }
LABEL_41:
        AttributeName = 1336;
      }
      goto LABEL_82;
    }
    goto LABEL_37;
  }
  GetBinaryOperandLen(a1, &a7);
  if ( *a1 == 35 )
  {
    v37 = a7;
    if ( a7 >= 2 )
    {
      v38 = *a4;
      LODWORD(v39) = a7 >> 1;
      *v9 = a7;
      *(_BYTE *)(v38 + 1) = 24;
      *(_DWORD *)(v38 + 4) = v39;
      v40 = SddlpAlloc((unsigned int)v39);
      *(_QWORD *)(*a4 + 8) = v40;
      if ( !v40 )
      {
LABEL_2:
        AttributeName = 8;
LABEL_81:
        v16 = 0LL;
        goto LABEL_82;
      }
      v41 = (int)(v37 - 1);
      while ( v41 >= 1 )
      {
        if ( !GetDigitFromChar(a1[v41], &a6) || !GetDigitFromChar(a1[v42 - 1], &v61) )
          goto LABEL_2;
        v39 = (unsigned int)(v39 - 1);
        v41 = v43 - 2;
        *(_BYTE *)(v39 + *(_QWORD *)(v44 + 8)) = a6 | (16 * v61);
      }
LABEL_7:
      v16 = 0LL;
      goto LABEL_8;
    }
LABEL_37:
    AttributeName = 1336;
    goto LABEL_81;
  }
  v45 = a7;
  if ( !a7 )
    goto LABEL_37;
  *v9 = a7;
  v46 = wcstoxq(0LL, a1, &v58, 0, 1, &a8);
  v47 = v58;
  v48 = v46;
  if ( v58 == a1 && !v46 )
    goto LABEL_37;
  if ( v58 != &a1[v45] || a8 )
    goto LABEL_37;
  v49 = *a1;
  if ( *a1 == 45 )
  {
    v50 = wcstoxq(0LL, ++a1, &v58, 0, 1, &a8);
    if ( v50 >= v48 && v50 )
      goto LABEL_37;
    v49 = *a1;
    v51 = 2;
    v47 = v58;
  }
  else if ( v49 == 43 )
  {
    ++a1;
    v51 = 1;
    v49 = *a1;
  }
  else
  {
    v51 = 3;
  }
  if ( v49 == 48 )
  {
    v52 = a1 + 1;
    if ( v52 >= v47 || ((*v52 - 88) & 0xFFDF) != 0 )
      v32 = 1;
  }
  else
  {
    v32 = 2;
  }
  v53 = *a4;
  *(_BYTE *)(v53 + 1) = 4;
  *(_DWORD *)(v53 + 4) = 10;
  v54 = SddlpAlloc(0xAuLL);
  v55 = *a4;
  v16 = 0LL;
  *(_QWORD *)(*a4 + 8) = v54;
  if ( v54 )
  {
    *v54 = v48;
    *(_WORD *)(*(_QWORD *)(v55 + 8) + 8LL) = v51;
    *(_BYTE *)(*(_QWORD *)(v55 + 8) + 9LL) = v32;
    goto LABEL_8;
  }
  AttributeName = 8;
LABEL_82:
  FreeOperandValue((_QWORD *)*a4);
  *a4 = 0LL;
LABEL_8:
  if ( v56 )
    FreeOperandValue(v56);
  if ( v16 && a9 )
    ExFreePoolWithTag(v16, 0);
  return AttributeName;
}
