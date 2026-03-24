/*
 * XREFs of DwmChildRectChange @ 0x1C004E0EC
 * Callers:
 *     OffsetWindow @ 0x1C004CA70 (OffsetWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00E9D5C (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1C94 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00428C0 (ScaleDPIRect.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     _AdjustWindowRectExForDpi @ 0x1C004E6DC (_AdjustWindowRectExForDpi.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

LONG_PTR __fastcall DwmChildRectChange(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  INT v4; // r15d
  __int64 *v5; // rsi
  __m128i v6; // xmm2
  int v7; // ebx
  int v8; // edi
  unsigned __int64 v9; // xmm0_8
  unsigned int v10; // eax
  unsigned int WindowDpiLastNotify; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // r11d
  int v15; // r14d
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v28; // rcx
  struct _KTHREAD *v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rcx
  struct _KTHREAD *v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  LONG_PTR result; // rax
  void *v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v59; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int16 ScaledLogPixels; // ax
  INT v66; // edi
  __m128i v67; // [rsp+30h] [rbp-D0h]
  __int128 v68; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v69; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v70; // [rsp+68h] [rbp-98h] BYREF
  __m128i v71; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v72[28]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  v5 = (__int64 *)a1;
  v6 = *(__m128i *)(v3 + 88);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( v7 < v8 )
  {
    v9 = _mm_srli_si128(v6, 8).m128i_u64[0];
    a1 = HIDWORD(v9);
    if ( v6.m128i_i32[1] < SHIDWORD(v9) )
    {
      v10 = *(_DWORD *)(v3 + 288);
      v68 = 0LL;
      if ( (v10 & 0xF) == 3 )
      {
        WindowDpiLastNotify = (v10 >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v3 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v5);
      }
      else if ( (v10 & 0xF) == 0
             && (v52 = *(_QWORD *)(v5[2] + 456)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v52 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(v5[2] + 424) + 284LL);
      }
      AdjustWindowRectExForDpi((unsigned int)&v68, *(_DWORD *)(v3 + 28), a3, *(_DWORD *)(v3 + 24), WindowDpiLastNotify);
      v3 = v5[5];
      v4 = DWORD2(v68);
      v12 = v8 - DWORD2(v68);
      v13 = v7 - v68;
      v14 = v6.m128i_i32[1] - DWORD1(v68);
      v15 = v6.m128i_i32[3] - HIDWORD(v68);
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
      a1 = *(unsigned int *)(v3 + 96);
      v18 = *(_DWORD *)(v3 + 96);
      v19 = *(_DWORD *)(v3 + 92);
      if ( v13 <= v17 )
        v13 = *(_DWORD *)(v3 + 88);
      v20 = *(_DWORD *)(v3 + 100);
      if ( v13 < (int)a1 )
        v18 = v13;
      v21 = *(_DWORD *)(v3 + 100);
      v67.m128i_i32[0] = v18;
      if ( v14 <= v19 )
        v14 = *(_DWORD *)(v3 + 92);
      if ( v14 < v20 )
        v21 = v14;
      v67.m128i_i32[1] = v21;
      if ( v12 >= (int)a1 )
        v12 = *(_DWORD *)(v3 + 96);
      if ( v12 > v17 )
        v17 = v12;
      if ( v15 >= v20 )
        v15 = *(_DWORD *)(v3 + 100);
      if ( v15 > v19 )
        v19 = v15;
      v67.m128i_i32[3] = v19;
      if ( v18 > v17 )
        v17 = v18;
      v67.m128i_i32[2] = v17;
      if ( v21 > v19 )
        v67.m128i_i32[3] = v21;
      v6 = v67;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v23 = *(__m128i *)(v3 + 104);
  v69 = *(__m128i *)(v3 + 88);
  v70 = v23;
  v71 = v6;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (v53 = PsGetCurrentProcess(v25, v24, v26),
        v54 = PsGetProcessSessionIdEx(v53),
        v56 = PsGetCurrentThreadProcess(v55),
        v54 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v29 = KeGetCurrentThread();
        v30 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v28)
          || (CurrentProcess = PsGetCurrentProcess(v32, v31, v33),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v59),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          v34 = (__int64 *)PsGetThreadWin32Thread(v29);
          if ( v34 )
            v30 = *v34;
        }
        if ( *(_QWORD *)(v30 + 456) )
        {
          v36 = KeGetCurrentThread();
          v37 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v35)
            || (v61 = PsGetCurrentProcess(v39, v38, v40),
                v62 = PsGetProcessSessionIdEx(v61),
                v64 = PsGetCurrentThreadProcess(v63),
                v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
          {
            v41 = (__int64 *)PsGetThreadWin32Thread(v36);
            if ( v41 )
              v37 = *v41;
          }
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v37 + 456) + 8LL) + 64LL) & 1) != 0 )
          {
            v42 = v5[5];
            v43 = *(_DWORD *)(v42 + 288);
            if ( (v43 & 0xF) == 0 && (v43 & 0x40000000) != 0 )
            {
              v51 = *(unsigned __int16 *)(v42 + 284);
              if ( (_WORD)v51 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v51);
                v66 = ScaledLogPixels;
                ScaleDPIRect(&v69, &v69, ScaledLogPixels, 0x60u, 0LL, 0LL);
                ScaleDPIRect(&v70, &v70, v66, 0x60u, 0LL, 0LL);
                ScaleDPIRect(&v71, &v71, v66, 0x60u, 0LL, 0LL);
                v4 = EngMulDiv(v4, v66, 96);
              }
            }
          }
        }
      }
    }
  }
  DirtyVisRgnTrackers(v5);
  v44 = *v5;
  result = ReferenceDwmApiPort(v46, v45);
  v48 = (void *)result;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( result )
  {
    memset(v72, 0, 0x68uLL);
    v72[0] = 6815808;
    *(__m128i *)&v72[13] = v69;
    LOWORD(v72[1]) = 0x8000;
    *(__m128i *)&v72[21] = v71;
    v72[10] = 1073741845;
    *(_QWORD *)&v72[11] = v44;
    *(__m128i *)&v72[17] = v70;
    v72[25] = v4;
    EtwUpdateEvent(v44, 1073741845LL, v49, v50);
    LpcRequestPort(v48, v72);
    return ObfDereferenceObject(v48);
  }
  return result;
}
