int __fastcall HalpRegisterPeiErrorSource(unsigned __int64 a1)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int128 v5; // [rsp+60h] [rbp-18h] BYREF
  PKINTERRUPT v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return -1073741811;
  v3 = 0LL;
  if ( LOWORD(KeActiveProcessors[0]) )
    v3 = qword_140D1EFE8[0];
  v4 = *(_DWORD *)(a1 + 160);
  v5 = (unsigned __int64)v3;
  return HalpInterruptConnect(
           &v5,
           v4,
           0xE4u,
           0xFu,
           1u,
           LevelSensitive,
           (unsigned __int64)HalpPeiInterruptHandler,
           a1,
           0LL,
           0xFu,
           7,
           &v6);
}
