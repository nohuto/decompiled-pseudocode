/*
 * XREFs of DpiFdoCleanupDP @ 0x1C005F504
 * Callers:
 *     DpiFdoInitializeDP @ 0x1C001D720 (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C039D034 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupDP(_QWORD *a1))(_QWORD)
{
  void *v1; // rbx
  void (__fastcall *result)(_QWORD); // rax

  v1 = a1 + 691;
  result = (void (__fastcall *)(_QWORD))a1[694];
  if ( result )
  {
    result(a1[692]);
    return (void (__fastcall *)(_QWORD))memset(v1, 0, 0x48uLL);
  }
  return result;
}
