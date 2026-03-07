__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  PVOID v1; // r14
  void *v2; // r15
  NTSTATUS v3; // esi
  HANDLE FileHandle; // r12
  LARGE_INTEGER v5; // rbx
  void *v6; // rax
  __int64 v7; // rdx
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-88h] BYREF
  ULONG_PTR ViewSize[4]; // [rsp+68h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileSize.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  v1 = 0LL;
  SectionHandle = 0LL;
  v2 = 0LL;
  BaseAddress = 0LL;
  v3 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1, 0, &Handle);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    FileHandle = Handle;
    v3 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v1 = Object;
    ViewSize[3] = (ULONG_PTR)Object;
    if ( v3 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v3 = -1073741757;
      }
      else
      {
        v3 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v3 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v3 >= 0 )
          {
            v5 = FileSize;
            ViewSize[0] = FileSize.QuadPart;
            v3 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v3 >= 0 )
            {
              if ( qword_140C37608 )
                v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C37608)(
                       0LL,
                       BaseAddress,
                       (LARGE_INTEGER)v5.QuadPart);
              else
                v3 = -1073741637;
              if ( v3 >= 0 )
              {
                v6 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ExAllocatePool2)(
                               257LL,
                               (LARGE_INTEGER)v5.QuadPart,
                               1296124997LL);
                v2 = v6;
                ViewSize[2] = (ULONG_PTR)v6;
                if ( v6 )
                {
                  memmove(v6, BaseAddress, v5.QuadPart);
                  if ( qword_140C37608 )
                    v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C37608)(
                           0LL,
                           v2,
                           (LARGE_INTEGER)v5.QuadPart);
                  else
                    v3 = -1073741637;
                  if ( v3 >= 0 )
                  {
                    v3 = SeRegisterElamCertResources((ULONGLONG)v2, v7, 1);
                    if ( v3 >= 0 )
                      v3 = 0;
                  }
                }
                else
                {
                  v3 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v1 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
