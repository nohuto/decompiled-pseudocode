/*
 * XREFs of PopSanityCheckHiberFile @ 0x1407FC518
 * Callers:
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140985EE0 (PopResizeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 */

__int64 __fastcall PopSanityCheckHiberFile(void *a1, __int64 a2, _QWORD *a3, __int64 **a4, _DWORD *a5)
{
  NTSTATUS Status; // edx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK v14; // [rsp+58h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  Status = ZwFsControlFile(a1, 0LL, 0LL, 0LL, &v14, 0x9003Bu, a3, 8u, &v13, 8u);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
    Status = v14.Status;
  }
  if ( Status >= 0 )
  {
    v9 = 0LL;
    LODWORD(v10) = 0;
    if ( *v13 )
    {
      v11 = *v13;
      do
      {
        v9 += v11;
        if ( v13[(unsigned int)(v10 + 1)] < 0 )
          return (unsigned int)-1073741823;
        v10 = (unsigned int)(v10 + 2);
        v11 = v13[v10];
      }
      while ( v11 );
    }
    if ( v9 < *a3 )
      return (unsigned int)-1073741823;
    *a4 = v13;
    *a5 = 8 * v10 + 16;
  }
  return (unsigned int)Status;
}
