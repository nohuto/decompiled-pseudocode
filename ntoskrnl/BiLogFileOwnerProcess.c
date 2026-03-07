void __fastcall BiLogFileOwnerProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  UNICODE_STRING *v6; // r9
  NTSTATUS v7; // eax
  unsigned int *Pool2; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // r14d
  NTSTATUS v11; // eax
  unsigned int InformationProcess; // eax
  int v13; // eax
  const wchar_t *v14; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ClientId = 0LL;
  v3 = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  memset(&v17, 0, 44);
  Length = 0;
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  if ( (unsigned __int8)IopDmaOverrideConflict(a1, a2, a3, a1) )
  {
    BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", *(_QWORD *)(v5 + 8));
    ObjectAttributes.ObjectName = v6;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
    if ( v7 >= 0 )
    {
      Length = 1024;
      Pool2 = (unsigned int *)ExAllocatePool2(258LL, 1024LL, 1262764866LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        v9 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, Pool2, Length, FileProcessIdsUsingFileInformation);
        if ( v9 >= 0 )
        {
          if ( *v3 )
          {
            BiLogMessage(2LL, L"Found %d processes using this file.");
            v10 = 0;
            if ( !*v3 )
            {
LABEL_34:
              ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_35:
              if ( FileHandle )
                ZwClose(FileHandle);
              return;
            }
            while ( 1 )
            {
              ClientId.UniqueThread = 0LL;
              ClientId.UniqueProcess = *(HANDLE *)&v3[2 * v10 + 2];
              v17.Length = 48;
              memset(&v17.RootDirectory, 0, 20);
              *(_OWORD *)&v17.SecurityDescriptor = 0LL;
              v11 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v17, &ClientId);
              if ( v11 < 0 )
                break;
              Length = 0;
              InformationProcess = ZwQueryInformationProcess((__int64)ProcessHandle, 27LL);
              if ( InformationProcess != -2147483643
                && InformationProcess != -1073741789
                && InformationProcess != -1073741820 )
              {
                BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", InformationProcess);
                goto LABEL_28;
              }
              v4 = ExAllocatePool2(258LL, Length, 1262764866LL);
              if ( !v4 )
              {
                BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
                goto LABEL_29;
              }
              v13 = ZwQueryInformationProcess((__int64)ProcessHandle, 27LL);
              if ( v13 < 0 )
              {
                BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v13);
                goto LABEL_29;
              }
              if ( *(_WORD *)v4 )
                v14 = *(const wchar_t **)(v4 + 8);
              else
                v14 = L"System";
              BiLogMessage(4LL, L"Process Name [%d]: %ws", v10, v14, &Length);
              ZwClose(ProcessHandle);
              ProcessHandle = 0LL;
              ExFreePoolWithTag((PVOID)v4, 0x4B444342u);
              ++v10;
              v4 = 0LL;
              if ( v10 >= *v3 )
                goto LABEL_29;
            }
            BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v11);
LABEL_28:
            v4 = 0LL;
          }
          else
          {
            BiLogMessage(4LL, L"No processes are using this file.");
          }
        }
        else
        {
          BiLogMessage(4LL, L"Failed to query processes. Status: %x", (unsigned int)v9);
        }
      }
      else
      {
        BiLogMessage(4LL, L"Failed to allocate process ID buffer.");
      }
    }
    else
    {
      BiLogMessage(4LL, L"Failed to open file attributes. Status: %x", (unsigned int)v7);
    }
LABEL_29:
    if ( ProcessHandle )
      ZwClose(ProcessHandle);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0x4B444342u);
    if ( !v3 )
      goto LABEL_35;
    goto LABEL_34;
  }
}
