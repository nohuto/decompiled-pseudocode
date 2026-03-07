__int64 __fastcall SmKmIssueFileIo(
        void **a1,
        struct _SMKM_ISSUE_IO_PARAMS *a2,
        union _LARGE_INTEGER *a3,
        void (*a4)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        PVOID ApcContext)
{
  struct _IO_STATUS_BLOCK *v6; // rbx
  void *v7; // r10
  void *v8; // rcx
  NTSTATUS File; // eax
  ULONG v11; // [rsp+30h] [rbp-28h]

  v6 = *(struct _IO_STATUS_BLOCK **)a2;
  v7 = (void *)*((_QWORD *)a2 + 1);
  v8 = *a1;
  v11 = *((_DWORD *)a2 + 4);
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    File = NtReadFile(v8, 0LL, a4, ApcContext, v6, v7, v11, a3, 0LL);
  else
    File = NtWriteFile(v8, 0LL, a4, ApcContext, v6, v7, v11, a3, 0LL);
  if ( (File & 0xC0000000) == 0xC0000000 )
  {
    v6->Status = File;
    ((void (__fastcall *)(PVOID, struct _IO_STATUS_BLOCK *, _QWORD))a4)(ApcContext, v6, 0LL);
  }
  return 259LL;
}
