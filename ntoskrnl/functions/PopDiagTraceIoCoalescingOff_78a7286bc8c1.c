void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3LL, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
