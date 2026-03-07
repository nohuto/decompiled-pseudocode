__int64 __fastcall PipInitComputerIds(__int64 a1)
{
  void *v2; // r14
  unsigned int v3; // r15d
  __int64 v4; // rcx
  int v5; // eax
  HANDLE v6; // r13
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rax
  void *v12; // r13
  __int64 Struct; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rdi
  _BYTE *v16; // r15
  int String; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  _BYTE *v25; // r14
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 *v30; // rdi
  _BYTE *v31; // r14
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  UNICODE_STRING *v38; // rdi
  unsigned int v39; // r14d
  __int64 v40; // r13
  UNICODE_STRING *v41; // r14
  unsigned int v42; // edi
  PCWSTR *v43; // r15
  PVOID v44; // r12
  __int64 v45; // rax
  wchar_t *Buffer; // rax
  HANDLE v47; // r12
  unsigned int v48; // esi
  __int64 v49; // rdi
  UNICODE_STRING *v50; // rcx
  __int64 v51; // rdx
  __int128 *v52; // rax
  int v53; // eax
  __int64 v54; // rsi
  UNICODE_STRING *v55; // rcx
  __int64 v56; // rdx
  __int128 *v57; // rax
  __int128 *v58; // rax
  __int64 v59; // rdx
  UNICODE_STRING *v60; // rcx
  __int64 v61; // rdx
  UNICODE_STRING *v62; // rcx
  __int128 *v63; // rax
  int v64; // eax
  __int64 v65; // rdx
  UNICODE_STRING *v66; // rcx
  __int128 *v67; // rax
  int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  UNICODE_STRING *v71; // rcx
  __int128 *v72; // rax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rdx
  UNICODE_STRING *v76; // rcx
  _QWORD *v77; // rax
  int v78; // eax
  wchar_t *Pool2; // rax
  wchar_t *v80; // r13
  wchar_t *v81; // rcx
  unsigned __int16 v82; // ax
  int v83; // r15d
  __int64 v84; // r8
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  const wchar_t *v87; // r9
  unsigned __int64 v88; // r11
  unsigned __int16 v89; // bx
  void *v90; // rax
  PVOID v91; // r15
  wchar_t *v92; // rcx
  unsigned int v93; // r14d
  unsigned __int16 *v94; // r15
  __int64 v95; // rax
  __int64 v96; // r8
  unsigned __int64 v97; // rdx
  __int64 v98; // r9
  const wchar_t *v99; // rax
  unsigned __int64 v100; // r10
  wchar_t *v101; // rax
  wchar_t *v102; // r14
  unsigned __int16 Length; // cx
  wchar_t v104; // dx
  wchar_t *v105; // r9
  char *v106; // rax
  char *v107; // rsi
  char *v108; // rdi
  unsigned __int16 v109; // cx
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // r8
  UNICODE_STRING *v113; // rdi
  __int64 v114; // rcx
  HANDLE v115; // r12
  PVOID Data; // [rsp+28h] [rbp-E0h]
  unsigned int ValueName; // [rsp+78h] [rbp-90h]
  int ValueName_4; // [rsp+7Ch] [rbp-8Ch]
  UNICODE_STRING ValueName_8; // [rsp+80h] [rbp-88h] BYREF
  void *v121; // [rsp+90h] [rbp-78h]
  unsigned __int8 v122; // [rsp+98h] [rbp-70h]
  unsigned __int8 v123; // [rsp+99h] [rbp-6Fh]
  size_t pcchRemaining; // [rsp+A0h] [rbp-68h] BYREF
  char *v125; // [rsp+A8h] [rbp-60h]
  PVOID v126; // [rsp+B0h] [rbp-58h] BYREF
  int v127; // [rsp+B8h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE KeyHandle[2]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID P; // [rsp+D8h] [rbp-30h]
  __int64 v131; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v132; // [rsp+E8h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  UNICODE_STRING v134; // [rsp+100h] [rbp-8h] BYREF
  _GUID fmtid; // [rsp+110h] [rbp+8h] BYREF
  __int128 pid; // [rsp+120h] [rbp+18h]
  __int128 v137; // [rsp+130h] [rbp+28h]
  __int128 v138; // [rsp+140h] [rbp+38h] BYREF
  __int128 v139; // [rsp+150h] [rbp+48h] BYREF
  __int128 v140; // [rsp+160h] [rbp+58h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+170h] [rbp+68h]
  UNICODE_STRING UnicodeString[10]; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v143[60]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v144[16]; // [rsp+308h] [rbp+200h] BYREF
  wchar_t SourceString; // [rsp+328h] [rbp+220h] BYREF
  wchar_t pszDest[8]; // [rsp+330h] [rbp+228h] BYREF

  v132 = 0LL;
  v2 = 0LL;
  KeyHandle[0] = 0LL;
  v3 = 0;
  Handle = 0LL;
  v131 = 0LL;
  v123 = 0;
  v122 = 0;
  v127 = 0;
  P = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  v134 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  fmtid = 0LL;
  pid = 0LL;
  v137 = 0LL;
  ValueName_8 = 0LL;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, KeyHandle);
  v6 = KeyHandle[0];
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_211;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)KeyHandle[0], (__int64)L"ComputerIds");
  *(_DWORD *)&ValueName_8.Length = 1572886;
  ValueName_8.Buffer = L"ComputerIds";
  v7 = IopCreateRegistryKeyEx(&Handle, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
  if ( v7 < 0 )
    goto LABEL_211;
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, (__int64)L"ProductIds");
  *(_DWORD *)&ValueName_8.Length = 1441812;
  ValueName_8.Buffer = L"ProductIds";
  ValueName_4 = IopCreateRegistryKeyEx(&v131, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
  v7 = ValueName_4;
  if ( ValueName_4 < 0 )
    goto LABEL_211;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 16)) == 0 )
  {
    v7 = -1073741637;
    goto LABEL_211;
  }
  v10 = *(_DWORD *)(v8 + 12);
  ValueName = v10;
  v11 = MmMapIoSpaceEx(v9, v10, 2u);
  v121 = (void *)v11;
  v12 = (void *)v11;
  if ( !v11 )
  {
    v7 = -1073741670;
    v2 = 0LL;
    v3 = v10;
    goto LABEL_211;
  }
  Struct = PipSmBiosFindStruct(1LL, 0LL, v11, v10);
  v15 = (unsigned __int8 *)Struct;
  if ( Struct )
  {
    v16 = (_BYTE *)(Struct + 5);
    if ( Struct + 5 <= Struct + (unsigned __int64)*(unsigned __int8 *)(Struct + 1) )
    {
      LOBYTE(v14) = *(_BYTE *)(Struct + 4);
      String = PipSmBiosGetString(Struct, v14, v12, v10, UnicodeString);
      ValueName_4 = String;
      v7 = String;
      if ( String == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( String < 0 )
      {
        goto LABEL_233;
      }
    }
    if ( v15 + 27 <= &v15[v15[1]] )
    {
      LOBYTE(v14) = v15[26];
      v18 = PipSmBiosGetString(v15, v14, v12, v10, &UnicodeString[1]);
      ValueName_4 = v18;
      v7 = v18;
      if ( v18 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v18 < 0 )
      {
        goto LABEL_233;
      }
    }
    if ( v15 + 6 <= &v15[v15[1]] )
    {
      LOBYTE(v14) = *v16;
      v19 = PipSmBiosGetString(v15, v14, v12, v10, &UnicodeString[2]);
      ValueName_4 = v19;
      v7 = v19;
      if ( v19 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_233;
      }
    }
    if ( v15 + 26 <= &v15[v15[1]] )
    {
      LOBYTE(v14) = v15[25];
      v20 = PipSmBiosGetString(v15, v14, v12, v10, &UnicodeString[3]);
      ValueName_4 = v20;
      v7 = v20;
      if ( v20 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v20 < 0 )
      {
        goto LABEL_233;
      }
    }
    if ( v15 + 7 <= &v15[v15[1]] )
    {
      LOBYTE(v14) = v15[6];
      v21 = PipSmBiosGetString(v15, v14, v12, v10, &UnicodeString[9]);
      ValueName_4 = v21;
      v7 = v21;
      if ( v21 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v21 < 0 )
      {
        goto LABEL_233;
      }
    }
  }
  LOBYTE(v14) = 10;
  v22 = PipSmBiosFindStruct(2LL, v14, v12, v10);
  v24 = v22;
  if ( v22 )
  {
    v25 = (_BYTE *)(v22 + 5);
    if ( v22 + 5 <= v22 + (unsigned __int64)*(unsigned __int8 *)(v22 + 1) )
    {
      LOBYTE(v23) = *(_BYTE *)(v22 + 4);
      v26 = PipSmBiosGetString(v22, v23, v12, v10, &UnicodeString[6]);
      ValueName_4 = v26;
      v7 = v26;
      if ( v26 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v26 < 0 )
      {
        goto LABEL_233;
      }
    }
    if ( v24 + 6 <= v24 + (unsigned __int64)*(unsigned __int8 *)(v24 + 1) )
    {
      LOBYTE(v23) = *v25;
      v27 = PipSmBiosGetString(v24, v23, v12, v10, &UnicodeString[7]);
      ValueName_4 = v27;
      v7 = v27;
      if ( v27 == -1073741275 )
      {
        ValueName_4 = 0;
      }
      else if ( v27 < 0 )
      {
        goto LABEL_233;
      }
    }
  }
  v28 = PipSmBiosFindStruct(0LL, 0LL, v12, v10);
  v30 = (unsigned __int8 *)v28;
  if ( !v28 )
    goto LABEL_44;
  v31 = (_BYTE *)(v28 + 5);
  if ( v28 + 5 <= v28 + (unsigned __int64)*(unsigned __int8 *)(v28 + 1) )
  {
    LOBYTE(v29) = *(_BYTE *)(v28 + 4);
    v32 = PipSmBiosGetString(v28, v29, v12, v10, &UnicodeString[4]);
    ValueName_4 = v32;
    v7 = v32;
    if ( v32 == -1073741275 )
    {
      ValueName_4 = 0;
    }
    else if ( v32 < 0 )
    {
      goto LABEL_233;
    }
  }
  if ( v30 + 6 <= &v30[v30[1]] )
  {
    LOBYTE(v29) = *v31;
    v33 = PipSmBiosGetString(v30, v29, v12, v10, &UnicodeString[5]);
    ValueName_4 = v33;
    v7 = v33;
    if ( v33 == -1073741275 )
    {
      ValueName_4 = 0;
    }
    else if ( v33 < 0 )
    {
      goto LABEL_233;
    }
  }
  if ( v30 + 9 <= &v30[v30[1]] )
  {
    LOBYTE(v29) = v30[8];
    v34 = PipSmBiosGetString(v30, v29, v12, v10, &UnicodeString[8]);
    ValueName_4 = v34;
    v7 = v34;
    if ( v34 == -1073741275 )
    {
      ValueName_4 = 0;
      goto LABEL_40;
    }
    if ( v34 < 0 )
    {
LABEL_233:
      v3 = v10;
      v2 = v12;
      goto LABEL_211;
    }
  }
LABEL_40:
  v35 = (unsigned __int64)&v30[v30[1]];
  if ( (unsigned __int64)(v30 + 21) <= v35 )
    v123 = v30[20];
  if ( (unsigned __int64)(v30 + 22) <= v35 )
    v122 = v30[21];
LABEL_44:
  v36 = PipSmBiosFindStruct(3LL, 0LL, v12, v10);
  if ( v36 && v36 + 6 <= v36 + (unsigned __int64)*(unsigned __int8 *)(v36 + 1) )
  {
    v37 = *(_BYTE *)(v36 + 5) & 0x7F;
    v127 = v37;
  }
  else
  {
    v37 = v127;
  }
  if ( v37 )
  {
    ValueName_8.Buffer = L"EnclosureType";
    *(_DWORD *)&ValueName_8.Length = 1835034;
    ZwSetValueKey(KeyHandle[0], &ValueName_8, 0, 4u, &v127, 4u);
  }
  v38 = UnicodeString;
  v39 = 0;
  v40 = 10LL;
  do
  {
    if ( v38->Buffer && !v38->Length )
      RtlFreeUnicodeString(&UnicodeString[v39]);
    ++v39;
    ++v38;
  }
  while ( v39 < 0xA );
  v41 = UnicodeString;
  v42 = 0;
  v43 = (PCWSTR *)off_1400089B0;
  do
  {
    RtlInitUnicodeString(&ValueName_8, *v43);
    if ( v41->Length )
    {
      if ( (int)PnpUnicodeStringToWstr(&v126, 0LL, &UnicodeString[v42].Length) >= 0 )
      {
        v44 = v126;
        v45 = -1LL;
        do
          ++v45;
        while ( *((_WORD *)v126 + v45) );
        ZwSetValueKey(KeyHandle[0], &ValueName_8, 0, 1u, v126, 2 * v45 + 2);
        PnpUnicodeStringToWstrFree(v44, (__int64)&UnicodeString[v42]);
      }
      v40 = 10LL;
    }
    else
    {
      ZwDeleteValueKey(KeyHandle[0], &ValueName_8);
    }
    ++v42;
    ++v43;
    ++v41;
  }
  while ( v42 < 0xA );
  Buffer = UnicodeString[0].Buffer;
  v47 = Handle;
  v48 = 0;
  v7 = ValueName_4;
  if ( UnicodeString[0].Buffer )
  {
    v49 = v131;
    if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
    {
      LODWORD(Data) = v122;
      v7 = RtlStringCchPrintfW(pszDest, 8uLL, L"%02x&%02x", v123, Data);
      if ( v7 < 0 )
        goto LABEL_272;
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( UnicodeString[3].Buffer )
      {
        *(_QWORD *)&v138 = UnicodeString;
        v50 = &UnicodeString[2];
        *((_QWORD *)&v138 + 1) = &UnicodeString[1];
        v51 = 4LL;
        v52 = &v139;
        do
        {
          *(_QWORD *)v52 = v50++;
          v52 = (__int128 *)((char *)v52 + 8);
          --v51;
        }
        while ( v51 );
        v144[0] = 0;
        p_DestinationString = &DestinationString;
        v7 = PipCreateComputerId(v47, v49, &v138, 7LL, v143);
        v48 = 1;
        if ( v7 < 0 )
          goto LABEL_272;
      }
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &UnicodeString[1];
      *(_QWORD *)&v139 = &UnicodeString[2];
      *((_QWORD *)&v139 + 1) = &UnicodeString[4];
      *(_QWORD *)&v140 = &UnicodeString[5];
      *((_QWORD *)&v140 + 1) = &DestinationString;
      v144[v48] = 1;
      v53 = PipCreateComputerId(v47, v49, &v138, 6LL, &v143[4 * v48]);
      v54 = v48 + 1;
      v7 = v53;
      if ( v53 < 0 )
        goto LABEL_272;
      *(_QWORD *)&v138 = UnicodeString;
      v144[v54] = 2;
      *((_QWORD *)&v138 + 1) = &UnicodeString[2];
      *(_QWORD *)&v139 = &UnicodeString[4];
      *((_QWORD *)&v139 + 1) = &UnicodeString[5];
      *(_QWORD *)&v140 = &DestinationString;
      v7 = PipCreateComputerId(v47, v49, &v138, 5LL, &v143[4 * (unsigned int)v54]);
      v48 = v54 + 1;
      if ( v7 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( UnicodeString[2].Buffer )
    {
      if ( UnicodeString[3].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          if ( UnicodeString[7].Buffer )
          {
            *(_QWORD *)&v138 = UnicodeString;
            v55 = &UnicodeString[2];
            v56 = 2LL;
            *((_QWORD *)&v138 + 1) = &UnicodeString[1];
            v57 = &v139;
            do
            {
              *(_QWORD *)v57 = v55++;
              v57 = (__int128 *)((char *)v57 + 8);
              --v56;
            }
            while ( v56 );
            v58 = &v140;
            v59 = 2LL;
            v60 = &UnicodeString[6];
            do
            {
              *(_QWORD *)v58 = v60++;
              v58 = (__int128 *)((char *)v58 + 8);
              --v59;
            }
            while ( v59 );
            v144[v48] = 3;
            v7 = PipCreateComputerId(v47, v49, &v138, 6LL, &v143[4 * v48++]);
            if ( v7 < 0 )
              goto LABEL_272;
          }
        }
        v61 = 2LL;
        *(_QWORD *)&v138 = UnicodeString;
        v62 = &UnicodeString[2];
        *((_QWORD *)&v138 + 1) = &UnicodeString[1];
        v63 = &v139;
        do
        {
          *(_QWORD *)v63 = v62++;
          v63 = (__int128 *)((char *)v63 + 8);
          --v61;
        }
        while ( v61 );
        v144[v48] = 4;
        v64 = PipCreateComputerId(v47, v49, &v138, 4LL, &v143[4 * v48++]);
        v7 = v64;
        if ( v64 < 0 )
          goto LABEL_272;
      }
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &UnicodeString[1];
      *(_QWORD *)&v139 = &UnicodeString[2];
      v144[v48] = 5;
      v7 = PipCreateComputerId(v47, v49, &v138, 3LL, &v143[4 * v48++]);
      if ( v7 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( UnicodeString[3].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          v65 = 2LL;
          *(_QWORD *)&v138 = UnicodeString;
          v66 = &UnicodeString[6];
          *((_QWORD *)&v138 + 1) = &UnicodeString[3];
          v67 = &v139;
          do
          {
            *(_QWORD *)v67 = v66++;
            v67 = (__int128 *)((char *)v67 + 8);
            --v65;
          }
          while ( v65 );
          v144[v48] = 6;
          v68 = PipCreateComputerId(v47, v49, &v138, 4LL, &v143[4 * v48++]);
          v7 = v68;
          if ( v68 < 0 )
            goto LABEL_272;
        }
      }
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &UnicodeString[3];
      v144[v48] = 7;
      v7 = PipCreateComputerId(v47, v49, &v138, 2LL, &v143[4 * v48++]);
      if ( v7 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( UnicodeString[2].Buffer )
    {
      if ( UnicodeString[6].Buffer )
      {
        if ( UnicodeString[7].Buffer )
        {
          *(_QWORD *)&v138 = UnicodeString;
          *((_QWORD *)&v138 + 1) = &UnicodeString[2];
          *(_QWORD *)&v139 = &UnicodeString[6];
          *((_QWORD *)&v139 + 1) = &UnicodeString[7];
          v144[v48] = 8;
          v69 = PipCreateComputerId(v47, v49, &v138, 4LL, &v143[4 * v48++]);
          v7 = v69;
          if ( v69 < 0 )
            goto LABEL_272;
        }
      }
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &UnicodeString[2];
      v144[v48] = 9;
      v7 = PipCreateComputerId(v47, v49, &v138, 2LL, &v143[4 * v48++]);
      if ( v7 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( UnicodeString[1].Buffer )
    {
      if ( UnicodeString[7].Buffer )
      {
        if ( UnicodeString[6].Buffer )
        {
          v70 = 2LL;
          *(_QWORD *)&v138 = UnicodeString;
          v71 = &UnicodeString[6];
          *((_QWORD *)&v138 + 1) = &UnicodeString[1];
          v72 = &v139;
          do
          {
            *(_QWORD *)v72 = v71++;
            v72 = (__int128 *)((char *)v72 + 8);
            --v70;
          }
          while ( v70 );
          v144[v48] = 10;
          v73 = PipCreateComputerId(v47, v49, &v138, 4LL, &v143[4 * v48++]);
          v7 = v73;
          if ( v73 < 0 )
            goto LABEL_272;
        }
      }
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &UnicodeString[1];
      v144[v48] = 11;
      v74 = PipCreateComputerId(v47, v49, &v138, 2LL, &v143[4 * v48++]);
      v7 = v74;
      if ( v74 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( v127 )
    {
      v7 = RtlStringCchPrintfW(&SourceString, 4uLL, L"%x");
      if ( v7 < 0 )
        goto LABEL_272;
      RtlInitUnicodeString(&v134, &SourceString);
      *(_QWORD *)&v138 = UnicodeString;
      *((_QWORD *)&v138 + 1) = &v134;
      v144[v48] = 12;
      v7 = PipCreateComputerId(v47, 0LL, &v138, 2LL, &v143[4 * v48++]);
      if ( v7 < 0 )
        goto LABEL_272;
      Buffer = UnicodeString[0].Buffer;
    }
    if ( !Buffer )
      goto LABEL_126;
    if ( !UnicodeString[7].Buffer )
      goto LABEL_275;
    if ( !UnicodeString[6].Buffer )
      goto LABEL_275;
    v75 = 2LL;
    *(_QWORD *)&v138 = UnicodeString;
    v76 = &UnicodeString[6];
    v77 = (_QWORD *)&v138 + 1;
    do
    {
      *v77++ = v76++;
      --v75;
    }
    while ( v75 );
    v144[v48] = 13;
    v7 = PipCreateComputerId(v47, 0LL, &v138, 3LL, &v143[4 * v48++]);
    if ( v7 >= 0 )
    {
LABEL_275:
      *(_QWORD *)&v138 = UnicodeString;
      v144[v48] = 14;
      v78 = PipCreateComputerId(v47, 0LL, &v138, 1LL, &v143[4 * v48++]);
      v7 = v78;
      if ( v78 >= 0 )
        goto LABEL_126;
    }
LABEL_272:
    v2 = v121;
    v3 = ValueName;
    goto LABEL_212;
  }
LABEL_126:
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 112 * v48 + 2, 0x6E697050u);
  v80 = Pool2;
  if ( Pool2 )
  {
    ValueName_8.Buffer = Pool2;
    v81 = Pool2;
    v82 = 112 * v48 + 2;
    v83 = 0;
    ValueName_8.MaximumLength = v82;
    if ( v48 )
    {
      while ( 1 )
      {
        ValueName_8.Length = 0;
        if ( (ValueName_8.MaximumLength & 1) != 0 || v82 == 0xFFFF || !v81 && v82 )
          break;
        v84 = 0LL;
        v85 = (unsigned __int64)v82 >> 1;
        if ( v85 )
        {
          v7 = 0;
          v86 = 0x7FFFLL;
          v87 = L"ComputerMetadata\\";
          v88 = v85;
          while ( v86 )
          {
            if ( *v87 != (_WORD)v132 )
            {
              *(const wchar_t *)((char *)v87 + (char *)v81 - (char *)L"ComputerMetadata\\") = *v87;
              --v88;
              --v86;
              ++v84;
              ++v87;
              if ( v88 )
                continue;
            }
            if ( !v88 && v86 && *v87 )
              v7 = -2147483643;
            break;
          }
          v81 += v84;
          LOWORD(v85) = v85 - v84;
        }
        else
        {
          v7 = v81 != 0LL ? -2147483643 : -1073741811;
        }
        ValueName_8.Length = 2 * v84;
        if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
        {
          ValueName_8.Length = 0;
          ValueName_8.MaximumLength = 2 * v85;
          ValueName_8.Buffer = v81;
        }
        if ( v7 < 0 )
          goto LABEL_248;
        v7 = RtlStringFromGUIDEx(&v143[4 * v83], (__int64)&ValueName_8, 0);
        if ( v7 < 0 )
          goto LABEL_248;
        v7 = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
        if ( v7 < 0 )
          goto LABEL_248;
        v82 = ValueName_8.MaximumLength - 78;
        v81 = ValueName_8.Buffer + 39;
        ValueName_8.MaximumLength -= 78;
        ValueName_8.Buffer += 39;
        if ( ++v83 >= v48 )
          goto LABEL_147;
      }
LABEL_247:
      v7 = -1073741811;
      goto LABEL_248;
    }
LABEL_147:
    if ( v7 >= 0 )
    {
      *v81 = 0;
      ++ValueName_8.Buffer;
      v7 = PnpSetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
             5u,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_HardwareIds,
             8210,
             (__int64)v80,
             112 * v48 + 2,
             0);
      if ( v7 >= 0 )
      {
        v89 = 96 * v48 + 2;
        v90 = (void *)ExAllocatePool2(256LL, 96 * v48 + 2, 0x6E697050u);
        P = v90;
        v91 = v90;
        if ( v90 )
        {
          ValueName_8.Buffer = (wchar_t *)v90;
          v92 = (wchar_t *)v90;
          ValueName_8.MaximumLength = 96 * v48 + 2;
          v93 = 0;
          if ( v48 )
          {
            v94 = v144;
            do
            {
              v95 = *v94;
              ValueName_8.Length = 0;
              if ( *((_BYTE *)qword_1400207A0 + v95) )
              {
                if ( (ValueName_8.MaximumLength & 1) != 0 || v89 == 0xFFFF || !v92 && v89 )
                  goto LABEL_247;
                v96 = 0LL;
                v97 = (unsigned __int64)v89 >> 1;
                if ( v97 )
                {
                  v7 = 0;
                  v98 = 0x7FFFLL;
                  v99 = L"COMPUTER\\";
                  v100 = v97;
                  while ( v98 )
                  {
                    if ( *v99 != (_WORD)v132 )
                    {
                      *(const wchar_t *)((char *)v99 + (char *)v92 - (char *)L"COMPUTER\\") = *v99;
                      --v100;
                      --v98;
                      ++v96;
                      ++v99;
                      if ( v100 )
                        continue;
                    }
                    if ( !v100 && v98 && *v99 )
                      v7 = -2147483643;
                    break;
                  }
                  v92 += v96;
                  LOWORD(v97) = v97 - v96;
                }
                else
                {
                  v7 = v92 != 0LL ? -2147483643 : -1073741811;
                }
                ValueName_8.Length = 2 * v96;
                if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
                {
                  ValueName_8.Length = 0;
                  ValueName_8.MaximumLength = 2 * v97;
                  ValueName_8.Buffer = v92;
                }
                if ( v7 < 0 )
                  goto LABEL_248;
                v7 = RtlStringFromGUIDEx(&v143[4 * v93], (__int64)&ValueName_8, 0);
                if ( v7 < 0 )
                  goto LABEL_248;
                v7 = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
                if ( v7 < 0 )
                  goto LABEL_248;
                v92 = ValueName_8.Buffer + 39;
                ValueName_8.Buffer += 39;
                v89 = ValueName_8.MaximumLength - 78;
                ValueName_8.MaximumLength -= 78;
              }
              ++v93;
              ++v94;
            }
            while ( v93 < v48 );
            v91 = P;
          }
          *v92 = 0;
          ++ValueName_8.Buffer;
          v101 = (wchar_t *)ExAllocatePool2(256LL, 0x190uLL, 0x6E697050u);
          v102 = v101;
          if ( v101 )
          {
            v126 = v101;
            pcchRemaining = 200LL;
            if ( UnicodeString[0].Length <= 2u )
            {
              RtlInitUnicodeString(&ValueName_8, L"Unknown");
            }
            else
            {
              ValueName_8.Buffer = UnicodeString[0].Buffer;
              ValueName_8.MaximumLength = UnicodeString[0].MaximumLength;
              if ( UnicodeString[0].Length > 0x46u )
                ValueName_8.Length = 70;
              else
                ValueName_8.Length = UnicodeString[0].Length;
            }
            v7 = RtlStringCchPrintfExW(
                   v102,
                   0xC8uLL,
                   (NTSTRSAFE_PWSTR *)&v126,
                   &pcchRemaining,
                   0x800u,
                   L"MFG_%wZ",
                   &ValueName_8);
            if ( v7 < 0 )
              goto LABEL_266;
            if ( UnicodeString[1].Length > 2u )
            {
              ValueName_8.Buffer = UnicodeString[1].Buffer;
              ValueName_8.MaximumLength = UnicodeString[1].MaximumLength;
              ValueName_8.Length = 70;
              if ( UnicodeString[1].Length <= 0x46u )
                ValueName_8.Length = UnicodeString[1].Length;
              v7 = RtlStringCchPrintfExW(
                     (NTSTRSAFE_PWSTR)v126,
                     pcchRemaining,
                     (NTSTRSAFE_PWSTR *)&v126,
                     &pcchRemaining,
                     0x800u,
                     L"&FAM_%wZ",
                     &ValueName_8);
              if ( v7 < 0 )
                goto LABEL_266;
            }
            Length = UnicodeString[2].Length;
            if ( UnicodeString[2].Length > 2u )
            {
              ValueName_8.Buffer = UnicodeString[2].Buffer;
              ValueName_8.MaximumLength = UnicodeString[2].MaximumLength;
              ValueName_8.Length = 70;
              if ( UnicodeString[2].Length <= 0x46u )
                ValueName_8.Length = UnicodeString[2].Length;
              v7 = RtlStringCchPrintfExW(
                     (NTSTRSAFE_PWSTR)v126,
                     pcchRemaining,
                     (NTSTRSAFE_PWSTR *)&v126,
                     &pcchRemaining,
                     0x800u,
                     L"&PROD_%wZ",
                     &ValueName_8);
              if ( v7 < 0 )
                goto LABEL_266;
              Length = UnicodeString[2].Length;
            }
            if ( UnicodeString[3].Length <= 2u )
            {
LABEL_190:
              v104 = *v102;
              v105 = v102;
              if ( *v102 )
              {
                do
                {
                  if ( (unsigned __int16)(v104 - 33) > 0x5Eu || v104 == 44 || v104 == 92 )
                    *v105 = 95;
                  v104 = *++v105;
                }
                while ( *v105 );
                Length = UnicodeString[2].Length;
              }
              v106 = (char *)ExAllocatePool2(256LL, UnicodeString[0].Length + 4 + (unsigned int)Length, 0x6E697050u);
              v107 = v106;
              if ( v106 )
              {
                v108 = v106;
                if ( UnicodeString[0].Length >= 2u )
                {
                  memmove(v106, UnicodeString[0].Buffer, UnicodeString[0].Length);
                  v106 = &v108[2 * ((unsigned __int64)UnicodeString[0].Length >> 1)];
                  v108 = v106;
                }
                v109 = UnicodeString[2].Length;
                if ( UnicodeString[2].Length >= 2u )
                {
                  if ( v108 != v107 )
                  {
                    v108 += 2;
                    *(_WORD *)v106 = 32;
                    v109 = UnicodeString[2].Length;
                  }
                  memmove(v108, UnicodeString[2].Buffer, v109);
                  v106 = &v108[2 * ((unsigned __int64)UnicodeString[2].Length >> 1)];
                  v108 = v106;
                }
                *(_WORD *)v106 = 0;
                pid = DEVPKEY_Device_FriendlyName.pid;
                fmtid = DEVPKEY_Device_FriendlyName.fmtid;
                LODWORD(v137) = 18;
                *((_QWORD *)&v137 + 1) = v107;
                DWORD1(v137) = 2 * ((v108 - v107) >> 1) + 2;
                v110 = PiSwStartCreate(
                         L"COMPUTER",
                         *((const wchar_t **)IopRootDeviceNode + 6),
                         v102,
                         (__int64)v91,
                         (__int64)L"COMPUTER\\Generic",
                         0LL,
                         0,
                         (__int64)v107,
                         0LL,
                         0LL,
                         0,
                         (__int64)&fmtid,
                         1);
                if ( v110 < 0 && (byte_140C0E10C & 4) != 0 )
                  McTemplateK0d_EtwWriteTransfer(
                    v111,
                    (const EVENT_DESCRIPTOR *)KMPnPEvt_CreateOemDevice_Failure,
                    v112,
                    v110);
              }
              else
              {
                v7 = -1073741670;
              }
              goto LABEL_204;
            }
            ValueName_8.Buffer = UnicodeString[3].Buffer;
            ValueName_8.MaximumLength = UnicodeString[3].MaximumLength;
            ValueName_8.Length = 70;
            if ( UnicodeString[3].Length <= 0x46u )
              ValueName_8.Length = UnicodeString[3].Length;
            v7 = RtlStringCchPrintfExW(
                   (NTSTRSAFE_PWSTR)v126,
                   pcchRemaining,
                   (NTSTRSAFE_PWSTR *)&v126,
                   &pcchRemaining,
                   0x800u,
                   L"&SKU_%wZ",
                   &ValueName_8);
            if ( v7 >= 0 )
            {
              Length = UnicodeString[2].Length;
              goto LABEL_190;
            }
          }
          else
          {
            v7 = -1073741670;
          }
LABEL_266:
          v107 = v125;
          goto LABEL_204;
        }
        v7 = -1073741670;
      }
    }
LABEL_248:
    v107 = v125;
    v102 = (wchar_t *)v125;
LABEL_204:
    ExFreePoolWithTag(v80, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v102 )
      ExFreePoolWithTag(v102, 0);
    if ( v107 )
      ExFreePoolWithTag(v107, 0);
    goto LABEL_210;
  }
  v7 = -1073741670;
LABEL_210:
  v3 = ValueName;
  v2 = v121;
LABEL_211:
  v40 = 10LL;
LABEL_212:
  v113 = UnicodeString;
  do
  {
    RtlFreeUnicodeString(v113++);
    --v40;
  }
  while ( v40 );
  v115 = Handle;
  if ( v2 )
    MmUnmapIoSpace(v2, v3);
  if ( v115 )
    ZwClose(v115);
  if ( KeyHandle[0] )
    PnpCtxRegCloseKey(v114, KeyHandle[0]);
  return (unsigned int)v7;
}
