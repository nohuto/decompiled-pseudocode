/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684
 * Callers:
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0238468 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00AD384 (GetPrimaryMonitorRectForWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  struct tagWND *i; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int128 v19; // [rsp+58h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  i = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow((__int64)&v17, a1, v10, v11);
  v13 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (unsigned __int16)(v13.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | (unsigned int)((v13.m128i_i32[1] << 16)
                                                                                                 - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16)));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
  {
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
    goto LABEL_8;
  v17 = 0LL;
  v18 = 0LL;
  ThreadLock((__int64)a1, (__int64 *)&v17);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    ThreadUnlock1(v15, v14, v16);
LABEL_8:
    if ( !i )
      break;
    v19 = 0LL;
    v20 = 0LL;
    ThreadLock((__int64)i, (__int64 *)&v19);
    xxxForceUpdateWindowTreeDpiAwarenessContext(i, v5, 0);
  }
}
