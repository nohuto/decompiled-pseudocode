/*
 * XREFs of NtDuplicateObject @ 0x1407025F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  struct _KPROCESS *v10; // rdi
  char PreviousMode; // si
  NTSTATUS result; // eax
  int v13; // r14d
  HANDLE v14; // rdx
  PVOID v15; // r15
  NTSTATUS v16; // esi
  __int64 v17; // rdx
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  void *v20; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v17 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    *TargetHandle = 0LL;
  }
  result = ObReferenceObjectByHandleWithTag(
             SourceProcessHandle,
             0x40u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v13 = ObReferenceObjectByHandleWithTag(
              TargetProcessHandle,
              0x40u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v18,
              0LL);
      if ( v13 < 0 )
      {
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
    v10 = (struct _KPROCESS *)v18;
LABEL_7:
    v14 = SourceHandle;
    v15 = Object;
    v16 = ObDuplicateObject(
            (struct _KPROCESS *)Object,
            v14,
            v10,
            (__int64 *)&v20,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
      *TargetHandle = v20;
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v16;
  }
  return result;
}
