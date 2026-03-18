/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00B2468
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00B2384 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C003C4E0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00B25A4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  __m128i *UnionRegion; // rax
  char v14; // r10
  __int64 v15; // r9
  __m128i v16; // xmm0
  unsigned __int64 v17; // rdx
  _OWORD v18[46]; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+340h] [rbp+238h] BYREF
  int v20; // [rsp+348h] [rbp+240h] BYREF

  v20 = a3;
  v19 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v19, &v20);
  switch ( *((_DWORD *)a1 + 696) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      a4->x -= v20;
      result = (unsigned int)v19;
      goto LABEL_3;
    case 3:
      a4->x -= v19;
      result = (unsigned int)v20;
      break;
    case 4:
      a4->x += v20;
      result = (unsigned int)v19;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(*((_DWORD *)a1 + 696) - 3), v10, v11);
LABEL_2:
      a4->x += v19;
      result = (unsigned int)v20;
LABEL_3:
      a4->y += result;
      goto LABEL_4;
  }
  a4->y -= result;
LABEL_4:
  if ( (a8 & 4) == 0 )
  {
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v18);
    v14 = gptInd;
    v15 = 3LL * (unsigned int)gptInd;
    v16 = _mm_srli_si128(*UnionRegion, 8);
    v17 = HIDWORD(UnionRegion->m128i_i64[0]);
    *((_DWORD *)&gaptMouse + 2 * v15) = LOWORD(a4->x) | ((unsigned __int16)(v16.m128i_i16[0]
                                                                          - UnionRegion->m128i_i64[0]
                                                                          - 1) << 16);
    LODWORD(UnionRegion) = a6;
    *((_DWORD *)&gaptMouse + 2 * v15 + 1) = LOWORD(a4->y) | ((v16.m128i_i32[1] - (_DWORD)v17 - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v15 + 2) = (_DWORD)UnionRegion;
    *((_QWORD *)&gaptMouse + v15 + 2) = a7;
    result = (v14 + 1) & 0x3F;
    gptInd = (v14 + 1) & 0x3F;
  }
  return result;
}
