__int64 __fastcall SmKmIssueIo(
        struct _SMKM_FILE_INFO *a1,
        __int64 a2,
        void (*a3)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        void *a4,
        int a5)
{
  __int64 v5; // rax
  __int64 i; // r10
  union _LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  for ( i = *((_QWORD *)a1 + 6); (unsigned int)v5 >= *(_DWORD *)i; i += 16LL )
    v5 = (unsigned int)(v5 - *(_DWORD *)i);
  v8.QuadPart = *(_QWORD *)(i + 8) + *(unsigned int *)(a2 + 20) + v5 * *(unsigned int *)(a2 + 28);
  if ( a5 )
    return SmKmIssueFileIo((void **)a1, (struct _SMKM_ISSUE_IO_PARAMS *)a2, &v8, a3, a4);
  else
    return SmKmIssueVolumeIo((_DWORD)a1, a2, (unsigned int)&v8, (_DWORD)a3, (__int64)a4);
}
