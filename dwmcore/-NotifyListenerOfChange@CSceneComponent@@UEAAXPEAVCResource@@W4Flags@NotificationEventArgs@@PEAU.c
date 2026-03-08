/*
 * XREFs of ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801C2940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneComponent::NotifyListenerOfChange(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 72LL))(a2, 0LL, a1);
}
