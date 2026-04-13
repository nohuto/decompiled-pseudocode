/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180004D8C
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180005100 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180004A38 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::FailureInfo *a2)
{
  wil::ResultException *result; // rax

  exception::exception(this);
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::ResultException *)((char *)this + 24), a2);
  *((_QWORD *)this + 23) = 0LL;
  result = this;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
