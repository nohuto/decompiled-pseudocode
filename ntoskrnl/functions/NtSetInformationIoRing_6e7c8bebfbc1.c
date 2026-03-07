__int64 __fastcall NtSetInformationIoRing(HANDLE Handle, int a2, unsigned int a3, void **a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v8; // rdi
  unsigned int v9; // ecx
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rcx
  NTSTATUS updated; // eax
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  void *v15; // [rsp+48h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  if ( a2 < 0 )
    goto LABEL_16;
  if ( (unsigned __int64)a2 >= 2 )
    goto LABEL_16;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + a2);
  if ( !v9 )
    goto LABEL_16;
  if ( a3 < v9 )
  {
    v10 = -1073741820;
    goto LABEL_17;
  }
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v11 = (unsigned __int64)a4 + a3;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( a2 == 1 )
    {
      v15 = *a4;
      updated = IopIoRingUpdateCompletionUserEvent((__int64)Object, &v15, PreviousMode);
      v10 = updated;
      if ( updated == -1073741816 || updated == -1073741788 )
        v10 = -1073741582;
      goto LABEL_17;
    }
LABEL_16:
    v10 = -1073741821;
  }
LABEL_17:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v10;
}
