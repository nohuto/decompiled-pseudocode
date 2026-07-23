/*
 * XREFs of NtIsProcessInJob @ 0x14071C500
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     PspIsProcessInJob @ 0x14071C5F0 (PspIsProcessInJob.c)
 */

NTSTATUS __cdecl NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v10; // eax
  PVOID v11; // rdx
  NTSTATUS IsProcessInJob; // esi
  struct _DMA_ADAPTER *v13; // rdx
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    v14 = p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &v14,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = v14;
  }
  if ( !JobHandle )
  {
    v11 = (PVOID)p_Lock[162];
    p_Lock = v14;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v11, v2, v3);
    if ( JobHandle )
      HalPutDmaAdapter(v13);
    goto LABEL_8;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v11 = Object;
  IsProcessInJob = v10;
  if ( v10 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
