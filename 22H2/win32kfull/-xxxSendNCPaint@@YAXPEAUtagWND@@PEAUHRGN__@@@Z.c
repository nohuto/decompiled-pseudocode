/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C010F1C0
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C007D854 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C007DADC (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, unsigned __int64 a2)
{
  SetOrClrWF(0, (__int64)a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1, (__int64)a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, (__int64)a1, 0x101u, 1);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) < 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((unsigned __int64)a1, 0x85u, a2, 0LL);
}
