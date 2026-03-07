__int64 __fastcall local_unwind(ULONG_PTR a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
