/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x140967D60
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _CmDeleteDeviceInterface @ 0x140A5E93C (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  char v7; // bl
  int v10; // edi
  int ObjectProperty; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v14; // [rsp+68h] [rbp+7h] BYREF
  int v15; // [rsp+6Ch] [rbp+Bh] BYREF
  __int128 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v7 = 0;
  LOBYTE(a6) = 0;
  v14 = 0;
  v15 = 0;
  *v6 = 0;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v16);
  if ( v10 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v17 && *(_QWORD *)((char *)&v16 + 4) == 0x400000000LL && !HIDWORD(v17) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v17,
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v14,
                           (__int64)&a6,
                           1,
                           (__int64)&v15,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v14 == 17 && v15 == 1 )
            v7 = (char)a6;
          else
            LOBYTE(a6) = 0;
          if ( v7 == -1 )
          {
            ObjectProperty = -1073740024;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, v17, 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v10 = PiCMReturnBasicResultData(ObjectProperty, v18, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v16);
  return (unsigned int)v10;
}
