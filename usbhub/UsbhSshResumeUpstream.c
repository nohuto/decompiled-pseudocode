__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0;
  v4 = FdoExt(a1);
  Log(a1, 0x10000, 1383290224, a2, 0LL);
  v5 = UsbhSyncSendInternalIoctl(a1, 0x220013u, (unsigned __int64)&v11, 0LL);
  Log(a1, 8, 1970303827, v11, v5);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
  if ( (int)v5 >= 0 )
  {
    v7 = FdoExt(a1);
    if ( *(_QWORD *)(v7 + 4728) )
      LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD))(v7 + 4728))(*(_QWORD *)(v7 + 1192));
    else
      LODWORD(v5) = -1073741637;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0, v5);
  KeWaitForSingleObject((PVOID)(v4 + 3128), Executive, 0, 0, 0LL);
  v8 = *(_DWORD *)(v4 + 3124);
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
  if ( v8 == 5 )
  {
    Usbh_SSH_Event(a1, 9LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, v5);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    UsbhException(a1, 0, 137, 0, 0, v5, 0, usbfile_sshub_c, 2306, 0);
  }
  if ( v6 )
    UsbhDecHubBusy(a1, v9, v6);
  Log(a1, 0x10000, 1383290232, 0, (int)v5);
  return (unsigned int)v5;
}
