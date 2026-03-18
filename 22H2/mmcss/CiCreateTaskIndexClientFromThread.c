/*
 * XREFs of CiCreateTaskIndexClientFromThread @ 0x1C000B8B0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A760 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiTaskIndexDereference @ 0x1C00021B0 (CiTaskIndexDereference.c)
 *     CiThreadReferenceTaskIndex @ 0x1C0002DB0 (CiThreadReferenceTaskIndex.c)
 *     __security_check_cookie @ 0x1C0003050 (__security_check_cookie.c)
 *     memset @ 0x1C00037C0 (memset.c)
 *     WPP_SF_d @ 0x1C0004884 (WPP_SF_d.c)
 */

__int64 __fastcall CiCreateTaskIndexClientFromThread(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rdi
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  void *FileHandle[2]; // [rsp+88h] [rbp-1A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-160h] BYREF
  __int64 EaBuffer; // [rsp+E0h] [rbp-148h] BYREF
  int v12; // [rsp+E8h] [rbp-140h]
  int v13; // [rsp+ECh] [rbp-13Ch]
  _QWORD *v14; // [rsp+F0h] [rbp-138h]
  _BYTE v15[252]; // [rsp+F8h] [rbp-130h] BYREF

  v13 = 0;
  memset(v15, 0, sizeof(v15));
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle[0] = 0LL;
  v4 = (_QWORD *)CiThreadReferenceTaskIndex(a1);
  FileHandle[1] = v4;
  if ( !v4 )
    return 3221225865LL;
  EaBuffer = 0x10F000000000000LL;
  v12 = 0;
  v14 = v4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  if ( ExGetPreviousMode() )
    ObjectAttributes.Attributes = 0;
  else
    ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = IoCreateFileEx(
         FileHandle,
         0x120089u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0,
         0,
         0,
         0,
         &EaBuffer,
         0x118u,
         CreateFileTypeNone,
         0LL,
         0,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x11u,
        (__int64)&WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids,
        v5);
  }
  else
  {
    *a2 = FileHandle[0];
  }
  CiTaskIndexDereference(v4);
  return v6;
}
