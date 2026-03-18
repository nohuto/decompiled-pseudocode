/*
 * XREFs of PopPowerRequestDelete @ 0x1407A6CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PsReleaseProcessWakeCounter @ 0x140715770 (PsReleaseProcessWakeCounter.c)
 *     TtmIsEnabled @ 0x1407A65A0 (TtmIsEnabled.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A4608 (TtmNotifySessionPowerRequestDeleted.c)
 */

void __fastcall PopPowerRequestDelete(ULONG *a1)
{
  ULONG *v1; // rbx
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 **v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  REGHANDLE v11; // rdi
  _DWORD *v12; // rax
  ULONG *v13; // [rsp+30h] [rbp-29h] BYREF
  _DWORD Src[20]; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Buffer; // [rsp+90h] [rbp+37h] BYREF

  v1 = a1;
  v2 = 0LL;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v3 = *(__int64 **)v1;
  if ( *(ULONG **)(*(_QWORD *)v1 + 8LL) != v1 || (v4 = (__int64 **)*((_QWORD *)v1 + 1), *v4 != (__int64 *)v1) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (__int64)v4;
  v5 = (void *)*((_QWORD *)v1 + 17);
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    *((_QWORD *)v1 + 17) = 0LL;
  }
  v6 = *((_QWORD *)v1 + 18);
  if ( v6 )
  {
    *((_QWORD *)v1 + 18) = 0LL;
    v2 = v6;
  }
  v7 = v1[9];
  --PopPowerRequestObjectCount;
  Buffer = 0LL;
  Buffer.Size = v7;
  RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  if ( v2 )
    PsReleaseProcessWakeCounter(v2);
  PoDestroyReasonContext(*((_QWORD **)v1 + 12), v8, v9, v10);
  if ( *((_QWORD *)v1 + 20) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
    v12 = (_DWORD *)*((_QWORD *)v1 + 20);
    *((_QWORD *)v1 + 20) = 0LL;
    --*v12;
    PopReleaseRwLock(&PopPowerRequestStatsLock);
  }
  v13 = v1;
  if ( PopDiagHandleRegistered )
  {
    v11 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST) )
    {
      Buffer.Ptr = (ULONGLONG)&v13;
      *(_QWORD *)&Buffer.Size = 8LL;
      EtwWrite(v11, &POP_ETW_EVENT_CLOSE_POWER_REQUEST, 0LL, 1u, &Buffer);
    }
  }
  if ( v1[26] )
  {
    if ( TtmIsEnabled() )
      TtmNotifySessionPowerRequestDeleted(v1[4], v1[9]);
    if ( PopPowerRequestNotificationsEnabled )
    {
      memset(Src, 0, 0x48uLL);
      Src[2] = v1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    }
  }
  if ( !*((_BYTE *)v1 + 152) )
  {
    memset(Src, 0, 0x48uLL);
    Src[2] = v1[9];
    Src[0] = 9;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
}
