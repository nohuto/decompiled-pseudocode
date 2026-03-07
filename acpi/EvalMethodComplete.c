LONG __fastcall EvalMethodComplete(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return KeSetEvent((PRKEVENT)(a3 + 16), 0, 0);
}
