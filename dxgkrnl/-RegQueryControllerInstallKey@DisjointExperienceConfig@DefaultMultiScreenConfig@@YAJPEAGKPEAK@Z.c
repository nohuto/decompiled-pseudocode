/*
 * XREFs of ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0049EEC
 * Callers:
 *     ?ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C004A670 (-ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1C004A5F4 (-RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     KappxParsePackageFullNameFromToken @ 0x1C0393F60 (KappxParsePackageFullNameFromToken.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryControllerInstallKey(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  _OWORD *v4; // rax
  const wchar_t *v5; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  NTSTATUS v16; // ebx
  ULONG v17; // esi
  NTSTATUS v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 *ResultLength; // [rsp+28h] [rbp-D8h]
  unsigned int v22; // [rsp+30h] [rbp-D0h]
  ULONG v23; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v25; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  int v30; // [rsp+8Ch] [rbp-74h]
  _DWORD *v31; // [rsp+90h] [rbp-70h]
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v33; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD KeyInformation[136]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v36; // [rsp+310h] [rbp+210h] BYREF
  __int64 v37; // [rsp+320h] [rbp+220h]
  int v38; // [rsp+328h] [rbp+228h]
  _OWORD v39[4]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v40; // [rsp+370h] [rbp+270h]
  wchar_t v41; // [rsp+378h] [rbp+278h]
  _BYTE v42[256]; // [rsp+380h] [rbp+280h] BYREF
  char v43; // [rsp+480h] [rbp+380h] BYREF
  char v44; // [rsp+690h] [rbp+590h] BYREF

  v4 = v42;
  *(_WORD *)this = 0;
  v5 = L"\\Registry\\Machine\\Software\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\P"
        "ackageRepository\\Packages";
  *a3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = 2LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  do
  {
    v9 = *((_OWORD *)v5 + 1);
    *v4 = *(_OWORD *)v5;
    v10 = *((_OWORD *)v5 + 2);
    v4[1] = v9;
    v11 = *((_OWORD *)v5 + 3);
    v4[2] = v10;
    v12 = *((_OWORD *)v5 + 4);
    v4[3] = v11;
    v13 = *((_OWORD *)v5 + 5);
    v4[4] = v12;
    v14 = *((_OWORD *)v5 + 6);
    v4[5] = v13;
    v15 = *((_OWORD *)v5 + 7);
    v5 += 64;
    v4[6] = v14;
    v4 += 8;
    *(v4 - 1) = v15;
    --v8;
  }
  while ( v8 );
  v28[0] = 16777470LL;
  v28[1] = v42;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  KeyHandle = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 >= 0 )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    v17 = 0;
    v39[0] = *(_OWORD *)L"42EB8343-F0BF-4208-BCC6-52F5E308E81B";
    v41 = a42eb8343F0bf42[36];
    v39[2] = *(_OWORD *)L"08-BCC6-52F5E308E81B";
    v39[1] = *(_OWORD *)L"-F0BF-4208-BCC6-52F5E308E81B";
    String2.Buffer = (wchar_t *)v39;
    v40 = *(_QWORD *)L"E81B";
    v38 = *(_DWORD *)L"e";
    v39[3] = *(_OWORD *)L"52F5E308E81B";
    v36 = *(_OWORD *)L"8wekyb3d8bbwe";
    v23 = 0;
    *(_QWORD *)&String2.Length = 4849736LL;
    v37 = *(_QWORD *)L"8bbwe";
    *(_QWORD *)&v33.Length = 1835034LL;
    v33.Buffer = (wchar_t *)&v36;
    while ( 1 )
    {
      v18 = ZwEnumerateKey(KeyHandle, v17, KeyBasicInformation, KeyInformation, 0x220u, &v23);
      v16 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 >= 0 )
      {
        v29[0] = KeyInformation[3];
        v29[1] = KeyInformation[3];
        *(_QWORD *)&String1.Length = 34078720LL;
        v30 = 0;
        v31 = &KeyInformation[4];
        String1.Buffer = (wchar_t *)&v43;
        v27.Buffer = (wchar_t *)&v44;
        *(_QWORD *)&v27.Length = 34078720LL;
        v16 = KappxParsePackageFullNameFromToken(v29, &String1, &v27);
        if ( v16 >= 0 && !RtlCompareUnicodeString(&String1, &String2, 1u) && !RtlCompareUnicodeString(&v27, &v33, 1u) )
        {
          v25 = 0LL;
          v16 = RtlStringCchCopyNExW(
                  (unsigned __int16 *)this,
                  v19,
                  (const unsigned __int16 *)&KeyInformation[4],
                  (unsigned __int64)KeyInformation[3] >> 1,
                  &v25,
                  ResultLength,
                  v22);
          if ( v16 >= 0 )
          {
            *a3 = ((char *)v25 - (char *)this) >> 1;
            goto LABEL_15;
          }
        }
      }
      ++v17;
      if ( v16 < 0 )
        goto LABEL_15;
    }
    v16 = 0;
LABEL_15:
    ZwClose(KeyHandle);
  }
  return (unsigned int)v16;
}
