/*
 * XREFs of ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00E72CC
 * Callers:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E7128 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E717C (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ??1?$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ @ 0x1C0309168 (--1-$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ.c)
 */

struct CManualResetEvent *CManualResetEvent::Create(void)
{
  struct CManualResetEvent *v0; // rax
  struct CManualResetEvent *v1; // rbx
  struct _KEVENT *v2; // rax
  struct _KEVENT *v3; // rdi
  struct CManualResetEvent *result; // rax
  struct CManualResetEvent *v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = (struct CManualResetEvent *)EngAllocMem(0, 8u, 0x676D6466u);
  v1 = v0;
  if ( v0 )
  {
    v5 = v0;
    v2 = (struct _KEVENT *)EngAllocMem(2u, 0x18u, 0x676D6466u);
    v3 = v2;
    if ( v2 )
    {
      KeInitializeEvent(v2, NotificationEvent, 0);
      result = v1;
      *(_QWORD *)v1 = v3;
      return result;
    }
    *(_QWORD *)v1 = 0LL;
    CAutoDestroy<CManualResetEvent>::~CAutoDestroy<CManualResetEvent>(&v5);
  }
  return 0LL;
}
