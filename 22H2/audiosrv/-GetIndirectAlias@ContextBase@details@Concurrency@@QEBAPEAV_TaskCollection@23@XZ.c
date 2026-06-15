/*
 * XREFs of ?GetIndirectAlias@ContextBase@details@Concurrency@@QEBAPEAV_TaskCollection@23@XZ @ 0x18004D040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::details::_TaskCollection *__fastcall Concurrency::details::ContextBase::GetIndirectAlias(
        Concurrency::details::ContextBase *this)
{
  return (struct Concurrency::details::_TaskCollection *)*((_QWORD *)this + 25);
}
