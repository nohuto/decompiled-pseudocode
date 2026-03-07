__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  __int64 MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  int NodeConnectionInfoForPdo; // ebx
  __int64 PortData; // rbx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Cu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  LODWORD(v19) = *(_DWORD *)(a3 + 8);
  v20 = a4 != 0 ? 274 : 259;
  Log(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( !v11 )
  {
    NodeConnectionInfoForPdo = -1073741670;
LABEL_14:
    if ( !Usb_Disconnected(NodeConnectionInfoForPdo) )
      UsbhException(a1, 0, 91, (int)&v20, 4, NodeConnectionInfoForPdo, 0, usbfile_ioctl_c, 2204, 0);
    goto LABEL_16;
  }
  NodeConnectionInfoForPdo = UsbhAcquireApiLock(a1, 0xF00D0004, &v21);
  if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
  {
    NodeConnectionInfoForPdo = UsbhIoctlValidateParameters(a1, 4, 35);
    if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
    {
      PortData = UsbhGetPortData(a1, *(_WORD *)MasterIrp);
      if ( PortData )
      {
        v14 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3034u);
        if ( v14 )
        {
          NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(
                                       a1,
                                       (__int64)a2,
                                       PortData,
                                       v14,
                                       (_DWORD *)MasterIrp,
                                       (unsigned int *)&v19,
                                       a4);
          a2->IoStatus.Information = (unsigned int)v19;
          UsbhUnlatchPdo(a1, v14, (__int64)a2, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733848688, *(unsigned __int16 *)(PortData + 4), MasterIrp);
          memset((void *)MasterIrp, 0, v9);
          v15 = *(unsigned __int16 *)(PortData + 4);
          *(_DWORD *)(MasterIrp + 31) = 0;
          *(_DWORD *)MasterIrp = v15;
          NodeConnectionInfoForPdo = 0;
          a2->IoStatus.Information = 35LL;
        }
      }
      else
      {
        NodeConnectionInfoForPdo = -1073741811;
      }
    }
  }
  if ( (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000 )
    goto LABEL_14;
LABEL_16:
  if ( v21 )
    UsbhReleaseApiLock(a1, 4027383812LL);
  Log(a1, 32, 1735284786, (__int64)a2, NodeConnectionInfoForPdo);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = NodeConnectionInfoForPdo;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Du,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v18);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v16, v11);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
