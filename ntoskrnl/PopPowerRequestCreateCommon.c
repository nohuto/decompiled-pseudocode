/*
 * XREFs of PopPowerRequestCreateCommon @ 0x1402BC348
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x1403C09C0 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058B800 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 *     PopPowerAggregatorInitialize @ 0x140B46D2C (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B6EC5C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     SessionIsInteractive @ 0x1402B92A4 (SessionIsInteractive.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1402BCE58 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     ObCreateObject @ 0x140709D30 (ObCreateObject.c)
 *     PopReleasePowerRequestPushLock @ 0x14073B67C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestTableInsertEntry @ 0x14073C0A4 (PopPowerRequestTableInsertEntry.c)
 *     PopDiagTracePowerRequestCreate @ 0x14073C0DC (PopDiagTracePowerRequestCreate.c)
 *     PopPowerRequestStatsCreate @ 0x14073C194 (PopPowerRequestStatsCreate.c)
 *     PopUmpoSendPowerRequestCreate @ 0x14073C318 (PopUmpoSendPowerRequestCreate.c)
 *     PopPowerRequestTableDeleteEntry @ 0x14097EAFC (PopPowerRequestTableDeleteEntry.c)
 */

__int64 __fastcall PopPowerRequestCreateCommon(_DWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v4; // r14
  char v5; // bl
  LONG *p_LockNV; // rdi
  LONG v7; // r12d
  int v8; // r13d
  __int64 v9; // rcx
  __int64 inserted; // r15
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  int Object; // ebx
  int SessionId; // eax
  _DWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  _DWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]
  __int128 v31; // [rsp+70h] [rbp-10h]
  char v32; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v33; // [rsp+D0h] [rbp+50h]
  void *v34; // [rsp+D8h] [rbp+58h] BYREF

  v33 = a3;
  v4 = a1;
  v26[1] = 0;
  v30 = 0;
  v34 = 0LL;
  v32 = 0;
  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
    v7 = p_LockNV[272];
    if ( a2 )
    {
      PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v32, 0LL);
      if ( v32 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    v5 = 0;
    p_LockNV = 0LL;
    v7 = 0;
  }
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v8 = PopPowerRequestId;
  v9 = (unsigned int)PopPowerRequestId++;
  inserted = PopPowerRequestTableInsertEntry(v9);
  PopReleasePowerRequestPushLock(v11);
  v12 = v4[6] + 32;
  v27 = 0LL;
  v28 = 0LL;
  LOBYTE(v13) = v5;
  v26[0] = 48;
  v29 = 32;
  v31 = 0LL;
  Object = ObCreateObject(0, (_DWORD)PopPowerRequestObjectType, (unsigned int)v26, v13, 0, 168, v12, 0, (__int64)&v34);
  if ( Object < 0 )
  {
    if ( inserted )
    {
      LOBYTE(v14) = 1;
      PopAcquirePowerRequestPushLock(v14);
      PopPowerRequestTableDeleteEntry(*(unsigned int *)(inserted + 8));
      PopReleasePowerRequestPushLock(v25);
    }
  }
  else
  {
    memset(v34, 0, 0xA8uLL);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v17 = v34;
    v18 = 0;
    if ( SessionId != -1 )
      v18 = SessionId;
    *((_DWORD *)v34 + 4) = v18;
    v17[26] = v7;
    if ( *v4 && !a2 )
    {
      ObfReferenceObjectWithTag(p_LockNV, 0x72506F50u);
      *((_QWORD *)v17 + 17) = p_LockNV;
    }
    *((_BYTE *)v17 + 152) = a2;
    *((_QWORD *)v17 + 12) = v4;
    v17[9] = v8;
    *((_QWORD *)v17 + 9) = v17 + 16;
    *((_QWORD *)v17 + 8) = v17 + 16;
    if ( *v4 )
    {
      v24 = MmGetSessionIdEx(p_LockNV);
      if ( a2 )
        v17[5] = 8;
      else
        v17[5] = SessionIsInteractive(v24) != 0 ? 63 : 30;
    }
    else
    {
      v17[5] = 18;
    }
    PopPowerRequestStatsCreate(v17);
    LOBYTE(v19) = 1;
    PopAcquirePowerRequestPushLock(v19);
    v20 = (_QWORD *)qword_140C3F168;
    if ( *(PVOID **)qword_140C3F168 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *(_QWORD *)v17 = &PopPowerRequestObjectList;
    *((_QWORD *)v17 + 1) = v20;
    *v20 = v17;
    qword_140C3F168 = (__int64)v17;
    *(_QWORD *)inserted = v17;
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v17);
    if ( *v4 )
      PopUmpoSendPowerRequestCreate((unsigned int)v17[9]);
    PopDiagTracePowerRequestCreate(0LL, v17);
    PopReleasePowerRequestPushLock(v21);
    *v33 = v17;
    return 0;
  }
  return (unsigned int)Object;
}
