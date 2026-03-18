/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x1C0070380
 * Callers:
 *     <none>
 * Callees:
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1C00727B0 (_GetUserObjectInformation.c)
 */

__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  SIZE_T v5; // rbx
  AtomicExecutionCheck *v9; // rcx
  _DWORD *Data; // rax
  ULONG v11; // r8d
  _DWORD *v12; // rdx
  unsigned int UserObjectInformation; // ebx
  PVOID v14; // rcx
  _DWORD *v15; // rax
  char v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF

  v5 = a4;
  LODWORD(v18) = 0;
  EnterCrit(0LL, 0LL);
  v17 = 0;
  AtomicExecutionCheck::EnforceConsistency(v9);
  Data = (_DWORD *)GetData();
  if ( Data )
  {
    ++*Data;
    v17 = 1;
  }
  v11 = 4;
  if ( a2 != 1 )
    v11 = 2;
  ProbeForWrite(a3, v5, v11);
  if ( a5 )
  {
    v12 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)&v18);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v18;
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL);
  }
  v14 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v17 )
  {
    v15 = (_DWORD *)GetData();
    --*v15;
  }
  UserSessionSwitchLeaveCrit(v14);
  return UserObjectInformation;
}
