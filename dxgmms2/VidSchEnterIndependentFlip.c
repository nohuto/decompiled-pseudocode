/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C003F270
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C003D3F0 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x1C003E23C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _QWORD *result; // rax
  int v11; // r15d
  char v12; // r12
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rbx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int i; // r14d
  __int64 v19; // rax
  unsigned int v20; // r13d
  int v21; // r8d
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r12
  char v30; // r15
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // r9
  __int64 v41; // r14
  unsigned int v42; // edi
  char v43; // si
  unsigned int v44; // ebx
  unsigned int v45; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-45h]
  unsigned int v47; // [rsp+70h] [rbp-41h]
  __int64 v48; // [rsp+78h] [rbp-39h]
  unsigned int v49; // [rsp+80h] [rbp-31h] BYREF
  int v50; // [rsp+84h] [rbp-2Dh]
  unsigned int v51; // [rsp+88h] [rbp-29h]
  __int64 v52; // [rsp+90h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-19h] BYREF
  struct _LUID DestinationLuid; // [rsp+F8h] [rbp+47h] BYREF
  struct _LUID *v55; // [rsp+108h] [rbp+57h]
  __int64 v56; // [rsp+110h] [rbp+5Fh]

  v56 = a4;
  v55 = a3;
  *a7 = 0;
  result = a8;
  *a8 = 0LL;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  DestinationLuid = 0LL;
  RtlCopyLuid(&DestinationLuid, a3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = a2;
  v17 = 0;
  for ( i = 0; v16; v16 >>= 1 )
  {
    if ( (v16 & 1) != 0 )
      break;
    ++v17;
  }
  while ( v16 )
  {
    v19 = *(int *)(288LL * *(unsigned int *)(a5 + 4LL * i) + *(_QWORD *)(a1 + 8LL * v17 + 3200) + 188);
    if ( (int)v19 <= -1 )
    {
      v15 = 0LL;
LABEL_10:
      ++v14;
      goto LABEL_13;
    }
    v15 = *(_QWORD *)(a1 + 3328) + 160 * v19;
    if ( !v15 )
      goto LABEL_10;
    v12 = 1;
    ++v13;
LABEL_13:
    while ( 1 )
    {
      v16 >>= 1;
      if ( !v16 || (v16 & 1) != 0 )
        break;
      ++v17;
    }
    ++i;
  }
  v20 = 0;
  if ( v14 && v13 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x8000LL, v13, v14, a1);
    __debugbreak();
  }
  if ( !v12 )
  {
    v21 = *(_DWORD *)(a1 + 3496);
    if ( v21 > 0 )
    {
      v22 = *(_QWORD **)(a1 + 3328);
      while ( *v22 )
      {
        ++v11;
        v22 += 20;
        if ( v11 >= v21 )
          goto LABEL_26;
      }
      v15 = *(_QWORD *)(a1 + 3328) + 160LL * v11;
      if ( v11 > *(_DWORD *)(a1 + 3512) )
        *(_DWORD *)(a1 + 3512) = v11;
    }
  }
LABEL_26:
  if ( !v15 )
  {
    v23 = *(int *)(a1 + 3512);
    v24 = *(unsigned int *)(a1 + 3496);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x2000LL, v24, v23, a1);
    __debugbreak();
  }
  if ( v12 )
  {
    v29 = v56;
  }
  else
  {
    *(_DWORD *)(v15 + 16) = a2;
    memset((void *)(v15 + 20), 0, 0x40uLL);
    v25 = 0LL;
    v26 = 0LL;
    if ( a2 )
    {
      do
      {
        if ( (a2 & 1) != 0 )
          break;
        v25 = (unsigned int)(v25 + 1);
        a2 >>= 1;
      }
      while ( a2 );
      while ( a2 )
      {
        v27 = a5;
        v28 = v20++;
        *(_DWORD *)(v15 + 4 * v28 + 20) = *(_DWORD *)(a5 + 4 * v26);
        *(_DWORD *)(*(_QWORD *)(a1 + 8 * v25 + 3200) + 288LL * *(unsigned int *)(v27 + 4 * v26) + 188) = v11;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          8LL,
          *v55,
          v56,
          *(unsigned int *)(v27 + 4 * v26));
        while ( 1 )
        {
          a2 >>= 1;
          if ( !a2 || (a2 & 1) != 0 )
            break;
          v25 = (unsigned int)(v25 + 1);
        }
        v26 = (unsigned int)(v26 + 1);
      }
    }
    v29 = v56;
    *(_QWORD *)(v15 + 112) = 1LL;
    *(struct _LUID *)v15 = DestinationLuid;
    *(_QWORD *)(v15 + 8) = v29;
    *(_WORD *)(v15 + 96) = 0;
    *(_BYTE *)(v15 + 98) = 0;
  }
  v30 = a6;
  *(_DWORD *)(v15 + 100) = a6;
  v31 = *(_QWORD *)(a1 + 3504);
  *(_QWORD *)(v15 + 88) = v31;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v45,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v15);
  v32 = v45;
  v33 = v47;
  while ( v32 )
  {
    v34 = 288LL * *(unsigned int *)(v48 + 4 * v33) + *(_QWORD *)(a1 + 8LL * v46 + 3200) + 152LL;
    v35 = *(_QWORD *)(v15 + 88);
    v36 = 5LL * *(unsigned int *)(v34 + 216);
    *(_QWORD *)(v34 + 8 * v36 + 88) = MEMORY[0xFFFFF78000000320];
    *(_WORD *)(v34 + 8 * v36 + 56) = 257;
    *(struct _LUID *)(v34 + 8 * v36 + 60) = DestinationLuid;
    *(_QWORD *)(v34 + 8 * v36 + 72) = v29;
    *(_QWORD *)(v34 + 8 * v36 + 80) = v35;
    *(_DWORD *)(v34 + 216) = ((unsigned __int8)*(_DWORD *)(v34 + 216) + 1) & 3;
    v37 = v45 >> 1 == 0;
    v32 = v45 >> 1;
    v45 >>= 1;
    if ( !v37 )
    {
      do
      {
        if ( (v32 & 1) != 0 )
          break;
        ++v46;
        v32 >>= 1;
      }
      while ( v32 );
      v45 = v32;
    }
    v33 = ++v47;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v37 = bTracingEnabled == 0;
  *a8 = v31;
  if ( !v37 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v15);
    v41 = v52;
    v42 = v51;
    v43 = v50;
    v44 = v49;
    while ( v44 )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          v42,
          v38,
          v39,
          1,
          DestinationLuid.LowPart,
          v43,
          *(_DWORD *)(v41 + 4LL * v42),
          v30,
          0,
          v29,
          1,
          *v40);
        v40 = a8;
      }
      while ( 1 )
      {
        v44 >>= 1;
        if ( !v44 || (v44 & 1) != 0 )
          break;
        ++v43;
      }
      ++v42;
    }
  }
  result = a7;
  *a7 = 1;
  return result;
}
