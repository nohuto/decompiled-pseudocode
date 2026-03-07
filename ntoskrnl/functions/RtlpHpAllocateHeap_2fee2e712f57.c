__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v5; // ebx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r13d
  unsigned __int64 v12; // rdi
  int v13; // r8d
  unsigned int v14; // r15d
  int v15; // r9d
  __int64 Internal; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  LOWORD(v25) = a4;
  v5 = *(_DWORD *)(a1 + 20) | a3;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = v5 & 0x93000F0B;
  v9 = v7;
  if ( (v7 || (v9 = qword_140C6AF68) != 0) && a2 > v9 )
  {
    v19 = *(_QWORD *)(a1 + 56);
    if ( v19 )
      RtlpLogHeapFailure(20, a1, 0, v19, a2, v7);
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v24 = 0LL;
    v11 = 0;
    if ( (v8 & 0x1000000) == 0 )
    {
      v11 = *(_DWORD *)(a1 + 24);
      if ( v11 )
      {
        v8 |= 8u;
        if ( (_WORD)v11 != 1
          || (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *))CLFS_LSN_NULL_EXT)(a1, 0LL, 1LL, &v24) < 0 )
        {
          return 0LL;
        }
        v10 = v24;
      }
    }
    v12 = v10 + a2;
    if ( (v8 & 0x10000000) != 0 )
      v12 += 16LL;
    if ( (v8 & 0x20000F08) != 0 )
      v12 = ((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( !v12 )
      v12 = 1LL;
    if ( v12 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      return 0LL;
    }
    else
    {
      v13 = v12;
      v14 = v8 & 0x13000003;
      if ( v12 > (unsigned int)*(unsigned __int16 *)(a1 + 956) - 16
        || (Internal = RtlpHpLfhContextAllocate(a1 + 896, (unsigned int)a2, (unsigned int)v12, v14),
            v13 = v12,
            Internal == -1) )
      {
        if ( v12 > 0x20000 )
        {
          if ( v12 <= *(unsigned int *)(a1 + 528) )
          {
            v20 = 512LL;
            if ( v12 <= *(unsigned int *)(a1 + 336) )
              v20 = 320LL;
            v18 = RtlpHpSegAlloc(a1 + v20, a2, v12, v12, v14);
          }
          else
          {
            v18 = RtlpHpLargeAlloc(a1, a2, v12, v14);
          }
          Internal = v18;
        }
        else
        {
          v25 = 0;
          v23 = 0LL;
          v22 = 0LL;
          Internal = RtlpHpVsContextAllocateInternal((int)a1 + 704, a2, v13, v14, (__int64)&v22, (__int64)&v25);
          if ( v25 && (v8 & 1) == 0 )
            RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 712), &v22);
        }
      }
      if ( Internal
        && (v8 & 0x30000F08) != 0
        && (v21 = RtlpHpExtrasAppend(a1, Internal, a2, v15, v24, v8, 0), v11)
        && ((*(_BYTE *)(v21 + 2) ^= (*(_BYTE *)(v21 + 2) ^ v11) & 0xF, (_WORD)v11 != 1)
         || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                   a1,
                   Internal,
                   2LL,
                   v21 + 16) < 0) )
      {
        RtlpHpFreeHeap(a1, Internal, v8, 0, 0LL);
        return 0LL;
      }
      else
      {
        return Internal;
      }
    }
  }
}
