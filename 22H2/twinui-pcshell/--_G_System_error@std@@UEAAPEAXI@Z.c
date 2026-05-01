/*
 * XREFs of ??_G_System_error@std@@UEAAPEAXI@Z @ 0x18011BE40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1800907FE (_o___std_exception_destroy_0.c)
 */

std::_System_error *__fastcall std::_System_error::`scalar deleting destructor'(std::_System_error *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
