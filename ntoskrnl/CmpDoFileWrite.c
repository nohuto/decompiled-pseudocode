/*
 * XREFs of CmpDoFileWrite @ 0x1406BC078
 * Callers:
 *     CmpFileWrite @ 0x1406BC460 (CmpFileWrite.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A182CC (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpSetRespectIoPriorityThread @ 0x140243A40 (CmpSetRespectIoPriorityThread.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     CmpSetPriorityThread @ 0x140357508 (CmpSetPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x140357520 (CmpSetIoPriorityThread.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     CmpCreateEvent @ 0x1406BC374 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(void *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  ULONG v7; // esi
  __int64 Pool; // rbx
  unsigned int v9; // r13d
  unsigned int v10; // eax
  _DWORD *v11; // r14
  char *Buffer; // rdi
  unsigned int v13; // ebp
  __int64 v14; // rax
  HANDLE *v15; // r12
  HANDLE v16; // rdx
  NTSTATUS Event; // edi
  ULONG Length; // r15d
  unsigned int v19; // ebp
  HANDLE *v20; // rsi
  unsigned int v22; // ecx
  NTSTATUS *v23; // rax
  unsigned int v24; // [rsp+50h] [rbp-58h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-50h] BYREF
  char *v26; // [rsp+60h] [rbp-48h]
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-40h]
  char v29; // [rsp+B8h] [rbp+10h]
  char v32; // [rsp+D8h] [rbp+30h]

  ByteOffset.QuadPart = 0LL;
  v29 = 0;
  v24 = 0;
  v7 = 0;
  Pool = CmpAllocatePool(64LL, 5120LL, 2002931011LL);
  if ( Pool )
  {
    if ( (a5 & 1) != 0 )
    {
      v24 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0LL);
      CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread());
      v29 = 1;
    }
    v32 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v9 = 0;
    if ( a4 )
    {
      v10 = a4;
      v11 = (_DWORD *)(a3 + 16);
      while ( 1 )
      {
        Buffer = (char *)*((_QWORD *)v11 - 1);
        v13 = *v11;
        ByteOffset.QuadPart = (unsigned int)*(v11 - 4);
        v26 = Buffer;
        if ( v13 )
          break;
LABEL_16:
        ++v9;
        v11 += 6;
        if ( v9 >= v10 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v14 = v7;
        v15 = (HANDLE *)(Pool + 8LL * v7);
        v16 = *v15;
        if ( !*v15 )
        {
          Event = CmpCreateEvent(SynchronizationEvent);
          if ( Event < 0 )
            goto LABEL_18;
          v16 = *v15;
          Buffer = v26;
          v14 = v7;
        }
        Length = 0x100000;
        if ( v13 < 0x100000 )
          Length = v13;
        IoStatusBlock = (PIO_STATUS_BLOCK)(Pool + 16 * (v14 + 256));
        if ( ZwWriteFile(a1, v16, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v13 < 0x10000 )
            Length = v13;
          Event = ZwWriteFile(a1, *v15, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
          if ( Event < 0 )
            goto LABEL_18;
          Buffer = v26;
        }
        v13 -= Length;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        ++v7;
        v26 = Buffer;
        if ( v7 == 64 )
          break;
LABEL_14:
        if ( !v13 )
        {
          v10 = a4;
          goto LABEL_16;
        }
      }
      KeWaitForMultipleObjects(0x40u, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
      v22 = 0;
      v23 = (NTSTATUS *)(Pool + 4096);
      v7 = 0;
      while ( 1 )
      {
        Event = *v23;
        if ( *v23 < 0 )
          break;
        ++v22;
        v23 += 4;
        if ( v22 >= 0x40 )
        {
          Buffer = v26;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_17:
      Event = 0;
LABEL_18:
      if ( v7 )
        KeWaitForMultipleObjects(v7, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
    }
    if ( v29 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v24);
      CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread());
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v32);
    v19 = 0;
    v20 = (HANDLE *)Pool;
    do
    {
      if ( !*v20 )
        break;
      ObfDereferenceObject(v20[64]);
      ZwClose(*v20);
      ++v19;
      ++v20;
    }
    while ( v19 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
