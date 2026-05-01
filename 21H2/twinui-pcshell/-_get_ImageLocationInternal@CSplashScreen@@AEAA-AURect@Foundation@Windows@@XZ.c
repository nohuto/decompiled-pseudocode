/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x180034730
 * Callers:
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180034614 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18004B468 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x1801FB590 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180072900 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1804DB7B8 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 */

__int64 __fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // ebx
  int v9; // eax
  int v10; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  int v15; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  int v20; // r8d
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // ebx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  int v32; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v33; // [rsp+28h] [rbp-48h]
  void **v34; // [rsp+38h] [rbp-38h] BYREF
  int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  __int64 v37; // [rsp+48h] [rbp-28h]
  int nDenominator; // [rsp+50h] [rbp-20h]
  float v39[4]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD **)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
  }
  GetSystemScaleFactorForWindow(v5, &nNumerator);
  GetOverrideScaleFactorForWindow(v5, &v32);
  v6 = *(_DWORD *)(a1 + 132);
  v7 = *(_DWORD *)(a1 + 136);
  v37 = 0LL;
  v34 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  nDenominator = nNumerator;
  v35 = v6;
  v36 = v7;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(&v34, v39);
  v8 = nDenominator;
  *(float *)&v33 = (float)MulDiv((int)v39[0], 100, nDenominator);
  *((float *)&v33 + 1) = (float)MulDiv((int)v39[1], 100, v8);
  *((float *)&v33 + 2) = (float)MulDiv((int)v39[2], 100, v8);
  v9 = MulDiv((int)v39[3], 100, v8);
  v10 = v32;
  *((float *)&v33 + 3) = (float)v9;
  *(_OWORD *)a2 = v33;
  if ( v10 != 100 )
  {
    v12 = MulDiv((int)*(float *)a2, 100, v10);
    v13 = (int)*(float *)(a2 + 4);
    v14 = v32;
    *(float *)a2 = (float)v12;
    v15 = MulDiv(v13, 100, v14);
    v16 = (int)*(float *)(a2 + 8);
    v17 = v32;
    *(float *)(a2 + 4) = (float)v15;
    v18 = MulDiv(v16, 100, v17);
    v19 = (int)*(float *)(a2 + 12);
    v20 = v32;
    *(float *)(a2 + 8) = (float)v18;
    *(float *)(a2 + 12) = (float)MulDiv(v19, 100, v20);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(nNumerator);
    v22 = MulDiv((int)*(float *)a2, nNumerator, LegacyModernScaleFactor);
    v23 = (int)*(float *)(a2 + 4);
    v24 = nNumerator;
    *(float *)a2 = (float)v22;
    v25 = MulDiv(v23, v24, LegacyModernScaleFactor);
    v26 = (int)*(float *)(a2 + 8);
    v27 = nNumerator;
    *(float *)(a2 + 4) = (float)v25;
    v28 = MulDiv(v26, v27, LegacyModernScaleFactor);
    v29 = (int)*(float *)(a2 + 12);
    v30 = nNumerator;
    *(float *)(a2 + 8) = (float)v28;
    *(float *)(a2 + 12) = (float)MulDiv(v29, v30, LegacyModernScaleFactor);
  }
  return a2;
}
