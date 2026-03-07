_BOOL8 __fastcall CWindowProp::GetProp<GroupedFGBoostProp>(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 Prop; // rax

  v4 = GroupedFGBoostProp::s_atom;
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), (__int64)a2, a3, a4);
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v4, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
