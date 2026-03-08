/*
 * XREFs of ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1C03627AC
 * Callers:
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C035DA38 (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::UpdateVmBusHandle(DXGVMBUSCHANNEL *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C013D098)(*((_QWORD *)this + 2), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry3(2LL, v4, 431LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x",
      v5,
      431LL,
      (__int64)this,
      0LL,
      0LL);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return (unsigned int)v5;
}
