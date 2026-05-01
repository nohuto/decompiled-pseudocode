/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801A8DB8
 * Callers:
 *     ??0bad_cast@std@@QEAA@AEBV01@@Z @ 0x18011AA50 (--0bad_cast@std@@QEAA@AEBV01@@Z.c)
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1801A8C60 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1801B6A30 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x18021D64C (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1803383A0 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??0invalid_operation@Concurrency@@QEAA@AEBV01@@Z @ 0x180394700 (--0invalid_operation@Concurrency@@QEAA@AEBV01@@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180394778 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0task_canceled@Concurrency@@QEAA@AEBV01@@Z @ 0x1803947A0 (--0task_canceled@Concurrency@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180090812 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8);
  return this;
}
