/*
 * XREFs of PopPowerRequestCreateCommon @ 0x14036A698
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     PoCreatePowerRequest @ 0x140369E10 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140369ECC (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetThreadExecutionState @ 0x1407EDD60 (NtSetThreadExecutionState.c)
 *     PopPowerAggregatorInitialize @ 0x140B02408 (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B2D588 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14036ABA8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x14036B8CC (SessionIsInteractive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1407EFDAC (PopReleasePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407EFFBC (PopDiagTracePowerRequestCreate.c)
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestTableInsertEntry @ 0x1407F0194 (PopPowerRequestTableInsertEntry.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1407F01CC (PopUmpoSendPowerRequestCreate.c)
 *     PopPowerRequestTableDeleteEntry @ 0x14098A25C (PopPowerRequestTableDeleteEntry.c)
 */

__int64 __fastcall PopPowerRequestCreateCommon(_DWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  LONG *p_LockNV; // rdi
  LONG v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  __int64 inserted; // r15
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  int Object; // ebx
  int SessionId; // eax
  _DWORD *v17; // rbx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _DWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  char v29; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v30; // [rsp+D0h] [rbp+50h]
  void *v31; // [rsp+D8h] [rbp+58h] BYREF

  v30 = a3;
  v4 = a1;
  v23[1] = 0;
  v27 = 0;
  v31 = 0LL;
  v29 = 0;
  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
    p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
    v8 = p_LockNV[272];
    if ( a2 )
    {
      PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v29, 0LL);
      if ( v29 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    v6 = 0;
    p_LockNV = 0LL;
    v8 = 0;
  }
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v9 = PopPowerRequestId;
  v10 = (unsigned int)PopPowerRequestId++;
  inserted = PopPowerRequestTableInsertEntry(v10);
  PopReleasePowerRequestPushLock();
  v12 = v4[6] + 32;
  v24 = 0LL;
  v25 = 0LL;
  LOBYTE(v13) = v6;
  v23[0] = 48;
  v26 = 32;
  v28 = 0LL;
  Object = ObCreateObject(0, PopPowerRequestObjectType, (unsigned int)v23, v13, 0, 168, v12, 0, (__int64)&v31);
  if ( Object < 0 )
  {
    if ( inserted )
    {
      LOBYTE(v14) = 1;
      PopAcquirePowerRequestPushLock(v14);
      PopPowerRequestTableDeleteEntry(*(unsigned int *)(inserted + 8));
      PopReleasePowerRequestPushLock();
    }
  }
  else
  {
    memset(v31, 0, 0xA8uLL);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v17 = v31;
    v18 = 0;
    if ( SessionId != -1 )
      v18 = SessionId;
    *((_DWORD *)v31 + 4) = v18;
    v17[26] = v8;
    if ( *v4 && !a2 )
    {
      ObfReferenceObjectWithTag(p_LockNV, 0x72506F50u);
      *((_QWORD *)v17 + 17) = p_LockNV;
    }
    *((_BYTE *)v17 + 152) = a2;
    *((_QWORD *)v17 + 12) = v4;
    v17[9] = v9;
    *((_QWORD *)v17 + 9) = v17 + 16;
    *((_QWORD *)v17 + 8) = v17 + 16;
    if ( *v4 )
    {
      v19 = MmGetSessionIdEx((__int64)p_LockNV);
      if ( a2 )
        v17[5] = 8;
      else
        v17[5] = (unsigned __int8)SessionIsInteractive(v19) != 0 ? 63 : 30;
    }
    else
    {
      v17[5] = 18;
    }
    PopPowerRequestStatsCreate(v17);
    LOBYTE(v20) = 1;
    PopAcquirePowerRequestPushLock(v20);
    v21 = (_QWORD *)qword_140C242A8;
    if ( *(PVOID **)qword_140C242A8 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *(_QWORD *)v17 = &PopPowerRequestObjectList;
    *((_QWORD *)v17 + 1) = v21;
    *v21 = v17;
    qword_140C242A8 = (__int64)v17;
    *(_QWORD *)inserted = v17;
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v17);
    if ( *v4 )
      PopUmpoSendPowerRequestCreate((unsigned int)v17[9]);
    PopDiagTracePowerRequestCreate(0LL, v17);
    PopReleasePowerRequestPushLock();
    *v30 = v17;
    return 0;
  }
  return (unsigned int)Object;
}
