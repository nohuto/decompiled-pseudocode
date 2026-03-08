/*
 * XREFs of ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800149A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVectorShape::NotifyListenerOfChange(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (((_DWORD)a3 - 2) & 0xFFFFFFFD) == 0 )
    a3 = 0LL;
  return CContent::NotifyListenerOfChange(a1, a2, a3);
}
