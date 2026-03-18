/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C00BE738
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C00BE900 (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rbx
  IRP *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  struct _KEVENT Event; // [rsp+58h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-31h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+88h] [rbp-19h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+1Fh]
  int v14; // [rsp+C8h] [rbp+27h]
  __int128 v15; // [rsp+D0h] [rbp+2Fh]
  __int128 v16; // [rsp+E0h] [rbp+3Fh]
  __int64 v17; // [rsp+F0h] [rbp+4Fh]
  int v18; // [rsp+108h] [rbp+67h] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v1 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
    goto LABEL_13;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  qword_1C0296668 = 0x1C0000000uLL;
  gDxgkInterface.LowPart = 3080984;
  v2 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x318u,
         &gDxgkInterface,
         0x318u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( !v2 )
  {
    v1 = -1073741670LL;
LABEL_13:
    v9 = v1;
LABEL_15:
    WdLogSingleEntry1(2LL, v9);
    memset(&gDxgkInterface, 0, 0x318uLL);
    if ( gpDxgkFileObject )
      ObfDereferenceObject(gpDxgkFileObject);
    gpDxgkFileObject = 0LL;
    gpDxgkDeviceObject = 0LL;
    return (unsigned int)v1;
  }
  LODWORD(v1) = IofCallDriver(gpDxgkDeviceObject, v2);
  if ( (_DWORD)v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    LODWORD(v1) = IoStatusBlock.Status;
  }
  if ( (int)v1 < 0 )
  {
    v9 = (int)v1;
    goto LABEL_15;
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  if ( PsGetProcessWin32Process(CurrentProcess) )
    WdLogSingleEntry0(1LL);
  v18 = 0;
  QueryTable.QueryRoutine = 0LL;
  v13 = 0LL;
  v14 = 0;
  QueryTable.Name = L"DisableLddmSpriteTearDown";
  gdwDirectDrawContext = 4;
  QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = &v18;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
  return (unsigned int)v1;
}
