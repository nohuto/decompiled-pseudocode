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
