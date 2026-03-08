/*
 * XREFs of DifIoGetDeviceObjectPointerWrapper @ 0x1405DD320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 */

NTSTATUS __fastcall DifIoGetDeviceObjectPointerWrapper(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
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
  NTSTATUS result; // eax
  _QWORD **v18; // rdi
  _QWORD *v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(178);
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
      *(_QWORD *)&v20 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v14 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v11, v12);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v20 = 0LL;
LABEL_10:
  *(_QWORD *)&v22 = ObjectName;
  DWORD2(v21) = DesiredAccess;
  *(_QWORD *)&v21 = FileObject;
  *((_QWORD *)&v20 + 1) = DeviceObject;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_17:
  result = IoGetDeviceObjectPointer(ObjectName, DesiredAccess, FileObject, DeviceObject);
  DWORD2(v22) = result;
  if ( v13 )
  {
    v18 = (_QWORD **)(v13 + 6);
    v19 = *v18;
    if ( *v18 != v18 )
    {
      do
      {
        if ( v19 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v19 - 1))(&v20);
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      return DWORD2(v22);
    }
  }
  return result;
}
