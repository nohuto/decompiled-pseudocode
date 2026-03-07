__int64 __fastcall bAddFlEntry(char *a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  struct PFF *v7; // rax
  __int64 v8; // rcx
  WCHAR *v9; // rdi
  wchar_t *v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  __int64 v14; // rbx
  wchar_t v15; // ax
  wchar_t *v16; // rbx
  const wchar_t *v17; // rbx
  size_t v18; // rax
  wint_t v19; // cx
  wchar_t *v20; // rbx
  size_t v21; // rax
  bool v22; // zf
  wchar_t *v23; // rbx
  WCHAR *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  WCHAR *v27; // rcx
  WCHAR v28; // ax
  __int64 NtSystemRoot; // rax
  __int64 v30; // rdx
  WCHAR *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // r8
  WCHAR v35; // ax
  WCHAR *v36; // rax
  __int64 v37; // rcx
  char *v38; // rdx
  __int64 v39; // r8
  signed __int64 v40; // r9
  __int16 v41; // ax
  __int64 v42; // rax
  WCHAR *v43; // rcx
  signed __int64 v44; // r14
  WCHAR v45; // dx
  WCHAR *v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // r12
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // r12
  _QWORD *v53; // rsi
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  const wchar_t *v56; // rdx
  const wchar_t *v57; // rcx
  __int64 *i; // rsi
  _QWORD *v59; // rbx
  unsigned int v60; // r14d
  __int64 v61; // rax
  unsigned int v62; // r13d
  void *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  WCHAR *v66; // rax
  unsigned __int16 *v67; // rsi
  unsigned int v68; // r8d
  WCHAR *v69; // rbx
  WCHAR *v70; // rdx
  __int64 v71; // rbx
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // r8
  PFTOBJ *v75; // rcx
  void *v76; // rcx
  UNICODE_STRING *v77; // rdx
  WCHAR *v78; // rax
  UNICODE_STRING **v79; // rcx
  int v81; // eax
  wchar_t *v82; // rsi
  wint_t *v83; // rsi
  signed int v84; // eax
  signed int v85; // eax
  __int64 v86; // rax
  PFTOBJ *v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rax
  wchar_t *v90; // rax
  _WORD *v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rdx
  WCHAR *v94; // rcx
  WCHAR v95; // ax
  WCHAR *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING *v100; // [rsp+88h] [rbp-78h]
  UNICODE_STRING SourceString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *EndPtr; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t *Str1[2]; // [rsp+A8h] [rbp-58h] BYREF
  void *v104; // [rsp+B8h] [rbp-48h]
  struct PFF *v105; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-38h]
  __int128 v107; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-20h]
  struct _UNICODE_STRING v109; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING *p_SourceString; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t *v111; // [rsp+100h] [rbp+0h]

  v7 = (struct PFF *)Win32AllocPoolZInit(1104LL, 1886221383LL);
  v105 = v7;
  v9 = (WCHAR *)v7;
  if ( !v7 )
  {
    EngSetLastError(8u);
LABEL_153:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v105);
    return 0LL;
  }
  v10 = (wchar_t *)((char *)v7 + 520);
  v11 = 0LL;
  v104 = 0LL;
  v106 = *(_QWORD *)(SGDGetSessionState(v8) + 32);
  *(_DWORD *)(v106 + 13304) = 1;
  if ( a5 )
    *a5 = 0LL;
  v12 = 292LL;
  v13 = v10;
  v14 = a2 - (_QWORD)v10;
  while ( v12 != -2147483354 )
  {
    v15 = *(wchar_t *)((char *)v13 + v14);
    if ( !v15 )
      break;
    *v13++ = v15;
    if ( !--v12 )
    {
      *(v13 - 1) = 0;
      goto LABEL_153;
    }
  }
  *v13 = 0;
  v108 = 0LL;
  v107 = 0LL;
  v16 = &v10[wcscspn(v10, L",")];
  if ( *v16 )
  {
    *v16 = 0;
    v17 = v16 + 1;
    v18 = wcsspn(v17, L" ");
    v19 = v17[v18];
    v20 = (wchar_t *)&v17[v18];
    if ( iswdigit(v19) )
    {
      Str1[0] = *((wchar_t **)&v107 + 1);
    }
    else
    {
      Str1[0] = v20;
      v21 = wcscspn(v20, L",");
      v22 = v20[v21] == 0;
      v23 = &v20[v21];
      if ( v22 )
      {
        v98 = v108;
        goto LABEL_13;
      }
      *v23 = 0;
      v20 = &v23[wcsspn(v23 + 1, L" ") + 1];
    }
    v82 = &v20[wcscspn(v20, L",")];
    if ( !*v82 )
      goto LABEL_153;
    *v82 = 0;
    v83 = &v82[wcsspn(v82 + 1, L" ") + 1];
    if ( !iswdigit(*v20) )
      goto LABEL_153;
    EndPtr = 0LL;
    v84 = wcstoul(v20, &EndPtr, 10);
    LODWORD(v98) = v84;
    if ( *EndPtr )
      goto LABEL_153;
    if ( v84 <= 0 )
      goto LABEL_153;
    if ( !iswdigit(*v83) )
      goto LABEL_153;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v85 = wcstoul(v83, (wchar_t **)&DestinationString, 10);
    HIDWORD(v98) = v85;
    if ( **(_WORD **)&DestinationString.Length || v85 <= 0 )
      goto LABEL_153;
  }
  else
  {
    v98 = v108;
    Str1[0] = *((wchar_t **)&v107 + 1);
  }
LABEL_13:
  *(_QWORD *)&DestinationString.Length = Win32AllocPoolZInit(520LL, 1886221383LL);
  v24 = *(WCHAR **)&DestinationString.Length;
  if ( !*(_QWORD *)&DestinationString.Length )
  {
    EngSetLastError(8u);
    goto LABEL_152;
  }
  v25 = 260LL;
  if ( !wcschr(v10, 0x5Cu) )
  {
    v26 = 260LL;
    v27 = v24;
    while ( v26 != -2147483386 )
    {
      v28 = *(WCHAR *)((char *)v27 + (char *)L"\\??\\" - (char *)v24);
      if ( !v28 )
        break;
      *v27++ = v28;
      if ( !--v26 )
      {
LABEL_151:
        *(v27 - 1) = 0;
        goto LABEL_152;
      }
    }
    *v27 = 0;
    NtSystemRoot = RtlGetNtSystemRoot(v27, v26);
    v30 = 260LL;
    v31 = v24;
    while ( *v31 )
    {
      ++v31;
      if ( !--v30 )
        goto LABEL_152;
    }
    v27 = &v24[260 - v30];
    v32 = 2147483646LL;
    v33 = NtSystemRoot - (_QWORD)v27;
    v34 = 2147483646LL;
    while ( v34 )
    {
      v35 = *(WCHAR *)((char *)v27 + v33);
      if ( !v35 )
        break;
      *v27 = v35;
      --v34;
      ++v27;
      if ( !--v30 )
        goto LABEL_151;
    }
    *v27 = 0;
    v36 = v24;
    v37 = 260LL;
    while ( *v36 )
    {
      ++v36;
      if ( !--v37 )
        goto LABEL_152;
    }
    v38 = (char *)&v24[260 - v37];
    v39 = 2147483646LL;
    v40 = (char *)L"\\fonts\\" - v38;
    while ( v39 )
    {
      v41 = *(_WORD *)&v38[v40];
      if ( !v41 )
        break;
      *(_WORD *)v38 = v41;
      --v39;
      v38 += 2;
      if ( !--v37 )
      {
        *((_WORD *)v38 - 1) = 0;
        goto LABEL_152;
      }
    }
    *(_WORD *)v38 = 0;
    v42 = 260LL;
    v43 = v24;
    while ( *v43 )
    {
      ++v43;
      if ( !--v42 )
        goto LABEL_152;
    }
    v27 = &v24[260 - v42];
    v44 = (char *)v10 - (char *)v27;
    while ( v32 )
    {
      v45 = *(WCHAR *)((char *)v27 + v44);
      if ( !v45 )
        break;
      *v27 = v45;
      --v32;
      ++v27;
      if ( !--v42 )
        goto LABEL_151;
    }
    *v27 = 0;
    v46 = v24;
    SourceString = 0LL;
    for ( DestinationString = 0LL; v46 < v24 + 259; ++v46 )
    {
      if ( !*v46 )
        break;
    }
    v47 = v46 - v24;
    if ( (_DWORD)v47 )
    {
      SourceString.Buffer = v24;
      DestinationString.Buffer = v9;
      SourceString.Length = 2 * v47;
      SourceString.MaximumLength = 520;
      DestinationString.MaximumLength = 520;
      RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    }
    v9[(int)v47] = 0;
    goto LABEL_53;
  }
  cCapString(v9, v10, 260);
  v90 = wcsstr(v9, L"%SYSTEMROOT%");
  if ( v90 )
  {
    v91 = v90 + 12;
    *v90 = 92;
    v92 = -1LL;
    do
      v22 = v91[++v92] == 0;
    while ( !v22 );
    memmove(v90 + 11, v91, 2 * v92 + 2);
    goto LABEL_53;
  }
  if ( v9[1] == 58 && v9[2] == 92 )
  {
    if ( (int)StringCchCopyW((char *)v24, 260LL, (char *)v9) < 0 )
      goto LABEL_152;
    v94 = v9;
    do
    {
      if ( v25 == -2147483386 )
        break;
      v95 = *(WCHAR *)((char *)v94 + (char *)L"\\??\\" - (char *)v9);
      if ( !v95 )
        break;
      *v94++ = v95;
      --v25;
    }
    while ( v25 );
    v96 = v94 - 1;
    if ( v25 )
      v96 = v94;
    *v96 = 0;
    if ( !v25 || StringCchCatW(v9, v93, (size_t *)v24) < 0 )
    {
LABEL_152:
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&DestinationString);
      goto LABEL_153;
    }
  }
LABEL_53:
  if ( v24 )
    Win32FreePool(v24);
  v48 = v106;
  if ( !_wcsicmp(v9, (const wchar_t *)(v106 + 13336)) )
    goto LABEL_153;
  v52 = (_QWORD *)(v48 + 13912);
  *(_QWORD *)&DestinationString.Length = v52;
  if ( (_QWORD *)*v52 != v52 )
  {
    v11 = 0LL;
    v53 = (_QWORD *)(*(_QWORD *)(SGDGetSessionState(v49) + 32) + 13912LL);
    v54 = (_QWORD *)*v53;
    if ( (_QWORD *)*v53 != v53 )
    {
      do
      {
        v55 = 34LL;
        v11 = v54;
        if ( *((_WORD *)v54 + 16) != 64 )
          v55 = 32LL;
        v56 = (const wchar_t *)((char *)v54 + v55);
        if ( *(_WORD *)a1 == 64 )
          v57 = (const wchar_t *)(a1 + 2);
        else
          v57 = (const wchar_t *)a1;
        if ( !_wcsicmp(v57, v56) )
          break;
        v54 = (_QWORD *)*v54;
        v11 = 0LL;
      }
      while ( v54 != v53 );
      v52 = *(_QWORD **)&DestinationString.Length;
    }
    if ( v11 )
    {
      for ( i = (__int64 *)v11[2]; i != v11 + 2; i = (__int64 *)*i )
      {
        v59 = (_QWORD *)i[4];
        if ( !_wcsicmp(*(const wchar_t **)(*v59 + 24LL), v9) )
        {
          v81 = *((_DWORD *)i + 5) & 1;
          if ( Str1[0] )
          {
            if ( v81 && !_wcsicmp((const wchar_t *)(v59[4] + *(int *)(v59[4] + 8LL)), Str1[0]) )
            {
LABEL_104:
              AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v105);
              return 1LL;
            }
          }
          else if ( !v81 )
          {
            goto LABEL_104;
          }
        }
      }
    }
  }
  v60 = 8;
  SourceString = 0LL;
  LODWORD(EndPtr) = 0;
  *(_QWORD *)&v107 = *(_QWORD *)(v106 + 20272);
  p_SourceString = &SourceString;
  v111 = Str1[0];
  if ( !a3 )
    v60 = 10;
  if ( Str1[0] && !_wcsicmp(Str1[0], L"Segoe UI Symbol") )
    v60 |= 0x4000u;
  if ( !v11 )
  {
    v86 = Win32AllocPool(112LL, 1718382187LL, v50, v51);
    v104 = (void *)v86;
    v11 = (_QWORD *)v86;
    if ( !v86 )
    {
      v62 = 0;
      v63 = 0LL;
      goto LABEL_87;
    }
    if ( (int)StringCchCopyW((char *)(v86 + 32), 33LL, a1) < 0 )
    {
      PFTOBJ::bUnloadEUDCFont(v87, v9);
      v62 = 0;
      v76 = v11;
      v63 = 0LL;
LABEL_121:
      Win32FreePool(v76);
LABEL_88:
      if ( v63 )
        Win32FreePool(v63);
      goto LABEL_98;
    }
  }
  v61 = Win32AllocPool(48LL, 1718382187LL, v50, v51);
  v62 = 0;
  v100 = (UNICODE_STRING *)v61;
  v63 = (void *)v61;
  if ( !v61 )
    goto LABEL_87;
  *(_QWORD *)(v61 + 24) = v98;
  v64 = -1LL;
  v105 = 0LL;
  do
    ++v64;
  while ( v9[v64] );
  v65 = (unsigned int)(v64 + 1);
  *(_QWORD *)&DestinationString.Length = v65;
  if ( (unsigned int)v65 > 0x1388000 || (v66 = (WCHAR *)AllocFreeTmpBuffer((unsigned int)(2 * v65)), (v67 = v66) == 0LL) )
  {
LABEL_87:
    v76 = v104;
    if ( !v104 )
      goto LABEL_88;
    goto LABEL_121;
  }
  v68 = *(_DWORD *)&DestinationString.Length;
  v69 = v9;
  *(_OWORD *)Str1 = 0LL;
  v109 = 0LL;
  v70 = &v9[*(int *)&DestinationString.Length - 1];
  if ( v9 < v70 )
  {
    do
    {
      if ( !*v69 )
        break;
      ++v69;
    }
    while ( v69 < v70 );
  }
  v71 = v69 - v9;
  if ( (_DWORD)v71 )
  {
    Str1[1] = v9;
    v109.Buffer = v66;
    LOWORD(Str1[0]) = 2 * v71;
    WORD1(Str1[0]) = 2 * DestinationString.Length;
    v109.MaximumLength = 2 * DestinationString.Length;
    RtlUpcaseUnicodeString(&v109, (PCUNICODE_STRING)Str1, 0);
    v68 = *(_DWORD *)&DestinationString.Length;
  }
  v67[(int)v71] = 0;
  v72 = PUBLIC_PFTOBJ::bLoadFonts(
          (PUBLIC_PFTOBJ *)&v107,
          v67,
          v68,
          1u,
          0LL,
          0,
          (unsigned int *)&EndPtr,
          v60,
          &v105,
          0,
          0,
          (struct _EUDCLOAD *)&p_SourceString,
          0,
          0);
  FreeTmpBuffer(v67, v73, v74);
  if ( !v72 )
    goto LABEL_86;
  if ( !*(_QWORD *)&SourceString.Length )
  {
    PFTOBJ::bUnloadEUDCFont(v75, v9);
LABEL_86:
    v63 = v100;
    goto LABEL_87;
  }
  *(_DWORD *)(*(_QWORD *)&SourceString.Length + 12LL) |= 0x200u;
  *((_DWORD *)SourceString.Buffer + 3) |= 0x200u;
  if ( v104 )
  {
    *(_QWORD *)((char *)v11 + 100) = 0LL;
    v11[3] = v11 + 2;
    v11[2] = v11 + 2;
    v88 = (_QWORD *)v52[1];
    if ( (_QWORD *)*v88 != v52 )
      goto LABEL_149;
    v11[1] = v88;
    *v11 = v52;
    *v88 = v11;
    v89 = v106;
    v52[1] = v11;
    ++*(_DWORD *)(v89 + 13904);
    if ( a5 )
      *a5 = v11;
    ++*(_DWORD *)(v89 + 13900);
  }
  v77 = v100;
  v100[2] = SourceString;
  *(_DWORD *)&v77[1].Length = a3;
  *(_DWORD *)(&v77[1].MaximumLength + 1) = 0;
  if ( v111 )
    *(_DWORD *)(&v77[1].MaximumLength + 1) = 1;
  ++*((_DWORD *)v11 + 25);
  v78 = (WCHAR *)(v11 + 2);
  ++*((_DWORD *)v11 + 26);
  if ( a4 >= 0 )
  {
    v97 = *(_QWORD *)v78;
    if ( *(WCHAR **)(*(_QWORD *)v78 + 8LL) == v78 )
    {
      *(_QWORD *)&v77->Length = v97;
      v77->Buffer = v78;
      *(_QWORD *)(v97 + 8) = v77;
      *(_QWORD *)v78 = v77;
      goto LABEL_97;
    }
LABEL_149:
    __fastfail(3u);
  }
  v79 = (UNICODE_STRING **)v11[3];
  if ( *v79 != (UNICODE_STRING *)v78 )
    goto LABEL_149;
  *(_QWORD *)&v77->Length = v78;
  v77->Buffer = (PWSTR)v79;
  *v79 = v77;
  v11[3] = v77;
LABEL_97:
  v62 = 1;
LABEL_98:
  if ( v9 )
    Win32FreePool(v9);
  return v62;
}
