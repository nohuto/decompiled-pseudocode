__int64 __fastcall DXGPROCESS::GetHostProcess(DXGPROCESS *this)
{
  char *v2; // rsi
  void *v3; // rcx
  struct _UNICODE_STRING *v4; // rdi
  struct DXGGLOBAL *Global; // rax
  ULONG ProcessInformationLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE ProcessHandle; // [rsp+58h] [rbp+10h] BYREF

  if ( !*((_DWORD *)this + 126) )
  {
    v2 = (char *)this + 512;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    if ( !*((_DWORD *)this + 126) )
    {
      v3 = (void *)*((_QWORD *)this + 7);
      ProcessHandle = 0LL;
      if ( ObOpenObjectByPointer(v3, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
      {
        ProcessInformationLength = 0;
        if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength) == -1073741820 )
        {
          v4 = (struct _UNICODE_STRING *)operator new[](ProcessInformationLength, 0x4B677844u, 256LL);
          if ( v4 )
          {
            if ( ZwQueryInformationProcess(
                   ProcessHandle,
                   ProcessImageFileName,
                   v4,
                   ProcessInformationLength,
                   &ProcessInformationLength) >= 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              *((_DWORD *)this + 126) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
                                          *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
                                          this,
                                          v4);
            }
            operator delete(v4);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  return *((unsigned int *)this + 126);
}
