/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x140B333A8
 * Callers:
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     DownLevelLanguageNameToLangID @ 0x14036F74C (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCompressedName @ 0x1407A47DC (CmpCopyCompressedName.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpWalkPath @ 0x1407FE938 (CmpWalkPath.c)
 *     CmpValueToData @ 0x1407FEFF8 (CmpValueToData.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  char v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // esi
  unsigned int ValueByName; // esi
  unsigned int v13; // eax
  __int64 v14; // rax
  bool v15; // si
  _DWORD *v16; // r12
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 CellFlat; // rax
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // r15d
  ULONG_PTR v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned __int64 v28; // rax
  unsigned __int16 v29; // ax
  int v30; // esi
  ULONG_PTR v31; // rax
  PVOID v32; // rax
  char v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+31h] [rbp-CFh]
  unsigned int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+5Ch] [rbp-A4h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v47; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v36 = a4;
  LODWORD(BugCheckParameter4) = 0;
  v39 = 0xFFFFFFFFLL;
  v43 = 0xFFFFFFFFLL;
  v44 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v46 = 0xFFFFFFFFLL;
  v45 = 0xFFFFFFFFLL;
  v47 = a3;
  DestinationString = 0LL;
  v7 = 0;
  v33 = 0;
  v34 = 0;
  v41 = 0;
  v40 = 0;
  LODWORD(Size) = 0;
  memset(v50, 0, 0xAAuLL);
  memset(Str2, 0, 0xAAuLL);
  memset(Str1, 0, 0xAAuLL);
  if ( !a3 )
    return 1LL;
  *a3 = 0;
  if ( a4 )
  {
    v8 = 70;
    if ( !(unsigned int)DownLevelLangIDToLanguageName(a4, Str1, 85, 0) )
      v36 = 0;
  }
  else
  {
    v8 = 38;
  }
  v9 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\Settings");
  if ( v9 != -1 )
  {
    v10 = (byte_140D85D6C & 1) != 0
        ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v9, &v43)
        : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v9, (unsigned int *)&v43);
    v11 = v10;
    if ( v10 )
    {
      RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
      ValueByName = CmpFindValueByName((int)&CmControlHive, v11, (int)&DestinationString);
      if ( ValueByName != -1 )
      {
        v31 = (byte_140D85D6C & 1) != 0
            ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, ValueByName, &v39)
            : HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName, (unsigned int *)&v39);
        if ( v31 )
        {
          if ( *(_DWORD *)(v31 + 12) == 7 )
          {
            v32 = CmpValueToData((ULONG_PTR)&CmControlHive, ValueByName, v31, (unsigned int *)&Size);
            if ( v32 )
            {
              if ( (unsigned int)Size < 0xA8 )
              {
                memmove(v50, v32, (unsigned int)Size);
                PsMachineUILanguageId = DownLevelLanguageNameToLangID(v50, 0);
              }
              if ( (byte_140D85D6C & 1) != 0 )
                HvpReleaseCellFlat((__int64)&CmControlHive, &v45);
              else
                HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v45);
            }
          }
          if ( (byte_140D85D6C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, &v39);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v39);
        }
      }
      if ( (byte_140D85D6C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, &v43);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v43);
    }
  }
  v13 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\UILanguages");
  if ( v13 == -1 )
    return v8;
  v14 = (byte_140D85D6C & 1) != 0
      ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v13, &v44)
      : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v13, (unsigned int *)&v44);
  v15 = 0;
  v16 = (_DWORD *)v14;
  if ( !v14 )
    return v8;
  v8 &= ~2u;
  v17 = 0;
LABEL_17:
  v18 = v36;
  while ( 1 )
  {
    CmpFindSubKeyByNumber((ULONG_PTR)&CmControlHive, v16, v17++, &BugCheckParameter4);
    v35 = v17;
    if ( (_DWORD)BugCheckParameter4 == -1 )
      break;
    if ( (byte_140D85D6C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, (unsigned int)BugCheckParameter4, &v37);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, BugCheckParameter4, (unsigned int *)&v37);
    v21 = CellFlat;
    if ( !CellFlat )
      goto LABEL_17;
    RtlInitUnicodeString(&DestinationString, L"Type");
    v22 = CmpFindValueByName((int)&CmControlHive, v21, (int)&DestinationString);
    v23 = v22;
    if ( v22 == -1 )
      goto LABEL_90;
    v24 = (byte_140D85D6C & 1) != 0
        ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v22, &v39)
        : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v22, (unsigned int *)&v39);
    if ( !v24 )
      goto LABEL_90;
    if ( *(_DWORD *)(v24 + 12) == 4 )
    {
      v25 = *(_DWORD *)CmpValueToData((ULONG_PTR)&CmControlHive, v23, v24, (unsigned int *)&Size);
      v40 = v25;
      if ( (v25 & 3) != 0 )
        v15 = (v25 & 0x10) != 0;
      if ( (byte_140D85D6C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, &v46);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v46);
    }
    if ( (byte_140D85D6C & 1) != 0 )
      HvpReleaseCellFlat((__int64)&CmControlHive, &v39);
    else
      HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v39);
    if ( !v15 )
    {
LABEL_90:
      if ( (byte_140D85D6C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, &v37);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v37);
      v17 = v35;
      v18 = v36;
      goto LABEL_58;
    }
    v26 = *(unsigned __int16 *)(v21 + 72);
    if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
    {
      v27 = (unsigned __int16)(2 * v26);
      if ( v27 > 0xA8 )
        goto LABEL_90;
      CmpCopyCompressedName(Str2, v27, (unsigned __int8 *)(v21 + 76), v26);
    }
    else
    {
      v27 = *(unsigned __int16 *)(v21 + 72);
      if ( v26 > 0xA8 )
        goto LABEL_90;
      memmove(Str2, (const void *)(v21 + 76), *(unsigned __int16 *)(v21 + 72));
    }
    if ( (byte_140D85D6C & 1) != 0 )
      HvpReleaseCellFlat((__int64)&CmControlHive, &v37);
    else
      HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v37);
    v28 = v27 & 0xFFFFFFFE;
    if ( v28 >= 0xAA )
      _report_rangecheckfailure();
    *(wchar_t *)((char *)Str2 + v28) = 0;
    v29 = DownLevelLanguageNameToLangID(Str2, 0);
    v17 = v35;
    v18 = v36;
    v30 = v29;
    if ( v29 && v29 != 127 )
    {
      if ( v36 && !v34 && !wcsicmp(Str1, Str2) )
      {
        v34 = 1;
        v8 &= ~0x40u;
      }
      v17 = v35;
      if ( v33 )
      {
        if ( !v7 && (v40 & 2) != 0 )
        {
          v7 = 1;
          v41 = v30;
        }
      }
      else if ( !v7 )
      {
        v41 = v30;
        if ( (v40 & 2) != 0 )
          v7 = 1;
        else
          v33 = 1;
      }
    }
LABEL_58:
    v15 = 0;
  }
  if ( (byte_140D85D6C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, &v44);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v44);
  if ( v33 || v7 )
    v8 &= ~4u;
  if ( v34 )
  {
    *v47 = v18;
    return 0;
  }
  if ( v7 || v33 )
  {
    *v47 = v41;
    return 0;
  }
  return v8;
}
