/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180394778
 * Callers:
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x18011AA10 (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x18011AAA0 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x18011ADB0 (--0system_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801A8DB8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::runtime_error::`vftable';
  return this;
}
