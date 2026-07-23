/*
 * XREFs of PopNotifySessionUserPowerRequestCreated @ 0x140670F5C
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x140670E30 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FFCA8 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x14090419C (TtmiLogSessionPowerRequestCreated.c)
 */

void __fastcall PopNotifySessionUserPowerRequestCreated(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v6; // esi
  PVOID v7; // rax
  PVOID v8; // rbx
  __int64 v9; // r8
  __int128 Buffer; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  PopAcquirePowerRequestPushLock(1);
  Buffer = 0LL;
  DWORD2(Buffer) = a2;
  v7 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  v8 = v7;
  if ( v7 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)v7 + 88LL);
    *(_QWORD *)(*(_QWORD *)v7 + 96LL) = a3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v8 )
  {
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(v9) = TtmpInsertPowerRequestToSession(a1, a2, v6, a3, 0LL, 0);
      TtmiLogSessionPowerRequestCreated(a1, a2, v9);
    }
  }
}
