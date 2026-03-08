/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x140580330
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtSignalAndWaitForSingleObject(void *a1, void *a2, BOOLEAN a3, unsigned __int64 a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  LARGE_INTEGER *v7; // r12
  __int64 v8; // rax
  int v9; // ebx
  PVOID v10; // rsi
  struct _OBJECT_TYPE *v11; // r8
  __int64 DefaultObject; // rdi
  POBJECT_TYPE *v13; // rcx
  int v14; // eax
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h] BYREF

  HandleInformation = 0LL;
  Object = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = (LARGE_INTEGER *)a4;
  if ( a4 && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v8 = a4;
    v19 = *(_QWORD *)v8;
    v7 = (LARGE_INTEGER *)&v19;
  }
  v9 = ObReferenceObjectByHandleWithTag(a1, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v9 >= 0 )
  {
    v9 = ObReferenceObjectByHandleWithTag(a2, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v18, 0LL);
    if ( v9 < 0 )
    {
LABEL_32:
      ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
      return (unsigned int)v9;
    }
    v10 = v18;
    v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v18 - 48) >> 8)];
    DefaultObject = (__int64)v11->DefaultObject;
    if ( (DefaultObject & 1) != 0 )
    {
      if ( (DefaultObject & 2) == 0 )
      {
        DefaultObject = *(_QWORD *)((char *)v18 + DefaultObject - 1);
        goto LABEL_16;
      }
      if ( (v11->TypeInfo.WaitObjectFlagMask & *(_DWORD *)((_BYTE *)v18 + v11->TypeInfo.WaitObjectFlagOffset)) == v11->TypeInfo.WaitObjectFlagMask )
      {
        DefaultObject = *(_QWORD *)((char *)v18 + v11->TypeInfo.WaitObjectPointerOffset);
        goto LABEL_16;
      }
      DefaultObject -= 3LL;
    }
    else if ( DefaultObject < 0 )
    {
      goto LABEL_16;
    }
    DefaultObject += (__int64)v18;
LABEL_16:
    if ( ExCrossVmMutantObjectType != v11 )
    {
      v13 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
      v9 = -1073741790;
      if ( v13 == ExEventObjectType )
      {
        if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_31;
        KeSetEvent((PRKEVENT)Object, 1, 1u);
        goto LABEL_29;
      }
      if ( v13 == (POBJECT_TYPE *)ExMutantObjectType )
      {
        v14 = KeReleaseMutantEx((ULONG_PTR)Object, 1u, 2, 0LL);
        v9 = v14;
        if ( v14 == 128 || v14 == -1073741754 )
          goto LABEL_31;
        goto LABEL_29;
      }
      if ( v13 == ExSemaphoreObjectType )
      {
        if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_31;
        v9 = KeReleaseSemaphoreEx((__int64)Object, 1u, 1);
        if ( v9 == -1073741753 )
          goto LABEL_31;
LABEL_29:
        v9 = KeWaitForSingleObject((PVOID)DefaultObject, UserRequest, PreviousMode, a3, v7);
LABEL_31:
        ObfDereferenceObjectWithTag(v10, 0x7457624Fu);
        goto LABEL_32;
      }
    }
    v9 = -1073741788;
    goto LABEL_31;
  }
  return (unsigned int)v9;
}
