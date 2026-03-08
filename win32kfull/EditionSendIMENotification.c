/*
 * XREFs of EditionSendIMENotification @ 0x1C01E9D90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall EditionSendIMENotification(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int128 *a5)
{
  __int64 v5; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 416);
  v13[2] = 0LL;
  v13[0] = v5;
  v13[1] = a2;
  *(_QWORD *)(a1 + 416) = v13;
  HMLockObject(a2);
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(a2, a3, a4, a5, 0, 0, 0LL, 1, 1);
  return ThreadUnlock1(v10, v9, v11);
}
