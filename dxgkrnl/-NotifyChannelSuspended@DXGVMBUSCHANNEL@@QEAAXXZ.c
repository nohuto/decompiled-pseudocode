/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C03621BC
 * Callers:
 *     ProcessChannelSuspended @ 0x1C0362920 (ProcessChannelSuspended.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(DXGVMBUSCHANNEL *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGVMBUSCHANNEL *v5; // rdi
  DXGVMBUSCHANNEL *v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 6);
  while ( v5 != (DXGVMBUSCHANNEL *)((char *)this + 48) )
  {
    v6 = v5;
    v5 = *(DXGVMBUSCHANNEL **)v5;
    v7 = (__int64)v6 + 120;
    if ( !v6 )
      v7 = 136LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 32LL))(*(_QWORD *)v7);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  v8 = *((_QWORD *)this + 4) == 0LL;
  *((_BYTE *)this + 25) = 1;
  if ( !v8 )
  {
    if ( *((_BYTE *)this + 26) )
    {
      WdLogSingleEntry1(3LL, this);
      KeSetEvent(*((PRKEVENT *)this + 4), 0, 0);
    }
  }
}
