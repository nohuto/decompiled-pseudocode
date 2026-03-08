/*
 * XREFs of DbgkpInitializePhase0 @ 0x140B44E78
 * Callers:
 *     DbgkInitialize @ 0x140B475E0 (DbgkInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmSiRWLockInitialize @ 0x14080BCF0 (CmSiRWLockInitialize.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     DbgkpGetServerSiloState @ 0x14080F9D4 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0SiloState @ 0x14080F9F0 (DbgkpInitializePhase0SiloState.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  __int64 v1; // rbx
  union _RTL_RUN_ONCE *v2; // rcx
  union _RTL_RUN_ONCE *v3; // rcx
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
      v2 = &RunOnce;
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
