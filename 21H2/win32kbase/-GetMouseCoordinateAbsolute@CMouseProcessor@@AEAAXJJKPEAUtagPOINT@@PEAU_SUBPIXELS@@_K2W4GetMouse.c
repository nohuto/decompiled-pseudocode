/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0005C50
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00B2384 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01FB484 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C003C4E0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C01E3CC0 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ApiSetEditionMagnificationMousePosition @ 0x1C0209698 (ApiSetEditionMagnificationMousePosition.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  __m128i *UnionRegion; // rax
  __int32 v15; // r9d
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // r8
  int v18; // eax
  __int32 v19; // ecx
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 result; // rax
  char v24; // dl
  __int64 v25; // rcx
  _BYTE v26[720]; // [rsp+20h] [rbp-5E8h] BYREF
  _BYTE v27[720]; // [rsp+2F0h] [rbp-318h] BYREF
  __m128i v28; // [rsp+5C0h] [rbp-48h]

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v26);
  }
  else
  {
    v13 = 0;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetPrimaryRegion(v27);
  }
  v28 = *UnionRegion;
  v15 = v28.m128i_i32[0];
  v16 = _mm_srli_si128(v28, 8).m128i_u64[0];
  v17 = HIDWORD(v28.m128i_i64[0]);
  v18 = a2 * (v16 - v28.m128i_i32[0]);
  v19 = HIDWORD(v16) - v28.m128i_i32[1];
  *a5 = v18;
  if ( v18 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v18;
    v20 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v18;
    v20 = (unsigned __int16)HIWORD(*a5);
  }
  v21 = a3 * v19;
  *a5 = v20;
  a5[1] = v21;
  if ( v21 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v21;
    v22 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v21;
    v22 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v22;
  if ( v13 )
  {
    *a5 += v15;
    a5[1] = v17 + v22;
  }
  v28.m128i_i64[0] = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    v24 = gptInd;
    v25 = 3LL * (unsigned int)gptInd;
    *((_DWORD *)&gaptMouse + 2 * v25) = a2 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v25 + 1) = a3 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v25 + 2) = a7;
    *((_QWORD *)&gaptMouse + v25 + 2) = a8;
    result = (v24 + 1) & 0x3F;
    gptInd = (v24 + 1) & 0x3F;
  }
  return result;
}
