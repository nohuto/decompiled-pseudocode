/*
 * XREFs of xxxFocusSetInputContext @ 0x1C00349DC
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00319A0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00346D4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DFB20 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F5668 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v12[2] = 0LL;
  result = a1[17];
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = a1[2];
      v8 = *(struct tagWND **)(result + 784);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 488);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v12;
          v12[1] = v8;
          HMLockObject(v8);
          v10 = *a1;
          if ( a3 )
            QueueNotifyTransformableMessage(v8, 0x287u, 24LL - (a2 != 0), v10, 0, 0);
          else
            xxxSendMessage(v8, 647LL, 24LL - (a2 != 0), v10);
          return ThreadUnlock1(v11);
        }
      }
    }
  }
  return result;
}
