__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rdx
  int SystemSection; // ebx
  __int64 v11; // r9
  int v12; // r14d
  int v13; // ebx
  int v14; // esi
  int v15; // eax
  int SessionId; // ecx
  __int64 *v17; // rax
  unsigned __int64 v18; // rsi
  __int16 v19; // ax
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  int v23; // [rsp+40h] [rbp-138h]
  int v24; // [rsp+48h] [rbp-130h]
  PVOID Object; // [rsp+78h] [rbp-100h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-E0h] BYREF
  HANDLE *v30; // [rsp+C8h] [rbp-B0h]
  PVOID *v31; // [rsp+D0h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-A0h] BYREF
  _OWORD v33[5]; // [rsp+F0h] [rbp-88h] BYREF

  v30 = a4;
  v31 = a5;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset(v33, 0, sizeof(v33));
  v28 = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemSection = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = 1;
    if ( a2 )
    {
      v13 = 2;
      v14 = 285212672;
      v15 = 0;
      SessionId = -1;
    }
    else
    {
      v13 = 16;
      v14 = 0x1000000;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v15 = 1;
    }
    LOBYTE(v9) = a3;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v9,
                      (int)&ObjectAttributes,
                      v11,
                      v13,
                      v14,
                      0,
                      (__int64)FileHandle,
                      v23,
                      v24,
                      SessionId,
                      v15,
                      a3);
    if ( SystemSection >= 0 )
    {
      v17 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v17, 1, (__int64)v33);
      if ( SystemSection >= 0 )
      {
        v18 = (unsigned __int64)LODWORD(v33[1]) << 12;
        SystemSection = RtlImageNtHeaderEx(0, *(unsigned __int64 *)&v33[0], v18, &v28);
        if ( SystemSection >= 0 )
        {
          if ( v28 + 24 < v28 || v28 + 24 > v18 + *(_QWORD *)&v33[0] )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v18 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_28;
            }
            v19 = *(_WORD *)(v28 + 4);
            if ( v19 != -31132 && v19 != 332 && v19 != -21916 )
              v12 = 0;
            if ( !v12 )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            HotPatchInformation = RtlFindHotPatchInformation(*(_QWORD *)&v33[0]);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_28;
              }
              *a7 = *(_DWORD *)(HotPatchBase + 12);
              a7[1] = *(_DWORD *)(HotPatchBase + 8);
            }
            *v30 = FileHandle;
            FileHandle = 0LL;
            *v31 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = v33[0];
              a6[1] = v33[1];
              a6[2] = v33[2];
              a6[3] = v33[3];
              a6[4] = v33[4];
              *(_QWORD *)&v33[0] = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_28:
  if ( *(_QWORD *)&v33[0] )
    MiUnmapImageInSystemSpace((__int64)v33);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
