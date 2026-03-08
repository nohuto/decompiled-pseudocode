/*
 * XREFs of ?NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D7770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGradientBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  bool v6; // zf
  __int64 v7; // r8

  v4 = 0LL;
  v6 = a3 == 10;
  v7 = 6LL;
  if ( !v6 )
  {
    v4 = a4;
    v7 = a3;
  }
  return CBrush::NotifyListenerOfChange(a1, a2, v7, v4);
}
