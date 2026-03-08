/*
 * XREFs of ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C036234C
 * Callers:
 *     ProcessRingPacket @ 0x1C0362950 (ProcessRingPacket.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C03622CC (-ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C0362448 (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProcessPacket(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        struct VMBPACKETCOMPLETION__ *a3,
        void *a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  DXGCHANNELENDPOINTPROXY *v13; // [rsp+60h] [rbp+8h] BYREF

  v9 = -1073741823;
  if ( ExAcquireRundownProtection(this + 8) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)&this[9], 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    v13 = 0LL;
    v10 = DXGVMBUSCHANNEL::ProxyFromSubscriberTag((DXGVMBUSCHANNEL *)this, a2, &v13);
    v9 = v10;
    if ( v10 < 0 )
      WdLogSingleEntry4(3LL, v13, v10, 467LL, this);
    else
      v9 = DXGCHANNELENDPOINTPROXY::ProcessMessage(v13, a3, a4, a5);
    ExReleaseRundownProtection(this + 8);
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  return v9;
}
