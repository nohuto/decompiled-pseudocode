__int64 __fastcall EtwpUpdateFileHeader(__int64 a1, char a2, int a3)
{
  ULONG Length; // r12d
  _DWORD *Pool2; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  LARGE_INTEGER v10; // rcx
  void *v12; // rcx
  __int64 v13; // rdx
  char v14; // dl
  __int64 v15; // r15
  __int64 v16; // r14
  signed __int64 v17; // rcx
  LARGE_INTEGER FileInformation; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+68h] [rbp-11h] BYREF
  __int128 v21; // [rsp+78h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+Fh]

  v22 = 0LL;
  v21 = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    Length = -a3 & (a3 + 383);
  else
    Length = *(_DWORD *)(a1 + 4);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1350005829LL);
  Buffer = (__int64)Pool2;
  if ( Pool2 )
  {
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, Pool2);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) == 0
          || (v10.QuadPart = *(unsigned int *)(a1 + 292)
                           * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              v20 = 0LL,
              FileInformation = v10,
              v9 = ZwSetInformationFile(*(HANDLE *)(a1 + 800), &v20, &FileInformation, 8u, FileEndOfFileInformation),
              v9 >= 0) )
        {
          *(_DWORD *)(a1 + 248) = 1;
          *(_DWORD *)(a1 + 204) = 1;
          *(_QWORD *)(a1 + 216) = Length;
        }
      }
      goto LABEL_9;
    }
    v12 = *(void **)(a1 + 800);
    FileInformation.QuadPart = 0LL;
    v9 = ZwReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Length, &FileInformation, 0LL);
    if ( v9 >= 0 )
    {
      v13 = *(unsigned int *)(Buffer + 136);
      if ( (v13 & 0x4000402) != 0 )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 44) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 44) = 2;
          goto LABEL_9;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1, v13) != 0 ? 4 : 8) )
        {
          v15 = *(unsigned int *)(Buffer + 104);
          LODWORD(v16) = *(_DWORD *)(Buffer + 140);
          if ( ((a3 - 1) & (unsigned int)v15) != 0 )
          {
            v9 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v15 - 1024) > 0xFFFC00 )
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 44) = 4;
              goto LABEL_9;
            }
            if ( (*(_DWORD *)(a1 + 816) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v15 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v14 & 0x20) != 0 )
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 44) = 6;
                  goto LABEL_9;
                }
                v9 = ZwQueryInformationFile(*(HANDLE *)(a1 + 800), &IoStatusBlock, &v21, 0x18u, FileStandardInformation);
                if ( v9 < 0 )
                {
                  *(_DWORD *)(a1 + 44) = 7;
                  goto LABEL_9;
                }
                v17 = *(unsigned int *)(a1 + 292)
                    * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
                if ( v17 && *((__int64 *)&v21 + 1) >= v17 )
                {
                  v9 = -1073741432;
                  *(_DWORD *)(a1 + 44) = 8;
                  goto LABEL_9;
                }
                v16 = *((_QWORD *)&v21 + 1) / v15;
              }
              if ( (_DWORD)v16 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v9 = ZwWriteFile(
                         *(HANDLE *)(a1 + 800),
                         0LL,
                         0LL,
                         0LL,
                         &IoStatusBlock,
                         (PVOID)Buffer,
                         Length,
                         &FileInformation,
                         0LL);
                  if ( v9 >= 0 )
                  {
                    *(_DWORD *)(a1 + 248) = v16;
                    *(_DWORD *)(a1 + 204) = v16;
                    *(_DWORD *)(a1 + 4) = v15;
                    *(_QWORD *)(a1 + 216) = (unsigned int)(v15 * v16);
                  }
                }
                else
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 44) = 10;
                }
              }
              else
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 44) = 9;
              }
              goto LABEL_9;
            }
            v9 = -1073741306;
            *(_DWORD *)(a1 + 44) = 5;
          }
        }
        else
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 44) = 3;
        }
      }
    }
LABEL_9:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return (unsigned int)v9;
  }
  return 3221225495LL;
}
