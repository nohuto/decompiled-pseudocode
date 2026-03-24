/*
 * XREFs of _GetMessagePos @ 0x1C010F9A0
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C02443D0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1C0245344 (xxxEndScroll.c)
 *     xxxSendHelpMessage @ 0x1C02500BC (xxxSendHelpMessage.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v2; // r8
  unsigned int v3; // edi
  int v4; // edx
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(gptiCurrent + 764LL);
  if ( *(_DWORD *)(gptiCurrent + 772LL) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    v2 = *(unsigned int *)(gptiCurrent + 772LL);
    v3 = CurrentThreadDpiAwarenessContext;
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(gptiCurrent + 772LL) >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v4 = 1;
    v5 = (v2 & 0xF) == 2 && (v2 & 0x20000000) != 0;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
      v4 = 0;
    if ( v5 != v4 )
    {
LABEL_14:
      LogicalToPhysicalDPIPoint(&v7, &v7, v2, 0LL);
      PhysicalToLogicalDPIPoint(&v7, &v7, v3, 0LL);
    }
  }
  else
  {
    v7 = 0LL;
  }
  return (unsigned __int16)v7 | (WORD2(v7) << 16);
}
