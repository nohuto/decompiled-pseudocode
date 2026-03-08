/*
 * XREFs of DifIoAllocateControllerWrapper @ 0x1405DAA60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     IoAllocateController @ 0x1405542D0 (IoAllocateController.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifIoAllocateControllerWrapper(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  __int64 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  PCONTROLLER_OBJECT v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(135);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v10 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v19 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v14 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v11, v12);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v19 = 0LL;
LABEL_10:
  v21 = ControllerObject;
  *((_QWORD *)&v20 + 1) = DeviceObject;
  *(_QWORD *)&v20 = ExecutionRoutine;
  *((_QWORD *)&v19 + 1) = Context;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_17:
  IoAllocateController(ControllerObject, DeviceObject, ExecutionRoutine, Context);
  if ( v13 )
  {
    v17 = (_QWORD **)(v13 + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v19);
    }
  }
}
