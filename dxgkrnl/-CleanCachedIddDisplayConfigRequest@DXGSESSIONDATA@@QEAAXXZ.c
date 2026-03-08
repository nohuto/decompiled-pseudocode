/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C005809C
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C0350280 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C0016DB0 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

void __fastcall DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(ReferenceCounted **this)
{
  bool v2; // zf
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(this + 2378), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(this + 2385, 0LL);
  ++*((_DWORD *)this + 4768);
  v2 = v3[8] == 0;
  *((_DWORD *)this + 4769) = *((_DWORD *)this + 4768);
  if ( !v2 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
