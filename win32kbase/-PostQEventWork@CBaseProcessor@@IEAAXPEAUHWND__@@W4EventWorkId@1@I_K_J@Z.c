__int64 __fastcall CBaseProcessor::PostQEventWork(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 result; // rax

  v6 = a4;
  v7 = (unsigned int)a3;
  result = *(unsigned int *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3456);
  if ( dword_1C02888E8[2 * v7 + 1] == (_DWORD)result )
  {
    result = (__int64)qword_1C02D7510;
    if ( qword_1C02D7510 )
      return qword_1C02D7510(dword_1C02888E8[2 * v7], a2, 0LL, v6, a5, a6);
  }
  return result;
}
