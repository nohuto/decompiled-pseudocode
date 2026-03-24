/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C0104324
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C006D840 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C007D8F4 (xxxBeginPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v6 = xxxSendMessage(a1, 0x14u, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v6 )
  {
    SetOrClrWF(1, a1, 0x104u, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
      SetOrClrWF(1, a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
