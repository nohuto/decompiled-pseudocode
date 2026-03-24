/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C00B24E4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C00B2698 (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // rbx
  IRP *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-39h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+88h] [rbp-19h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+1Fh]
  int v19; // [rsp+C8h] [rbp+27h]
  __int128 v20; // [rsp+D0h] [rbp+2Fh]
  __int128 v21; // [rsp+E0h] [rbp+3Fh]
  __int64 v22; // [rsp+F0h] [rbp+4Fh]
  int v23; // [rsp+108h] [rbp+67h] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v2 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v12 = WdLogNewEntry5_WdError(0x80000000LL, v1);
    *(_QWORD *)(v12 + 24) = v2;
    goto LABEL_14;
  }
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  qword_1C0251878 = 0x1C0000000uLL;
  gDxgkInterface.LowPart = 2884392;
  v3 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x328u,
         &gDxgkInterface,
         0x328u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v3 )
  {
    LODWORD(v2) = IofCallDriver(gpDxgkDeviceObject, v3);
    if ( (_DWORD)v2 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v2) = IoStatusBlock.Status;
    }
    if ( (int)v2 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v7, v6);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v10, v9);
        WdLogEvent5_WdAssertion(v14);
      }
      v23 = 0;
      QueryTable.QueryRoutine = 0LL;
      v18 = 0LL;
      v19 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      gdwDirectDrawContext = 4;
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      QueryTable.DefaultLength = 4;
      QueryTable.DefaultData = &v23;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      v22 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_9:
      if ( (int)v2 >= 0 )
        return (unsigned int)v2;
      goto LABEL_16;
    }
    v12 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v12 + 24) = (int)v2;
LABEL_14:
    WdLogEvent5_WdError(v12);
    goto LABEL_9;
  }
  LODWORD(v2) = -1073741670;
  v13 = WdLogNewEntry5_WdError(v5, v4);
  *(_QWORD *)(v13 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v13);
LABEL_16:
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v2;
}
