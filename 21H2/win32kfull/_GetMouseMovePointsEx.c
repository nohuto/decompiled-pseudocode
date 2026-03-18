/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01D45BC
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C01F5500 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // r14d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  int v14; // eax
  unsigned int v15; // r11d
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v23; // r12d
  unsigned int v24; // edi
  int v25; // ecx
  int v26; // edx
  INT v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r14
  __m128i v33; // xmm6
  INT v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-A8h] BYREF
  int v40; // [rsp+28h] [rbp-A0h]
  unsigned int i; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v42; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-88h] BYREF
  __int128 v45; // [rsp+48h] [rbp-80h]
  __int64 v46; // [rsp+58h] [rbp-70h] BYREF
  __m128i v47[3]; // [rsp+68h] [rbp-60h] BYREF

  i = 0;
  v40 = 0;
  v46 = 0LL;
  LODWORD(v44) = *a1;
  HIDWORD(v44) = a1[2];
  v39 = 0LL;
  v42 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  LogicalToPhysicalDPIPoint(&v46, &v44, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v7 = (gptInd - 1) & 0x3F;
  else
    v7 = 63;
  v8 = v7;
  v45 = *(_OWORD *)(*gpDispInfo + 24LL);
  while ( 1 )
  {
    v9 = 0;
    v10 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v8) >> 16;
    if ( !(_WORD)v10
      || (v11 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v8 + 1) >> 16,
          v6 = (unsigned __int16)v11,
          !(_WORD)v11) )
    {
LABEL_22:
      v21 = v40;
      goto LABEL_23;
    }
    v12 = (unsigned __int16)v10 + 1;
    v13 = (unsigned __int16)v11 + 1;
    v14 = DWORD2(v45) - v45;
    v15 = *((__int16 *)&gaptMouse + 12 * v8);
    v43 = v15;
    if ( v12 != DWORD2(v45) - (_DWORD)v45 )
    {
      v6 = v15 * v14 % v12;
      v15 = v15 * v14 / v12;
      v43 = v15;
    }
    v16 = HIDWORD(v45) - DWORD1(v45);
    v17 = *((__int16 *)&gaptMouse + 12 * v8 + 2);
    if ( v13 != HIDWORD(v45) - DWORD1(v45) )
    {
      v6 = v17 * v16 % v13;
      v17 = v17 * v16 / v13;
    }
    if ( __PAIR64__(v17, v15) == v46 )
      goto LABEL_17;
    if ( (W32GetCurrentThreadDpiAwarenessContext(DWORD1(v45), v6) & 0xF) != 2 )
    {
      v42 = __PAIR64__(v17, v43);
      v19 = W32GetCurrentThreadDpiAwarenessContext(v18, v6);
      PhysicalToLogicalDPIPoint(&v39, &v42, v19, 0LL);
      if ( v39 == v44 )
        v9 = 1;
    }
    if ( v9 )
    {
LABEL_17:
      v20 = *((_DWORD *)a1 + 2);
      if ( !v20 || v20 == *((_DWORD *)&gaptMouse + 6 * v8 + 2) )
        break;
    }
    if ( v8 )
      v8 = ((_BYTE)v8 - 1) & 0x3F;
    else
      v8 = 63;
    if ( v8 == v7 )
      goto LABEL_22;
  }
  v21 = 1;
LABEL_23:
  if ( !v21 )
  {
    UserSetLastError(1171LL, v6);
    return 0xFFFFFFFFLL;
  }
  v23 = v8 - v7 + 64;
  if ( v8 > v7 )
    v23 = v8 - v7;
  if ( v23 >= a3 )
    v23 = a3;
  v24 = 0;
  for ( i = 0; v24 < v23; i = v24 )
  {
    v25 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v8));
    v26 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v8 + 1));
    v27 = v26 + 1;
    if ( !(_WORD)v25 || !(_WORD)v26 )
      break;
    LODWORD(v42) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v8), DWORD2(v45) - v45, v25 + 1);
    HIDWORD(v42) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v8 + 2), HIDWORD(v45) - DWORD1(v45), v27);
    v30 = W32GetCurrentThreadDpiAwarenessContext(v29, v28);
    PhysicalToLogicalDPIPoint(&v39, &v42, v30, 0LL);
    v32 = v24;
    if ( a4 == 2 )
    {
      v33 = *GetScreenRect(v47, v31);
      *(__m128i *)((char *)&v47[1] + 8) = v33;
      *(_DWORD *)(a2 + 24LL * v24) = EngMulDiv(
                                       (unsigned __int16)v39,
                                       0x10000,
                                       _mm_cvtsi128_si32(_mm_srli_si128(v33, 8)) - _mm_cvtsi128_si32(v33) - 1);
      v34 = EngMulDiv(
              WORD2(v39),
              0x10000,
              _mm_cvtsi128_si32(_mm_srli_si128(v33, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) - 1);
      v35 = 3LL * v24;
LABEL_40:
      *(_DWORD *)(a2 + 8 * v35 + 4) = v34;
      goto LABEL_41;
    }
    *(_QWORD *)(a2 + 24LL * v24) = v39;
    v32 = v24;
    v35 = 3LL * v24;
    v36 = *(_DWORD *)(a2 + 24LL * v24);
    if ( v36 < 0 )
      *(_DWORD *)(a2 + 24LL * v24) = v36 + 0x10000;
    v37 = *(_DWORD *)(a2 + 24LL * v24 + 4);
    if ( v37 < 0 )
    {
      v34 = v37 + 0x10000;
      goto LABEL_40;
    }
LABEL_41:
    v38 = 3 * v32;
    *(_DWORD *)(a2 + 8 * v38 + 8) = *((_DWORD *)&gaptMouse + 6 * v8 + 2);
    *(_QWORD *)(a2 + 8 * v38 + 16) = *((_QWORD *)&gaptMouse + 3 * v8 + 2);
    if ( v8 )
      v8 = ((_BYTE)v8 - 1) & 0x3F;
    else
      v8 = 63;
    ++v24;
  }
  return v24;
}
