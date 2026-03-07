__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // eax

  v4 = (unsigned __int64)a1 >> 2;
  v5 = 2 * (a1 & 3u) + 1;
  v6 = 1 << v5;
  if ( gpqForeground )
    v7 = *(unsigned __int8 *)(v4 + gpqForeground + 236);
  else
    v7 = *(unsigned __int8 *)(v4 + SGDGetUserSessionState(v5, a2, a3, a4) + 13992);
  return v6 & v7;
}
