/*
 * XREFs of RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C0032BB8
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C00361E4 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMFreeAsyncPnpWorkItem @ 0x1C003A278 (RIMFreeAsyncPnpWorkItem.c)
 */

__int64 __fastcall RIMDeleteAllAsyncPnpWorkNotificationItems(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 376);
  v2 = *(_QWORD **)(a1 + 376);
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    result = RIMFreeAsyncPnpWorkItem(v3);
  }
  return result;
}
