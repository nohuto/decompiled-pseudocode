__int64 __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  KIRQL v4; // al
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  char v17; // [rsp+28h] [rbp-49h] BYREF
  int v18; // [rsp+2Ch] [rbp-45h] BYREF
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  __int128 v20; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v21[7]; // [rsp+48h] [rbp-29h] BYREF
  int v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+84h] [rbp+13h]
  __int128 *v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 v26; // [rsp+98h] [rbp+27h]
  __int64 v27; // [rsp+A0h] [rbp+2Fh]
  __int64 *v28; // [rsp+A8h] [rbp+37h]
  __int64 v29; // [rsp+B0h] [rbp+3Fh]

  v19 = PopWnfCsEnterScenarioId;
  result = PpmPlatformStates;
  v3 = a2;
  v17 = 0;
  v18 = 0;
  v20 = 0LL;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v5 = PpmPlatformStates;
    v6 = 0;
    for ( i = v4; v6 < *(_DWORD *)PpmPlatformStates; ++v6 )
    {
      v8 = 448LL * v6;
      v9 = v8 + v5 + 80;
      LOBYTE(v8) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(v9, v8, 0LL);
      v5 = PpmPlatformStates;
    }
    if ( (_DWORD)v3 != -1 )
    {
      v10 = 0;
      v17 = v19;
      WORD2(v20) = v3;
      v21[0] = &v17;
      v21[2] = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v11 = v5 + 448 * v3;
      LODWORD(v20) = -1429427508;
      v21[1] = 1LL;
      v21[3] = 16LL;
      v24 = &v20;
      v25 = 16LL;
      if ( *(_DWORD *)(v11 + 108) )
      {
        do
        {
          v12 = *(_QWORD *)(v11 + 112) + ((unsigned __int64)v10 << 6);
          if ( *(_QWORD *)(v12 + 56) )
          {
            DWORD2(v20) = *(_DWORD *)(v12 + 16);
            v18 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v10 + 8) >> 1;
            v21[4] = &v18;
            v21[5] = 4LL;
            v13 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v10 + 8);
            v21[6] = *((_QWORD *)PpmIdleVetoList + 3 * v10 + 3);
            v28 = &v19;
            v22 = v13;
            v23 = 0;
            v26 = v12 + 56;
            v27 = 8LL;
            v29 = 8LL;
            PopDiagTraceSleepStudyBlocker(v13, v21);
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v11 + 108) );
      }
    }
    result = KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)i <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(i);
  }
  return result;
}
