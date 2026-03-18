/*
 * XREFs of PopPowerRequestDelete @ 0x1407EF930
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A47BC (TtmNotifySessionPowerRequestDeleted.c)
 */

void __fastcall PopPowerRequestDelete(ULONG *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 **v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  REGHANDLE v11; // rdi
  ULONG *v12; // [rsp+30h] [rbp-29h] BYREF
  _DWORD Src[20]; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Buffer; // [rsp+90h] [rbp+37h] BYREF

  v2 = 0LL;
  PopAcquirePowerRequestPushLock(1);
  v3 = *(__int64 **)a1;
  if ( *(ULONG **)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = (__int64 **)*((_QWORD *)a1 + 1), *v4 != (__int64 *)a1) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (__int64)v4;
  v5 = (void *)*((_QWORD *)a1 + 17);
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  v6 = *((_QWORD *)a1 + 18);
  if ( v6 )
  {
    *((_QWORD *)a1 + 18) = 0LL;
    v2 = v6;
  }
  v7 = a1[9];
  --PopPowerRequestObjectCount;
  Buffer = 0LL;
  Buffer.Size = v7;
  RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v2 )
    PsReleaseProcessWakeCounter(v2);
  PoDestroyReasonContext(*((_QWORD **)a1 + 12));
  if ( *((_QWORD *)a1 + 20) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
    v10 = (_DWORD *)*((_QWORD *)a1 + 20);
    *((_QWORD *)a1 + 20) = 0LL;
    --*v10;
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestStatsLock);
  }
  v12 = a1;
  if ( PopDiagHandleRegistered )
  {
    v11 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST) )
    {
      Buffer.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&Buffer.Size = 8LL;
      EtwWrite(v11, &POP_ETW_EVENT_CLOSE_POWER_REQUEST, 0LL, 1u, &Buffer);
    }
  }
  if ( a1[26] )
  {
    if ( (unsigned __int8)TtmIsEnabled(v9, v8) )
      TtmNotifySessionPowerRequestDeleted(a1[4], a1[9]);
    if ( PopPowerRequestNotificationsEnabled )
    {
      memset(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
  {
    memset(Src, 0, 0x48uLL);
    Src[2] = a1[9];
    Src[0] = 9;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
}
