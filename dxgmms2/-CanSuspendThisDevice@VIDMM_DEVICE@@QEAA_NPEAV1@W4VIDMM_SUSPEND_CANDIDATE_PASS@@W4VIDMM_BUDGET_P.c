bool __fastcall VIDMM_DEVICE::CanSuspendThisDevice(VIDMM_DEVICE *a1, VIDMM_DEVICE *a2, int a3, int a4)
{
  bool result; // al
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( a1 != a2
    && *((_QWORD *)a1 + 3)
    && a1 != *(VIDMM_DEVICE **)(*(_QWORD *)a1 + 40392LL)
    && (a3 == 2 || !a2 || *((_QWORD *)a1 + 1) != *((_QWORD *)a2 + 1)) )
  {
    v8 = 0;
    v7 = 0;
    VIDMM_DEVICE::GetBudgetAndVisibilityState(a1, &v7, (enum VIDMM_BUDGET_PRIORITY_BAND *)&v8);
    if ( v8 >= a4 && (a3 || v7) )
      return 1;
  }
  return result;
}
