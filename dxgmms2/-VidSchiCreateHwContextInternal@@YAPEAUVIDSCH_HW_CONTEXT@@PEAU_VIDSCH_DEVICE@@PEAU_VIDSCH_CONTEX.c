struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // rsi
  __int64 Pool2; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 *v11; // rcx
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  struct _VIDSCH_DEVICE **v18; // rdx
  struct _VIDSCH_DEVICE *v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // rcx
  struct _VIDSCH_DEVICE *v37; // r9
  __int64 v38; // r8
  struct _RTL_BALANCED_NODE *v39; // r12
  struct _RTL_BALANCED_NODE *v40; // r14
  __int64 v41; // r8
  struct _RTL_BALANCED_NODE *v42; // rax
  __int64 v43; // r8
  struct _RTL_BALANCED_NODE *v44; // r15
  struct _RTL_BALANCED_NODE *v45; // rsi
  struct _RTL_BALANCED_NODE *v46; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-59h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+98h] [rbp-41h]
  _QWORD v49[10]; // [rsp+A0h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  Pool2 = ExAllocatePool2(64LL, 352LL, 1667328342LL);
  v8 = 0;
  v9 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  v11 = *(__int64 **)(v3 + 632);
  v12 = *((_QWORD *)a2 + 2);
  *(_OWORD *)(Pool2 + 56) = *(_OWORD *)a2;
  *(_DWORD *)Pool2 = 1667328342;
  *(_QWORD *)(Pool2 + 72) = v12;
  *(_QWORD *)(Pool2 + 24) = a3;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_DWORD *)(Pool2 + 80) = *((_DWORD *)a2 + 6);
  v13 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v13 < *(_DWORD *)(v3 + 704) )
    v11 += v13;
  v14 = *v11;
  *(_QWORD *)(v9 + 16) = *v11;
  v15 = ((__int64 (*)(void))DxgCoreInterface[6])();
  *(_QWORD *)(v9 + 248) = 0LL;
  *(_BYTE *)(v9 + 89) = BYTE1(*(_DWORD *)(v15 + 424)) & 1;
  *(_OWORD *)(v9 + 272) = 0LL;
  *(_OWORD *)(v9 + 288) = 0LL;
  *(_OWORD *)(v9 + 304) = 0LL;
  *(_QWORD *)(v9 + 320) = 0LL;
  KeInitializeEvent((PRKEVENT)(v9 + 272), SynchronizationEvent, 0);
  *(_QWORD *)(v9 + 336) = v9 + 328;
  *(_QWORD *)(v9 + 328) = v9 + 328;
  *(_QWORD *)(v9 + 232) = v9 + 224;
  *(_QWORD *)(v9 + 224) = v9 + 224;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v9);
  SpinLock = (PKSPIN_LOCK)(v3 + 1728);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1728), &LockHandle);
  v16 = *(_QWORD **)(v14 + 1704);
  v17 = (_QWORD *)(v9 + 208);
  if ( *v16 != v14 + 1696
    || (*v17 = v14 + 1696,
        *(_QWORD *)(v9 + 216) = v16,
        *v16 = v17,
        *(_QWORD *)(v14 + 1704) = v17,
        v18 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12),
        v19 = (struct _VIDSCH_DEVICE *)(v9 + 192),
        *v18 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v19 = (char *)a1 + 88;
  *(_QWORD *)(v9 + 200) = v18;
  *v18 = v19;
  *((_QWORD *)a1 + 12) = v19;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    v20 = (__int64 *)(v9 + 48);
    *(_QWORD *)(v9 + 48) = *((_QWORD *)a3 + 23);
    v21 = *((_QWORD *)a3 + 60);
    *(_QWORD *)(v9 + 32) = v21;
    *(_QWORD *)(v21 + 8) = v9;
    goto LABEL_25;
  }
  v22 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  *(_QWORD *)(v9 + 32) = v22;
  if ( !v22 )
  {
    WdLogSingleEntry0(3LL);
LABEL_17:
    VidSchTerminateHwContext((PVOID)v9);
    return 0LL;
  }
  *(_BYTE *)(v9 + 90) = 1;
  *(_QWORD *)(v22 + 8) = v9;
  memset(v49, 0, 0x48uLL);
  v23 = *(_QWORD *)(v9 + 16);
  v24 = *(_QWORD *)(v3 + 632);
  v25 = *(_DWORD *)(v3 + 704);
  v49[0] = *(_QWORD *)(v9 + 32);
  v26 = *(unsigned __int16 *)(v23 + 4);
  v27 = (unsigned int)v26 < v25;
  v28 = v24 + 8 * v26;
  if ( !v27 )
    v28 = v24;
  LODWORD(v49[1]) = *(unsigned __int16 *)(*(_QWORD *)v28 + 8LL);
  v29 = *(unsigned __int16 *)(v23 + 4);
  if ( (unsigned int)v29 < v25 )
    v24 += 8 * v29;
  v30 = *(_DWORD *)a2;
  v31 = *(_QWORD *)(v3 + 8);
  HIDWORD(v49[1]) = 1 << *(_BYTE *)(*(_QWORD *)v24 + 6LL);
  v32 = *((_QWORD *)a1 + 2);
  LODWORD(v49[2]) = v49[2] & 0xFFFFFFF2 | ((v30 & 4 | (v30 >> 4) & 0x20) >> 2) | (4
                                                                                * (*(_BYTE *)(344LL
                                                                                            * *(unsigned __int16 *)(v14 + 6)
                                                                                            + *(_QWORD *)(*(_QWORD *)(v31 + 16) + 2808LL)
                                                                                            + 48) & 1 | 4));
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD *))DxgCoreInterface[18])(v31, v32, v49) < 0 )
    goto LABEL_17;
  v35 = bTracingEnabled == 0;
  v20 = (__int64 *)(v9 + 48);
  v36 = v49[0];
  *(_QWORD *)(v9 + 48) = v49[0];
  if ( !v35 )
  {
    v37 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 1);
    if ( !v37 )
      v37 = a1;
    if ( (byte_1C00769C1 & 4) == 0 )
      goto LABEL_25;
    v38 = (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 8) + 48LL) >> 4) & 1)) | 1u;
    McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
      v49[6],
      &EventCreateContext,
      v38,
      (__int64)v37,
      v49[1],
      SBYTE4(v49[1]),
      SBYTE4(v49[4]),
      v49[5],
      SBYTE4(v49[5]),
      v49[6],
      SBYTE4(v49[6]),
      v38,
      v9);
    v36 = *v20;
  }
  if ( (byte_1C00769C1 & 4) != 0 )
    McTemplateK0pppp_EtwWriteTransfer(v36, v33, v34, v9, v9, v36, *(_QWORD *)(v9 + 32));
LABEL_25:
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v39 = *(struct _RTL_BALANCED_NODE **)(v9 + 32);
  v40 = *(struct _RTL_BALANCED_NODE **)(v14 + 1736);
  LOBYTE(v41) = 0;
  if ( v40 )
  {
    while ( 1 )
    {
      if ( (int)DxgkrnlContextHandleCompareFunction(v39, v40) < 0 )
      {
        v42 = v40->Children[0];
        if ( !v40->Children[0] )
        {
          LOBYTE(v41) = 0;
          break;
        }
      }
      else
      {
        v42 = v40->Children[1];
        if ( !v42 )
        {
          LOBYTE(v41) = 1;
          break;
        }
      }
      v40 = v42;
    }
  }
  RtlAvlInsertNodeEx(v14 + 1736, v40, v41, v9 + 96);
  v44 = (struct _RTL_BALANCED_NODE *)*v20;
  v45 = *(struct _RTL_BALANCED_NODE **)(v14 + 1744);
  if ( !v45 )
    goto LABEL_36;
  while ( (int)KmdContextHandleCompareFunction(v44, v45) < 0 )
  {
    v46 = v45->Children[0];
    if ( !v45->Children[0] )
      goto LABEL_36;
LABEL_38:
    v45 = v46;
  }
  v46 = v45->Children[1];
  if ( v46 )
    goto LABEL_38;
  v8 = 1;
LABEL_36:
  LOBYTE(v43) = v8;
  RtlAvlInsertNodeEx(v14 + 1744, v45, v43, v9 + 120);
  *(_BYTE *)(v9 + 91) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority(v9);
  return (struct VIDSCH_HW_CONTEXT *)v9;
}
