/*
 * XREFs of ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006110 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0006998 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006BD0 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00085C0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1C00087C0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015524 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019F1C (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisDispatchRequest @ 0x1C001D550 (ndisDispatchRequest.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001DB90 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001EA7C (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E810 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C00392F0 (NdisAllocateIoWorkItem.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003CF8C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C003FC8C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C005B6F0 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005B990 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005BAA0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisCsResiliencyCallback @ 0x1C005BDC0 (ndisCsResiliencyCallback.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005C774 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005D730 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C005DA20 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisWnfPdcCallback @ 0x1C005E2F0 (ndisWnfPdcCallback.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C0060520 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C0060670 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C0060FB0 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00616E0 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C0061850 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfMiniportDereference @ 0x1C00628D0 (NdisWdfMiniportDereference.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0063638 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C0063788 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00638C8 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 *     ndisQueueDpcWorkItem @ 0x1C0067B30 (ndisQueueDpcWorkItem.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0067D10 (ndisQueuedMiniportDpcWorkItem.c)
 *     NdisEnumerateFilterModules @ 0x1C006AA60 (NdisEnumerateFilterModules.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C006B958 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D4DC (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisFreeIoWorkItem @ 0x1C0071DF0 (NdisFreeIoWorkItem.c)
 *     ndisQueuedResetMiniport @ 0x1C00741C0 (ndisQueuedResetMiniport.c)
 *     NdisMResetMiniport @ 0x1C0074300 (NdisMResetMiniport.c)
 *     ?ndisSriovInterfaceDereference@@YAXPEAX@Z @ 0x1C007CB80 (-ndisSriovInterfaceDereference@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0081188 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0081AA0 (NdisMReenumerateFailedAdapter.c)
 *     NdisMAllocatePort @ 0x1C0083200 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C0083570 (NdisMFreePort.c)
 *     ?ndisMediaDisconnectTimeout@@YAXPEAX000@Z @ 0x1C0083860 (-ndisMediaDisconnectTimeout@@YAXPEAX000@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00839E0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0083BD0 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 *     ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1C0084080 (-ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00854B4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C0085C28 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0085DE4 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087A84 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D060 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008FB48 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008FCA4 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C00934E0 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0093600 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1C0093730 (-ndisPMRejectAsync@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0095868 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C00976F8 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0097CEC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00985C0 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C009992C (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C0099AAC (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C009F200 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A44E0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A71D0 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8398 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00A9910 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00AB6F4 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AF384 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00B6940 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C00B7090 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C00B7620 (NdisMCmRegisterAddressFamilyEx.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00C2720 (ndis5QueuedMiniportDpcWorkItem.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FEC24 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FF8D4 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C0105FFC (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C01065C8 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C010AF70 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0117BE0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C0118390 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C0118620 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C0118840 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisHandleBindNotification @ 0x1C01189D8 (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1C0118B44 (ndisHandleLegacyBindIoctl.c)
 *     ndisPnpRefresh @ 0x1C0118D94 (ndisPnpRefresh.c)
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011D7F0 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011DB80 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011F064 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F2C4 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011F480 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F5A8 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01206A0 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0120790 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C0121AC0 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C0121DB8 (ndisNdkPcwRemoveCounter.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012B010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012B830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012CDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012E1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C012F610 (NdisOpenAdapterEx.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012FA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01329B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0132BC0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisUnprocessAllMiniports @ 0x1C01381AC (ndisUnprocessAllMiniports.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01382CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01397E4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C013A2C4 (ndisHandleProtocolReconfigNotification.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C013C6B0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BEEA0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BF024 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rbx
  KIRQL v4; // al
  int v5; // edx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v7; // bp
  __int64 v8; // rcx
  unsigned __int8 v9; // r10
  unsigned __int8 v10; // dl
  unsigned int v11; // ebx
  ULONG_PTR v12; // r9
  NDIS_REFCOUNT_HANDLE__ *v13; // rbx
  unsigned int v14; // edx
  int v15; // ecx
  char v16; // al
  struct _KEVENT *RemoveReadyEvent; // rcx

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      25,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v7 = v4;
  if ( RefCountTracker )
  {
    if ( (unsigned __int64)RefCountTracker - 2 <= 1 )
    {
      RefCountTracker = 0LL;
    }
    else if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( RefCountTracker )
    {
      if ( (_BYTE)v2 == 0xFF )
      {
        if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0xFFuLL);
        *(_BYTE *)RefCountTracker &= ~2u;
      }
      else
      {
        if ( (unsigned __int8)v2 >= *((_BYTE *)RefCountTracker + 2) )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, v2);
        if ( *((_BYTE *)RefCountTracker + 1) )
        {
          if ( *((_BYTE *)RefCountTracker + 1) == 1 )
          {
            v12 = v2;
            v13 = RefCountTracker + 16 * v2;
            v14 = *((_DWORD *)v13 + 16);
            v15 = (unsigned __int16)v14 >> 1;
            if ( v14 >> 17 < 0x3FFE && v15 == (v14 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 2));
              *((_DWORD *)v13 + 16) &= 0x10001u;
            }
            else
            {
              if ( v15 == 0 && (v14 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, v12);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 2), 0);
            }
          }
        }
        else
        {
          v8 = *((_QWORD *)RefCountTracker + 1);
          if ( v8 && (v9 = *((_BYTE *)RefCountTracker + 3), v10 = 0, v9) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v8 + 2LL * v10) == (_BYTE)v2 )
              {
                v16 = *(_BYTE *)(v8 + 2LL * v10 + 1);
                if ( v16 )
                  break;
              }
              if ( ++v10 >= v9 )
                goto LABEL_14;
            }
            *(_BYTE *)(v8 + 2LL * v10 + 1) = v16 - 1;
          }
          else
          {
LABEL_14:
            if ( !_bittestandreset((signed __int32 *)RefCountTracker + 4, v2) )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, v2);
          }
        }
      }
    }
  }
  v11 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v11;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      20,
      14,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a1,
      a1->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a1->Ref.SpinLock, v7);
  if ( !v11 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      26,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)a1);
}
