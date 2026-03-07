__int64 __fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int started; // eax
  unsigned int v7; // edi
  unsigned int ControlSet; // eax
  __int64 CellPaged; // rax
  ULONG_PTR v10; // rdi
  unsigned int SubKeyByName; // r15d
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // esi
  unsigned int ValueByName; // esi
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 result; // rax
  unsigned int *v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  wchar_t *v26; // rcx
  __int64 CellFlat; // rax
  int v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v34[54]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = CmControlVector;
  LOWORD(v28) = 0;
  v31 = 0;
  v30 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v33 = 0LL;
  DestinationString = 0LL;
  memset(&v34[1], 0, 0x1A8uLL);
  CmpInitializeThreadInfo((__int64)&v33);
  memset(&CmControlHive, 0, 0x12D8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v34[0] = &CmControlHive;
  qword_140D85D18 = (__int64)v34;
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4LL,
              1,
              0LL,
              a1,
              0LL,
              1,
              0LL,
              0,
              0LL,
              0LL,
              &v28,
              0LL,
              (__int64)v34);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_140D85D18 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    if ( (byte_140D85D6C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v7, &v29);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v7, (unsigned int *)&v29);
    if ( !CellFlat )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive);
    if ( SubKeyByName == -1 )
      goto LABEL_32;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v7, (int)&DestinationString, (_BYTE *)&v28 + 1);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    if ( (byte_140D85D6C & 1) != 0 )
      CellPaged = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ControlSet, &v29);
    else
      CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ControlSet, (unsigned int *)&v29);
    v10 = CellPaged;
    if ( !CellPaged )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v10, (ULONG_PTR)&DestinationString);
  }
  if ( (byte_140D85D6C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, &v29);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v29);
  if ( CmControlVector[0] )
  {
    do
    {
      if ( a3 != 1 || *((_BYTE *)v3 + 40) )
      {
        v13 = -1;
        v14 = CmpWalkPath((ULONG_PTR)&CmControlHive, SubKeyByName, *v3);
        if ( v14 != -1 )
        {
          if ( (byte_140D85D6C & 1) != 0 )
            v15 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v14, &v29);
          else
            v15 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v14, (unsigned int *)&v29);
          v16 = v15;
          if ( !v15 )
            goto LABEL_32;
          RtlInitUnicodeString(&DestinationString, v3[1]);
          ValueByName = CmpFindValueByName((int)&CmControlHive, v16, (int)&DestinationString);
          if ( (byte_140D85D6C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, &v29);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v29);
          if ( ValueByName != -1 )
          {
            v21 = (unsigned int *)v3[3];
            v22 = 4;
            if ( v21 )
              v22 = *v21;
            if ( (byte_140D85D6C & 1) != 0 )
              v23 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ValueByName, &v30);
            else
              v23 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName, (unsigned int *)&v30);
            v24 = v23;
            if ( !v23 )
              goto LABEL_32;
            v25 = *(_DWORD *)(v23 + 4);
            LOBYTE(v28) = v25 >= 0x80000000;
            v13 = v25 + 0x80000000;
            if ( v25 < 0x80000000 )
              v13 = v25;
            if ( v22 < v13 )
              v13 = v22;
            if ( v13 && !(unsigned __int8)CmpGetBootValueData(0x80000000LL, v24, v3[2], v13) )
            {
              if ( (byte_140D85D6C & 1) != 0 )
                HvpReleaseCellFlat((__int64)&CmControlHive, &v30);
              else
                HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v30);
              goto LABEL_32;
            }
            v26 = v3[4];
            if ( v26 )
              *(_DWORD *)v26 = *(_DWORD *)(v24 + 12);
            if ( (byte_140D85D6C & 1) != 0 )
              HvpReleaseCellFlat((__int64)&CmControlHive, &v30);
            else
              HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v30);
          }
        }
        v18 = (unsigned int *)v3[3];
        if ( v18 )
          *v18 = v13;
      }
      v3 += 6;
    }
    while ( *v3 );
  }
  if ( CmDefaultLanguageIdType == 1 )
  {
    PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                  CmDefaultLanguageId,
                                                  (unsigned int)CmDefaultLanguageIdLength);
  }
  else if ( !a3 )
  {
    PsDefaultSystemLocaleId = 1033;
  }
  if ( CmInstallUILanguageIdType == 1 )
    PsInstallUILanguageId = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
  if ( !a3 )
  {
    v19 = CmSelectQualifiedInstallLanguage(v12, SubKeyByName, &v31, (unsigned __int16)PsInstallUILanguageId);
    if ( v19 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v19, 0LL, 0LL);
      PsInstallUILanguageId = PsDefaultSystemLocaleId;
    }
    else if ( (unsigned __int16)PsInstallUILanguageId != v31 )
    {
      PsInstallUILanguageId = v31;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
  }
  PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
  if ( !PsMachineUILanguageId || a3 == 1 )
    PsMachineUILanguageId = PsInstallUILanguageId;
LABEL_32:
  result = v33;
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v33;
  return result;
}
