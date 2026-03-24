/*
 * XREFs of GetTopMostInsertAfter @ 0x1C01D0ADC
 * Callers:
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0036A5C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 */

_QWORD *__fastcall GetTopMostInsertAfter(__int64 a1)
{
  PVOID v1; // rax
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *i; // rdx

  if ( (((*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) - 668) & 0xFFFB) != 0
    && gptiCurrent != gHardErrorHandler
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x200000) == 0 )
  {
    v1 = *(PVOID *)(gptiCurrent + 456LL);
    if ( v1 != grpdeskLogon && v1 == *(PVOID *)(gHardErrorHandler + 456LL) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( DesktopWindow == v3 )
      {
        for ( i = *(_QWORD **)(v3 + 112); i && (*(_BYTE *)(i[5] + 24LL) & 8) != 0; i = (_QWORD *)i[11] )
        {
          if ( v4 == i[2] )
            return i;
        }
      }
    }
  }
  return 0LL;
}
