/*
 * XREFs of ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00F7040
 * Callers:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00F6E98 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F6EF4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C011AD24 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

struct CManualResetEvent *CManualResetEvent::Create(void)
{
  struct CManualResetEvent *result; // rax
  __int64 v1; // rbx
  struct CManualResetEvent *v2; // rdi
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // rsi

  result = (struct CManualResetEvent *)EngAllocMem(0, 8u, 0x676D6466u);
  v1 = 0LL;
  v2 = result;
  if ( result )
  {
    v3 = (struct _KEVENT *)EngAllocMem(2u, 0x18u, 0x676D6466u);
    v4 = v3;
    if ( v3 )
    {
      KeInitializeEvent(v3, NotificationEvent, 0);
      *(_QWORD *)v2 = v4;
      return v2;
    }
    else
    {
      *(_QWORD *)v2 = 0LL;
      CManualResetEvent::Destroy(v2);
    }
    return (struct CManualResetEvent *)v1;
  }
  return result;
}
