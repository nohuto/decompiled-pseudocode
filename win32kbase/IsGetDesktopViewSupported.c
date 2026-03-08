/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C003AA34
 * Callers:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C008F460 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C02D6368 )
    return qword_1C02D6368();
  else
    return 3221225659LL;
}
