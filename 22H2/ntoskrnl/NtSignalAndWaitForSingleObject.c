/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1405648B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ObpGetWaitObject @ 0x1402C5D80 (ObpGetWaitObject.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtSignalAndWaitForSingleObject(void *a1, void *a2, BOOLEAN a3, unsigned __int64 a4)
{
  KPROCESSOR_MODE PreviousMode; // di
  LARGE_INTEGER *v7; // rsi
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  __int64 v10; // r11
  void *WaitObject; // r14
  POBJECT_TYPE *v12; // rcx
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v16; // [rsp+58h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h] BYREF

  HandleInformation = 0LL;
  Object = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = (LARGE_INTEGER *)a4;
  if ( a4 && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v8 = a4;
    v17 = *(_QWORD *)v8;
    v7 = (LARGE_INTEGER *)&v17;
  }
  v9 = ObReferenceObjectByHandleWithTag(a1, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v9 >= 0 )
  {
    v9 = ObReferenceObjectByHandleWithTag(a2, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v16, 0LL);
    if ( v9 < 0 )
    {
LABEL_23:
      ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
      return (unsigned int)v9;
    }
    WaitObject = (void *)ObpGetWaitObject((__int64)v16 - 48);
    if ( !ExCrossVmMutantObjectType
      || (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v10 - 48) >> 8)] != ExCrossVmMutantObjectType )
    {
      v12 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
      v9 = -1073741790;
      if ( v12 == ExEventObjectType )
      {
        if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_22;
        KeSetEvent((PRKEVENT)Object, 1, 1u);
        goto LABEL_20;
      }
      if ( v12 == (POBJECT_TYPE *)ExMutantObjectType )
      {
        KeReleaseMutant((PRKMUTANT)Object, 1, 0, 1u);
LABEL_20:
        v9 = KeWaitForSingleObject(WaitObject, UserRequest, PreviousMode, a3, v7);
LABEL_22:
        ObfDereferenceObjectWithTag(v16, 0x7457624Fu);
        goto LABEL_23;
      }
      if ( v12 == ExSemaphoreObjectType )
      {
        if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
          goto LABEL_22;
        KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, 1, 1u);
        goto LABEL_20;
      }
    }
    v9 = -1073741788;
    goto LABEL_22;
  }
  return (unsigned int)v9;
}
