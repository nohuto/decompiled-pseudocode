/*
 * XREFs of ProcessSuspendedPostMessage @ 0x1C014322E
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0037298 (_PostThreadMessageEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0009E88 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C000F514 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedPostMessage(__int64 a1, HWND *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  HWND v7; // rsi
  struct tagQMSG *v8; // rdi
  struct tagMLIST *v9; // rbp
  struct tagQMSG *QMsgForCoalesce; // rax
  int v11; // edx
  int v12; // r11d

  if ( a3 < 0x400 )
  {
    if ( (((unsigned __int16)MessageTable[a3] >> 10) & 7) == 0 )
      return 0LL;
    if ( (((unsigned __int16)MessageTable[a3] >> 10) & 7u) >= 2 )
    {
      if ( a2 )
        v7 = *a2;
      else
        v7 = 0LL;
      v8 = 0LL;
      v9 = (struct tagMLIST *)(a1 + 808);
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce(v9, a3, v7, v8);
        v8 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( !ProcessComplexCoalescence(
                v12,
                v11,
                a4,
                a5,
                (unsigned __int64 *)QMsgForCoalesce + 4,
                (__int64 *)QMsgForCoalesce + 5) )
          return 0LL;
      }
    }
  }
  return 1LL;
}
