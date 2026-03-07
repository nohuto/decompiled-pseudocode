__int64 __fastcall CiDispatchCreateNotificationClient(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  NTSTATUS v7; // ebx
  char *v8; // rax
  char *v9; // rsi
  char *v10; // rdi
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(Irp);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = CurrentProcess;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = (char *)CiProcessLocate(v6);
  P = v8;
  if ( !v8 )
  {
    v7 = CiProcessCreate((volatile signed __int64 **)&P);
    if ( v7 < 0 )
      goto LABEL_10;
    v8 = (char *)P;
  }
  v9 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v10 = (char *)P;
  *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  if ( *((_QWORD *)v10 + 1) )
  {
    v7 = -1073741790;
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_q((__int64)WPP_GLOBAL_Control->AttachedDevice);
    CiProcessDereference(v10);
  }
  else
  {
    *((_QWORD *)v10 + 1) = v5;
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    *(_QWORD *)(v5 + 24) = v10;
  }
LABEL_10:
  KeLeaveCriticalRegion();
  Irp->IoStatus.Status = v7;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
