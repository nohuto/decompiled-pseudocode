__int64 __fastcall KeClearSystemPriorityThread(ULONG_PTR a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return KiClearSystemPriority(a1, (char *)&v3);
}
