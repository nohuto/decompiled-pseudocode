__int64 __fastcall PpmIdleGuestTest(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edx
  unsigned int (__fastcall *v5)(__int64, _QWORD); // rax

  v3 = 0;
  if ( a3 != -1 )
  {
    v5 = *(unsigned int (__fastcall **)(__int64, _QWORD))(PpmPlatformStates + 16);
    if ( v5 )
      return v5(a1, 0LL);
  }
  return v3;
}
