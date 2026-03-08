/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14085EB08 (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E1344 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1409E1400 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E183C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(WCHAR *KeyHandle, __int64 a2)
{
  int CpuVendor; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  char **v8; // rcx
  __int64 *v9; // r9
  char *v10; // r10
  __int64 v11; // r11
  char *v12; // rax
  size_t v13; // rsi
  WCHAR *Pool2; // rbx
  int v15; // edi
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v22[68]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[136]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v24; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v25; // [rsp+3B8h] [rbp+2B8h]
  _QWORD v26[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v27; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v28; // [rsp+3E8h] [rbp+2E8h] BYREF
  _QWORD v29[28]; // [rsp+420h] [rbp+320h] BYREF

  v17 = 0;
  memset(KeyInformation, 0, 0x218uLL);
  v26[0] = L"Family";
  v26[1] = L"Model";
  v26[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset(&v22[2], 0, 0x100uLL);
  KeyHandlea = 0LL;
  ResultLength = 0;
  CpuVendor = KiGetCpuVendor();
  EtwpGetPmcCpuHierarchyRegistry(KeyHandle, &v17, (__int64)&v24);
  memset(v29, 0, sizeof(v29));
  v5 = -1LL;
  v6 = (__int64 **)&v28;
  v24 = -1LL;
  v7 = v26;
  v25 = -1;
  v8 = (char **)&v29[3];
  v9 = &v24;
  v10 = &v27;
  v11 = 3LL;
  do
  {
    *v8 = v10;
    *(v8 - 3) = (char *)EtwpQueryRegistryCallback;
    v10 += 16;
    v12 = (char *)*v7++;
    *v6 = v9;
    v9 = (__int64 *)((char *)v9 + 4);
    *(v8 - 1) = v12;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 7;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v11;
  }
  while ( v11 );
  if ( (int)RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v29, 0LL) >= 0 && v17 == CpuVendor )
  {
    v22[0] = 2097153;
    memset(&v22[1], 0, 0x104uLL);
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v24, (unsigned __int16 *)v22);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v22) )
    {
      do
        ++v5;
      while ( *(_WORD *)(a2 + 2 * v5) );
      v13 = (unsigned int)(2 * v5 + 512);
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v13, 1350005829LL);
      v15 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v15, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v16 = KeyInformation[3] >> 1;
        if ( (unsigned int)v16 <= 0xFE )
        {
          *((_WORD *)&KeyInformation[4] + v16) = 0;
          if ( RtlStringCbPrintfW(Pool2, v13, L"%ws\\%ws", a2, &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, Pool2);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileSource(KeyHandlea, v22, &KeyInformation[4]);
              ZwClose(&KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(Pool2, 0x50777445u);
    }
  }
}
