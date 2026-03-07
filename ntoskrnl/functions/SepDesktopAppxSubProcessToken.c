__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  bool v8; // si
  int PackageClaims; // eax
  __int64 v10; // r8
  int v11; // ebx
  int v12; // eax
  void *v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 *v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  const wchar_t *v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  const wchar_t *v39; // [rsp+D8h] [rbp-28h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-10h]

  v31 = L"WIN://SYSAPPID";
  v20 = 0LL;
  v33 = 0LL;
  *a4 = 0;
  v35 = L"WIN://PKG";
  v27[0] = a2;
  v37 = 0LL;
  v22 = 0LL;
  v39 = L"WIN://PKGHOSTID";
  v28 = 0LL;
  v41 = 0LL;
  v21[0] = 0;
  v19 = &v22;
  v18 = 0LL;
  v17 = 0LL;
  v8 = 0;
  v30 = 1966108;
  v32 = 0LL;
  v34 = 1310738;
  v36 = 0LL;
  v38 = 2097182;
  v40 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, v17, v18, v19, v20);
  v11 = PackageClaims;
  if ( PackageClaims < 0 )
  {
    if ( PackageClaims != -1073741275 )
      return (unsigned int)v11;
    v11 = 0;
  }
  v12 = v22;
  if ( (v22 & 4) == 0 )
  {
    if ( (v22 & 0x10000) == 0 )
    {
      v13 = (void *)PsReferenceEffectiveToken(
                      (unsigned int)KeGetCurrentThread(),
                      1953654867,
                      (unsigned int)&v26,
                      (unsigned int)v21,
                      (__int64)v27,
                      0LL);
      v11 = RtlQueryPackageClaims(v13, 0LL, 0LL, 0LL, 0LL, 0LL, &v28, 0LL);
      if ( v11 < 0 )
      {
        if ( v11 != -1073741275 )
        {
LABEL_11:
          if ( v13 )
          {
            if ( v26 == 1 )
              ObFastDereferenceObject(
                (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5],
                (unsigned __int64)v13,
                0x74726853u);
            else
              ObfDereferenceObjectWithTag(v13, 0x74726853u);
          }
          return (unsigned int)v11;
        }
        v11 = 0;
      }
      if ( (v28 & 0x10004) != 0 )
        *a4 = 1;
      goto LABEL_11;
    }
LABEL_21:
    *a5 = 1;
    return (unsigned int)v11;
  }
  if ( (a3 & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( (a3 & 1) != 0 && (v22 & 0x20) != 0 )
  {
    v11 = SepDesktopAppModifyTokenBreakaway(a1, &v22, 0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = v22;
  }
  if ( (a3 & 6) != 0 || (v12 & 0x20) != 0 )
  {
    if ( (a3 & 2) != 0 && (v12 & 0x20) == 0 )
    {
      LOBYTE(v10) = 1;
      v11 = SepDesktopAppModifyTokenBreakaway(a1, &v22, v10);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( (unsigned __int8)SepVerifyDesktopAppPolicyOverrideCaller(a1) )
      goto LABEL_21;
    v12 = v22;
  }
  if ( BYTE4(v22) == 3 && (v12 & 0x22000) == 0 )
  {
    v8 = 1;
    if ( (int)ZwQueryLicenseValue(a02, &v23, &v25, 4LL, &v24) >= 0 && v23 == 4 && v24 == 4 )
      v8 = v25 != 1;
  }
  LOBYTE(v10) = v8;
  v11 = SepVerifyDesktopAppxImage(v27[0], a1, v10, v21);
  if ( v11 >= 0 )
  {
    if ( !v21[0] )
    {
      DWORD2(v32) = 0;
      LOWORD(v32) = 3;
      DWORD2(v36) = 0;
      DWORD2(v40) = 0;
      v28 = 0x300000003LL;
      LOWORD(v36) = 2;
      LOWORD(v40) = 2;
      v29 = 3;
      v27[1] = &v30;
      CurrentThread = KeGetCurrentThread();
      v27[0] = 0x300000001LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
      _InterlockedOr(v16, 0);
      v11 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), (int *)&v28, (__int64)v27);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v16, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      *a4 = 1;
      return (unsigned int)v11;
    }
    goto LABEL_21;
  }
  return (unsigned int)v11;
}
