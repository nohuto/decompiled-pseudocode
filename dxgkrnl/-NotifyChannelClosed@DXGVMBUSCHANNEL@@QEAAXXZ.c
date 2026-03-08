/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0361FF8
 * Callers:
 *     ProcessChannelClosed @ 0x1C0362880 (ProcessChannelClosed.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C0361E04 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelClosed(struct _EX_RUNDOWN_REF *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGVMBUSCHANNEL *Count; // rbx
  unsigned __int64 v6; // rdx
  DXGVMBUSCHANNEL *v7; // rax
  struct _KEVENT *v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  ExWaitForRundownProtectionRelease(this + 8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)&this[9], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  Count = (DXGVMBUSCHANNEL *)this[6].Count;
  while ( Count != (DXGVMBUSCHANNEL *)&this[6] )
  {
    v6 = (unsigned __int64)Count - 16;
    v7 = Count;
    Count = *(DXGVMBUSCHANNEL **)Count;
    DXGCHANNELENDPOINTPROXY::NotifyChannelClosed((DXGCHANNELENDPOINTPROXY *)(v6 & -(__int64)(v7 != 0LL)));
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  v8 = (struct _KEVENT *)this[4].Count;
  if ( v8 )
    KeSetEvent(v8, 0, 0);
}
