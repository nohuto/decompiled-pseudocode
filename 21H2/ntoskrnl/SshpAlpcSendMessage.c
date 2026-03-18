/*
 * XREFs of SshpAlpcSendMessage @ 0x14081B360
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14081AFCC (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14081B21C (SshpAlpcOpenTraceSessionUnsafe.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x14081B2F0 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A1604 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SshpAlpcSendMessage(__int64 a1, __int64 a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  _OWORD v8[11]; // [rsp+70h] [rbp-90h] BYREF

  v5 = qword_140C1C1F0;
  if ( qword_140C1C1F0 )
  {
    v8[0] = 0LL;
    memmove((char *)v8 + 12, a4, a3);
    if ( a5 )
    {
      memset(&v8[1], 0, 0xA0uLL);
      v6 = 0x20000LL;
    }
    else
    {
      v6 = 0x10000LL;
    }
    return ZwAlpcSendWaitReceivePort((__int64)v5, v6);
  }
  return result;
}
