/*
 * XREFs of BiLoadSystemStore @ 0x14082B7EC
 * Callers:
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BiLogFileOwnerProcess @ 0x14066EEB0 (BiLogFileOwnerProcess.c)
 *     BiMarkTreatAsSystemStore @ 0x14082B918 (BiMarkTreatAsSystemStore.c)
 *     BiAddStoreFromFile @ 0x14082BDE4 (BiAddStoreFromFile.c)
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BiIsSystemStore @ 0x14082C6CC (BiIsSystemStore.c)
 *     BcdGetSystemStorePath @ 0x14082C8E8 (BcdGetSystemStorePath.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  int SystemStorePath; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath(&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, 2 * v7 + 12, 1262764866LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v9 = Pool2 + 3;
      *Pool2 = 1;
      Pool2[1] = 2 * v7 + 12;
      Pool2[2] = 3;
      memmove(Pool2 + 3, v4, 2LL * v7);
      v10 = BiAddStoreFromFile(v2, 0LL, &v19);
      v5 = v10;
      if ( v10 < 0 )
      {
        BiLogMessage(4LL, L"Failed to add system store from file. File: %ws Status: %x", v9, (unsigned int)v10);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v15, v16);
        }
      }
      else
      {
        v12 = v19;
        LOBYTE(v11) = 1;
        v13 = BiMarkTreatAsSystemStore(v19, v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          BiLogMessage(4LL, L"Failed to mark system store. File: %ws Status: %x", v9, (unsigned int)v13);
          BcdCloseStore(v12);
        }
        else if ( (unsigned __int8)BiIsSystemStore(v12) )
        {
          *a1 = v12;
        }
        else
        {
          BiLogMessage(4LL, L"File is not system store. File: %ws Status: %x", v9, v5);
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
