/*
 * XREFs of CCrashDetector::CLambdaHandler__lambda_d2034e7222b798c6bcd88609da745fd4___::_scalar_deleting_destructor_ @ 0x1801E40E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler__lambda_d2034e7222b798c6bcd88609da745fd4___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
