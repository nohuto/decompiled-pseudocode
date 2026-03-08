/*
 * XREFs of ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C022A858
 * Callers:
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C022AB60 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C022A7B0 (--1DeviceObjectPointer@Io@@QEAA@XZ.c)
 */

__int64 __fastcall Io::DeviceObjectPointer::GetByObjectName(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS v5; // ebx
  void *FileHandle[2]; // [rsp+30h] [rbp-39h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-29h]
  PVOID Object; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  _DWORD v12[4]; // [rsp+90h] [rbp+27h] BYREF

  ObjectAttributes.ObjectName = a1;
  RelatedDeviceObject = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v12;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)FileHandle = 0LL;
  v12[2] = 257;
  IoStatusBlock = 0LL;
  v12[0] = 12;
  v12[1] = 2;
  v5 = ZwOpenFile(FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(FileHandle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    FileHandle[1] = Object;
    if ( v5 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ObfReferenceObject(RelatedDeviceObject);
      *a4 = FileHandle[0];
      a4[1] = FileHandle[1];
      a4[2] = RelatedDeviceObject;
      *(_OWORD *)FileHandle = 0LL;
      RelatedDeviceObject = 0LL;
    }
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)FileHandle);
  return (unsigned int)v5;
}
