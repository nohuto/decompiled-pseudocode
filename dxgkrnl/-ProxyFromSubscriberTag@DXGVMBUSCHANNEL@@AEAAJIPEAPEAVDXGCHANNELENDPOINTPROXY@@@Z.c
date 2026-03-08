/*
 * XREFs of ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C0362448
 * Callers:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C036234C (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C03624E0 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProxyFromSubscriberTag(
        DXGVMBUSCHANNEL *this,
        int a2,
        struct DXGCHANNELENDPOINTPROXY **a3)
{
  unsigned int v6; // edi
  _QWORD **v7; // rbx
  _QWORD *i; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = -1073741275;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v7 = (_QWORD **)((char *)this + 48);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(((unsigned __int64)(i - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64)) + 0x24) == a2 )
    {
      *a3 = (struct DXGCHANNELENDPOINTPROXY *)((unsigned __int64)(i - 2) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64));
      v6 = 0;
      break;
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
