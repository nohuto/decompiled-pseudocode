/*
 * XREFs of SshpSessionManagerInitialize @ 0x140B01B6C
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmSiRWLockInitialize @ 0x1407F3B30 (CmSiRWLockInitialize.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140829294 (SshpSessionManagerTraceSystemStart.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&SshpSessionManagerLock);
  memset(&SshpSessionManagerContext, 0, 0x448uLL);
  LOWORD(stru_140C1C3E8.Header.Lock) = 0;
  qword_140C1C3D0 = (__int64)SshpSessionManagerControlSessionCallback;
  stru_140C1C3E8.Header.WaitListHead.Blink = &stru_140C1C3E8.Header.WaitListHead;
  stru_140C1C3E8.Header.WaitListHead.Flink = &stru_140C1C3E8.Header.WaitListHead;
  stru_140C1C3E8.Header.Size = 6;
  stru_140C1C3E8.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
