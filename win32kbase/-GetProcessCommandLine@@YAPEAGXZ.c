/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0168E78
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C017A690 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0085E78 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char *GetProcessCommandLine(void)
{
  BOOL v0; // esi
  char *v1; // rbx
  char **v2; // rdi
  unsigned __int64 v3; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  char **QuotaZInit; // rax
  unsigned __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  char *v8; // rax
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+90h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0;
  ObjectAttributes.Length = 48;
  ProcessInformationLength = 0;
  v1 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  v2 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Attributes = 512;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
    && ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    QuotaZInit = (char **)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                            v4,
                            v3,
                            ProcessInformationLength + 2LL,
                            0x79747355u);
    v2 = QuotaZInit;
    if ( QuotaZInit )
    {
      if ( ZwQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             QuotaZInit,
             ProcessInformationLength,
             0LL) >= 0 )
      {
        v8 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v7,
                       v6,
                       *(unsigned __int16 *)v2 + 2LL,
                       0x79747355u);
        v1 = v8;
        if ( v8 )
          v0 = (int)RtlStringCchCopyNW(
                      v8,
                      *(unsigned __int16 *)v2 + 1LL,
                      v2[1],
                      (unsigned __int64)*(unsigned __int16 *)v2 >> 1) >= 0;
      }
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v2);
  if ( !v0 && v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    return 0LL;
  }
  return v1;
}
