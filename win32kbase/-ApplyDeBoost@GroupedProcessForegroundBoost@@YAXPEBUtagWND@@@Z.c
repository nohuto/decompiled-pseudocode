void __fastcall GroupedProcessForegroundBoost::ApplyDeBoost(
        GroupedProcessForegroundBoost *this,
        const struct tagWND *a2)
{
  GroupedFGBoostProp::applyBoostIfNeeded(this, 0LL);
}
