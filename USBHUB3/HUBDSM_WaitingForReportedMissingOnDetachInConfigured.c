__int64 __fastcall HUBDSM_WaitingForReportedMissingOnDetachInConfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 2152) )
    USBD_MarkDeviceAsDisconnected(*(_QWORD *)(a1 + 960));
  HUBPDO_ReportDeviceAsMissing(v1);
  return 1000LL;
}
