/*
 * XREFs of _lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_ @ 0x1800D6FA0
 * Callers:
 *     ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1804697D0 (-PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
