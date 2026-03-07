__int64 __fastcall NtQueueApcThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NtQueueApcThreadEx2(a1, 0LL, 0LL, a2, a3, a4, a5);
}
