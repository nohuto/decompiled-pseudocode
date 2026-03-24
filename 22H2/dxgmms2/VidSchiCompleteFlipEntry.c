/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C00041E0
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003ED0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C00101F0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002BDA0 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiCancelIndependentFlips @ 0x1C002F118 (VidSchiCancelIndependentFlips.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F540 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00314AC (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CDA8 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002F0C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiSignalFlipEvents @ 0x1C0004ED0 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00051D0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000AD40 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000CA08 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C0010EEC (VidSchiUnwaitContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0015168 (VidSchiPropagatePresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002CDC8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x1C002E8C4 (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0031EC8 (VidSchiTryEnterIndependentFlip.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  __int64 v8; // r13
  __int64 v9; // r15
  _BYTE *v10; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned int v14; // r9d
  unsigned int v15; // esi
  unsigned int v16; // r12d
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // r13
  unsigned int v20; // ecx
  int v21; // ebp
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  unsigned int v29; // r12d
  __int64 v30; // rbp
  __int64 v31; // rdi
  struct _SLIST_ENTRY *v32; // rcx
  unsigned int i; // edi
  __int64 v34; // rbp
  struct _SLIST_ENTRY *v35; // rcx
  struct _SLIST_ENTRY *v36; // rcx
  int v37; // edx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v38; // r8
  bool v39; // di
  __int64 v40; // rcx
  __int64 v41; // rcx
  bool v42; // zf
  int v43; // eax
  char v44; // cl
  __int64 v45; // rdx
  int v46; // r9d
  __int64 v47; // r8
  unsigned int v48; // edi
  __int64 v49; // rcx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v50; // r9
  unsigned int v51; // edi
  _DWORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // eax
  char v56; // cl
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // rdx
  void (__fastcall *v60)(_QWORD, __int64, __int64, __int64); // rax
  int v61; // eax
  char v62; // cl
  char v63; // bl
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // r14
  _QWORD *v67; // rbx
  int j; // ebp
  _QWORD *v69; // rcx
  int v70; // edx
  __int64 v71; // r14
  int v72; // edi
  _QWORD **v73; // rbx
  _QWORD *v74; // rax
  _QWORD *v75; // rcx
  _QWORD **v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  unsigned int v82; // [rsp+60h] [rbp-C8h]
  int v83; // [rsp+64h] [rbp-C4h]
  __int64 v84; // [rsp+68h] [rbp-C0h]
  __int64 v85; // [rsp+70h] [rbp-B8h]
  char v86; // [rsp+90h] [rbp-98h]
  __int64 v87; // [rsp+98h] [rbp-90h]
  _QWORD *v88; // [rsp+A0h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v90; // [rsp+C0h] [rbp-68h] BYREF
  BOOL v92; // [rsp+138h] [rbp+10h]

  v8 = a3;
  v9 = a4;
  v10 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 796) )
    return 0LL;
  v84 = v8;
  v12 = *(_QWORD *)(a2 + 3104 + 8 * v8);
  v85 = v12;
  v13 = v8;
  v88 = (_QWORD *)(a2 + 3104 + 8 * v8);
  if ( !a4 )
    return 0LL;
  v14 = a5;
  v15 = 0;
  v16 = 0;
  v82 = 0;
  v83 = 0;
  while ( 1 )
  {
    v17 = 4673;
    v18 = 1344LL * v14;
    v19 = 0LL;
    v87 = v18 + v9 + 88;
    v20 = *(_DWORD *)(v18 + v9 + 1140);
    if ( v20 > 0xC || !_bittest(&v17, v20) )
      v19 = *(_QWORD *)(v18 + v9 + 1128);
    v21 = a7;
    v22 = 1;
    v92 = 1;
    if ( a7 )
    {
      if ( a7 == 9 || a7 == 6 )
      {
        if ( v20 > 0xC || (v24 = 4673, v23 = 0, !_bittest(&v24, v20)) )
          v23 = 1;
        if ( a7 == 9 )
        {
          v92 = v20 == 5 || v20 == 15;
        }
        else if ( v20 == 5 || v20 == 15 || v20 == 13 )
        {
          v23 = 0;
        }
        if ( v20 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v18 + v9 + 1165) )
            ++*(_QWORD *)(v19 + 8 * v13 + 376);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 800));
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 2344));
          if ( *(_DWORD *)(v18 + v9 + 1140) == 8 && !*(_BYTE *)(v18 + v9 + 1165) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 4 * v13 + 1444));
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 32) + 4LL))
                            + 8 * v13
                            + 88);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v13 + 6352) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 728));
            v26 = a2;
            if ( *(_BYTE *)(a2 + 2132) )
              v26 = a2 + 4 * v13;
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 732));
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 1572));
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 4 * v13 + 1508));
          }
        }
        goto LABEL_43;
      }
      if ( a7 != 12 )
        goto LABEL_119;
      if ( v20 - 2 <= 1 )
      {
        v23 = (*(_DWORD *)(v18 + v9 + 1224) >> 5) & 1;
        if ( v23 )
        {
          *(_DWORD *)(v9 + 40) = ((_BYTE)v14 + 1) & 0x3F;
LABEL_43:
          if ( v23 )
          {
            v22 = v92;
LABEL_45:
            v27 = a4;
            *(_DWORD *)(v18 + v9 + 1140) = a7;
            v28 = *(_QWORD *)(v18 + v9 + 1264);
            if ( (*(_DWORD *)(v18 + a4 + 1224) & 0x10) != 0 )
            {
              v29 = ((unsigned __int16)*(_DWORD *)v28 | (unsigned __int16)(*(_DWORD *)v28 >> 10)) & 0x3FF;
            }
            else
            {
              v27 = a4;
              v29 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            }
            if ( a7 == 9 && v22 )
            {
              *(_DWORD *)(v12 + 2352) &= ~v29;
              v28 = *(_QWORD *)(v18 + v27 + 1264);
            }
            v30 = *(_QWORD *)(v18 + v27 + 1248);
            if ( v30 )
            {
              v31 = *(_QWORD *)(v28 + 200);
              if ( v31 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 16), &LockHandle);
                _InterlockedIncrement((volatile signed __int32 *)(v31 + 12));
                v32 = *(struct _SLIST_ENTRY **)(v30 + 8);
                if ( v32 )
                  CRefCountedBuffer::RefCountedBufferRelease(v32);
                *(_QWORD *)(v30 + 8) = v31;
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                v27 = a4;
                v28 = *(_QWORD *)(v18 + a4 + 1264);
              }
              *(_QWORD *)(v18 + v27 + 1248) = 0LL;
            }
            for ( i = 0; i < *(_DWORD *)(a2 + 144); ++i )
            {
              v34 = i * ((8 * *(_DWORD *)(v28 + 8) + 199) & 0xFFFFFFF8);
              v35 = *(struct _SLIST_ENTRY **)(v34 + v28 + 200);
              if ( v35 )
              {
                CRefCountedBuffer::RefCountedBufferRelease(v35);
                *(_QWORD *)(v34 + v28 + 200) = 0LL;
              }
            }
            v9 = a4;
            v36 = *(struct _SLIST_ENTRY **)(v18 + a4 + 1256);
            if ( v36 )
            {
              CRefCountedBuffer::RefCountedBufferRelease(v36);
              *(_QWORD *)(v18 + a4 + 1256) = 0LL;
            }
            v21 = a7;
            if ( !a7 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 1720), &v90);
              if ( (*(_DWORD *)(v18 + a4 + 1224) & 0x20) == 0 )
                *(_DWORD *)(*(_QWORD *)(v85 + 16) + 4 * v84 + 508) = *(_DWORD *)(v18 + a4 + 1144);
              *(_QWORD *)(*(_QWORD *)(v85 + 16) + 8 * v84 + 576) = *(_QWORD *)(v18 + a4 + 1216);
              *(_QWORD *)(*(_QWORD *)(v85 + 16) + 8 * v84 + 704) = *(_QWORD *)(v18 + a4 + 1200);
              *(_QWORD *)(*(_QWORD *)(v85 + 16) + 8 * v84 + 832) = *(_QWORD *)(v18 + a4 + 1208);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v90);
            }
            v37 = *(_DWORD *)(v18 + a4 + 1224);
            if ( (v37 & 0x20) != 0 )
            {
              v38 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v18 + a4 + 1240);
              if ( v38 )
              {
                v39 = 1;
                if ( a7 )
                {
                  if ( a7 == 9 )
                  {
                    v39 = v92;
                  }
                  else if ( a7 == 6 )
                  {
                    v40 = 0LL;
                    if ( *(_QWORD *)(v18 + a4 + 1392) )
                      v40 = v18 + a4 + 1392;
                    VidSchiPropagatePresentHistoryToken(
                      (struct _VIDSCH_GLOBAL *)a2,
                      *(PKSPIN_LOCK *)(v18 + a4 + 1232),
                      v38,
                      1,
                      (*(_DWORD *)(v18 + a4 + 1224) & 0x40) != 0,
                      0,
                      0,
                      *(_QWORD *)(v18 + a4 + 1248),
                      *(_QWORD *)(v18 + a4 + 1264),
                      0LL,
                      v40,
                      1);
                    v38 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v18 + a4 + 1240);
                    v37 = *(_DWORD *)(v18 + a4 + 1224);
                  }
                  else
                  {
                    v39 = 0;
                  }
                }
                v41 = 0LL;
                if ( *(_QWORD *)(v18 + a4 + 1392) )
                  v41 = v18 + a4 + 1392;
                VidSchiPropagatePresentHistoryToken(
                  (struct _VIDSCH_GLOBAL *)a2,
                  *(PKSPIN_LOCK *)(v18 + a4 + 1232),
                  v38,
                  v39,
                  (v37 & 0x40) != 0,
                  0,
                  0,
                  *(_QWORD *)(v18 + a4 + 1248),
                  *(_QWORD *)(v18 + a4 + 1264),
                  0LL,
                  v41,
                  0);
              }
            }
            if ( bTracingEnabled && a7 )
            {
              v42 = !_BitScanForward((unsigned int *)&v43, v29);
              v44 = -1;
              if ( !v42 )
                v44 = v43;
              v86 = v44;
              if ( v19 )
              {
                v45 = *(_QWORD *)(v19 + 8);
                v46 = *(_DWORD *)(a2 + 2456);
                if ( !v45 )
                  LODWORD(v45) = v19;
              }
              else
              {
                LOBYTE(v46) = 0;
                LODWORD(v45) = 0;
              }
              v47 = *(_QWORD *)(v18 + a4 + 1264);
              v48 = a3;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v49 = *(_DWORD *)(v47 + 4) * ((8 * *(_DWORD *)(v47 + 8) + 199) & 0xFFFFFFF8);
                McTemplateK0pxqqpqx_EtwWriteTransfer(
                  v49,
                  v45,
                  v47,
                  *(_QWORD *)(a2 + 16),
                  *(_QWORD *)(v49 + v47 + 40),
                  a3,
                  *(_DWORD *)(v18 + a4 + 1144),
                  v45,
                  v46,
                  v86);
              }
            }
            else
            {
              v48 = a3;
            }
            v50 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v18 + a4 + 1264);
            if ( (*(_DWORD *)v50 & 0x3FF) != 0 )
            {
              VidSchiUnreferencePrimaryAllocations(
                (struct HwQueueStagingList *)a1,
                (struct _VIDSCH_GLOBAL *)a2,
                v48,
                v50,
                *(_DWORD *)(v18 + a4 + 1168),
                *(_DWORD *)(v18 + a4 + 1172),
                1,
                a7 != 0);
              if ( v19 )
                VidSchiCheckPendingDeviceCommand(v19);
            }
            v51 = 0;
            if ( *(_DWORD *)(v18 + a4 + 1180) )
            {
              do
              {
                v52 = *(_DWORD **)(v87 + 8LL * v51);
                if ( (*(_DWORD *)(v18 + a4 + 1224) & 0x4000) != 0 )
                {
                  if ( v52 )
                  {
                    VidSchiReleaseSyncObjectReference(v52);
                    *(_QWORD *)(v87 + 8LL * v51) = 0LL;
                  }
                }
                else if ( v52 )
                {
                  --v52[198];
                }
                ++v51;
              }
              while ( v51 < *(_DWORD *)(v18 + a4 + 1180) );
              v21 = a7;
              v9 = a4;
            }
            ++v82;
            _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 1572), 0xFFFFFFFF);
            v53 = a2;
            v13 = v84;
            if ( *(_BYTE *)(a2 + 2132) )
              v53 = a2 + 4 * v84;
            _InterlockedDecrement((volatile signed __int32 *)(v53 + 732));
            _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 728), 0xFFFFFFFF);
            _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 4 * v84 + 1508), 0xFFFFFFFF);
            if ( (*(_DWORD *)(v18 + v9 + 1224) & 0x10) != 0 )
              v54 = ((unsigned __int16)**(_DWORD **)(v18 + v9 + 1264) | (unsigned __int16)(**(_DWORD **)(v18 + v9 + 1264) >> 10)) & 0x3FF;
            else
              v54 = (unsigned int)((1 << *(_DWORD *)(a2 + 144)) - 1);
            v42 = !_BitScanForward((unsigned int *)&v55, v54);
            v56 = -1;
            v57 = (unsigned int)v54;
            if ( !v42 )
              v56 = v55;
            if ( (_DWORD)v54 )
            {
              do
              {
                --*(_DWORD *)(216LL * v56 + *(_QWORD *)(a2 + 8 * v84 + 3104) + 180);
                v58 = 1 << v56;
                v56 = -1;
                v57 = ~v58 & (unsigned int)v57;
                v42 = !_BitScanForward((unsigned int *)&v58, v57);
                if ( !v42 )
                  v56 = v58;
              }
              while ( (_DWORD)v57 );
            }
            v16 = v54 | v83;
            v83 |= v54;
            _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 4 * v84 + 1444), 0xFFFFFFFF);
            --*(_DWORD *)(v19 + 1576);
            v59 = *(unsigned int *)(*(_QWORD *)(a2 + 8 * v84 + 3104) + 33288LL);
            if ( (_DWORD)v59 != -1 )
            {
              v60 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 2976);
              if ( v60 )
              {
                v60(*(_QWORD *)(a2 + 3024), v59, v54, v57);
                v13 = v84;
              }
            }
            v14 = a5;
            v12 = v85;
            *(_DWORD *)(v9 + 52) = a5;
          }
        }
        v10 = a8;
        goto LABEL_119;
      }
      if ( (v20 == 5 || v20 == 15) && (*(_DWORD *)(v18 + v9 + 1224) & 0x20) != 0 && v10 )
        *v10 = 1;
    }
    else if ( v20 - 10 <= 1 )
    {
      goto LABEL_45;
    }
LABEL_119:
    if ( v14 == a6 )
      break;
    v14 = ((_BYTE)v14 + 1) & 0x3F;
    a5 = v14;
  }
  if ( v82 )
  {
    v42 = !_BitScanForward((unsigned int *)&v61, v16);
    v62 = -1;
    if ( !v42 )
      v62 = v61;
    if ( v16 )
    {
      do
      {
        v63 = v62;
        v64 = *(int *)(216LL * (unsigned int)v62 + *v88 + 172);
        if ( (int)v64 > -1 && *(_DWORD *)(152 * v64 + *(_QWORD *)(a2 + 3232) + 112) == 1 )
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)a2, a3, v62);
        v62 = -1;
        v16 &= ~(1 << v63);
        v42 = !_BitScanForward((unsigned int *)&v65, v16);
        if ( !v42 )
          v62 = v65;
      }
      while ( v16 );
      v21 = a7;
    }
  }
  *(_DWORD *)(a2 + 796) -= v82;
  *(_DWORD *)(v85 + 2340) -= v82;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 800), -v82);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 2344), -v82);
  if ( !v21
    && _InterlockedCompareExchange((volatile signed __int32 *)(v85 + 66432), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(a2 + 2368), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL));
    *(_QWORD *)(a2 + 2328) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 2336), CriticalWorkQueue);
  }
  v66 = *(_QWORD *)(v85 + 16);
  if ( v66 )
  {
    v67 = *(_QWORD **)(v66 + 72);
    for ( j = 0; v67 != (_QWORD *)(v66 + 72); j |= v70 )
    {
      v69 = v67 - 3;
      v70 = 0;
      if ( (v67[20] & 0x10) != 0 )
      {
        *((_DWORD *)v69 + 46) &= ~0x10u;
        v70 = (unsigned __int8)VidSchiUnwaitContext(v69, 21375LL);
      }
      v67 = (_QWORD *)*v67;
    }
    v71 = *(_QWORD *)(v66 + 32);
    v72 = 0;
    v73 = (_QWORD **)(v71 + 3416);
    while ( 1 )
    {
      v74 = *v73;
      if ( *v73 == v73 )
        break;
      if ( (_QWORD **)v74[1] != v73 || (v75 = (_QWORD *)*v74, *(_QWORD **)(*v74 + 8LL) != v74) )
LABEL_153:
        __fastfail(3u);
      *v73 = v75;
      v75[1] = v73;
      v74[1] = 0LL;
      *v74 = 0LL;
      v72 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v74 - 5));
    }
    v76 = (_QWORD **)(v71 + 3432);
    while ( 1 )
    {
      v77 = *v76;
      if ( *v76 == v76 )
        break;
      if ( (_QWORD **)v77[1] != v76 )
        goto LABEL_153;
      v78 = (_QWORD *)*v77;
      if ( *(_QWORD **)(*v77 + 8LL) != v77 )
        goto LABEL_153;
      *v76 = v78;
      v78[1] = v76;
      *v77 = 0LL;
      v77[1] = 0LL;
      v79 = v77 + 19;
      if ( !*v79 )
      {
        v80 = *(_QWORD **)(a1 + 8);
        if ( *v80 != a1 )
          goto LABEL_153;
        *v79 = a1;
        v79[1] = v80;
        *v80 = v79;
        *(_QWORD *)(a1 + 8) = v79;
        *(_BYTE *)(a1 + 16) = 0;
      }
    }
    v15 = j | v72;
  }
  VidSchiSignalFlipEvents(v85, v15, 0LL);
  return v82;
}
