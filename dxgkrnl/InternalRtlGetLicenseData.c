/*
 * XREFs of InternalRtlGetLicenseData @ 0x1C001D58C
 * Callers:
 *     WindowsQueryLicenseDWORD @ 0x1C001D44C (WindowsQueryLicenseDWORD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InternalRtlGetLicenseData(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  int v8; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v9[2]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  v8 = 4;
  v9[0] = 0LL;
  if ( !a4 || !a3 )
    return 3221225485LL;
  RtlInitUnicodeString(v9, L"Microsoft-Windows-Core-AllowMultiMon");
  result = ZwQueryLicenseValue(v9, &v10, 0LL, 0LL, a3);
  if ( (_DWORD)result != -1073741789 )
    return result;
  if ( v10 != v8 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(256LL, *a3, 541282891LL);
  *a4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  result = ZwQueryLicenseValue(v9, &v8, Pool2, *a3, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
