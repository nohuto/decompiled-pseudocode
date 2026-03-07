NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
