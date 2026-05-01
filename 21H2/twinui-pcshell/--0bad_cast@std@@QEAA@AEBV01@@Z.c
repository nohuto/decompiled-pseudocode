/*
 * XREFs of ??0bad_cast@std@@QEAA@AEBV01@@Z @ 0x18011AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801A8DB8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_cast *__fastcall std::bad_cast::bad_cast(std::bad_cast *this, const struct std::bad_cast *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_cast::`vftable';
  return this;
}
