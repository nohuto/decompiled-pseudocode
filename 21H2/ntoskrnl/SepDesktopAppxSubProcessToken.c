/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x1402F4D04
 * Callers:
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 * Callees:
 *     SepVerifyDesktopAppxImage @ 0x1402013A4 (SepVerifyDesktopAppxImage.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlQueryPackageClaims @ 0x1402F3940 (RtlQueryPackageClaims.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1403FD000 (ZwQueryLicenseValue.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405965F4 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140596680 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PsReferenceEffectiveToken @ 0x140651B70 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(PERESOURCE *TokenHandle, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  char v8; // r14
  NTSTATUS PackageClaims; // eax
  __int64 v10; // r8
  int v11; // ebx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  _KPROCESS *Process; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int32 v22[8]; // [rsp+0h] [rbp-100h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-E0h]
  PGUID DynamicId; // [rsp+28h] [rbp-D8h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-D0h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-C8h]
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+41h] [rbp-BFh] BYREF
  _PS_PKG_CLAIM v29; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+54h] [rbp-ACh] BYREF
  int Data; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  _PS_PKG_CLAIM v35; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v36[2]; // [rsp+70h] [rbp-90h] BYREF
  int *v37; // [rsp+78h] [rbp-88h]
  _DWORD v38[4]; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v40; // [rsp+98h] [rbp-68h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  const wchar_t *v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  const wchar_t *v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp+0h]

  v40 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v42 = 0LL;
  *a4 = 0;
  v44 = L"WIN://PKG";
  v34 = a2;
  v46 = 0LL;
  v29 = 0LL;
  v48 = L"WIN://PKGHOSTID";
  v35 = 0LL;
  v50 = 0LL;
  v27 = 0;
  PkgClaim = &v29;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v8 = 0;
  v39 = 1966108;
  v41 = 0LL;
  v43 = 1310738;
  v45 = 0LL;
  v47 = 2097182;
  v49 = 0LL;
  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  v33 = 0;
  v28 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(TokenHandle, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  Flags = v29.Flags;
  if ( (v29.Flags & 4) == 0 )
  {
    if ( (v29.Flags & 0x10000) != 0 )
      goto LABEL_17;
    v17 = PsReferenceEffectiveToken(
            (unsigned int)KeGetCurrentThread(),
            (unsigned int)&v33,
            (unsigned int)&v28,
            (unsigned int)&v34,
            0LL);
    v11 = RtlQueryPackageClaims((HANDLE)v17, 0LL, 0LL, 0LL, 0LL, 0LL, &v35, 0LL);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741275 )
        goto LABEL_34;
      v11 = 0;
    }
    if ( (v35.Flags & 0x10004) != 0 )
      *a4 = 1;
LABEL_34:
    if ( v17 )
    {
      if ( v33 == 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
        v19 = Process[1].Affinity.Bitmap[5];
        while ( (v17 ^ v19) < 0xF )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[5], v19 + 1, v19);
          if ( v20 == v19 )
            return (unsigned int)v11;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      }
      else
      {
        ObfDereferenceObjectWithTag((PVOID)v17, 0x746C6644u);
      }
    }
    return (unsigned int)v11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v29.Flags & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v29, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    Flags = v29.Flags;
  }
  if ( (a3 & 6) != 0 || (Flags & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (Flags & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(TokenHandle, &v29, v10);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(TokenHandle) )
    {
LABEL_17:
      *a5 = 1;
      return (unsigned int)v11;
    }
    Flags = v29.Flags;
  }
  if ( LOBYTE(v29.Origin) == 3 && (Flags & 0x22000) == 0 )
  {
    v8 = 1;
    if ( ZwQueryLicenseValue(&stru_140C01AE8, &Type, &Data, 4u, &ResultDataSize) >= 0
      && Type == 4
      && ResultDataSize == 4 )
    {
      v8 = Data != 1;
    }
  }
  v11 = SepVerifyDesktopAppxImage(v34, (__int64)TokenHandle, v8, &v27);
  if ( v11 >= 0 )
  {
    if ( !v27 )
    {
      DWORD2(v41) = 0;
      LOWORD(v41) = 3;
      v38[0] = 3;
      v38[1] = 3;
      v38[2] = 3;
      v36[1] = 3;
      LOWORD(v45) = 2;
      DWORD2(v45) = 0;
      LOWORD(v49) = 2;
      DWORD2(v49) = 0;
      v37 = &v39;
      CurrentThread = KeGetCurrentThread();
      v36[0] = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(TokenHandle[6], 1u);
      _InterlockedOr(v22, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(TokenHandle[97], v38, v36);
      TokenHandle[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      _InterlockedOr(v22, 0);
      ExReleaseResourceLite(TokenHandle[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      *a4 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_17;
  }
  return (unsigned int)v11;
}
