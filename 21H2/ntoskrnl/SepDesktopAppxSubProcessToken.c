/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x140203EE0
 * Callers:
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E12C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepVerifyDesktopAppxImage @ 0x1403761D8 (SepVerifyDesktopAppxImage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405F4338 (SepDesktopAppModifyTokenBreakaway.c)
 *     PsReferenceEffectiveToken @ 0x1407B3B60 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  bool v8; // r14
  int PackageClaims; // eax
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // eax
  void *v13; // rsi
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 *v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v33; // [rsp+88h] [rbp-78h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  const wchar_t *v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+D0h] [rbp-30h]
  const wchar_t *v41; // [rsp+D8h] [rbp-28h]
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-10h]

  v33 = L"WIN://SYSAPPID";
  v21 = 0LL;
  v35 = 0LL;
  *a4 = 0;
  v37 = L"WIN://PKG";
  v29[0] = a2;
  v39 = 0LL;
  v24 = 0LL;
  v41 = L"WIN://PKGHOSTID";
  v30 = 0LL;
  v43 = 0LL;
  v22 = 0;
  v20 = &v24;
  v19 = 0LL;
  v18 = 0LL;
  v8 = 0;
  v32 = 1966108;
  v34 = 0LL;
  v36 = 1310738;
  v38 = 0LL;
  v40 = 2097182;
  v42 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v23[0] = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v18, v19, v20, v21);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  v12 = v24;
  if ( (v24 & 4) == 0 )
  {
    if ( (v24 & 0x10000) == 0 )
    {
      v13 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v28, v23, v29, 0LL);
      v11 = RtlQueryPackageClaims(v13, 0LL, 0LL, 0LL, 0LL, 0LL, &v30, 0LL);
      if ( v11 < 0 )
      {
        if ( v11 != -1073741275 )
        {
LABEL_11:
          if ( v13 )
          {
            if ( v28 == 1 )
              ObFastDereferenceObject(
                &KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
                v13,
                1953654867LL);
            else
              ObfDereferenceObjectWithTag(v13, 0x74726853u);
          }
          return (unsigned int)v11;
        }
        v11 = 0;
      }
      if ( (v30 & 0x10004) != 0 )
        *a4 = 1;
      goto LABEL_11;
    }
LABEL_21:
    *a5 = 1;
    return (unsigned int)v11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v24 & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(a1, &v24, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = v24;
  }
  v15 = 2LL;
  LOBYTE(v10) = (a3 & 6) == 0;
  if ( ((unsigned __int8)v10 & ((v12 & 0x20) == 0)) == 0 )
  {
    if ( (a3 & 2) != 0 && (v12 & 0x20) == 0 )
    {
      LOBYTE(v15) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(a1, &v24, v15);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(a1, v10, v15) )
      goto LABEL_21;
    v12 = v24;
  }
  if ( BYTE4(v24) == 3 && (v12 & 0x22000) == 0 )
  {
    v8 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v25, &v27, 4LL, &v26) >= 0 && v25 == 4 && v26 == 4 )
      v8 = v27 != 1;
  }
  LOBYTE(v15) = v8;
  v11 = SepVerifyDesktopAppxImage(v29[0], a1, v15, &v22);
  if ( v11 >= 0 )
  {
    if ( !v22 )
    {
      DWORD2(v34) = 0;
      LOWORD(v34) = 3;
      v30 = 0x300000003LL;
      v31 = 3;
      LOWORD(v38) = 2;
      DWORD2(v38) = 0;
      LOWORD(v42) = 2;
      DWORD2(v42) = 0;
      v29[1] = &v32;
      CurrentThread = KeGetCurrentThread();
      v29[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v17, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), &v30, v29);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v17, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      *a4 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_21;
  }
  return (unsigned int)v11;
}
