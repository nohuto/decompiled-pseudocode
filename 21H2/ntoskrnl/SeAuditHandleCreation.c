/*
 * XREFs of SeAuditHandleCreation @ 0x14060FF18
 * Callers:
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1403FAD00 (ZwDuplicateObject.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920AE0 (SepAdtClassifyObjectIntoSubCategory.c)
 */

_UNKNOWN **__fastcall SeAuditHandleCreation(__int64 a1, void *a2, void *a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // r15
  char v5; // si
  void *v6; // r14
  struct _DMA_ADAPTER *v8; // rbx
  __int64 v9; // r8
  unsigned __int16 v10; // r13
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // [rsp+48h] [rbp-90h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  HANDLE TargetHandle; // [rsp+E0h] [rbp+8h] BYREF
  void *v17; // [rsp+E8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF

  result = &retaddr;
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
      result = (_UNKNOWN **)SepAdtPrivilegeObjectAuditAlarm(
                              (unsigned int)&SeSubsystemName,
                              (int)a1 + 144,
                              (int)a1 + 128,
                              (_DWORD)a2,
                              *(_QWORD *)(a1 + 32),
                              *(_QWORD *)(a1 + 48),
                              *(_QWORD *)(a1 + 56),
                              *(_DWORD *)(a1 + 20),
                              *(_QWORD *)v4,
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
    v8 = (struct _DMA_ADAPTER *)Object;
  }
  LOBYTE(v9) = 1;
  v10 = SepAdtClassifyObjectIntoSubCategory(v8, a1 + 144, v9, 0LL);
  if ( v8 )
    HalPutDmaAdapter(v8);
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
  v12 = PsGetCurrentThreadProcessId();
  LOBYTE(v14) = 1;
  result = (_UNKNOWN **)SepAdtStagingEvent(
                          v10,
                          v13,
                          &v17,
                          a1 + 144,
                          a1 + 128,
                          *(_QWORD *)(a1 + 32),
                          *(_QWORD *)(a1 + 48),
                          *(_DWORD *)(a1 + 24),
                          *(_DWORD *)(a1 + 20),
                          v14,
                          v12,
                          a1);
LABEL_6:
  *(_BYTE *)(a1 + 10) = v5;
  return result;
}
