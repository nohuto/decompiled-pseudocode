NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  PVOID *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v14; // ebx
  int inserted; // edi
  ULONG LowPart; // ebx
  char v17; // r13
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v20; // rbx
  PVOID v21; // rbx
  NTSTATUS result; // eax
  int v23; // [rsp+40h] [rbp-40h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-30h]
  char v25[4]; // [rsp+60h] [rbp-20h] BYREF
  int v26; // [rsp+64h] [rbp-1Ch] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-8h] BYREF

  v12 = SectionObject;
  FileSize.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  *(_DWORD *)v25 = 0;
  v26 = 0;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = FsRtlAcquireToCreateMappedSection(FileObject, SectionPageProtection, 1LL, AllocationAttributes, v25, &v26);
  if ( v14 < 0 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    result = v14;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  else
  {
    inserted = FsRtlGetFileSize(FileObject, &FileSize);
    if ( inserted >= 0 )
    {
      LowPart = FileSize.LowPart;
      if ( FileSize.QuadPart )
      {
        v17 = v25[0];
        while ( 1 )
        {
          LODWORD(ullMultiplicand) = 0;
          Section = MmCreateSectionEx(
                      (int)&Object,
                      (int)ObjectAttributes,
                      LowPart,
                      SectionPageProtection,
                      AllocationAttributes,
                      0LL,
                      (__int64)FileObject,
                      v17,
                      v23,
                      0LL,
                      ullMultiplicand);
          inserted = Section;
          if ( Section != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
        }
        if ( Section >= 0 )
        {
          FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
          v20 = FileObjectForSection;
          if ( FileObjectForSection )
          {
            CcZeroEndOfLastPage(FileObjectForSection);
            ObfDereferenceObjectWithTag(v20, 0x746C6644u);
          }
        }
        v12 = SectionObject;
      }
      else
      {
        inserted = -1073741807;
      }
    }
    FsRtlReleaseFile(FileObject);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( inserted >= 0 )
    {
      v21 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      inserted = ObInsertObject(v21, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *v12 = v21;
        if ( SectionFileSize )
          *SectionFileSize = FileSize;
      }
    }
    return inserted;
  }
  return result;
}
