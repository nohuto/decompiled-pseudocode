/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x1405DDD80
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunkNewThread @ 0x140213328 (LZNT1DecompressChunkNewThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x140408D30 (LZNT1DecompressChunk.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6)
{
  __int16 *v6; // rsi
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *v8; // r15
  unsigned __int64 v9; // r13
  int v10; // edi
  __int16 v11; // bx
  __int64 v12; // r12
  int v13; // ebx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int v18; // ecx
  size_t v19; // r8
  char *v20; // r12
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  int v23; // [rsp+90h] [rbp+40h]
  unsigned int v24; // [rsp+98h] [rbp+48h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = a1;
  memset(&Event, 0, sizeof(Event));
  v8 = (struct _LIST_ENTRY *)((char *)a1 + a2);
  v9 = (unsigned __int64)a3 + a4;
  v10 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v22 = 1LL;
  v11 = *v6;
  v24 = 0;
  while ( 1 )
  {
    v15 = (v11 & 0xFFFu) + 3;
    if ( (unsigned __int64)v6 + v15 > v9 )
    {
LABEL_32:
      v16 = a6;
LABEL_20:
      v10 = -1073741246;
      *v16 = (unsigned int)v6;
      goto LABEL_14;
    }
    v12 = (unsigned int)v15;
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v15 < 2uLL )
        goto LABEL_32;
      v18 = v15 - 2;
      v24 = v18;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v18) > v8 )
      {
        v18 = (_DWORD)v8 - (_DWORD)v7;
        v24 = (_DWORD)v8 - (_DWORD)v7;
      }
      if ( (unsigned __int64)v6 + v18 + 2 > v9 )
        goto LABEL_32;
      memmove(v7, v6 + 1, v18);
LABEL_28:
      v14 = v24;
      goto LABEL_6;
    }
    v13 = a5;
    if ( !a5 )
    {
      v10 = LZNT1DecompressChunk(v7, v8, (_BYTE *)v6 + 2, (__int64)v6 + v15, &v24);
      if ( v10 < 0 )
      {
        *a6 = v24;
        goto LABEL_14;
      }
      goto LABEL_28;
    }
    v10 = LZNT1DecompressChunkNewThread(
            (__int64)&Event,
            (unsigned __int64)v7,
            v8,
            (unsigned __int64)(v6 + 1),
            (__int64)v6 + v15,
            a5);
    if ( v10 < 0 )
      break;
    v14 = v13;
    v24 = v13;
LABEL_6:
    v6 = (__int16 *)((char *)v6 + v12);
    v7 = (struct _LIST_ENTRY *)((char *)v7 + v14);
    if ( v7 == v8 || (unsigned __int64)v6 > v9 - 2 || (v11 = *v6) == 0 )
    {
LABEL_12:
      v16 = a6;
      if ( (unsigned __int64)v6 <= v9 )
      {
        *a6 = (_DWORD)v7 - v23;
        goto LABEL_14;
      }
      goto LABEL_20;
    }
    if ( v14 < 0x1000 )
    {
      v19 = (int)(4096 - v14);
      v20 = (char *)v7 + v19;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v19) >= v8 )
        goto LABEL_12;
      memset(v7, 0, v19);
      v7 = (struct _LIST_ENTRY *)v20;
    }
  }
  *a6 = v24;
LABEL_14:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 >= 0 && v22 < 0 )
    return (unsigned int)HIDWORD(v22);
  return (unsigned int)v10;
}
