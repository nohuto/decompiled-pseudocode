/*
 * XREFs of BiLoadSystemStore @ 0x140781AD4
 * Callers:
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     BiLogFileOwnerProcess @ 0x1405C3AC0 (BiLogFileOwnerProcess.c)
 *     BiAddStoreFromFile @ 0x140781CD8 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x140781E20 (BiMarkTreatAsSystemStore.c)
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x1407823B4 (BcdGetSystemStorePath.c)
 *     BiIsSystemStore @ 0x1407832A8 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  NTSTATUS SystemStorePath; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  HANDLE v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+18h] BYREF

  BcdStoreHandle = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath((PWSTR *)&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v7 + 12, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = PoolWithTag + 3;
      *PoolWithTag = 1;
      PoolWithTag[1] = 2 * v7 + 12;
      PoolWithTag[2] = 3;
      memmove(PoolWithTag + 3, v4, 2LL * v7);
      v10 = BiAddStoreFromFile(v2, 0LL, &BcdStoreHandle);
      v5 = v10;
      if ( v10 < 0 )
      {
        BiLogMessage(
          4LL,
          L"Failed to add system store from file. File: %ws Status: %x",
          v9,
          (unsigned int)v10,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v17, v18);
        }
      }
      else
      {
        v12 = BcdStoreHandle;
        LOBYTE(v11) = 1;
        v13 = BiMarkTreatAsSystemStore(BcdStoreHandle, v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          BiLogMessage(
            4LL,
            L"Failed to mark system store. File: %ws Status: %x",
            v9,
            (unsigned int)v13,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
          BcdCloseStore(v12);
        }
        else if ( (unsigned __int8)BiIsSystemStore(v12, v14, v15) )
        {
          *a1 = v12;
        }
        else
        {
          BiLogMessage(
            4LL,
            L"File is not system store. File: %ws Status: %x",
            v9,
            v5,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
          BcdCloseStore(v12);
          v5 = -1073741672;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
