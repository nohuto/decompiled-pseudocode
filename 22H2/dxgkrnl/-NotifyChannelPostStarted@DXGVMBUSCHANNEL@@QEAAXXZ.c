/*
 * XREFs of ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B3BF4
 * Callers:
 *     ProcessChannelPostStarted @ 0x1C02B43C0 (ProcessChannelPostStarted.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelPostStarted(DXGVMBUSCHANNEL *this, __int64 a2)
{
  char v3; // si
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  char v7; // di
  struct _KEVENT *v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((struct _KTHREAD **)this + 16) != KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Acquire((DXGVMBUSCHANNEL *)((char *)this + 112));
    v3 = 1;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v5 != (_QWORD *)((char *)this + 48) )
  {
    v6 = v5[14];
    v5 = (_QWORD *)*v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v4);
  v7 = *((_BYTE *)this + 26);
  *(_WORD *)((char *)this + 25) = 0;
  if ( v3 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14, v4);
  ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  v8 = (struct _KEVENT *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    if ( v7 )
      KeSetEvent(v8, 0, 0);
  }
}
