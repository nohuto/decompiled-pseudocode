__int64 __fastcall FsRtlAddToTunnelCacheEx(
        PFAST_MUTEX FastMutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  __int64 v7; // rbp
  int v9; // r14d
  const UNICODE_STRING *v10; // r15
  const UNICODE_STRING *v11; // r13
  PFAST_MUTEX v12; // rsi
  __int64 result; // rax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // rbx
  PFAST_MUTEX v18; // r12
  __int64 v19; // r14
  struct _FAST_MUTEX *v20; // rdi
  LONG v21; // eax
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rdx
  PFAST_MUTEX *v24; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v26; // ax
  char *v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  char v34; // [rsp+20h] [rbp-68h]
  char v35; // [rsp+28h] [rbp-60h]
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+B0h] [rbp+28h]

  v7 = 0LL;
  v34 = 0;
  v9 = a5 & 2;
  v10 = a4;
  v11 = a3;
  v41 = v9;
  v12 = FastMutex;
  result = a5 & 1;
  v35 = result;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 2) )
    return result;
  v14 = Size + a3->Length;
  v15 = a4->Length + 112;
  v36[1] = (__int64)v36;
  v16 = v15 + v14;
  v36[0] = (__int64)v36;
  if ( v16 > 0xB0 || (v17 = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
  {
    result = ExAllocatePool2(258LL, v16, 1349416276LL);
    v17 = (char *)result;
    if ( !result )
      return result;
    v34 = 1;
  }
  if ( !v9 )
    v11 = v10;
  ExAcquireFastMutex(v12);
  v18 = v12 + 1;
  v19 = *(_QWORD *)&v12[1].Count;
  v20 = v12 + 1;
  if ( v19 )
  {
    do
    {
      v7 = v19;
      v21 = FsRtlCompareNodeAndKey(v19, a2, v11, v35);
      if ( v21 > 0 )
      {
        v22 = 8LL;
      }
      else
      {
        if ( v21 >= 0 )
          break;
        v22 = 16LL;
      }
      v20 = (struct _FAST_MUTEX *)(v19 + v22);
      v19 = *(_QWORD *)(v19 + v22);
    }
    while ( v19 );
    v12 = FastMutex;
    v10 = a4;
    v18 = FastMutex + 1;
  }
  *(_QWORD *)v17 = v17;
  *((_QWORD *)v17 + 1) = 0LL;
  *((_QWORD *)v17 + 2) = 0LL;
  if ( v7 )
  {
    if ( *(_QWORD *)&v20->Count )
    {
      *((_QWORD *)v17 + 2) = *(_QWORD *)(*(_QWORD *)&v20->Count + 16LL);
      *((_QWORD *)v17 + 1) = *(_QWORD *)(*(_QWORD *)&v20->Count + 8LL);
      v28 = *(_QWORD **)(*(_QWORD *)&v20->Count + 16LL);
      if ( v28 )
        *v28 = v17;
      v29 = *(_QWORD **)(*(_QWORD *)&v20->Count + 8LL);
      if ( v29 )
        *v29 = v17;
      v30 = **(_QWORD ***)&v20->Count;
      if ( v30 == *(_QWORD **)&v20->Count )
      {
        *(_QWORD *)&v18->Count = v17;
      }
      else
      {
        *(_QWORD *)v17 = v30;
        v33 = **(_QWORD **)&v20->Count;
        if ( *(_QWORD *)(v33 + 8) == *(_QWORD *)&v20->Count )
          *(_QWORD *)(v33 + 8) = v17;
        else
          *(_QWORD *)(v33 + 16) = v17;
      }
      v31 = *(_QWORD *)(v7 + 24);
      if ( *(_QWORD *)(v31 + 8) != v7 + 24 || (v32 = *(_QWORD **)(v7 + 32), *v32 != v7 + 24) )
LABEL_39:
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      FsRtlFreeTunnelNode((char *)v7, v36);
      --LOWORD(v12[1].Event.Header.Lock);
    }
    else
    {
      *(_QWORD *)v17 = v7;
      *(_QWORD *)&v20->Count = v17;
    }
  }
  else
  {
    *(_QWORD *)&v18->Count = v17;
  }
  v23 = (struct _FAST_MUTEX *)(v17 + 24);
  *((_QWORD *)v17 + 5) = MEMORY[0xFFFFF78000000014];
  v24 = *(PFAST_MUTEX **)&v12[1].Contention;
  if ( *v24 != (PFAST_MUTEX)&v12[1].Owner )
    goto LABEL_39;
  *(_QWORD *)&v23->Count = (char *)v12 + 64;
  *((_QWORD *)v17 + 4) = v24;
  *v24 = v23;
  *(_QWORD *)&v12[1].Contention = v23;
  ++LOWORD(v12[1].Event.Header.Lock);
  *((_QWORD *)v17 + 6) = a2;
  *((_DWORD *)v17 + 14) = v41 != 0 ? 2 : 0;
  *((_QWORD *)v17 + 11) = v17 + 112;
  *((_QWORD *)v17 + 9) = &v17[a3->Length + 112];
  Length = a3->Length;
  *((_WORD *)v17 + 41) = a3->Length;
  *((_WORD *)v17 + 40) = Length;
  v26 = v10->Length;
  *((_WORD *)v17 + 33) = v10->Length;
  *((_WORD *)v17 + 32) = v26;
  if ( a3->Length )
    memmove(v17 + 112, a3->Buffer, a3->Length);
  if ( v10->Length )
    memmove(*((void **)v17 + 9), v10->Buffer, v10->Length);
  v27 = &v17[a3->Length + 112 + v10->Length];
  *((_QWORD *)v17 + 12) = v27;
  *((_DWORD *)v17 + 26) = Size;
  memmove(v27, Src, (unsigned int)Size);
  if ( v34 )
    *((_DWORD *)v17 + 14) |= 1u;
  FsRtlPruneTunnelCache(v12, v36);
  ExReleaseFastMutex(v12);
  return (__int64)FsRtlEmptyFreePoolList((_QWORD **)v36);
}
