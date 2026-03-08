/*
 * XREFs of ACPIEcStartDeviceWorker @ 0x1C00256A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIEcConnectInterrupt @ 0x1C00834C0 (ACPIEcConnectInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x1C00835C4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083668 (ACPIEcGetUid.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00836FC (ACPIEcInstallOpRegionHandler.c)
 *     ACPIEcGetResources @ 0x1C0083774 (ACPIEcGetResources.c)
 */

_UNKNOWN **__fastcall ACPIEcStartDeviceWorker(__int64 a1)
{
  int Resources; // edi
  __int64 DeviceExtension; // rax
  IRP *v4; // rbp
  _QWORD *v5; // rsi
  _BYTE *v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int MinorFunction; // r14d
  int GpeVector; // eax
  __int64 v10; // rax
  const char *v11; // rcx
  const char *v12; // rdx
  _UNKNOWN **result; // rax
  __int64 v14; // rax

  Resources = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = (_QWORD *)DeviceExtension;
  v6 = *(_BYTE **)(DeviceExtension + 184);
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( v6 != (_BYTE *)gECDTContext )
  {
    Resources = ACPIEcGetResources(
                  CurrentStackLocation->Parameters.WMI.ProviderId,
                  CurrentStackLocation->Parameters.QueryDirectory.FileName,
                  *(_QWORD *)(DeviceExtension + 184));
    if ( Resources >= 0 )
    {
      GpeVector = ACPIEcGetGpeVector(v6);
      Resources = GpeVector;
      if ( GpeVector < 0 )
      {
        if ( GpeVector != -1073741772 || !*((_BYTE *)AcpiInformation + 133) || !v6[804] )
          goto LABEL_11;
        v6[805] = 1;
      }
      ACPIEcGetUid(v6);
      Resources = ACPIEcConnectInterrupt(v6);
      if ( Resources >= 0 )
      {
        Resources = ACPIEcInstallOpRegionHandler(v6);
        if ( Resources >= 0 )
          v6[120] = 1;
      }
    }
  }
LABEL_11:
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Resources;
  IofCompleteRequest(v4, 0);
  v10 = v5[1];
  v11 = (const char *)&unk_1C00622D0;
  v12 = (const char *)&unk_1C00622D0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = (const char *)v5[76];
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = (const char *)v5[77];
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v14 = 26LL;
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0xBu,
                          (__int64)&WPP_6057e56858b93eac69fe3741b9c48703_Traceguids,
                          (char)v4,
                          (__int64)(&ACPIDispatchPnpTableNames)[v14],
                          Resources,
                          (char)v5,
                          v11,
                          v12);
  }
  return result;
}
