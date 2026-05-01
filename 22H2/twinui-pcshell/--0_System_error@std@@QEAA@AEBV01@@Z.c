/*
 * XREFs of ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x18011A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x1803944A8 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 */

std::_System_error *__fastcall std::_System_error::_System_error(
        std::_System_error *this,
        const struct std::_System_error *a2)
{
  std::_System_error *result; // rax

  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = &std::_System_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  return result;
}
