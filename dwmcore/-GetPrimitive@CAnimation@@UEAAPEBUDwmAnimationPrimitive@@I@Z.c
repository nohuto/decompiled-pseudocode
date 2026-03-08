/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800DE880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this)
{
  return (const struct DwmAnimationPrimitive *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
}
