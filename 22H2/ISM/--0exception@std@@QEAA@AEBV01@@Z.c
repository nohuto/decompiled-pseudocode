/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x180064668
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x180064568 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x18006DF84 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x18006DFC8 (--0bad_variant_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1800BCCF0 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x18013E7A0 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18003C08E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
