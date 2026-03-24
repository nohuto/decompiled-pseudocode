/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1405A0E84
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C8E2C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(void (__fastcall *a1)(__int64 (__fastcall **)(PCONTEXT ContextRecord)))
{
  char result; // al

  result = (char)a1;
  if ( a1 )
  {
    a1(&ViUtilsForXDV);
    return 1;
  }
  return result;
}
