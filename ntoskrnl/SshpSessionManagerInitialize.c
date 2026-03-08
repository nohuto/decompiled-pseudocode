/*
 * XREFs of SshpSessionManagerInitialize @ 0x140B71F74
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmSiRWLockInitialize @ 0x14080BCF0 (CmSiRWLockInitialize.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140860848 (SshpSessionManagerTraceSystemStart.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&SshpSessionManagerLock);
  memset(SshpSessionManagerContext, 0, 0x448uLL);
  LOWORD(stru_140C38348.Header.Lock) = 0;
  qword_140C38330 = (__int64)SshpSessionManagerControlSessionCallback;
  stru_140C38348.Header.WaitListHead.Blink = &stru_140C38348.Header.WaitListHead;
  stru_140C38348.Header.WaitListHead.Flink = &stru_140C38348.Header.WaitListHead;
  stru_140C38348.Header.Size = 6;
  stru_140C38348.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
