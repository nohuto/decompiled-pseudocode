/*
 * XREFs of DwmChildRectChange @ 0x1C006BCDC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     _AdjustWindowRectExForDpi @ 0x1C006DA8C (_AdjustWindowRectExForDpi.c)
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  INT v4; // r15d
  __m128i v6; // xmm2
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // eax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v11; // rax
  int v12; // edi
  __int32 v13; // ebx
  int v14; // r11d
  int v15; // r14d
  int v16; // ecx
  __int32 v17; // r9d
  int v18; // ecx
  __int32 v19; // r8d
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  __int128 v23; // xmm1
  _QWORD *ThreadWin32Thread; // rax
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  INT ScaledLogPixels; // edi
  __int64 v33; // rdi
  LONG_PTR result; // rax
  void *v35; // rbx
  __m128i v36; // [rsp+30h] [rbp-D0h]
  __int128 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-98h] BYREF
  __m128i v40; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v41[28]; // [rsp+90h] [rbp-70h] BYREF

  v3 = a1[5];
  v4 = 0;
  v6 = *(__m128i *)(v3 + 88);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( v7 < v8 && v6.m128i_i32[1] < _mm_srli_si128(v6, 8).m128i_i32[1] )
  {
    v9 = *(_DWORD *)(v3 + 288);
    v37 = 0LL;
    if ( (v9 & 0xF) == 3 )
    {
      WindowDpiLastNotify = (v9 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v9 & 0xF) == 0
           && (v11 = *(_QWORD *)(a1[2] + 456)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 424) + 284LL);
    }
    AdjustWindowRectExForDpi((unsigned int)&v37, *(_DWORD *)(v3 + 28), a3, *(_DWORD *)(v3 + 24), WindowDpiLastNotify);
    v3 = a1[5];
    v4 = DWORD2(v37);
    v12 = v8 - DWORD2(v37);
    v13 = v7 - v37;
    v14 = v6.m128i_i32[1] - DWORD1(v37);
    v15 = v6.m128i_i32[3] - HIDWORD(v37);
    v16 = *(_DWORD *)(v3 + 104);
    if ( v16 < *(_DWORD *)(v3 + 112) && *(_DWORD *)(v3 + 108) < *(_DWORD *)(v3 + 116) )
    {
      if ( v13 >= v16 )
        v13 = *(_DWORD *)(v3 + 104);
      if ( v14 >= *(_DWORD *)(v3 + 108) )
        v14 = *(_DWORD *)(v3 + 108);
      if ( v12 <= *(_DWORD *)(v3 + 112) )
        v12 = *(_DWORD *)(v3 + 112);
      if ( v15 <= *(_DWORD *)(v3 + 116) )
        v15 = *(_DWORD *)(v3 + 116);
    }
    v17 = *(_DWORD *)(v3 + 88);
    v18 = *(_DWORD *)(v3 + 96);
    v19 = v18;
    v20 = *(_DWORD *)(v3 + 92);
    if ( v13 <= v17 )
      v13 = *(_DWORD *)(v3 + 88);
    v21 = *(_DWORD *)(v3 + 100);
    if ( v13 < v18 )
      v19 = v13;
    v22 = *(_DWORD *)(v3 + 100);
    v36.m128i_i32[0] = v19;
    if ( v14 <= v20 )
      v14 = *(_DWORD *)(v3 + 92);
    if ( v14 < v21 )
      v22 = v14;
    v36.m128i_i32[1] = v22;
    if ( v12 >= v18 )
      v12 = *(_DWORD *)(v3 + 96);
    if ( v12 > v17 )
      v17 = v12;
    if ( v15 >= v21 )
      v15 = *(_DWORD *)(v3 + 100);
    if ( v15 > v20 )
      v20 = v15;
    v36.m128i_i32[3] = v20;
    if ( v19 > v17 )
      v17 = v19;
    v36.m128i_i32[2] = v17;
    if ( v22 > v20 )
      v36.m128i_i32[3] = v22;
    v6 = v36;
  }
  v23 = *(_OWORD *)(v3 + 104);
  v38 = *(_OWORD *)(v3 + 88);
  v39 = v23;
  v40 = v6;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v25 = 0LL;
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v26 )
      v25 = *v26;
    if ( *(_QWORD *)(v25 + 456) )
    {
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v27 + 456) + 8LL) + 64LL) & 1) != 0 )
      {
        v29 = a1[5];
        v30 = *(_DWORD *)(v29 + 288);
        if ( (v30 & 0xF) == 0 && (v30 & 0x40000000) != 0 )
        {
          v31 = *(unsigned __int16 *)(v29 + 284);
          if ( (_WORD)v31 != 96 )
          {
            ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v31);
            ScaleDPIRect((unsigned int)&v38, (unsigned int)&v38, ScaledLogPixels, 96, 0LL, 0LL);
            ScaleDPIRect((unsigned int)&v39, (unsigned int)&v39, (unsigned __int16)ScaledLogPixels, 96, 0LL, 0LL);
            ScaleDPIRect((unsigned int)&v40, (unsigned int)&v40, (unsigned __int16)ScaledLogPixels, 96, 0LL, 0LL);
            v4 = EngMulDiv(v4, ScaledLogPixels, 96);
          }
        }
      }
    }
  }
  v33 = *a1;
  result = ReferenceDwmApiPort();
  v35 = (void *)result;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( result )
  {
    memset(v41, 0, 0x68uLL);
    v41[0] = 6815808;
    *(_OWORD *)&v41[13] = v38;
    LOWORD(v41[1]) = 0x8000;
    *(__m128i *)&v41[21] = v40;
    v41[10] = 1073741845;
    *(_QWORD *)&v41[11] = v33;
    *(_OWORD *)&v41[17] = v39;
    v41[25] = v4;
    EtwUpdateEvent(v33);
    LpcRequestPort(v35, v41);
    return ObfDereferenceObject(v35);
  }
  return result;
}
