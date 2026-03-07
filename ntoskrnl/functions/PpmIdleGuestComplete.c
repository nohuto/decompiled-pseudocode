__int64 __fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(PpmPlatformStates + 32))(a1, 0xFFFFFFFFLL);
  return result;
}
