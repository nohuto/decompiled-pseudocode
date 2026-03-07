__int64 __fastcall NtCreateIRTimer(__int64 *a1, __int64 a2)
{
  return NtCreateTimer2(a1, a2, 0LL, 2u);
}
