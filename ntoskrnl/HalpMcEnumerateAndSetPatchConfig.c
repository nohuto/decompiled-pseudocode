/*
 * XREFs of HalpMcEnumerateAndSetPatchConfig @ 0x140519160
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcPatchConfiguration @ 0x140519704 (HalpMcPatchConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x14039301C (RtlStringCbCopyNW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcEnumerateAndSetPatchConfig(void *a1, __int64 a2, int a3)
{
  HANDLE v3; // rbx
  wchar_t *v4; // r14
  _DWORD *Pool2; // rsi
  void *v6; // rdi
  NTSTATUS v8; // ebx
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  ULONG v11; // r15d
  size_t v12; // rax
  ULONG v13; // r12d
  unsigned int v14; // r15d
  wchar_t *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // eax
  HANDLE v20; // rbx
  PVOID SystemRoutineAddress; // rax
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  HANDLE v27; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING SystemRoutineName; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v32[14]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h] BYREF
  int v34; // [rsp+138h] [rbp+38h]

  v27 = a1;
  v3 = a1;
  v26 = a2;
  v4 = 0LL;
  Length = 0;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v34 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a2 || a3 != 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x636C6148u);
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1668047176LL);
      if ( !Pool2 )
      {
        v8 = -1073741801;
        goto LABEL_49;
      }
      v10 = ZwQueryKey(v3, KeyFullInformation, Pool2, Length, &Length);
      ++v9;
      v8 = v10;
      if ( v10 != -1073741789 && v10 != -2147483643 )
        break;
      if ( v9 >= 0xA )
        break;
      v3 = v27;
    }
    if ( v10 >= 0 )
    {
      v11 = Pool2[5];
      v12 = (unsigned int)(Pool2[6] + 2);
      v25 = v11;
      Size = v12;
      v6 = (void *)ExAllocatePool2(256LL, (unsigned int)v12, 1668047176LL);
      if ( v6 )
      {
        v13 = 0;
        Length = 24;
        if ( v11 )
        {
          while ( 2 )
          {
            v14 = 0;
            do
            {
              if ( v4 )
                ExFreePoolWithTag(v4, 0x636C6148u);
              v15 = (wchar_t *)ExAllocatePool2(256LL, Length, 1668047176LL);
              v4 = v15;
              if ( !v15 )
                goto LABEL_45;
              v16 = ZwEnumerateKey(v27, v13, KeyBasicInformation, v15, Length, &Length);
              ++v14;
              v8 = v16;
            }
            while ( (v16 == -1073741789 || v16 == -2147483643) && v14 < 0xA );
            if ( v16 >= 0 )
            {
              memset(v6, 0, Size);
              v8 = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)v6, Size, v4 + 8, *((unsigned int *)v4 + 3));
              if ( v8 >= 0 )
              {
                if ( !a3 )
                {
                  v33 = 0LL;
                  v34 = 0;
                  LODWORD(v33) = wcstoul((const wchar_t *)v6, 0LL, 16);
                  goto LABEL_26;
                }
                if ( a3 == 1 )
                {
                  v19 = wcstoul((const wchar_t *)v6, 0LL, 16);
                  v17 = v26;
                  *(_DWORD *)(v26 + 8) = v19;
                }
                else
                {
LABEL_26:
                  v17 = v26;
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)v6);
                ObjectAttributes.RootDirectory = v27;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( KeyHandle )
                {
                  ZwClose(v6);
                  KeyHandle = 0LL;
                }
                v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                if ( v8 >= 0 )
                {
                  if ( !a3 )
                  {
                    v18 = HalpMcEnumerateAndSetPatchConfig(KeyHandle, &v33, 1LL);
                    v8 = v18;
                    goto LABEL_32;
                  }
                  memset(v32, 0, sizeof(v32));
                  v20 = KeyHandle;
                  v32[2] = L"Revision";
                  LODWORD(v32[1]) = 288;
                  v32[3] = v17 + 4;
                  LODWORD(v32[4]) = 0x4000000;
                  SystemRoutineName = 0LL;
                  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
                  SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
                  if ( !SystemRoutineAddress )
                    SystemRoutineAddress = RtlQueryRegistryValues;
                  v8 = ((__int64 (__fastcall *)(__int64, HANDLE, _QWORD *, _QWORD, _QWORD))SystemRoutineAddress)(
                         0x40000000LL,
                         v20,
                         v32,
                         0LL,
                         0LL);
                  if ( v8 >= 0 )
                  {
                    if ( McMicrocodeOperation )
                    {
                      v18 = McMicrocodeOperation(1LL, v17, 12LL);
                      v8 = v18;
                      if ( v18 == -1073741275 )
                      {
                        v8 = 0;
                        goto LABEL_33;
                      }
LABEL_32:
                      if ( v18 >= 0 )
                      {
LABEL_33:
                        if ( ++v13 < v25 )
                          continue;
                      }
                    }
                    else
                    {
                      v8 = -1073741637;
                    }
                  }
                }
              }
            }
            break;
          }
          ExFreePoolWithTag(v4, 0x636C6148u);
        }
      }
      else
      {
LABEL_45:
        v8 = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0x636C6148u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x636C6148u);
LABEL_49:
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
