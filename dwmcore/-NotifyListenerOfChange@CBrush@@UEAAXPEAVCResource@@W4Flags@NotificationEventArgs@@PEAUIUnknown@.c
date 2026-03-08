/*
 * XREFs of ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D7830
 * Callers:
 *     ?NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D7770 (-NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUI.c)
 *     ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D77A0 (-NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // edi

  v5 = a3;
  if ( a3 == 14 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 17LL) )
  {
    v5 = 0;
LABEL_11:
    a4 = a1;
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 55LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 131LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 132LL) )
  {
    goto LABEL_11;
  }
LABEL_5:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 196LL) && !v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, 5LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 72LL))(a2, v5, a4);
}
