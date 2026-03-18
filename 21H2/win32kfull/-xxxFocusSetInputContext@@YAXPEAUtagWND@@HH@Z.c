/*
 * XREFs of ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall xxxFocusSetInputContext(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v13[2] = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (*(_BYTE *)(v6 + 10) & 1) == 0 && *(_WORD *)v6 != *(_WORD *)(gpsi + 898LL) )
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = *(struct tagWND **)(v7 + 784);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v7 + 488) & 1) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v13;
        v13[1] = v8;
        HMLockObject(v8);
        if ( a3 )
          QueueNotifyTransformableMessage(v8, 0x287u, 24LL - (a2 != 0), *(_QWORD *)a1, 0, 0);
        else
          xxxSendMessage((ULONG_PTR)v8);
        ThreadUnlock1(v11, v10, v12);
      }
    }
  }
}
