/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C00F0318
 * Callers:
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v6 = xxxSendMessage((ULONG_PTR)a1);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v6 )
  {
    SetOrClrWF(1, a1, 0x104u, 1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
      SetOrClrWF(1, a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
