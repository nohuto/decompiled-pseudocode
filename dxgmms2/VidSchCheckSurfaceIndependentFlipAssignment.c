_DWORD *__fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        _DWORD *a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  char v15; // si
  _DWORD *result; // rax
  __int64 v20; // r12
  __int128 v21; // xmm8
  __int128 v22; // xmm9
  __int128 v23; // xmm7
  __int128 v24; // xmm6
  __int64 v25; // rbp
  int v26; // r8d
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  char v29; // bl
  __int64 v30; // r14
  __int64 v31; // rcx
  unsigned int i; // eax
  __int64 v33; // rdx
  int v34; // r8d
  bool v35; // zf
  char v36; // di
  int v37; // ecx
  struct _LUID DestinationLuid; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+30h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v41; // [rsp+D0h] [rbp+8h]
  char v43; // [rsp+108h] [rbp+40h]
  char v44; // [rsp+118h] [rbp+50h]

  v15 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  result = a12;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  DestinationLuid = 0LL;
  RtlCopyLuid(&DestinationLuid, a3);
  v39 = 0LL;
  v43 = *(_BYTE *)(a1 + 156);
  v44 = 0;
  LODWORD(v20) = 0;
  v41 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v26 = 0;
  if ( *(int *)(a1 + 3512) < 0 )
  {
LABEL_7:
    v29 = 0;
    v30 = 0LL;
  }
  else
  {
    v27 = *(_DWORD **)(a1 + 3328);
    v28 = 0LL;
    while ( *v27 != DestinationLuid.LowPart || v27[1] != DestinationLuid.HighPart )
    {
      ++v26;
      ++v28;
      v27 += 40;
      if ( v28 > *(int *)(a1 + 3512) )
        goto LABEL_7;
    }
    v31 = *(_QWORD *)(a1 + 3328) + 160LL * v26;
    v15 = 1;
    for ( i = *(_DWORD *)(v31 + 16); (i & 1) == 0; i >>= 1 )
      v25 = (unsigned int)(v25 + 1);
    v33 = *(_QWORD *)(a1 + 8 * v25 + 3200);
    v34 = *(_DWORD *)(v31 + 112);
    v20 = *(unsigned int *)(v31 + 20);
    v29 = *(_BYTE *)(v33 + 3040);
    v23 = *(_OWORD *)(v33 + 3044);
    v24 = *(_OWORD *)(v33 + 3060);
    if ( (unsigned int)(v34 - 1) <= 1 )
    {
      if ( a4 == *(_QWORD *)(v31 + 8) || a4 == -1 )
      {
        if ( *(_BYTE *)(v31 + 96) )
        {
          v30 = *(_QWORD *)(v31 + 88);
          v36 = v43;
          v44 = 1;
          v41 = *(_BYTE *)(v31 + 108);
          if ( v41 || v43 )
          {
            v21 = *(_OWORD *)(288 * v20 + v33 + 152);
            LODWORD(v39) = *(_DWORD *)(288 * v20 + v33 + 184);
            v22 = *(_OWORD *)(288 * v20 + v33 + 168);
          }
          goto LABEL_21;
        }
        v44 = 0;
      }
      else
      {
        *a10 = 1;
        *a8 = v20;
      }
    }
    else if ( v34 == 3 && a4 != -1 )
    {
      v35 = a4 == *(_QWORD *)(v31 + 8);
      v36 = v43;
      v30 = 0LL;
      if ( v35 )
        *a11 = 1;
      goto LABEL_21;
    }
    v30 = 0LL;
  }
  v36 = v43;
LABEL_21:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v44 )
  {
    *a6 = 1;
    *a8 = v20;
    *a7 = v41;
    *a9 = v30;
    if ( v41 || v36 )
    {
      v37 = v39;
      *(_OWORD *)a5 = v21;
      *(_OWORD *)(a5 + 16) = v22;
      *(_DWORD *)(a5 + 32) = v37;
    }
  }
  if ( v15 )
    *a2 = v25;
  *a12 = v29 != 0;
  if ( a13 )
    *a13 = v23;
  result = a14;
  if ( a14 )
    *a14 = v24;
  return result;
}
