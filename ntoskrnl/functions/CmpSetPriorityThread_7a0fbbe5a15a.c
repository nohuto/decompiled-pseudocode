__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1)
{
  return KeSetActualBasePriorityThread(a1);
}
