/*
 * XREFs of CreateKernelIocp @ 0x1C00B3780
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00B358C (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall CreateKernelIocp(ULONG NumberOfConcurrentThreads)
{
  NTSTATUS v1; // eax
  int v2; // edx
  struct _OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF
  void *v5; // [rsp+78h] [rbp+10h] BYREF

  memset(&v4.Length + 1, 0, 20);
  memset(&v4.Attributes + 1, 0, 20);
  v5 = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  v1 = ZwCreateIoCompletion(&v5, 0x1F0003u, &v4, NumberOfConcurrentThreads);
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gBaseLog, v2, 17, 12, (__int64)&WPP_eb65e8752d313ccdb5208ac13de848c5_Traceguids, v1);
  }
  return v5;
}
