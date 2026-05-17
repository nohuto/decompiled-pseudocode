/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18003E734
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     InitializeUserOrMachineLangList @ 0x180076914 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800389BC (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FEE0 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800704B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180082580 (RtlpLoadMachineUIByPolicy.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180103B60 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _BYTE *v6; // rdi
  BOOL v8; // r15d
  const WCHAR *v10; // r12
  __int64 v11; // rdx
  HANDLE v12; // rcx
  int v13; // ebx
  const WCHAR *v14; // rdx
  int v15; // ecx
  const WCHAR *Heap; // rsi
  int v18; // ecx
  int v19; // r8d
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v25; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v26; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v28; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v35; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  __int128 v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-10h] BYREF
  HANDLE v40; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING *v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  __int128 v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+128h] [rbp+28h]
  UNICODE_STRING *v46; // [rsp+130h] [rbp+30h]
  int v47; // [rsp+138h] [rbp+38h]
  __int128 v48; // [rsp+140h] [rbp+40h]
  unsigned int v49; // [rsp+190h] [rbp+90h] BYREF
  int v50; // [rsp+198h] [rbp+98h] BYREF
  int v51; // [rsp+1A0h] [rbp+A0h] BYREF

  v50 = a2;
  v6 = a5;
  v24 = 0LL;
  Handle = 0LL;
  v8 = a3;
  v25 = 0LL;
  v51 = 7;
  v10 = 0LL;
  v49 = 0;
  LanguageList = 0LL;
  LOBYTE(v50) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v13 = -1073741811;
LABEL_22:
    if ( v13 )
      goto LABEL_26;
LABEL_23:
    Heap = 0LL;
    if ( v8 || LanguageList && *(_WORD *)(LanguageList + 4) )
    {
LABEL_24:
      if ( !LanguageList )
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, !v8, a1);
        if ( !LanguageList )
          v13 = -1073741801;
      }
      goto LABEL_25;
    }
    v13 = 0;
    v21 = 7;
    v26 = 0LL;
    v22 = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&v28, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v44 = 48;
      v46 = &v28;
      v45 = 0LL;
      v47 = 64;
      v48 = 0LL;
      if ( (int)NtOpenKey(&v26, 131097LL, &v44) < 0 )
        goto LABEL_43;
      RtlInitUnicodeString(&v28, L"PreferredUILanguages");
      v18 = LdrpQueryValueKey(v26, &v28, &v21, 0LL, &v22);
      if ( v18 == -1073741772 || !v22 )
        goto LABEL_43;
      if ( v18 == -2147483643 )
      {
        Heap = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v22 + 2);
        if ( !Heap )
        {
          v13 = -1073741801;
          goto LABEL_44;
        }
        v13 = LdrpQueryValueKey(v26, &v28, &v21, Heap, &v22);
        if ( v13 >= 0 )
        {
          if ( v21 != 7 && v21 != 1 )
          {
            v13 = 0;
LABEL_43:
            *v6 = 1;
            goto LABEL_44;
          }
          v19 = v22 >> 1;
          *v6 = 0;
          v13 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v19, 8, 3, 1u, &LanguageList);
        }
      }
      else
      {
        v13 = -1073741772;
      }
    }
    else
    {
      v13 = -1073741811;
    }
LABEL_44:
    if ( v26 )
      NtClose(v26);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    if ( v13 )
      goto LABEL_25;
    goto LABEL_24;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v29 = 48;
  p_DestinationString = &DestinationString;
  v30 = 0LL;
  v32 = 64;
  v33 = 0LL;
  if ( (int)NtOpenKey(&v25, 131097LL, &v29) >= 0 )
  {
    v13 = RtlpLoadMachineUIByPolicy(v25, a1, &LanguageList);
    if ( !v13 && LanguageList )
      goto LABEL_23;
    v12 = v25;
  }
  else
  {
    v12 = 0LL;
    v25 = 0LL;
  }
  if ( v8 && v12 && (int)RtlpHasMachineUILock(v12, &v50) >= 0 )
    v8 = (_BYTE)v50 != 1;
  v13 = OpenGlobalizationUserSettingsKey(0x2000000LL, v11, &v24);
  if ( v13 < 0 )
  {
LABEL_54:
    *v6 = 1;
    goto LABEL_22;
  }
  if ( v8 )
  {
    v13 = RtlpLoadUserUIByPolicy(v24, a1, &LanguageList);
    if ( !v13 && LanguageList )
    {
LABEL_25:
      *a6 = LanguageList;
LABEL_26:
      if ( v10 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10);
      goto LABEL_28;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v35 = v24;
    v34 = 48;
    v36 = &DestinationString;
    v37 = 64;
    v38 = 0LL;
    v13 = NtOpenKey(&Handle, 131097LL, &v34);
    if ( v13 >= 0 )
    {
      v14 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v14 = L"PreferredUILanguagesPending";
      goto LABEL_15;
    }
    goto LABEL_54;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v40 = v24;
  v39 = 48;
  v41 = &DestinationString;
  v42 = 64;
  v43 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v39) < 0 )
    goto LABEL_50;
  v14 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v14);
  v13 = -1073741772;
  v15 = LdrpQueryValueKey(Handle, &DestinationString, &v51, 0LL, &v49);
  if ( v15 == -1073741772 || !v49 )
    goto LABEL_50;
  if ( v15 == -2147483643 )
  {
    v10 = (const WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v49 + 2);
    if ( v10 )
    {
      v13 = LdrpQueryValueKey(Handle, &DestinationString, &v51, v10, &v49);
      if ( v13 < 0 )
        goto LABEL_22;
      if ( v51 == 7 || v51 == 1 )
      {
        v13 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v10, v49 >> 1, 8, (unsigned int)!v8 + 2, 1u, &LanguageList);
        goto LABEL_22;
      }
LABEL_50:
      v13 = 0;
      *v6 = 1;
      goto LABEL_23;
    }
    v13 = -1073741801;
  }
LABEL_28:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v24 )
  {
    NtClose(v24);
    v24 = 0LL;
  }
  if ( v25 )
    NtClose(v25);
  return (unsigned int)v13;
}
