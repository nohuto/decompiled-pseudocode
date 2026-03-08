/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C003B920
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C000C99C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserLockCursor @ 0x1C003A670 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C016D9B0 (NtUserClipCursor.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  _OWORD *v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r15
  int v10; // r13d
  unsigned __int64 v11; // rdi
  unsigned int v12; // r12d
  __m128i v13; // xmm6
  INT v14; // esi
  INT v15; // r13d
  INT v16; // eax
  unsigned __int64 v17; // r9
  signed __int64 v18; // r10
  unsigned __int64 v19; // rdx
  __int32 v20; // r12d
  signed __int64 v21; // r10
  unsigned __int64 v22; // rdx
  __int32 v23; // ebp
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // ecx
  signed int v27; // r8d
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  int v30; // r15d
  __int32 v31; // edx
  signed int v32; // r10d
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // esi
  int v38; // r11d
  signed __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  int v41; // r10d
  int v42; // esi
  signed __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 result; // rax
  __int128 v46; // [rsp+30h] [rbp-48h]

  CurrentThreadDpiAwarenessContext = a3;
  v6 = a2;
  if ( !(_DWORD)a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || !qword_1C02D71C0 || (int)qword_1C02D71C0() < 0 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *v6;
  }
  else
  {
    if ( a4 )
    {
      v8 = (_QWORD *)*a4;
      if ( *a4 )
        goto LABEL_8;
    }
    v8 = qword_1C02D71C8;
    if ( qword_1C02D71C8 )
      v8 = (_QWORD *)qword_1C02D71C8(v6, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
LABEL_8:
      *a4 = v8;
    v9 = v8[5];
    v10 = 0x80000000;
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v12 = *(unsigned __int16 *)(v9 + 60);
    v13 = *(__m128i *)(v9 + 28);
    if ( (_WORD)v11 )
    {
      v14 = *(unsigned __int16 *)(v9 + 62);
      v15 = EngMulDiv(_mm_cvtsi128_si32(v13), v11, v14);
      v16 = EngMulDiv(v13.m128i_i32[1], v11, v14);
      v17 = v12;
      if ( !v12
        || ((v18 = (unsigned __int64)v12 >> 1, v12 != 96LL) ? (v19 = v18 / (int)v12) : (v19 = v18 / 96), v19 > 0x7FFFFFFF) )
      {
        LODWORD(v19) = 0x7FFFFFFF;
      }
      v20 = v19 + v15;
      if ( (_DWORD)v17
        && ((v21 = v17 >> 1, (int)v17 != 96LL) ? (v22 = v21 / (int)v17) : (v22 = v21 / 96), v22 <= 0x7FFFFFFF) )
      {
        v10 = 0x80000000;
      }
      else
      {
        v10 = 0x80000000;
        LODWORD(v22) = 0x7FFFFFFF;
      }
      v23 = v16 + v22;
      v6 = a2;
    }
    else
    {
      v23 = v13.m128i_i32[1];
      LODWORD(v17) = *(unsigned __int16 *)(v9 + 60);
      v20 = v13.m128i_i32[0];
    }
    v24 = *v6;
    v25 = *v6 - v20;
    v26 = v20 - *v6;
    v27 = (v25 >> 31) & 0xFFFFFFFE;
    v46 = *v6;
    if ( v25 >= 0 )
      v26 = *v6 - v20;
    if ( (_DWORD)v11
      && ((v28 = (v11 >> 1) + (unsigned int)v17 * (__int64)v26, (int)v11 != 96LL)
        ? (v29 = v28 / (int)v11)
        : (v29 = v28 / 96),
          v29 <= 0x7FFFFFFF) )
    {
      if ( v27 <= -1 )
        LODWORD(v29) = -(int)v29;
    }
    else
    {
      LODWORD(v29) = 0x80000000;
      if ( v27 > -1 )
        LODWORD(v29) = 0x7FFFFFFF;
    }
    v30 = v13.m128i_i32[0] + v29;
    v31 = v23 - DWORD1(v24);
    *(_DWORD *)a1 = v30;
    v32 = ((DWORD1(v24) - v23) >> 31) & 0xFFFFFFFE;
    if ( DWORD1(v24) - v23 >= 0 )
      v31 = DWORD1(v24) - v23;
    if ( (_DWORD)v11
      && ((v33 = (v11 >> 1) + (unsigned int)v17 * (__int64)v31, (int)v11 != 96LL)
        ? (v35 = v33 / (int)v11)
        : (v34 = (__int64)((unsigned __int128)(v33 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4, v35 = (v34 >> 63) + v34),
          v35 <= 0x7FFFFFFF) )
    {
      if ( v32 <= -1 )
        LODWORD(v35) = -(int)v35;
    }
    else
    {
      LODWORD(v35) = 0x80000000;
      if ( v32 > -1 )
        LODWORD(v35) = 0x7FFFFFFF;
    }
    v36 = DWORD2(v46) - v24;
    v37 = 1;
    v38 = v13.m128i_i32[1] + v35;
    *(_DWORD *)(a1 + 4) = v13.m128i_i32[1] + v35;
    if ( DWORD2(v46) - (int)v24 < 0 )
    {
      v37 = -1;
      v36 = v24 - DWORD2(v46);
    }
    if ( (_DWORD)v11
      && ((v39 = (v11 >> 1) + v36 * (unsigned __int64)(unsigned int)v17, (int)v11 != 96LL)
        ? (v40 = v39 / (int)v11)
        : (v40 = v39 / 96),
          v40 <= 0x7FFFFFFF) )
    {
      if ( v37 <= 0 )
        LODWORD(v40) = -(int)v40;
    }
    else
    {
      LODWORD(v40) = 0x80000000;
      if ( v37 > 0 )
        LODWORD(v40) = 0x7FFFFFFF;
    }
    v41 = HIDWORD(v46) - DWORD1(v24);
    *(_DWORD *)(a1 + 8) = v30 + v40;
    v42 = 1;
    if ( HIDWORD(v46) - DWORD1(v24) < 0 )
    {
      v42 = -1;
      v41 = DWORD1(v24) - HIDWORD(v46);
    }
    if ( (_DWORD)v11
      && ((v43 = (v11 >> 1) + v41 * (unsigned __int64)(unsigned int)v17, (int)v11 != 96LL)
        ? (v44 = v43 / (int)v11)
        : (v44 = v43 / 96),
          v44 <= 0x7FFFFFFF) )
    {
      v10 = v44;
      if ( v42 <= 0 )
        v10 = -(int)v44;
    }
    else if ( v42 > 0 )
    {
      v10 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 12) = v38 + v10;
  }
  return result;
}
