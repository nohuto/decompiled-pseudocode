NTSTATUS __fastcall DifIoSetCompletionRoutineExWrapper(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(217);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v16 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v16 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v22 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v16 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v22 = 0LL;
LABEL_10:
  BYTE10(v22) = InvokeOnSuccess;
  BYTE9(v22) = InvokeOnError;
  BYTE8(v22) = InvokeOnCancel;
  *((_QWORD *)&v24 + 1) = DeviceObject;
  *(_QWORD *)&v24 = Irp;
  *((_QWORD *)&v23 + 1) = CompletionRoutine;
  *(_QWORD *)&v23 = Context;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v22);
  }
LABEL_17:
  result = IoSetCompletionRoutineEx(
             DeviceObject,
             Irp,
             CompletionRoutine,
             Context,
             InvokeOnSuccess,
             InvokeOnError,
             InvokeOnCancel);
  LODWORD(v25) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v21 - 1))(&v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return v25;
    }
  }
  return result;
}
