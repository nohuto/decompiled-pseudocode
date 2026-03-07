__int64 __fastcall PopRecalculateCBTriggerLevels(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  unsigned int v3; // ecx
  _BYTE *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  PopAcquirePolicyLock(a1);
  v1 = 0;
  v2 = 0LL;
  v10 = 0;
  v3 = 0;
  do
  {
    v4 = PopPolicy;
    v5 = 3 * (v2 + 4);
    v6 = 3LL * v3;
    if ( (*(&PopCB + 2 * v6 + 83) & 0x80u) == 0 )
    {
      *(&PopCB + 2 * v6 + 86) = *((_DWORD *)PopPolicy + 6 * v2 + 25);
      if ( v4[24 * v2 + 96] )
      {
        *(&PopCB + 2 * v6 + 83) |= 0x80u;
        PopDiagTraceBatteryTriggerFlags(&v10, (__int64)(&PopCB + 2 * v6 + 82));
        v1 = v10;
        v7 = 3LL * v10;
        v8 = 24LL * v10;
        if ( PopBatteryCheckTrigger((__int64)&PopCB + v8 + 328) )
        {
          *(&PopCB + 2 * v7 + 83) |= 2u;
          PopDiagTraceBatteryTriggerFlags(&v10, (__int64)&PopCB + v8 + 328);
          v1 = v10;
        }
      }
    }
    v10 = ++v1;
    v3 = v1;
    v2 = v1;
  }
  while ( v1 < 4 );
  return PopReleasePolicyLock(v1, v5, v4);
}
