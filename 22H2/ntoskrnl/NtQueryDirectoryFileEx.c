/*
 * XREFs of NtQueryDirectoryFileEx @ 0x140765CF0
 * Callers:
 *     NtQueryDirectoryFile @ 0x140768510 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        volatile void *a6,
        SIZE_T a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  unsigned __int8 v14; // [rsp+88h] [rbp+7h] BYREF
  char v15[7]; // [rsp+89h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v16; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+98h] [rbp+17h] BYREF
  struct _DEVICE_OBJECT *v18; // [rsp+A0h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  LODWORD(v12) = a8;
  LODWORD(Length) = a7;
  v14 = 0;
  v15[0] = 0;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             v12,
             a9,
             a10,
             v13,
             (__int64)&v14,
             (__int64)&v18,
             (__int64)&v17,
             (__int64)&v16,
             v15);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(v18, v17, v16, 1, v15[0], v14, 2u);
  return result;
}
