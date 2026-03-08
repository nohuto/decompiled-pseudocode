/*
 * XREFs of SmmQueryRegistry @ 0x1C020D0E8
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C020CF44 (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 SmmQueryRegistry()
{
  char v0; // r9
  unsigned __int8 v1; // r8
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  const wchar_t *v17; // [rsp+70h] [rbp-90h]
  unsigned int *v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+80h] [rbp-80h]
  int *v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  const wchar_t *v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  const wchar_t *v31; // [rsp+E0h] [rbp-20h]
  unsigned int *v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+F0h] [rbp-10h]
  int *v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int v37; // [rsp+110h] [rbp+10h]
  const wchar_t *v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  int v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+138h] [rbp+38h]
  __int64 v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  const wchar_t *v45; // [rsp+150h] [rbp+50h]
  int *v46; // [rsp+158h] [rbp+58h]
  int v47; // [rsp+160h] [rbp+60h]
  int *v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int v51; // [rsp+180h] [rbp+80h]
  const wchar_t *v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  int v54; // [rsp+198h] [rbp+98h]
  int *v55; // [rsp+1A0h] [rbp+A0h]
  int v56; // [rsp+1A8h] [rbp+A8h]
  __int128 v57; // [rsp+1B0h] [rbp+B0h]
  __int128 v58; // [rsp+1C0h] [rbp+C0h]
  __int128 v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1E0h] [rbp+E0h]

  v17 = L"ForceEnableIommu";
  v6 = 0;
  v5 = 0;
  v18 = &v5;
  v11 = 0;
  v20 = &v6;
  v7 = 0;
  v24 = L"EnablePageTracking";
  v25 = &v7;
  v27 = &v11;
  v31 = L"LogicalAddressMode";
  v32 = &v3;
  v34 = &v4;
  v38 = L"PreferHighLogicalAddresses";
  v39 = &v9;
  v41 = &v12;
  v45 = L"DebugMode";
  v46 = &v10;
  v48 = &v13;
  v52 = L"ForceDmaRemapping";
  v53 = &v8;
  v55 = &v14;
  v4 = 0;
  v3 = 0;
  v12 = 0;
  v9 = 0;
  v14 = 0;
  v8 = 0;
  v13 = 0;
  v10 = 0;
  v15 = 0LL;
  v16 = 288;
  v19 = 67108868;
  v21 = 4;
  v22 = 0LL;
  v23 = 288;
  v26 = 67108868;
  v28 = 4;
  v29 = 0LL;
  v30 = 288;
  v33 = 67108868;
  v35 = 4;
  v36 = 0LL;
  v37 = 288;
  v40 = 67108868;
  v42 = 4;
  v43 = 0LL;
  v44 = 288;
  v47 = 67108868;
  v49 = 4;
  v50 = 0LL;
  v51 = 288;
  v54 = 67108868;
  v56 = 4;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Smm", &v15, 0LL, 0LL);
  v0 = v3;
  v1 = v5;
  if ( v3 >= 3 )
    v0 = v4;
  if ( v5 >= 3 )
    v1 = v6;
  result = v10 & 1;
  dword_1C013BCE0 = (v7 != 0 ? 4 : 0) | (dword_1C013BCE0 ^ ((unsigned __int8)dword_1C013BCE0 ^ v1) & 3) & 0xFFFFFF03 | (8 * (v0 & 3 | (4 * (result | (2 * (v9 & 1 | (2 * (v8 & 1))))))));
  return result;
}
