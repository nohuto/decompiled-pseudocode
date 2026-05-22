/*
 * XREFs of ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28
 * Callers:
 *     ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180004A20 (-OnDisconnected@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002807C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180045D8C (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800B7EC0 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B84B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B91B0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B99E8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800F22E0 (-OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801386E0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x180138890 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x180138900 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801393E0 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801396D4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B634 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 */

struct InputSiteManager *ISMStatics::GetInputSiteManager(void)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  return (struct InputSiteManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                     + 23)
                                                                                   + 8LL)
                                                                       + 136LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
}
