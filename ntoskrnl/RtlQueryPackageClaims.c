/*
 * XREFs of RtlQueryPackageClaims @ 0x1402983B0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     RtlQueryPackageIdentityEx @ 0x140298350 (RtlQueryPackageIdentityEx.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x140298B38 (AppModelPolicy_GetPolicy_Internal.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140302D18 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x140298538 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        int a7,
        __int64 a8)
{
  int v12; // edx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
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
  result = RtlpQueryPackageIdentityAttributes(a1, v12, (unsigned int)v21, a7, a8);
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
