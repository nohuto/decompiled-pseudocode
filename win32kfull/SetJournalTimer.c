__int64 __fastcall SetJournalTimer(unsigned int a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 404LL) = a2;
  result = InternalSetTimer(0LL, qword_1C0362970, a1, (__int64)JournalTimer, 32, 276);
  qword_1C0362970 = result;
  return result;
}
