__int64 __fastcall GroupedFGBoostProp::doBoost(__int64 a1, __int64 a2, int a3)
{
  return PsSetProcessPriorityByClass(a2, a3 == 1);
}
