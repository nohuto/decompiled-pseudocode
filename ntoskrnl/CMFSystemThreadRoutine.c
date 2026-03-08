/*
 * XREFs of CMFSystemThreadRoutine @ 0x1409FFE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1404123D0 (ZwReadFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140412810 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     CMFGetFileSizeEx @ 0x1409FF850 (CMFGetFileSizeEx.c)
 *     CMFGetLargePageSectionSize @ 0x1409FF8C8 (CMFGetLargePageSectionSize.c)
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CMFSystemThreadRoutine(__int64 a1)
{
  PVOID v1; // r12
  PVOID v2; // r13
  __int64 *Pool2; // r15
  int v5; // eax
  char *v6; // rax
  const wchar_t *v7; // r8
  ULONG Length; // r14d
  int v9; // ebx
  __int64 *v10; // r12
  NTSTATUS v11; // eax
  bool v12; // sf
  int v13; // ebx
  ULONG_PTR LowPart; // r14
  LARGE_INTEGER *p_MaximumSize; // r12
  int v16; // eax
  HANDLE v17; // r12
  ULONG v18; // eax
  NTSTATUS v19; // eax
  _QWORD *v20; // rax
  struct _KEVENT *v21; // rcx
  ULONG Buffer; // [rsp+30h] [rbp-D8h]
  char v23; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A8h] BYREF
  void *v25; // [rsp+68h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v28; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v37; // [rsp+100h] [rbp-8h] BYREF
  wchar_t pszDest[264]; // [rsp+108h] [rbp+0h] BYREF

  v34 = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  v1 = 0LL;
  v37 = 0LL;
  v2 = 0LL;
  EventHandle = 0LL;
  Pool2 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  v23 = 0;
  v25 = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !a1 )
    return;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 16 )
  {
    v6 = "RESCDIR";
    v7 = L"%s\\rc%04u\\rescache.dir";
LABEL_10:
    v28 = v6;
    v10 = &v37;
    Length = 8;
    v11 = RtlStringCchPrintfW(pszDest, 0x104uLL, v7, L"\\SystemRoot\\Rescache", *(_DWORD *)(a1 + 4));
LABEL_11:
    v9 = v11;
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
LABEL_14:
      v1 = 0LL;
      goto LABEL_61;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      FileHandle = 0LL;
      goto LABEL_14;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_14;
    v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, v10, Length, &MaximumSize, 0LL);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    v12 = v9 < 0;
    if ( v9 )
    {
      v1 = 0LL;
      goto LABEL_19;
    }
    if ( *v10 != *(_QWORD *)v28 )
    {
      v9 = -1073700864;
      goto LABEL_14;
    }
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == 32 && *((_DWORD *)Pool2 + 19) )
    {
      *(_DWORD *)(a1 + 24) |= 4u;
      v23 = 1;
      *(_BYTE *)(a1 + 12) = 1;
    }
    LowPart = 0LL;
    p_MaximumSize = 0LL;
    v28 = FileHandle;
    if ( *(_BYTE *)(a1 + 12) )
    {
      v28 = 0LL;
      MaximumSize.QuadPart = 0LL;
      if ( v13 == 16 || v13 == 256 )
      {
        v9 = CMFGetFileSizeEx(FileHandle, &MaximumSize);
        if ( (v9 & 0xC0000000) == 0xC0000000 )
          goto LABEL_14;
        LowPart = MaximumSize.LowPart;
        v13 = *(_DWORD *)(a1 + 48);
      }
      else
      {
        LowPart = *((unsigned int *)Pool2 + 8);
        MaximumSize.LowPart = *((_DWORD *)Pool2 + 8);
      }
      if ( (int)CMFGetLargePageSectionSize((__int64 *)&MaximumSize, (__int64)&v34) < 0 || *(int *)a1 >= 0 )
      {
        *(_DWORD *)a1 &= ~0x80000000;
        p_MaximumSize = &MaximumSize;
        ViewSize = LowPart;
      }
      else
      {
        p_MaximumSize = (LARGE_INTEGER *)&v34;
        ViewSize = (unsigned int)v34;
      }
    }
    if ( v13 == 256
      || (v16 = CMFCreateSecurityDescriptor(&Object, 0LL), v2 = Object, v9 = v16, (v16 & 0xC0000000) != 0xC0000000) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      Buffer = *(_DWORD *)a1;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v2;
      v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, p_MaximumSize, 4u, Buffer, v28);
      if ( v9 >= 0 )
      {
LABEL_43:
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
        v1 = Object;
        v9 = v19;
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          v1 = 0LL;
          goto LABEL_61;
        }
        if ( *(_BYTE *)(a1 + 12) )
        {
          MaximumSize.QuadPart = 0LL;
          v9 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 &MaximumSize,
                 &ViewSize,
                 ViewUnmap,
                 0x400000u,
                 4u);
          if ( (v9 & 0xC0000000) == 0xC0000000 )
          {
            BaseAddress = 0LL;
            goto LABEL_61;
          }
          if ( v23 )
          {
            *((_DWORD *)Pool2 + 19) = 0;
            v9 = CMFReadCompressedSegment(FileHandle, (char *)BaseAddress, LowPart, Pool2);
            if ( v9 < 0 )
              goto LABEL_61;
          }
          else
          {
            MaximumSize.QuadPart = 0LL;
            v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, BaseAddress, LowPart, &MaximumSize, 0LL);
            if ( v9 < 0 )
              goto LABEL_61;
            v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            v12 = v9 < 0;
            if ( v9 )
            {
LABEL_19:
              if ( !v12 )
                v9 = -1073741823;
              goto LABEL_61;
            }
          }
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          BaseAddress = 0LL;
        }
        v20 = *(_QWORD **)(a1 + 40);
        if ( v20 )
        {
          *v20 = v1;
          v1 = 0LL;
          if ( *(_DWORD *)(a1 + 48) == 16 && CMFCacheIndex == 10000 )
          {
            CMFFlagsCache |= *(_DWORD *)(a1 + 24) & 0xF;
            CMFCacheIndex = *(_DWORD *)(a1 + 4);
          }
        }
        goto LABEL_61;
      }
      v17 = v28;
      while ( *(_BYTE *)(a1 + 12) )
      {
        v18 = *(_DWORD *)a1;
        if ( *(int *)a1 >= 0 )
          break;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        *(_DWORD *)a1 = v18 & 0x7FFFFFFF;
        ViewSize = LowPart;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v2;
        v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, v18 & 0x7FFFFFFF, v17);
        if ( v9 >= 0 )
          goto LABEL_43;
      }
      SectionHandle = 0LL;
    }
    v1 = v25;
    goto LABEL_61;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 256 )
    {
      v9 = -1073741811;
      goto LABEL_61;
    }
    v6 = "RESCHIT";
    v7 = L"%s\\rc%04u\\rescache.hit";
    goto LABEL_10;
  }
  Length = 4192;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 4192LL, 1668114000LL);
  if ( Pool2 )
  {
    v28 = "RESCSEG";
    v10 = Pool2;
    v11 = RtlStringCchPrintfW(
            pszDest,
            0x104uLL,
            L"%s\\rc%04u\\segment%u.cmf",
            L"\\SystemRoot\\Rescache",
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 28));
    goto LABEL_11;
  }
  v9 = -1073741801;
LABEL_61:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v21 = *(struct _KEVENT **)(a1 + 16);
  *(_DWORD *)(a1 + 36) = v9;
  if ( v21 )
    KeSetEvent(v21, 1, 0);
}
