__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx

  if ( !DriverObject )
  {
    v7 = -1073741811LL;
    v5 = -1073741811;
LABEL_10:
    WdLogSingleEntry1(2LL, v7);
    return v5;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject);
  v3 = DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    return v5;
  }
  v4 = IoReportRootDevice(DriverObject);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = v4;
    goto LABEL_10;
  }
  WdLogSingleEntry1(4LL, v3);
  return v5;
}
