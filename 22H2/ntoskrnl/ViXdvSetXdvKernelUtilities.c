/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x1405CF260
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140ACBA1C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(
        void (__fastcall *a1)(__int64 (__fastcall **)(PCONTEXT ContextRecord), __int64 *, __int64),
        __int64 a2,
        __int64 a3)
{
  char result; // al

  result = (char)a1;
  if ( a1 )
  {
    LOBYTE(a3) = CmStateSeparationEnabled;
    a1(&ViUtilsForXDV, &VfRuleClasses, a3);
    return 1;
  }
  return result;
}
