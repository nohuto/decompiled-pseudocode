__int64 _IsStackThrottled(void)
{
  int StackTraceSum; // eax

  StackTraceSum = _GetStackTraceSum();
  return (unsigned __int8)_interlockedbittestandset(
                            (volatile signed __int32 *)gafServiceFilterAuditStackCache
                          + ((unsigned __int64)(unsigned __int16)(StackTraceSum ^ HIWORD(StackTraceSum)) >> 5)
                          % ((unsigned __int64)gstServiceFilterAuditStackCacheSize >> 2),
                            ((unsigned __int8)StackTraceSum ^ BYTE2(StackTraceSum)) & 0x1F);
}
