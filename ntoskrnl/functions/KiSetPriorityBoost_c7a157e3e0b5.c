unsigned __int64 __fastcall KiSetPriorityBoost(
        unsigned __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  if ( a1 )
    KiSetPriorityThread(a2, a1, a3);
  else
    KiUpdateThreadPriority(0LL, a2, a2, a3, 0);
  v7 = *(_QWORD *)(a2 + 32);
  if ( a4 > v7 || (result = v7 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
