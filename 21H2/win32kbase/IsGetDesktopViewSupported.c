/*
 * XREFs of IsGetDesktopViewSupported @ 0x1C0066C58
 * Callers:
 *     ValidateHwndEx @ 0x1C0038620 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0066820 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetDesktopViewSupported()
{
  if ( qword_1C0256D60 )
    return qword_1C0256D60();
  else
    return 3221225659LL;
}
