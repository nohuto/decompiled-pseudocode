void __fastcall __noreturn TdrBugcheckOnTimeout(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rbp
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  unsigned int v7; // eax
  void *Pool2; // rax
  __int64 v9; // rdi
  int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *BugCheckParameter2; // [rsp+40h] [rbp+8h]

  BugCheckParameter4 = a3;
  v5 = a2;
  BugCheckParameter2 = (void *)TdrGetDbgOwnerTag((const struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
  if ( !BugCheckParameter2 || BugCheckParameter2 == (void *)-1LL )
    BugCheckParameter2 = retaddr;
  if ( BugCheckParameter1 )
  {
    TdrUpdateDbgBuffer(v6);
    if ( *(_QWORD *)(BugCheckParameter1 + 2848) )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 2856) )
      {
        v7 = *(_DWORD *)(BugCheckParameter1 + 2856);
        if ( v7 )
        {
          if ( v7 < 0x1000 )
            v7 = 4096;
          Pool2 = (void *)ExAllocatePool2(64LL, v7, 1380209782LL);
          v9 = (__int64)Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, *(const void **)(BugCheckParameter1 + 2848), *(_QWORD *)(BugCheckParameter1 + 2856));
            v10 = *(_DWORD *)(BugCheckParameter1 + 2856);
            if ( v10 )
            {
              qword_1C013D388 = v9;
              dword_1C013D384 = v10;
            }
            WdDbgReportCancel(*(_QWORD *)(BugCheckParameter1 + 2840));
          }
        }
      }
    }
  }
  KeBugCheckEx(0x116u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
}
