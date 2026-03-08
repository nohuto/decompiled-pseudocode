/*
 * XREFs of ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DDF00
 * Callers:
 *     ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800149A0 (-NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CContent::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 196LL) && !a3 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, 5LL, 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 72LL))(a2, a3, a4);
}
