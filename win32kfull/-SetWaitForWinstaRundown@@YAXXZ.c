void SetWaitForWinstaRundown(void)
{
  void *KernelEvent; // rbx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+80h] [rbp+10h] BYREF
  void *ThreadHandle; // [rsp+88h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KernelEvent = (void *)CreateKernelEvent(1LL);
  if ( ObOpenObjectByPointer(gpepCSRSS, 0, 0LL, 2u, 0LL, 0, &ProcessHandle) < 0
    || (memset(&ObjectAttributes.RootDirectory, 0, 20),
        ObjectAttributes.Length = 48,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        PsCreateSystemThread(
          &ThreadHandle,
          0x1FFFFFu,
          &ObjectAttributes,
          ProcessHandle,
          0LL,
          WaitForWinstaRundown,
          KernelEvent) < 0) )
  {
    if ( KernelEvent )
      goto LABEL_5;
  }
  else
  {
    if ( KernelEvent )
    {
      KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
LABEL_5:
      Win32FreePool(KernelEvent);
      goto LABEL_6;
    }
    UserSleep(100LL);
  }
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
