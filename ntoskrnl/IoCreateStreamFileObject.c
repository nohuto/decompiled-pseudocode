/*
 * XREFs of IoCreateStreamFileObject @ 0x140870BD0
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObject(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  LODWORD(v3) = 65552;
  IoCreateStreamFileObjectEx2((__int64)&v3, (__int64)FileObject, (ULONG_PTR)DeviceObject, (PVOID *)&v4, 0LL);
  return v4;
}
