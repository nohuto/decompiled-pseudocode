/*
 * XREFs of ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02EF998
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C0016DB0 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

__int64 __fastcall DXGSESSIONDATA::CacheIddDisplayConfigRequest(__int64 a1, ReferenceCounted **a2)
{
  unsigned int v4; // ebx
  bool v5; // zf
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)(a1 + 19024), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *a2 )
    _InterlockedIncrement((volatile signed __int32 *)*a2 + 2);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)(a1 + 19080), *a2);
  v4 = *(_DWORD *)(a1 + 19072) + 1;
  v5 = v7[8] == 0;
  *(_DWORD *)(a1 + 19072) = v4;
  if ( !v5 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v4;
}
