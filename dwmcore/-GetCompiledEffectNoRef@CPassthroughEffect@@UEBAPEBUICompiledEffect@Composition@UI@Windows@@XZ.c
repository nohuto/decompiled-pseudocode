/*
 * XREFs of ?GetCompiledEffectNoRef@CPassthroughEffect@@UEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800FD580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CPassthroughEffect::GetCompiledEffectNoRef(
        CPassthroughEffect *this)
{
  return (const struct Windows::UI::Composition::ICompiledEffect *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
}
