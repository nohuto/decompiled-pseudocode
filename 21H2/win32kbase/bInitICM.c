/*
 * XREFs of bInitICM @ 0x1C02E5C44
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreGetStockObject @ 0x1C002E9B0 (GreGetStockObject.c)
 *     HmgMarkUndeletable @ 0x1C0063C80 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00643E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BEE40 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 bInitICM()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  int v2; // ecx
  __int64 v3; // rax
  _BYTE *v4; // rcx
  struct tagLOGCOLORSPACEW *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  unsigned __int64 v18; // rdi
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  _BYTE v25[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v26; // [rsp+304h] [rbp+1FCh]

  QueryTable.Flags = 292;
  v20 = 0;
  QueryTable.Name = L"GdiIcmControl";
  QueryTable.QueryRoutine = 0LL;
  v0 = 1;
  QueryTable.EntryContext = &v20;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v1 = RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL);
  v2 = v20;
  if ( v1 < 0 )
    v2 = 0;
  v20 = v2;
  if ( (v2 & 0x10000) == 0 )
  {
    dword_1C028F4BC = 1934772034;
    wcscpy_s(&Dst, 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  v3 = 4LL;
  v4 = v25;
  v5 = &gcsStockColorSpace;
  do
  {
    v6 = *(_OWORD *)&v5->lcsIntent;
    *(_OWORD *)v4 = *(_OWORD *)&v5->lcsSignature;
    v7 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
    *((_OWORD *)v4 + 1) = v6;
    v8 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
    *((_OWORD *)v4 + 2) = v7;
    v9 = *(_OWORD *)&v5->lcsGammaBlue;
    *((_OWORD *)v4 + 3) = v8;
    v10 = *(_OWORD *)&v5->lcsFilename[6];
    *((_OWORD *)v4 + 4) = v9;
    v11 = *(_OWORD *)&v5->lcsFilename[14];
    *((_OWORD *)v4 + 5) = v10;
    v12 = *(_OWORD *)&v5->lcsFilename[22];
    v5 = (struct tagLOGCOLORSPACEW *)((char *)v5 + 128);
    *((_OWORD *)v4 + 6) = v11;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v12;
    --v3;
  }
  while ( v3 );
  v13 = *(_QWORD *)&v5->lcsGammaBlue;
  v14 = *(_OWORD *)&v5->lcsIntent;
  *(_OWORD *)v4 = *(_OWORD *)&v5->lcsSignature;
  v15 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
  *((_OWORD *)v4 + 1) = v14;
  v16 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
  *((_OWORD *)v4 + 2) = v15;
  *((_OWORD *)v4 + 3) = v16;
  *((_QWORD *)v4 + 8) = v13;
  *((_DWORD *)v4 + 18) = *(_DWORD *)&v5->lcsFilename[2];
  v26 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v25);
  v18 = (unsigned __int64)ColorSpace;
  if ( !ColorSpace )
    return 0;
  HmgSetOwner((__int64)ColorSpace, 0, 9);
  HmgMarkUndeletable(v18, 9);
  bSetStockObject(v18, 20, 0);
  ghStockColorSpace = (HCOLORSPACE)GreGetStockObject(20);
  gpStockColorSpace = (struct COLORSPACE *)HmgShareLockEx((unsigned int)ghStockColorSpace, 9, 0);
  *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = ghStockColorSpace;
  qword_1C028F2E0 = (__int64)gpStockColorSpace;
  if ( !gpStockColorSpace )
    return 0;
  return v0;
}
