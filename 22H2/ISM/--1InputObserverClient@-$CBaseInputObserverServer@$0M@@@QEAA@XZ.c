/*
 * XREFs of ??1InputObserverClient@?$CBaseInputObserverServer@$0M@@@QEAA@XZ @ 0x1800F4CE0
 * Callers:
 *     _CBaseInputObserverServer_12_::RegisterObserverClient_::_1_::dtor$0 @ 0x1800F51A2 (_CBaseInputObserverServer_12_--RegisterObserverClient_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBaseInputObserverServer<12>::InputObserverClient::~InputObserverClient(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
