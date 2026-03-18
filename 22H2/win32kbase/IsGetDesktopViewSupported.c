/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C00B5124
 * Callers:
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00DE4F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C02951E8 )
    return qword_1C02951E8();
  else
    return 3221225659LL;
}
