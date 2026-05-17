/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180035CA0
 * Callers:
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EC00 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003C098 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E734 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006FD10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070000 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18007093C (RtlpSetProcMergedLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x1800709A8 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegDupLanguageList @ 0x180079500 (RtlpMuiRegDupLanguageList.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, __int64 a2, _WORD *a3, _DWORD *a4)
{
  int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r15d
  __int64 result; // rax
  int PreferredUILanguages; // ebx
  __int64 v11; // r12
  void *MergedPrefLanguages; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  __int64 *v19; // r14
  char v20; // [rsp+58h] [rbp-39h]
  char v21; // [rsp+59h] [rbp-38h]
  __int64 v22; // [rsp+60h] [rbp-31h] BYREF
  void *v23; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  void *PreferredLanguages; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+88h] [rbp-9h]
  __int64 v28; // [rsp+90h] [rbp-1h] BYREF
  int v29; // [rsp+98h] [rbp+7h]
  __int64 v30; // [rsp+A0h] [rbp+Fh]
  char v31; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+100h] [rbp+6Fh]
  _WORD *v33; // [rsp+108h] [rbp+77h]
  _DWORD *v34; // [rsp+110h] [rbp+7Fh]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v4 = a1 & 0x30;
  v27 = 0;
  v24 = 0;
  v5 = 0LL;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v21 = 0;
  v25 = 0LL;
  v29 = v4;
  if ( a4 )
    v27 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_33;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_33;
  }
  else
  {
    a1 |= 8u;
  }
  if ( (a1 & 0x10000) != 0 )
  {
    if ( (a1 & 0x40) != 0 || (a1 & 0x30) != 0 )
      goto LABEL_33;
    a1 |= 0x30u;
  }
  if ( (a1 & 0x40) != 0 && (a1 & 0x30) != 0 )
    goto LABEL_33;
  v8 = a1 | 0x20;
  if ( (a1 & 0x70) != 0 )
    v8 = a1;
  if ( !a4 )
    goto LABEL_33;
  if ( !*a4 || a3 )
  {
    if ( (v8 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v22);
      if ( (int)result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v7 = v22;
        if ( *(_DWORD *)(v22 + 12) == MEMORY[0x7FFE03A4] || (int)RtlUpdateProcessRegistryInfo() < 0 )
          goto LABEL_17;
        v22 = 0LL;
        PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v22);
        if ( PreferredUILanguages < 0 )
          goto LABEL_99;
      }
      v7 = v22;
LABEL_17:
      if ( (v8 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v7 = v22;
        goto LABEL_21;
      }
      v31 = 0;
      PreferredLanguages = 0LL;
      if ( *(_DWORD *)(v7 + 12) == MEMORY[0x7FFE03A4] )
      {
LABEL_21:
        if ( (v8 & 0x40) == 0 )
        {
          PreferredUILanguages = InitializeTEBUserLangList(0LL, v7);
          if ( PreferredUILanguages < 0 )
            goto LABEL_34;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v7 = v22;
          v25 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v22 + 48);
          PreferredUILanguages = RtlpSetProcUserMachineLangList(v22, 0LL);
          if ( PreferredUILanguages < 0 )
            goto LABEL_34;
          v6 = *(_QWORD *)(v7 + 56);
        }
        if ( NtCurrentTeb()->MergedPrefLanguages )
        {
          v20 = 1;
          if ( v4 == 48 )
          {
            if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
              && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v22 + 16) )
            {
              v7 = v22;
              v11 = v25;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v23 = MergedPrefLanguages;
              goto LABEL_43;
            }
            v20 = 0;
            RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
            NtCurrentTeb()->MergedPrefLanguages = 0LL;
          }
          goto LABEL_60;
        }
        v20 = 0;
        if ( v4 != 48 || PreferredLanguages )
        {
LABEL_60:
          v7 = v22;
          goto LABEL_61;
        }
        v7 = v22;
        v17 = *(_QWORD *)(v22 + 96);
        if ( v17 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && *(char *)(v17 + 40) >= 0 )
        {
          v7 = v22;
          v11 = v25;
          v23 = *(void **)(v22 + 96);
          NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v22 + 16);
LABEL_42:
          MergedPrefLanguages = v23;
LABEL_43:
          PreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                   (_DWORD)MergedPrefLanguages,
                                   v7,
                                   (_DWORD)v33,
                                   (_DWORD)v34,
                                   v8,
                                   0,
                                   v32);
          if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789) && v4 == 48 )
          {
            if ( !*((_WORD *)MergedPrefLanguages + 22) )
              RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
            if ( !v20 )
            {
              if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) == 0 )
              {
                RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
                if ( !PreferredLanguages && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v11 == *(_QWORD *)(v7 + 48) )
                  RtlpSetProcMergedLangList(v7, MergedPrefLanguages);
              }
              NtCurrentTeb()->MergedPrefLanguages = v23;
              v7 = v22;
              NtCurrentTeb()->MuiGeneration = v24;
            }
            MergedPrefLanguages = 0LL;
            v23 = 0LL;
          }
          goto LABEL_49;
        }
LABEL_61:
        if ( (v8 & 0x10000) == 0 )
        {
          RtlpInitMuiCriticalSection();
          RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
          v30 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v7 + 72));
          v24 = *(_DWORD *)(v7 + 16);
          RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v15, v16);
        }
        PreferredUILanguages = LdrpCreateLangFallbackList(&v23, v7, 25LL);
        if ( PreferredUILanguages < 0 )
          goto LABEL_107;
        if ( (v8 & 0x40) != 0 )
        {
          v11 = v25;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v8,
                                   v7,
                                   (unsigned int)&v23,
                                   (_DWORD)PreferredLanguages,
                                   0LL,
                                   v5,
                                   v6,
                                   v25,
                                   0);
        }
        else
        {
          LdrpCreateLangFallbackList(&v28, v7, 25LL);
          v11 = v25;
          PreferredUILanguages = LdrpMergeLangFallbackLists(
                                   v8,
                                   v7,
                                   (unsigned int)&v28,
                                   (_DWORD)PreferredLanguages,
                                   v30,
                                   v5,
                                   v6,
                                   v25,
                                   0);
          if ( PreferredUILanguages >= 0 )
          {
            LOBYTE(v13) = v4 == 48 || (v8 & 0x10) != 0;
            PreferredUILanguages = RtlpAddNeutralsToMergedList(v13, v7, v28, &v23);
          }
          RtlpMuiRegFreeLanguageList(v28);
        }
        if ( PreferredUILanguages < 0 )
        {
LABEL_107:
          MergedPrefLanguages = v23;
LABEL_49:
          if ( MergedPrefLanguages )
          {
            v14 = (__int64)v23;
            if ( v23 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v14 = (__int64)v23;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            RtlpMuiRegFreeLanguageList(v14);
            v7 = v22;
          }
LABEL_53:
          if ( PreferredUILanguages >= 0 )
          {
LABEL_54:
            if ( v21 && v7 )
              RtlpMuiFreeLangRegistryInfo(v7);
            if ( v30 )
              RtlpMuiRegFreeLanguageList(v30);
            return (unsigned int)PreferredUILanguages;
          }
LABEL_34:
          if ( v33 && v27 )
          {
            if ( v27 == 1 )
              *v33 = 0;
            else
              *(_DWORD *)v33 = 0;
          }
          goto LABEL_54;
        }
        goto LABEL_42;
      }
      v22 = 0LL;
      PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v22);
      if ( PreferredUILanguages >= 0 )
      {
        v7 = v22;
        v21 = 1;
        v19 = (__int64 *)(v22 + 56);
        if ( !*(_QWORD *)(v22 + 56) )
        {
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v22, v18, 0, 3, (__int64)&v31, v22 + 56);
          if ( PreferredUILanguages < 0 && !v31 )
            goto LABEL_53;
        }
        if ( !*(_QWORD *)(v7 + 64) )
        {
          v31 = 0;
          PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v7, v18, 1, 3, (__int64)&v31, v7 + 64);
          if ( PreferredUILanguages < 0 && !v31 )
            goto LABEL_53;
        }
        v5 = *(_QWORD *)(v7 + 64);
        v6 = *v19;
        v4 = v29;
        goto LABEL_61;
      }
LABEL_99:
      v7 = v22;
      goto LABEL_34;
    }
LABEL_33:
    PreferredUILanguages = -1073741811;
    goto LABEL_34;
  }
  return (unsigned int)-1073741811;
}
