/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1406C89B0
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406C76D0 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
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
  _DWORD *v11; // r9
  SIZE_T Length; // [rsp+38h] [rbp-49h]
  __int64 v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char v15; // [rsp+88h] [rbp+7h] BYREF
  char v16; // [rsp+89h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v17 = 0LL;
  LODWORD(v13) = a8;
  LODWORD(Length) = a7;
  v15 = 0;
  v16 = 0;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             v13,
             a9,
             a10,
             v14,
             (__int64)&v15,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v17,
             (PIRP)&v16);
  if ( !(_DWORD)result )
  {
    LOBYTE(v11) = 1;
    return IopSynchronousServiceTail(DeviceObject, Irp, v17, v11, v16, v15, 2u);
  }
  return result;
}
