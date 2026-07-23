/*
 * XREFs of NtAlertResumeThread @ 0x14090C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x140512EA0 (KeAlertResumeThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v5; // rcx
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  ULONG v10; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousSuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)PreviousSuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             2u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v10 = KeAlertResumeThread((__int64)Object, v7, v8, v9);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( PreviousSuspendCount )
        *PreviousSuspendCount = v10;
      return 0;
    }
  }
  return result;
}
