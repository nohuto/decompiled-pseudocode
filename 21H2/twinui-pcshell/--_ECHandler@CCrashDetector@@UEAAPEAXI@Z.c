/*
 * XREFs of ??_ECHandler@CCrashDetector@@UEAAPEAXI@Z @ 0x1801E4440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrashDetector::CHandler *__fastcall CCrashDetector::CHandler::`vector deleting destructor'(
        CCrashDetector::CHandler *this,
        char a2)
{
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
