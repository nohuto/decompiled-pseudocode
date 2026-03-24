/*
 * XREFs of ProcessSuspendedPostMessage @ 0x1C01268C8
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostThreadMessageEx @ 0x1C00DA7B4 (_PostThreadMessageEx.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C00088A4 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0126990 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 */

__int64 __fastcall ProcessSuspendedPostMessage(__int64 a1, HWND *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // r11d
  unsigned int v7; // r10d
  HWND v9; // rdi
  struct tagQMSG *v10; // rbx
  struct tagMLIST *v11; // rsi
  struct tagQMSG *QMsgForCoalesce; // rax
  int v13; // edx
  int v14; // r10d

  v5 = a3;
  if ( a3 < 0x400 )
    v7 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  else
    v7 = 1;
  if ( !v7 )
    return 0LL;
  if ( v7 >= 2 )
  {
    if ( a2 )
      v9 = *a2;
    else
      v9 = 0LL;
    v10 = 0LL;
    v11 = (struct tagMLIST *)(a1 + 808);
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce(v11, v5, v9, v10);
      v10 = QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      if ( !ProcessComplexCoalescence(
              v14,
              v13,
              a4,
              a5,
              (unsigned __int64 *)QMsgForCoalesce + 4,
              (__int64 *)QMsgForCoalesce + 5) )
        return 0LL;
    }
  }
  return 1LL;
}
