/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x1803944A8
 * Callers:
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x18011A8A0 (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x18011A930 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x18011AC40 (--0system_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801A8C08 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::runtime_error::`vftable';
  return this;
}
