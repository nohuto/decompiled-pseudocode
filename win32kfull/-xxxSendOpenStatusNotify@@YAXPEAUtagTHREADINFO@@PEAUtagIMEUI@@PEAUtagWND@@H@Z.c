/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01B9880
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B94A8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01B9654 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  _BOOL8 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v5 = a4 != 0;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 632LL) >= 0x400u && *(_QWORD *)(*((_QWORD *)a3 + 5) + 208LL) )
  {
    v9 = 0LL;
    v10 = 0LL;
    ThreadLockAlways(a3, &v9);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a3, 0x282u, v5 + 1, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, (__int64)a3, v5 + 1);
  }
}
