/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1408EDE80
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x14078008C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14078014C (PopBatteryCheckTrigger.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  _BYTE *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  PopAcquirePolicyLock(a1);
  v1 = 0;
  v9 = 0;
  v2 = 0LL;
  do
  {
    v3 = PopPolicy;
    v4 = 3 * v2;
    v5 = 3 * v2;
    if ( (*(&PopCB + 6 * v2 + 75) & 0x80u) == 0 )
    {
      *(&PopCB + 6 * v2 + 78) = *((_DWORD *)PopPolicy + 6 * v2 + 25);
      if ( v3[24 * v2 + 96] )
      {
        *(&PopCB + 6 * v2 + 75) |= 0x80u;
        PopDiagTraceBatteryTriggerFlags(&v9, (__int64)(&PopCB + 6 * v2 + 74));
        v1 = v9;
        v6 = 3LL * v9;
        v7 = 24LL * v9;
        if ( PopBatteryCheckTrigger((__int64)&PopCB + v7 + 296) )
        {
          *(&PopCB + 2 * v6 + 75) |= 2u;
          PopDiagTraceBatteryTriggerFlags(&v9, (__int64)&PopCB + v7 + 296);
          v1 = v9;
        }
      }
    }
    v9 = ++v1;
    v2 = v1;
  }
  while ( v1 < 4 );
  return PopReleasePolicyLock(v4, v5);
}
