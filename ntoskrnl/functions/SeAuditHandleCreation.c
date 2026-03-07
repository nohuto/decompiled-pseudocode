char __fastcall SeAuditHandleCreation(__int64 a1, void *a2, void *a3)
{
  _UNKNOWN **v3; // rax
  __int64 v4; // r15
  char v5; // si
  void *v6; // r14
  PVOID v8; // rbx
  __int64 v9; // r8
  unsigned __int16 v10; // r13
  unsigned __int64 CurrentThreadProcessId; // rbx
  __int64 v12; // rdx
  int v14; // [rsp+48h] [rbp-90h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  HANDLE TargetHandle; // [rsp+E0h] [rbp+8h] BYREF
  void *v17; // [rsp+E8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF

  v3 = &retaddr;
  v17 = a2;
  v4 = *(_QWORD *)(a1 + 72);
  v5 = 0;
  TargetHandle = 0LL;
  v6 = a3;
  v8 = 0LL;
  if ( !a3 )
  {
    v6 = *(void **)(v4 + 56);
    if ( !v6 )
      v6 = *(void **)(a1 + 64);
  }
  if ( *(_BYTE *)(a1 + 9) )
  {
    if ( *(_BYTE *)(a1 + 124) )
    {
      LOBYTE(v3) = SepAdtPrivilegeObjectAuditAlarm(
                     &SeSubsystemName,
                     (unsigned __int16 *)(a1 + 144),
                     (unsigned __int16 *)(a1 + 128),
                     (__int64)a2,
                     *(_QWORD *)(a1 + 32),
                     *(_QWORD *)(a1 + 48),
                     *(_QWORD *)(a1 + 56),
                     *(_DWORD *)(a1 + 20),
                     *(int **)v4,
                     1);
      goto LABEL_6;
    }
  }
  else if ( !*(_BYTE *)(v4 + 216) )
  {
    goto LABEL_6;
  }
  if ( ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0x200u, 2u) >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &Object, 0LL);
    v8 = Object;
  }
  LOBYTE(v9) = 1;
  v10 = SepAdtClassifyObjectIntoSubCategory(v8, a1 + 144, v9, 0LL);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v5 = SepAdtOpenObjectAuditAlarm(
         v10,
         (int)&SeSubsystemName,
         (int)&v17,
         (int)a1 + 144,
         a1 + 128,
         v6,
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 48),
         *(_DWORD *)(a1 + 24),
         *(_DWORD *)(a1 + 20),
         *(_QWORD *)v4,
         1,
         CurrentThreadProcessId,
         2,
         0LL,
         0,
         0LL,
         v4 + 32,
         a1);
  LOBYTE(v14) = 1;
  LOBYTE(v3) = SepAdtStagingEvent(
                 v10,
                 v12,
                 &v17,
                 a1 + 144,
                 a1 + 128,
                 *(_QWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 48),
                 *(_DWORD *)(a1 + 24),
                 *(_DWORD *)(a1 + 20),
                 v14,
                 CurrentThreadProcessId,
                 a1);
LABEL_6:
  *(_BYTE *)(a1 + 10) = v5;
  return (char)v3;
}
