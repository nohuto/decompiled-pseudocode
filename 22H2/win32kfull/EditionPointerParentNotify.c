/*
 * XREFs of EditionPointerParentNotify @ 0x1C01F1C60
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0718 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  v8[2] = 0LL;
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v7 = gptiCurrent;
      v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v8;
      v8[1] = 0LL;
      do
      {
        LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v7 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        ThreadLockExchange(v3, (__int64)v8);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(gpTouchProcessor, a2) );
      return ThreadUnlock1(v7);
    }
  }
  return result;
}
