/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1408303C0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14083008C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1403C5DE0 (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403C5F68 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403C624C (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1407F4A10 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140830768 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140830B1C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x140830CF4 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14085EE64 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x140A36858 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x140A36A94 (_RtlpMuiRegValidatePartialLanguage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  int v2; // r15d
  void *v3; // r12
  __int16 v4; // di
  int v5; // esi
  unsigned __int16 v6; // r14
  unsigned int v7; // r13d
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int16 v21; // r11
  unsigned int v22; // r8d
  int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // r8
  PVOID v26; // rax
  __int64 v27; // r8
  bool v28; // sf
  __int16 v29; // ax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // cx
  _WORD v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v34; // [rsp+2Ch] [rbp-DCh] BYREF
  PVOID v35; // [rsp+30h] [rbp-D8h]
  _DWORD v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v37; // [rsp+40h] [rbp-C8h]
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v39[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v40[176]; // [rsp+78h] [rbp-90h] BYREF

  v33[0] = 0;
  v2 = 0;
  v36[1] = 0;
  v3 = 0LL;
  v35 = 0LL;
  v4 = -1;
  v34 = -1;
  v5 = -1;
  memset(v39, 0, 28);
  v38 = 0LL;
  memset(v40, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(v33);
    if ( (int)result < 0 )
      return result;
    v6 = v33[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &v34);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v33[0] = -1;
    v26 = MuiRegAllocArray(v10, 0x55u);
    v35 = v26;
    v3 = v26;
    if ( !v26 )
      return 3221225495LL;
    v37 = v26;
    v36[0] = 11141120;
    if ( !(unsigned __int8)RtlLCIDToCultureName(v6, v36) )
      goto LABEL_12;
    LOBYTE(v27) = 1;
    v28 = (int)RtlpMuiRegGetOrAddString(a1, v37, v27, v33) < 0;
    v29 = -1;
    if ( !v28 )
      v29 = v33[0];
    HIWORD(v39[0]) = v29;
    LODWORD(v39[0]) = 49;
    WORD2(v39[0]) = v6;
    memset(&v39[1], 0, 20);
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, v39, 0LL) < 0 )
      goto LABEL_12;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = *(unsigned __int16 *)(v11 + 6) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v5 = v34;
    v11 = *(_QWORD *)(a1 + 24);
LABEL_8:
    if ( v5 != -1 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      *((_QWORD *)&v38 + 1) = v40;
      WORD1(v38) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v5 + v12, (__int64)&v38) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, *((_QWORD *)&v38 + 1)) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) |= 0x8000u;
        }
        else
        {
          v2 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v4 = v5;
  RtlpRemovePendingDeleteLanguages(a1, v4);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = 0LL;
    do
    {
      v13 = v15;
      if ( (*(_BYTE *)(v16 + *(_QWORD *)(v15 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v14);
        v30 = v2 + 1;
        v13 = *(_QWORD *)(a1 + 24);
        v31 = *(_QWORD *)(v13 + 16);
        v32 = *(_WORD *)(v31 + v16);
        if ( (v32 & 0x1000) != 0 )
          v30 = v2;
        v2 = v30;
        if ( !v7 && v14 != v5 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v31 + v16) = v32 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v16) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v14;
      v16 += 28LL;
      v15 = v13;
    }
    while ( v14 < *(unsigned __int16 *)(v13 + 6) );
    v3 = v35;
  }
  v17 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v18 = v13;
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v18 + 16);
      v13 = v18;
      v21 = *(_WORD *)(v20 + v19);
      if ( (v21 & 0x21) == 0x21 )
      {
        v22 = v2 + 1;
        if ( (v21 & 0x1000) != 0 )
          v22 = v2;
        v2 = v22;
        if ( !v7 && v17 != v5 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v17;
      v19 += 28LL;
      v18 = v13;
    }
    while ( v17 < *(unsigned __int16 *)(v13 + 6) );
    v3 = v35;
  }
  v23 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = v13;
      if ( (*(_BYTE *)(v24 + *(_QWORD *)(v13 + 16)) & 4) != 0 )
      {
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v23, v13);
        v25 = *(_QWORD *)(a1 + 24);
      }
      ++v23;
      v24 += 28LL;
      v13 = v25;
    }
    while ( v23 < *(unsigned __int16 *)(v25 + 6) );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return 0LL;
}
