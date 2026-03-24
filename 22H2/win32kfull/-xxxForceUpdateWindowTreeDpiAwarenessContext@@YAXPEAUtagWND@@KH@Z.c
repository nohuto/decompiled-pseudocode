/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C0040934 (GetPrimaryMonitorRectForWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  __int64 i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v11; // xmm0
  int v12; // ecx
  int v13; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-20h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  i = *((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_16;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v17, (__int64)a1);
  v11 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v11.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | (unsigned int)((v11.m128i_i32[1] << 16)
                                                                                                 - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16)));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
    goto LABEL_11;
  v12 = 1;
  v13 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
  if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
    v12 = 0;
  if ( v13 != v12 )
  {
LABEL_11:
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      9u,
      a1,
      0x1Au,
      0x2AuLL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      9u,
      a1,
      0x1Au,
      0x2EuLL,
      -1LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 240LL) )
    goto LABEL_16;
  v18[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v18;
  v18[1] = a1;
  HMLockObject(a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v15);
LABEL_16:
    if ( !i )
      break;
    v19[2] = 0LL;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v19[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v19;
    v19[1] = i;
    HMLockObject(i);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
