__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  void *v5; // r12
  WCHAR *v6; // rsi
  const wchar_t *PartitionVhdFilePath; // rax
  int PhysicalDriveName; // ebx
  __int128 v9; // xmm6
  unsigned int v10; // r15d
  __int64 v11; // rdx
  _OWORD *Pool2; // rax
  _OWORD *v13; // r14
  size_t v14; // r8
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  _DWORD *v18; // rcx
  wchar_t *v20; // rax
  wchar_t *v21; // rbx
  void *v22; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceStringa; // [rsp+60h] [rbp-A8h]
  void *v27; // [rsp+68h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp-90h]
  _DWORD *v30; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v34[14]; // [rsp+D8h] [rbp-30h] BYREF

  v29 = a3;
  LODWORD(v25) = a2;
  v30 = a4;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  memset(v34, 0, 0x8CuLL);
  FileHandle = 0LL;
  Src = 0LL;
  v27 = 0LL;
  Size = 0;
  DestinationString = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  SourceStringa = 0LL;
  memset(&v34[9], 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_24;
    PhysicalDriveName = BiGetDriveLayoutInformation(SourceStringa);
    if ( PhysicalDriveName < 0 )
      goto LABEL_24;
  }
  if ( (v25 & 0x40) == 0 )
  {
    PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(SourceString);
    v6 = (WCHAR *)PartitionVhdFilePath;
    if ( PartitionVhdFilePath )
    {
      if ( !wcsnicmp(PartitionVhdFilePath, L"\\Device\\HarddiskVolume", 0x16uLL) )
      {
        v20 = wcschr(v6 + 22, 0x5Cu);
        v21 = v20;
        if ( v20 )
        {
          *v20 = 0;
          v22 = (void *)BiGetPartitionVhdFilePath(v6);
          *v21 = 92;
          if ( v22 )
          {
            ExFreePoolWithTag(v22, 0x4B444342u);
            PhysicalDriveName = -1073741637;
            goto LABEL_24;
          }
        }
      }
      v5 = v27;
      PhysicalDriveName = BiCreateFileDeviceElement(v6);
      if ( PhysicalDriveName < 0 )
        goto LABEL_22;
      PhysicalDriveName = BiConvertNtDeviceToBootEnvironment((__int64)v27, 0, 0, &Src);
      if ( PhysicalDriveName < 0 )
        goto LABEL_22;
      LODWORD(v34[11]) = 6;
      Size = *((_DWORD *)Src + 2);
    }
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_46:
      PhysicalDriveName = -1073741811;
      goto LABEL_22;
    }
    DWORD1(v34[11]) = 0;
    *(_OWORD *)((char *)&v34[11] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v34[11]) = MEMORY[8];
    DWORD1(v34[11]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !LODWORD(v34[0]) )
      {
        *(_QWORD *)&v34[10] = *((_QWORD *)&v34[0] + 1);
        v9 = v34[10];
        goto LABEL_12;
      }
      if ( LODWORD(v34[0]) == 1 )
      {
        v9 = v34[3];
LABEL_12:
        v10 = Size + 56;
        v11 = Size + 56;
        if ( Size + 56 <= 0x48 )
          v11 = 72LL;
        Pool2 = (_OWORD *)ExAllocatePool2(258LL, v11, 1262764866LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          v14 = 72LL;
          if ( v10 > 0x48 )
            v14 = v10;
          memset(Pool2, 0, v14);
          v15 = v34[12];
          v16 = 72;
          LODWORD(v34[9]) = 6;
          if ( v10 > 0x48 )
            v16 = Size + 56;
          DWORD2(v34[9]) = v16;
          *v13 = v34[9];
          v17 = v34[11];
          v13[1] = v9;
          v13[2] = v17;
          *(_QWORD *)&v17 = *(_QWORD *)&v34[13];
          v13[3] = v15;
          *((_QWORD *)v13 + 8) = v17;
          if ( v6 )
            memmove((char *)v13 + 56, Src, Size);
          v18 = v30;
          *v29 = v13;
          *v18 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_22;
      }
      goto LABEL_46;
    }
  }
LABEL_22:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_24:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
