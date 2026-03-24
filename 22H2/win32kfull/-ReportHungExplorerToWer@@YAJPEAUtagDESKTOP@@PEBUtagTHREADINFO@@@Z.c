/*
 * XREFs of ?ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z @ 0x1C0240BB0
 * Callers:
 *     DoExplorerHangDetection @ 0x1C00089F0 (DoExplorerHangDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReportHungExplorerToWer(struct tagDESKTOP *a1, PETHREAD *a2)
{
  _DWORD *StartContext; // rbx
  unsigned int ThreadId; // eax
  NTSTATUS v7; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+90h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  StartContext = (_DWORD *)Win32AllocPoolNonPaged(12LL, 1163359061LL);
  if ( !StartContext )
    return 3221225495LL;
  *StartContext = (unsigned int)PsGetProcessId(**(PEPROCESS **)(*((_QWORD *)a1 + 1) + 176LL));
  ThreadId = (unsigned int)PsGetThreadId(*a2);
  StartContext[2] = 1024;
  StartContext[1] = ThreadId;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         0LL,
         WerSubmitReportWorker,
         StartContext);
  if ( v7 < 0 )
    Win32FreePool(StartContext);
  else
    ZwClose(ThreadHandle);
  return (unsigned int)v7;
}
