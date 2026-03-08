/*
 * XREFs of ?ApplyDeBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x1C008F110
 * Callers:
 *     <none>
 * Callees:
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1C008F128 (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 */

void __fastcall GroupedProcessForegroundBoost::ApplyDeBoost(
        GroupedProcessForegroundBoost *this,
        const struct tagWND *a2)
{
  GroupedFGBoostProp::applyBoostIfNeeded(this, 0LL);
}
