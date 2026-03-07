__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        __int64 a2,
        __int64 a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 result; // rax
  __m128i v11; // xmm6
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _OWORD v57[46]; // [rsp+48h] [rbp-C0h] BYREF
  int v58; // [rsp+360h] [rbp+258h] BYREF
  int v59; // [rsp+368h] [rbp+260h] BYREF

  v59 = a3;
  v58 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v58, &v59);
  switch ( *((_DWORD *)a1 + 696) )
  {
    case 1:
      goto LABEL_6;
    case 2:
      a4->x -= v59;
      result = (unsigned int)v58;
      goto LABEL_7;
    case 3:
      a4->x -= v58;
      result = (unsigned int)(a4->y - v59);
      break;
    case 4:
      a4->x += v59;
      result = (unsigned int)(a4->y - v58);
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2840);
LABEL_6:
      a4->x += v58;
      result = (unsigned int)v59;
LABEL_7:
      a4->y += result;
      goto LABEL_8;
  }
  a4->y = result;
LABEL_8:
  if ( (a8 & 4) == 0 )
  {
    v11 = *(__m128i *)InputConfig::Mouse::GetUnionRegion(v57);
    v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    LOWORD(v12) = v12 - _mm_cvtsi128_si32(v11) - 1;
    v13 = LOWORD(a4->x) | ((unsigned __int16)v12 << 16);
    v17 = SGDGetUserSessionState(v12, v14, v15, v16) + 14368;
    v22 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v19, v18, v20, v21) + 14364);
    v23 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
    *(_DWORD *)(v17 + 8 * v22) = v13;
    LOWORD(v23) = v23 - _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - 1;
    v24 = LOWORD(a4->y) | ((unsigned __int16)v23 << 16);
    v27 = SGDGetUserSessionState(v23, v22, v25, v26) + 14368;
    v32 = *(unsigned int *)(SGDGetUserSessionState(v29, v28, v30, v31) + 14364);
    *(_DWORD *)(v27 + 24 * v32 + 4) = v24;
    v35 = SGDGetUserSessionState(v32, 3 * v32, v33, v34) + 14368;
    v40 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v37, v36, v38, v39) + 14364);
    v41 = a6;
    *(_DWORD *)(v35 + 8 * v40 + 8) = a6;
    v44 = SGDGetUserSessionState(v41, v40, v42, v43) + 14368;
    v49 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v46, v45, v47, v48) + 14364);
    v50 = a7;
    *(_QWORD *)(v44 + 8 * v49 + 16) = a7;
    LODWORD(v44) = ((unsigned __int8)*(_DWORD *)(SGDGetUserSessionState(v50, v49, v51, v52) + 14364) + 1) & 0x3F;
    result = SGDGetUserSessionState(v54, v53, v55, v56);
    *(_DWORD *)(result + 14364) = v44;
  }
  return result;
}
