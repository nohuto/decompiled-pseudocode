/*
 * XREFs of NtCreateThreadEx @ 0x1406C1590
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x1406C1520 (PspCreateUserContext.c)
 *     PspDeleteCreateProcessContext @ 0x1406C1854 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x1406C1A0C (PspCreateThread.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  NTSTATUS result; // eax
  ULONG64 v14; // rdi
  ULONG v15; // r14d
  unsigned __int64 v16; // rax
  void *v17; // rsp
  __int64 v18; // r10
  NTSTATUS v19; // ebx
  __int64 v20; // rcx
  ULONG ContextLength; // [rsp+70h] [rbp+0h] BYREF
  ACCESS_MASK v22; // [rsp+74h] [rbp+4h]
  PVOID Object; // [rsp+78h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+80h] [rbp+10h] BYREF
  PVOID v25; // [rsp+88h] [rbp+18h]
  POBJECT_ATTRIBUTES v26; // [rsp+90h] [rbp+20h]
  _BYTE v27[80]; // [rsp+A0h] [rbp+30h] BYREF
  _QWORD v28[66]; // [rsp+F0h] [rbp+80h] BYREF
  char v29; // [rsp+300h] [rbp+290h] BYREF
  int v30; // [rsp+301h] [rbp+291h]
  __int16 v31; // [rsp+305h] [rbp+295h]
  char v32; // [rsp+307h] [rbp+297h]
  SIZE_T v33; // [rsp+308h] [rbp+298h]
  SIZE_T v34; // [rsp+310h] [rbp+2A0h]
  SIZE_T v35; // [rsp+318h] [rbp+2A8h]

  v26 = ObjectAttributes;
  v22 = DesiredAccess;
  v25 = Argument;
  memset(v27, 0, 0x48uLL);
  Object = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  ContextEx = 0LL;
  ContextLength = 0;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v20 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  v29 = 0;
  v34 = StackSize;
  v35 = MaximumStackSize;
  v33 = ZeroBits;
  memset(v28, 0, 0x208uLL);
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(
                   &AttributeList->TotalLength,
                   KeGetCurrentThread()->PreviousMode,
                   1,
                   (__int64)v28),
        result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v14 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
      v15 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
      ObfDereferenceObjectWithTag(Object, 0x72437350u);
      RtlGetExtendedContextLength2(v15, &ContextLength, (unsigned int)v14);
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextLength, 0, ContextLength);
      RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v15, &ContextEx, v14);
      PspCreateUserContext((__int64)&ContextLength, 1, PspUserThreadStart, (__int64)StartRoutine, (__int64)v25);
      v19 = PspCreateThread(
              ThreadHandle,
              v22,
              v26,
              ProcessHandle,
              0LL,
              v28,
              v28[2],
              &ContextLength,
              v27,
              CreateFlags,
              StartRoutine,
              v18,
              &v29);
      PspDeleteCreateProcessContext(v28);
      return v19;
    }
  }
  return result;
}
