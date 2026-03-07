__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD); // rax

  if ( a3 == -1 )
    return 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(PpmPlatformStates + 24);
  if ( !v4 )
    return 0LL;
  else
    return v4(a1, 0xFFFFFFFFLL, a3);
}
