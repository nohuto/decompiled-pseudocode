/*
 * XREFs of SshpAlpcSendMessage @ 0x14084A2B0
 * Callers:
 *     SshpAlpcOpenGracePeriodWorker @ 0x140849DD0 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x140849E40 (SshpAlpcOpenTraceSessionUnsafe.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084A04C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcShutdownTraceSessions @ 0x14099F524 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140413490 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SshpAlpcSendMessage(__int64 a1, __int64 a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  _OWORD v8[11]; // [rsp+70h] [rbp-90h] BYREF

  v5 = qword_140C38150;
  if ( qword_140C38150 )
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
