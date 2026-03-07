__int64 __fastcall PffDuplicateFileHandle(struct PFF *a1, struct _EPROCESS *a2, struct _EPROCESS *a3, void **a4)
{
  __int64 v4; // rax
  char v5; // si
  void *HandleFromFilePath; // rbx
  unsigned int v10; // edi

  v4 = *((_QWORD *)a1 + 25);
  v5 = 0;
  HandleFromFilePath = *(void **)(*(_QWORD *)v4 + 48LL);
  if ( !HandleFromFilePath )
  {
    HandleFromFilePath = hGetHandleFromFilePath(*(PCWSTR *)(*(_QWORD *)v4 + 80LL), 0);
    if ( !HandleFromFilePath )
      return 3221225506LL;
    v5 = 1;
  }
  v10 = ObDuplicateObject(a3, HandleFromFilePath, a2, a4, 1179785, 0, 0, 0);
  if ( v5 )
    ZwClose(HandleFromFilePath);
  return v10;
}
