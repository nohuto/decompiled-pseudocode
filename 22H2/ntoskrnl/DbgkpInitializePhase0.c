/*
 * XREFs of DbgkpInitializePhase0 @ 0x140A6D4E0
 * Callers:
 *     DbgkInitialize @ 0x140A6D4AC (DbgkInitialize.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     CmSiRWLockInitialize @ 0x1407905A0 (CmSiRWLockInitialize.c)
 *     ObCreateObjectType @ 0x140790760 (ObCreateObjectType.c)
 *     DbgkpInitializePhase0SiloState @ 0x1407CA3E4 (DbgkpInitializePhase0SiloState.c)
 *     DbgkpGetServerSiloState @ 0x1407CA70C (DbgkpGetServerSiloState.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  __int64 v1; // rbx
  _RTL_RUN_ONCE *v2; // rcx
  _RTL_RUN_ONCE *v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&v4.Length = 1572886LL;
  v4.Buffer = L"DebugObject";
  memset(v5, 0, 0x78uLL);
  DbgkpProcessDebugPortMutex.Owner = 0LL;
  DbgkpProcessDebugPortMutex.Contention = 0;
  DbgkpProcessDebugPortMutex.Event.Header.SignalState = 0;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Blink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Flink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Count = 1;
  LOWORD(DbgkpProcessDebugPortMutex.Event.Header.Lock) = 1;
  DbgkpProcessDebugPortMutex.Event.Header.Size = 6;
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  if ( (int)DbgkpInitializePhase0SiloState(ServerSiloState) >= 0 )
  {
    v5[1] = 0x2000100000000LL;
    v5[5] = 0LL;
    v5[9] = AlpcMessageDeleteProcedure;
    LOWORD(v5[0]) = 120;
    v5[8] = DbgkpCloseObject;
    v1 = 8LL;
    BYTE2(v5[0]) |= 8u;
    v5[3] = 0x1F000F001F000FLL;
    HIDWORD(v5[4]) = 512;
    v5[2] = 0x12000000020002LL;
    if ( (int)ObCreateObjectType(&v4, (__int64)v5, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
    {
      if ( !DbgkpMaxModuleMsgs )
        DbgkpMaxModuleMsgs = 500;
      v2 = &stru_140C53F30;
      do
      {
        CmSiRWLockInitialize(v2);
        v2 = v3 + 2;
        --v1;
      }
      while ( v1 );
    }
  }
}
