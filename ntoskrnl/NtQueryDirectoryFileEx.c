/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1406B2200
 * Callers:
 *     NtQueryDirectoryFile @ 0x140780770 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
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
  __int64 v11; // r9
  int v12; // [rsp+28h] [rbp-59h]
  int v13; // [rsp+30h] [rbp-51h]
  SIZE_T Length; // [rsp+38h] [rbp-49h]
  __int64 v15; // [rsp+40h] [rbp-41h]
  char v16; // [rsp+58h] [rbp-29h]
  char v17; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v18[7]; // [rsp+89h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+17h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+1Fh] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  LODWORD(v15) = a8;
  LODWORD(Length) = a7;
  v17 = 0;
  v18[0] = 0;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             v15,
             a9,
             a10,
             v16,
             (__int64)&v17,
             (__int64)&v21,
             (__int64)&v20,
             (__int64)&v19,
             v18);
  if ( !(_DWORD)result )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v13) = v17;
    LOBYTE(v12) = v18[0];
    return IopSynchronousServiceTail(v21, v20, v19, v11, v12, v13, 2);
  }
  return result;
}
