/*
 * XREFs of ProcessSuspendedPostMessage @ 0x1C011907C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C00039A8 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C00AEE5C (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 */

__int64 __fastcall ProcessSuspendedPostMessage(__int64 a1, HWND *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  int v5; // r11d
  HWND v8; // rdi
  struct tagQMSG *v9; // rbx
  struct tagMLIST *v10; // rsi
  struct tagQMSG *QMsgForCoalesce; // rax
  int v12; // edx
  int v13; // r10d

  v5 = a3;
  if ( a3 >= 0x400 )
    return 1LL;
  if ( (((unsigned __int16)MessageTable[a3] >> 10) & 7) != 0 )
  {
    if ( (((unsigned __int16)MessageTable[a3] >> 10) & 7u) >= 2 )
    {
      if ( a2 )
        v8 = *a2;
      else
        v8 = 0LL;
      v9 = 0LL;
      v10 = (struct tagMLIST *)(a1 + 808);
      while ( 1 )
      {
        QMsgForCoalesce = FindQMsgForCoalesce(v10, v5, v8, v9);
        v9 = QMsgForCoalesce;
        if ( !QMsgForCoalesce )
          break;
        if ( !ProcessComplexCoalescence(
                v13,
                v12,
                a4,
                a5,
                (unsigned __int64 *)QMsgForCoalesce + 4,
                (__int64 *)QMsgForCoalesce + 5) )
          return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
