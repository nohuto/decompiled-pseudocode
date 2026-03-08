/*
 * XREFs of PiCMDeleteDevice @ 0x140965ED8
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B1B9C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 *     PpDeviceRegistration @ 0x140680F5C (PpDeviceRegistration.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 *     _CmDeleteDevice @ 0x140A5E810 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  const WCHAR *v14; // rdi
  struct _KTHREAD *v15; // rax
  unsigned int v17; // [rsp+38h] [rbp-59h]
  int v18; // [rsp+48h] [rbp-49h] BYREF
  int v19; // [rsp+4Ch] [rbp-45h] BYREF
  int v20; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 v22; // [rsp+68h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-9h]
  UNICODE_STRING v25; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING v26; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v27; // [rsp+B0h] [rbp+1Fh]
  __int64 v28; // [rsp+C0h] [rbp+2Fh]

  v6 = P;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  *(_DWORD *)P = 0;
  P = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v28 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v22);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v12 = SourceString[0];
      if ( !SourceString[0]
        || *(_QWORD *)((char *)&v22 + 4) != 0x100000000LL
        || HIDWORD(SourceString[1])
        || !a3
        || a4 < 8 )
      {
        goto LABEL_27;
      }
      inited = CmValidateDeviceName(v10, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_28;
      if ( CmIsRootDevice(v12) )
      {
LABEL_27:
        inited = -1073741811;
        goto LABEL_28;
      }
      inited = PiPnpRtlBeginOperation((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v12, 0, &v18, &v20, &v19, v17) >= 0 && (v18 & 2) != 0 )
        {
          if ( (v18 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_28;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString[0], 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( RtlInitUnicodeStringEx(&v26, SourceString[0]) >= 0 )
          {
            *(_QWORD *)&v27 = 0x4000000000001LL;
            ZwPlugPlayControl(14LL, (__int64)&v26);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString[0], 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( CmIsRootEnumeratedDevice(SourceString[0])
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest(&DestinationString, 8LL, 1LL);
          }
        }
        if ( RtlInitUnicodeStringEx(&v25, v14) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v25.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_28:
    v9 = PiCMReturnBasicResultData(inited, v24, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v22);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
