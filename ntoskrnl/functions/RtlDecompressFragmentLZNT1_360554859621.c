__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8)
{
  unsigned __int64 v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // cx
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int16 *v15; // rcx
  __int64 v16; // r15
  int v17; // r12d
  unsigned int v18; // edx
  __int64 v19; // rax
  bool v20; // zf
  _BYTE *v22; // rdx
  size_t v23; // r8
  int v24; // eax
  struct _LIST_ENTRY *v25; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h] BYREF
  int v28; // [rsp+B0h] [rbp+48h]
  unsigned int v29; // [rsp+B8h] [rbp+50h]
  int v30; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  v29 = a2;
  v28 = (int)a1;
  v8 = a3;
  v25 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  LODWORD(Size) = 0;
  v10 = a3 + a4;
  memset(&Event, 0, sizeof(Event));
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_WORD *)v8;
  v27 = 1LL;
  v13 = a5;
  while ( 1 )
  {
    v30 = 4096;
    v14 = (v12 & 0xFFFu) + 3;
    if ( v13 < 0x1000 )
      break;
    v15 = (__int16 *)(v8 + (unsigned int)v14);
    if ( (unsigned __int64)v15 > v10 )
      goto LABEL_41;
    v13 -= 4096;
    v8 += (unsigned int)v14;
    if ( (unsigned __int64)v15 <= v10 - 2 )
    {
      v12 = *v15;
      if ( v12 )
        continue;
    }
    *a7 = 0;
    goto LABEL_23;
  }
  v16 = (unsigned int)v14;
  if ( v8 + v14 > v10 )
  {
LABEL_41:
    v11 = -1073741246;
    *a7 = v8;
    goto LABEL_23;
  }
  v17 = a6;
  v18 = v29;
  while ( 1 )
  {
    v19 = 4096 - v13;
    if ( (unsigned int)v19 >= v18 )
      v19 = v18;
    LODWORD(Size) = v19;
    if ( v12 >= 0 )
    {
      v23 = (unsigned int)v19;
      if ( v13 + v19 + v8 + 2 > v10 )
        goto LABEL_41;
      v22 = (_BYTE *)(v8 + v13 + 2LL);
LABEL_32:
      memmove(v9, v22, v23);
      goto LABEL_17;
    }
    if ( v13 || (_DWORD)v19 != 4096 )
      break;
    if ( v17 )
    {
      v11 = LZNT1DecompressChunkNewThread((__int64)&Event, (unsigned __int64)v9, v25, v8 + 2, v16 + v8, v17);
      if ( v11 < 0 )
        goto LABEL_35;
      LODWORD(Size) = v17;
    }
    else
    {
      v11 = LZNT1DecompressChunk(v9, v25, (_BYTE *)(v8 + 2), v16 + v8, &Size);
      if ( v11 < 0 )
      {
LABEL_35:
        v24 = Size;
        goto LABEL_39;
      }
    }
LABEL_17:
    v13 = 0;
    v9 += (unsigned int)Size;
    v20 = v29 == (_DWORD)Size;
    v18 = v29 - Size;
    v29 -= Size;
    if ( v20 )
      goto LABEL_22;
    v8 += v16;
    if ( v8 > v10 - 2 )
      goto LABEL_22;
    v12 = *(_WORD *)v8;
    if ( !*(_WORD *)v8 )
      goto LABEL_22;
    v30 = 4096;
    v16 = (v12 & 0xFFF) + 3LL;
    if ( v16 + v8 > v10 )
      goto LABEL_41;
  }
  v11 = LZNT1DecompressChunk(a8, a8 + 4096, (_BYTE *)(v8 + 2), v16 + v8, &v30);
  if ( v11 >= 0 )
  {
    v22 = &a8[v13];
    if ( v30 - v13 < (unsigned int)Size )
    {
      memmove(v9, v22, v30 - v13);
      LODWORD(v9) = v30 - v13 + (_DWORD)v9;
LABEL_22:
      *a7 = (_DWORD)v9 - v28;
      goto LABEL_23;
    }
    v23 = (unsigned int)Size;
    goto LABEL_32;
  }
  v24 = v30;
LABEL_39:
  *a7 = v24;
LABEL_23:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v27 < 0 )
    return (unsigned int)HIDWORD(v27);
  return (unsigned int)v11;
}
