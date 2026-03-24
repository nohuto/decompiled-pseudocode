/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C00065F8
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00061C0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ValidateHwndEx @ 0x1C0039A90 (ValidateHwndEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C0255D60 )
    return qword_1C0255D60();
  else
    return 3221225659LL;
}
