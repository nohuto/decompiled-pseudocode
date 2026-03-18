/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C007FB98
 * Callers:
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C007F760 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C029BAB0 )
    return qword_1C029BAB0();
  else
    return 3221225659LL;
}
