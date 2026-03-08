/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E7440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, 2LL, a1);
}
