/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C0013B3C
 * Callers:
 *     VidSchCreateContext @ 0x1C00AC500 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C00C2444 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C0014154 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C00146D0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DE9C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     VidSchTerminateContext @ 0x1C00A8F80 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C00ACE20 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rcx
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r12
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // eax
  int v26; // r15d
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // r15d
  unsigned int v33; // r10d
  __int64 v34; // rax
  unsigned int v35; // r9d
  __int64 v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // r12
  unsigned int v39; // r14d
  int v40; // esi
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  bool v45; // cf
  __int64 v46; // r9
  __int64 v47; // rdx
  __int128 v48; // xmm1
  __int64 v49; // rax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // r9
  int v53; // r8d
  __int64 v54; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-48h]
  _OWORD v58[5]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 1000LL, 878799190LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 878799190;
      *(_QWORD *)(Pool2 + 56) = a3;
      *(_QWORD *)(Pool2 + 104) = a1;
      CurrentThread = KeGetCurrentThread();
      v10 = *(__int64 **)(v4 + 632);
      v11 = *((_QWORD *)a2 + 2);
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 80) = CurrentThread;
      LODWORD(CurrentThread) = a2[6];
      *(_QWORD *)(v8 + 128) = v11;
      *(_DWORD *)(v8 + 136) = (_DWORD)CurrentThread;
      v12 = (unsigned int)a2[1];
      *(_DWORD *)(v8 + 88) = v12;
      if ( (unsigned int)v12 < *(_DWORD *)(v4 + 704) )
        v10 += v12;
      v13 = *v10;
      v54 = *v10;
      *(_QWORD *)(v8 + 96) = *v10;
      v14 = ((__int64 (*)(void))DxgCoreInterface[6])();
      *(_QWORD *)(v8 + 144) = 1LL;
      *(_BYTE *)(v8 + 909) = BYTE1(*(_DWORD *)(v14 + 424)) & 1;
      *(_OWORD *)(v8 + 320) = 0LL;
      *(_OWORD *)(v8 + 336) = 0LL;
      *(_OWORD *)(v8 + 352) = 0LL;
      *(_QWORD *)(v8 + 368) = 0LL;
      KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
      v15 = (*a2 & 0x100) == 0;
      *(_QWORD *)(v8 + 384) = v8 + 376;
      *(_QWORD *)(v8 + 376) = v8 + 376;
      *(_QWORD *)(v8 + 672) = v8 + 664;
      *(_QWORD *)(v8 + 664) = v8 + 664;
      *(_QWORD *)(v8 + 688) = v8 + 680;
      *(_QWORD *)(v8 + 680) = v8 + 680;
      *(_QWORD *)(v8 + 704) = v8 + 696;
      *(_QWORD *)(v8 + 696) = v8 + 696;
      *(_QWORD *)(v8 + 720) = v8 + 712;
      *(_QWORD *)(v8 + 712) = v8 + 712;
      if ( !v15 )
      {
        *(_QWORD *)(v8 + 744) = v8 + 736;
        *(_QWORD *)(v8 + 736) = v8 + 736;
      }
      v16 = v8 + 760;
      *(_QWORD *)(v8 + 768) = v8 + 760;
      *(_QWORD *)(v8 + 760) = v8 + 760;
      *(_BYTE *)(v8 + 908) = 1;
      VidSchiIncrementContextReference(v8);
      *(_BYTE *)(v8 + 908) = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
      if ( *(_BYTE *)(a1 + 1392) || *(_BYTE *)(a1 + 1393) )
      {
        v17 = v13 + 2616;
        *(_DWORD *)(v8 + 184) |= 0x100u;
      }
      else
      {
        v17 = v13 + 2584;
      }
      v18 = *(_QWORD **)(v17 + 8);
      v19 = (_QWORD *)(v8 + 8);
      if ( *v18 != v17
        || (*v19 = v17,
            *(_QWORD *)(v8 + 16) = v18,
            *v18 = v19,
            *(_QWORD *)(v17 + 8) = v19,
            v20 = *(_QWORD **)(a1 + 80),
            v21 = (_QWORD *)(v8 + 24),
            *v20 != a1 + 72) )
      {
        __fastfail(3u);
      }
      *v21 = a1 + 72;
      *(_QWORD *)(v8 + 32) = v20;
      *v20 = v21;
      *(_QWORD *)(a1 + 80) = v21;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v22 = *(_QWORD *)(v4 + 2632);
      v23 = *(_QWORD *)(v4 + 2680);
      *(_QWORD *)(v8 + 472) = v22;
      *(_QWORD *)(v8 + 440) = v22;
      *(_QWORD *)(v8 + 480) = v23;
      KeInitializeTimer((PKTIMER)(v8 + 512));
      KeInitializeDpc((PRKDPC)(v8 + 576), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, (PVOID)v8);
      v24 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          memset(v58, 0, 0x48uLL);
          v42 = *(unsigned int *)(v8 + 88);
          v43 = *(_QWORD *)(v4 + 632);
          v44 = v43 + 8 * v42;
          v45 = (unsigned int)v42 < *(_DWORD *)(v4 + 704);
          if ( (unsigned int)v42 >= *(_DWORD *)(v4 + 704) )
            v44 = *(_QWORD *)(v4 + 632);
          DWORD2(v58[0]) = *(unsigned __int16 *)(*(_QWORD *)v44 + 8LL);
          if ( v45 )
            v43 += 8 * v42;
          v46 = *(_QWORD *)(v4 + 8);
          HIDWORD(v58[0]) = 1 << *(_BYTE *)(*(_QWORD *)v43 + 6LL);
          v47 = *(_QWORD *)(a1 + 16);
          LODWORD(v58[1]) = v58[1] & 0xFFFFFFE2 | ((v24 & 4 | ((v24 & 0x200 | (v24 >> 1) & 0x400) >> 4)) >> 2) | (4 * (*(_BYTE *)(344LL * *(unsigned __int16 *)(v54 + 6) + *(_QWORD *)(*(_QWORD *)(v46 + 16) + 2808LL) + 48) & 1));
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[18])(v46, v47, v58) < 0 )
          {
LABEL_51:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v15 = bTracingEnabled == 0;
          v48 = v58[1];
          v49 = *(_QWORD *)&v58[0];
          *(_OWORD *)(v8 + 912) = v58[0];
          *(_QWORD *)(v8 + 64) = v49;
          v50 = v58[2];
          *(_OWORD *)(v8 + 928) = v48;
          v51 = v58[3];
          *(_OWORD *)(v8 + 944) = v50;
          *(_QWORD *)&v50 = *(_QWORD *)&v58[4];
          *(_OWORD *)(v8 + 960) = v51;
          *(_QWORD *)(v8 + 976) = v50;
          if ( !v15 )
          {
            v52 = *(_QWORD *)(a1 + 8);
            if ( !v52 )
              LODWORD(v52) = a1;
            if ( (byte_1C00769C1 & 4) != 0 )
            {
              v53 = (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) >> 4) & 1)) | 1;
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v58[3],
                (unsigned int)&EventCreateContext,
                v53,
                v52,
                SBYTE8(v58[0]),
                SBYTE12(v58[0]),
                SBYTE4(v58[2]),
                SBYTE8(v58[2]),
                SBYTE12(v58[2]),
                v58[3],
                SBYTE4(v58[3]),
                v53,
                v8);
            }
          }
        }
        else if ( bTracingEnabled )
        {
          v30 = *(unsigned int *)(v8 + 88);
          if ( (unsigned int)v30 < *(_DWORD *)(v4 + 80) )
          {
            v31 = *(_QWORD *)(v4 + 632);
            v32 = *a2 & 0x40;
            v33 = *(_DWORD *)(v4 + 704);
            v56 = 0LL;
            v34 = *(_QWORD *)(v8 + 104);
            v57 = 0LL;
            v35 = *(_DWORD *)(v34 + 48);
            v36 = v31 + 8 * v30;
            v37 = v35 >> 4;
            if ( (unsigned int)v30 < v33 )
              v31 += 8 * v30;
            else
              v36 = v31;
            v38 = *(_QWORD *)(a1 + 8);
            if ( !v38 )
              LODWORD(v38) = a1;
            if ( (byte_1C00769C1 & 4) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                DWORD1(v56),
                (unsigned int)&EventCreateContext,
                v56,
                v38,
                *(_WORD *)(*(_QWORD *)v31 + 8LL),
                1 << *(_BYTE *)(*(_QWORD *)v36 + 6LL),
                v56,
                SBYTE4(v56),
                SBYTE8(v56),
                SBYTE12(v56),
                v57,
                (2 * (v37 & 1 | (v32 != 0 ? 2 : 0))) | 1,
                v8);
            v16 = v8 + 760;
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
      {
        v25 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 76) + 111);
        if ( v25 <= 0x460 )
          v25 = 1120;
        v26 = 0;
        v27 = v25;
        do
        {
          v28 = ExAllocatePool2(64LL, v27, 895576406LL);
          if ( !v28 )
          {
            WdLogSingleEntry0(3LL);
            goto LABEL_51;
          }
          VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1736), v16, (_QWORD *)(v28 + 8), (_DWORD *)(v8 + 776));
          VidSchiFreeQueuePacket(v8);
          ++v26;
        }
        while ( v26 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v39 = a2[6];
        if ( v39 )
        {
          v40 = 0;
          while ( 1 )
          {
            v41 = ExAllocatePool2(64LL, v27, 895576406LL);
            if ( !v41 )
              break;
            *(_DWORD *)(v41 + 64) |= 0x40u;
            VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1736), v16, (_QWORD *)(v41 + 8), (_DWORD *)(v8 + 776));
            VidSchiFreeQueuePacket(v8);
            if ( ++v40 >= v39 )
              return v8;
          }
        }
      }
      goto LABEL_51;
    }
  }
  WdLogSingleEntry0(3LL);
  return 0LL;
}
