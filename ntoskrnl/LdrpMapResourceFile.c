/*
 * XREFs of LdrpMapResourceFile @ 0x1403A2E68
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14035D07C (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     MmMapViewInSessionSpace @ 0x14078FC80 (MmMapViewInSessionSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140791780 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v8; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // si
  NTSTATUS v11; // ebx
  PVOID v13; // rsi
  NTSTATUS v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  ULONG_PTR *v17; // rcx
  HANDLE SectionHandle; // [rsp+60h] [rbp-41h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-39h] BYREF
  PVOID Object; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+5Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v8 = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( a1 && a2 && a4 )
  {
    v9 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v9 )
    {
      v10 = *(_WORD *)(v9 + 72);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v11 >= 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateSection(
                &SectionHandle,
                0xF0005u,
                &ObjectAttributes,
                &MaximumSize,
                v10 < 6u ? 8 : 2,
                0x8000000u,
                FileHandle);
        if ( v11 >= 0 )
        {
          Object = 0LL;
          v11 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
          v13 = Object;
          ZwClose(SectionHandle);
          if ( v11 >= 0 )
          {
            v14 = MmMapViewInSessionSpace(v13, &MappedBase, &ViewSize);
            v8 = MappedBase;
            v11 = v14;
            if ( v14 >= 0 )
            {
              v15 = RtlImageNtHeader((__int64)MappedBase);
              v16 = v11;
              if ( !v15 )
                v16 = -1073741701;
              v11 = v16;
            }
          }
          if ( v13 )
            ObfDereferenceObject(v13);
          if ( v11 < 0 )
          {
            if ( v8 )
              MmUnmapViewInSystemSpace(v8);
          }
          else
          {
            v17 = a5;
            *a4 = v8;
            if ( v17 )
              *v17 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v11;
            }
          }
        }
      }
    }
    else
    {
      v11 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v11;
  }
  return 3221225485LL;
}
