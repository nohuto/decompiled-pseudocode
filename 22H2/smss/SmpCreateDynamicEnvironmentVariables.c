/*
 * XREFs of SmpCreateDynamicEnvironmentVariables @ 0x14000BDA0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000203C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpCreateDynamicEnvironmentVariables(HANDLE KeyHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // esi
  __int64 *v5; // rcx
  ULONG DataSize; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  wchar_t *v12; // rax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v19; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v20; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING v21; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING v22; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _WORD SystemInformation[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v25; // [rsp+FCh] [rbp-Ch]
  __int64 v26; // [rsp+108h] [rbp+0h] BYREF
  wchar_t v27; // [rsp+110h] [rbp+8h]
  __int64 v28; // [rsp+118h] [rbp+10h] BYREF
  __int64 v29; // [rsp+120h] [rbp+18h] BYREF
  __int64 v30; // [rsp+128h] [rbp+20h] BYREF
  int v31; // [rsp+130h] [rbp+28h]
  __int64 v32; // [rsp+138h] [rbp+30h] BYREF
  int v33; // [rsp+140h] [rbp+38h]
  __int128 Data; // [rsp+148h] [rbp+40h] BYREF
  int v35; // [rsp+158h] [rbp+50h]
  wchar_t v36; // [rsp+15Ch] [rbp+54h]
  __int128 v37; // [rsp+160h] [rbp+58h] BYREF
  wchar_t pszDest[6]; // [rsp+178h] [rbp+70h] BYREF
  wchar_t v39[250]; // [rsp+184h] [rbp+7Ch] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v41[500]; // [rsp+384h] [rbp+27Ch] BYREF

  v35 = *(_DWORD *)L"NT";
  v36 = aWindowsNt[10];
  Data = *(_OWORD *)L"Windows_NT";
  v29 = 0x3600380078LL;
  v27 = aIa64[4];
  v33 = *(_DWORD *)L"4";
  v28 = 0x4D00520041LL;
  v31 = *(_DWORD *)L"4";
  ValueName.Buffer = L"OS";
  v18[1] = L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0";
  v16.Buffer = L"PROCESSOR_ARCHITECTURE";
  v17.Buffer = L"PROCESSOR_LEVEL";
  v26 = *(_QWORD *)L"IA64";
  v21.Buffer = L"PROCESSOR_IDENTIFIER";
  v32 = *(_QWORD *)L"AMD64";
  v22.Buffer = L"PROCESSOR_REVISION";
  v30 = *(_QWORD *)L"ARM64";
  v19.Buffer = L"Identifier";
  v20.Buffer = L"VendorIdentifier";
  v37 = *(_OWORD *)L"Unknown";
  *(_DWORD *)&ValueName.Length = 393220;
  LODWORD(v18[0]) = 8519808;
  *(_DWORD *)&v16.Length = 3014700;
  *(_DWORD *)&v17.Length = 2097182;
  *(_DWORD *)&v21.Length = 2752552;
  *(_DWORD *)&v22.Length = 2490404;
  *(_DWORD *)&v19.Length = 1441812;
  *(_DWORD *)&v20.Length = 2228256;
  result = NtQuerySystemInformation(SystemProcessorInformation, SystemInformation, 0xCu, 0LL);
  if ( result >= 0 )
  {
    v3 = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, &Data, 0x16u);
    if ( v3 < 0 )
      return v3;
    v4 = 16;
    if ( SystemInformation[0] )
    {
      if ( SystemInformation[0] != 5 )
      {
        switch ( SystemInformation[0] )
        {
          case 6:
            v5 = &v26;
            DataSize = 10;
            goto LABEL_9;
          case 9:
            v5 = &v32;
            break;
          case 0xC:
            v5 = &v30;
            break;
          default:
            v5 = (__int64 *)&v37;
            DataSize = 16;
            goto LABEL_9;
        }
        DataSize = 12;
LABEL_9:
        ResultLength[0] = DataSize;
        v3 = NtSetValueKey(KeyHandle, &v16, 0, 1u, v5, DataSize);
        if ( v3 >= 0 )
        {
          RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", SystemInformation[1]);
          v7 = -1LL;
          v8 = -1LL;
          do
            ++v8;
          while ( pszDest[v8] );
          v3 = NtSetValueKey(KeyHandle, &v17, 0, 1u, pszDest, 2 * v8 + 2);
          if ( v3 >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = NtOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
            if ( v3 >= 0 )
            {
              v3 = NtQueryValueKey(KeyHandlea, &v19, KeyValuePartialInformation, pszDest, 0x200u, ResultLength);
              if ( v3 < 0 )
              {
                NtClose(KeyHandlea);
              }
              else
              {
                v9 = NtQueryValueKey(
                       KeyHandlea,
                       &v20,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       0x200u,
                       ResultLength);
                NtClose(KeyHandlea);
                if ( v9 < 0 )
                  goto LABEL_54;
                v10 = -1LL;
                do
                  ++v10;
                while ( v39[v10] );
                v3 = RtlStringCbPrintfW(&v39[v10], 500 - 2 * v10, L", %ws", v41);
                if ( v3 >= 0 )
                {
LABEL_54:
                  v11 = -1LL;
                  do
                    ++v11;
                  while ( v39[v11] );
                  v3 = NtSetValueKey(KeyHandle, &v21, 0, 1u, v39, 2 * v11 + 2);
                  if ( v3 >= 0 )
                  {
                    if ( SystemInformation[0] )
                    {
                      if ( SystemInformation[0] <= 4u
                        || SystemInformation[0] != 9 && SystemInformation[0] > 6u && SystemInformation[0] != 12 )
                      {
                        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned __int16)v25);
                        goto LABEL_26;
                      }
                    }
                    else if ( (v25 & 0xFF00) == 0xFF00 )
                    {
                      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%02x", (unsigned __int8)v25);
                      _wcsupr_s(pszDest, 0x100uLL);
                      do
LABEL_26:
                        ++v7;
                      while ( pszDest[v7] );
                      v3 = NtSetValueKey(KeyHandle, &v22, 0, 1u, pszDest, 2 * v7 + 2);
                      if ( v3 >= 0 )
                      {
                        switch ( SmpSafeBootOption )
                        {
                          case -1:
                            return 0;
                          case 2:
                            v12 = L"NETWORK";
                            break;
                          case 3:
                            v12 = L"DSREPAIR";
                            v4 = 18;
                            break;
                          default:
                            v12 = L"MINIMAL";
                            break;
                        }
                        v3 = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue, 0, 1u, v12, v4);
                        if ( v3 >= 0 )
                          return 0;
                      }
                      return v3;
                    }
                    RtlStringCbPrintfW(pszDest, 0x200uLL, L"%04x", (unsigned __int16)v25);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
        return v3;
      }
      v5 = &v28;
    }
    else
    {
      v5 = &v29;
    }
    DataSize = 8;
    goto LABEL_9;
  }
  return result;
}
