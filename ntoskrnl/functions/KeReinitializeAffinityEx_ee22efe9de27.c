__int64 __fastcall KeReinitializeAffinityEx(unsigned __int16 *a1)
{
  __int64 result; // rax

  memset(a1 + 4, 0, 8LL * *a1);
  result = 1LL;
  *a1 = 1;
  return result;
}
