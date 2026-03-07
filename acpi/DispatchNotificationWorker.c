__int64 __fastcall DispatchNotificationWorker(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // al
  void (__fastcall *v3)(__int64, _QWORD); // r14
  __int64 v4; // r15
  void **v5; // rdi
  void ***v6; // rbx
  void **v7; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter4 + 392);
  v4 = *(_QWORD *)(BugCheckParameter4 + 400);
  KeReleaseSpinLock(&NotifyHandlerLock, v2);
  KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 904), Executive, 0, 0, 0LL);
  v5 = (void **)(BugCheckParameter4 + 864);
  while ( 1 )
  {
    v6 = (void ***)*v5;
    if ( *v5 == v5 )
      break;
    if ( v6[1] != v5 || (v7 = *v6, (*v6)[1] != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    KeSetEvent((PRKEVENT)(BugCheckParameter4 + 904), 0, 0);
    if ( v3 )
      v3(v4, *((unsigned int *)v6 + 4));
    ExFreePoolWithTag(v6, 0x4D706341u);
    KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 904), Executive, 0, 0, 0LL);
  }
  *(_BYTE *)(BugCheckParameter4 + 936) = 0;
  KeSetEvent((PRKEVENT)(BugCheckParameter4 + 904), 0, 0);
  return ACPIInitDereferenceDeviceExtensionUnlocked(BugCheckParameter4);
}
