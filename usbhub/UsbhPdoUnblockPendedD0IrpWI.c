__int64 __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // rdx

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(_QWORD *)(v5 + 48);
  v7 = PdoExt(v6);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6, *(_QWORD *)(a3 + 64));
  *((_QWORD *)v7 + 320) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v8, *(_QWORD **)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  UsbhEtwLogDevicePowerEvent((__int64)v7, *(_QWORD *)(a3 + 64), &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount(v6, *(_QWORD *)(a3 + 64));
  return UsbhReleasePowerContext(a1, a3);
}
