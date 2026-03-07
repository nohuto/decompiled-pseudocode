char __fastcall IopLiveDumpTraceMmDuplicateMemoryFailure(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // rcx
  const GUID *ActivityId; // r8
  const EVENT_DESCRIPTOR *v5; // rdx
  BOOL v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  BOOL *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v6 = a2 == 258;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v10;
    v5 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    v9 = 4LL;
    v8 = &v6;
    if ( (*(_DWORD *)(v3 + 80) & 1) == 0 )
      v5 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v5, (ULONG64)ActivityId, 0, ActivityId, ActivityId, 2u, &UserData);
  }
  return result;
}
