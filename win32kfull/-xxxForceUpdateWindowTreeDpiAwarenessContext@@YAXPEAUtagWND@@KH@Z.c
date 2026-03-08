/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC
 * Callers:
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0222698 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C012953C (GetPrimaryMonitorRectForWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  unsigned int v7; // r14d
  __int64 *v8; // rax
  struct tagWND *i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 5);
  v5 = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
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
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow((__int64 *)&v15, a1);
  v11 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (unsigned __int64)a1,
    0x7Eu,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (__int128 *)((unsigned __int16)(v11.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | (unsigned __int64)(int)((v11.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16))));
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
  v15 = 0LL;
  v16 = 0LL;
  ThreadLock(a1, &v15);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    ThreadUnlock1(v13, v12, v14);
LABEL_8:
    if ( !i )
      break;
    v17 = 0LL;
    v18 = 0LL;
    ThreadLock(i, &v17);
    xxxForceUpdateWindowTreeDpiAwarenessContext(i, v5, 0);
  }
}
