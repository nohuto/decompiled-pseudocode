NTSTATUS __fastcall NtGetDevicePowerState(void *a1, _DWORD *a2)
{
  __int64 v3; // rdx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  int RelatedTargetDevice; // ebx
  PVOID v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a2;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &v9);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v7 = v9;
      *a2 = PopLockGetDoDevicePowerState(*((_QWORD *)v9 + 39));
      ObfDereferenceObject(v7);
    }
    return RelatedTargetDevice;
  }
  return result;
}
