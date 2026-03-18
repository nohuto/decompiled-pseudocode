/*
 * XREFs of ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802510D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneNode::NotifyListenerOfChange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *(_QWORD *)(a1 + 128) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 72LL))(a2, 0LL, a1);
  return result;
}
