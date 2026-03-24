/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C007DB7C
 * Callers:
 *     xxxBeginPaint @ 0x1C007D8F4 (xxxBeginPaint.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00C135C (ThreadLockExchangeAlways.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C010F540 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v2; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[2] = 0LL;
  v3[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v3;
  v3[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    v2 = *(_QWORD *)(i + 40);
    if ( !*(_QWORD *)(v2 + 136) && (*(_BYTE *)(v2 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v3);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(a1);
}
