/*
 * XREFs of ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801BE350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVectorShape::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    a4 = 0LL;
    a3 = 0;
  }
  return CContent::NotifyListenerOfChange(a1, a2, a3, a4);
}
