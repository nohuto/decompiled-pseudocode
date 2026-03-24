/*
 * XREFs of RtlQueryPackageClaims @ 0x14024F0F0
 * Callers:
 *     RtlQueryPackageIdentityEx @ 0x14024F470 (RtlQueryPackageIdentityEx.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1402503FC (AppModelPolicy_GetPolicy_Internal.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402504F4 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596450 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x14024D658 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x14024F6C0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlGUIDFromString @ 0x140644870 (RtlGUIDFromString.c)
 */

int __fastcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v12; // rdx
  int result; // eax
  int v14; // ebx
  size_t *v15; // rdi
  __int64 v16; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR v18; // [rsp+48h] [rbp-B8h] BYREF
  size_t *v19; // [rsp+50h] [rbp-B0h]
  size_t pcbRemaining; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[102]; // [rsp+60h] [rbp-A0h] BYREF

  v18 = 0LL;
  v19 = a5;
  memset(v21, 0, sizeof(v21));
  ppszDestEnd = 0LL;
  result = RtlpQueryPackageIdentityAttributes(a1, v12, (__int64)v21, a7, a8);
  v14 = result;
  if ( result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v21[1] + 32LL));
      v14 = result;
      if ( result < 0 )
        return result;
      *a3 = (char *)ppszDestEnd - (char *)a2 + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( a3 )
    return -1073741811;
LABEL_7:
  if ( a4 )
  {
    v15 = v19;
    result = RtlStringCbPrintfExW(a4, *v19, &v18, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v21[1] + 32LL) + 16LL);
    v14 = result;
    if ( result < 0 )
      return result;
    *v15 = (char *)v18 - (char *)a4 + 2;
  }
  if ( Guid )
  {
    v16 = v21[1];
    *Guid = 0LL;
    if ( *(_DWORD *)(v16 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v16 + 32) + 48LL), Guid);
  }
  return v14;
}
