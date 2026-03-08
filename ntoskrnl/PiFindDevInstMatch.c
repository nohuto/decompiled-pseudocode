/*
 * XREFs of PiFindDevInstMatch @ 0x1407705F4
 * Callers:
 *     PiProcessDriverInstance @ 0x140770360 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     PnpRegSzToString @ 0x1407707FC (PnpRegSzToString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiFindDevInstMatch(void *a1, const UNICODE_STRING *a2, unsigned int *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  ULONG v9; // r13d
  unsigned int v10; // r15d
  NTSTATUS RegistryValue; // eax
  PVOID v12; // rcx
  __int64 Pool2; // rdi
  void *v14; // r14
  int v15; // esi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  wchar_t *v20; // rax
  UNICODE_STRING v22; // xmm0
  void *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID P; // [rsp+C8h] [rbp+60h] BYREF

  v5 = a5;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *v5 = -1;
  *a3 = 0;
  ResultLength = 0;
  P = 0LL;
  v9 = 256;
  v10 = 0;
  ValueName = 0LL;
  String1 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, L"Count", 0, &P);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      return (unsigned int)RegistryValue;
    return v6;
  }
  v12 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v12, 0);
  Pool2 = ExAllocatePool2(256LL, 256LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v14 = (void *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !v14 )
  {
    v23 = (void *)Pool2;
    goto LABEL_23;
  }
  v15 = 0;
  if ( !v10 )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    if ( !*(_WORD *)a4 )
      ExFreePoolWithTag(v14, 0);
    return 0LL;
  }
  while ( 1 )
  {
    LODWORD(v24) = v15;
    P = v14;
    RtlStringCchPrintfExW((NTSTRSAFE_PWSTR)v14, 0xAuLL, (NTSTRSAFE_PWSTR *)&P, 0LL, 0, L"%u", v24);
    ValueName.MaximumLength = 20;
    v16 = ((_BYTE *)P - (_BYTE *)v14) >> 1;
    ValueName.Length = (_DWORD)v16 == -1 ? 20 : 2 * v16;
    ValueName.Buffer = (wchar_t *)v14;
    v17 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, (PVOID)Pool2, v9, &ResultLength);
    if ( v17 < 0 )
      break;
    if ( *(_DWORD *)(Pool2 + 4) == 1 )
    {
      v18 = *(unsigned int *)(Pool2 + 12);
      if ( (unsigned int)v18 > 2 )
      {
        v19 = Pool2 + *(unsigned int *)(Pool2 + 8);
        LODWORD(P) = 0;
        PnpRegSzToString(v19, v18, &P);
        String1.MaximumLength = *(_WORD *)(Pool2 + 12);
        v20 = (wchar_t *)(Pool2 + *(unsigned int *)(Pool2 + 8));
        String1.Length = (unsigned __int16)P;
        String1.Buffer = v20;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v22 = ValueName;
          *a5 = v15;
          *(UNICODE_STRING *)a4 = v22;
          goto LABEL_15;
        }
      }
    }
LABEL_14:
    if ( ++v15 >= v10 )
      goto LABEL_15;
  }
  if ( v17 != -2147483643 && v17 != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag((PVOID)Pool2, 0);
  v9 = ResultLength;
  Pool2 = ExAllocatePool2(256LL, ResultLength, 538996816LL);
  if ( Pool2 )
  {
    --v15;
    goto LABEL_14;
  }
  v23 = v14;
LABEL_23:
  ExFreePoolWithTag(v23, 0);
  return 3221225626LL;
}
