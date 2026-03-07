__int64 __fastcall KeSetSystemPriorityThread(ULONG_PTR a1, int a2)
{
  return KiSetSystemPriorityThread(a1, a2, 0);
}
