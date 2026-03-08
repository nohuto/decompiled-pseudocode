/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C0008230
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0007A60 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C00088B0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008D50 (VidSchiSendToExecutionQueue.c)
 *     VidSchSetNodePowerState @ 0x1C000BB50 (VidSchSetNodePowerState.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C00100E4 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00105F4 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteRewindPacket @ 0x1C00107E8 (VidSchiCompleteRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0010C38 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 *     VidSchiUnwaitContext @ 0x1C00136BC (VidSchiUnwaitContext.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0016500 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C003B4EC (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C0037E04 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // ebp
  int v6; // esi
  __int64 v8; // r13
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rcx
  bool v12; // zf
  unsigned int v13; // ecx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // r8
  signed __int32 v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r9
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 *v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rax
  _QWORD *v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  unsigned int v39; // r12d
  __int64 *i; // r14
  __int64 v41; // rax
  void (__fastcall *v42)(_QWORD); // rax
  void (__fastcall *v43)(_QWORD); // rax
  _QWORD *v44; // rcx
  void (__fastcall *v45)(_QWORD, _QWORD); // rax

  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 24);
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( !v9 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v9) = a1;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (unsigned int)&EventUpdateContextStatus, a3, v9, a2, a3);
  }
  if ( v6 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 8) == 0
      && (*(_DWORD *)(a1 + 184) & 4) == 0
      && (*(_DWORD *)(a1 + 184) & 0x10) == 0
      && (*(_DWORD *)(a1 + 184) & 0x40) == 0
      && (*(_DWORD *)(a1 + 184) & 0x200) == 0
      && (*(_DWORD *)(a1 + 184) & 0x100) == 0
      && (*(_DWORD *)(a1 + 184) & 0x80u) == 0
      && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = (_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v15 + 8) != a1 + 8 )
          goto LABEL_64;
        v17 = *(_QWORD **)(a1 + 16);
        if ( (_QWORD *)*v17 != v16 )
          goto LABEL_64;
        *v17 = v15;
        *(_QWORD *)(v15 + 8) = v17;
        v18 = *(_DWORD *)(a1 + 404);
        v19 = *(_QWORD *)(v4 + 24);
        a2 = 16LL * v18 + v4 + 2056;
        if ( *(_QWORD *)a2 == a2 )
        {
          a2 = *(unsigned __int16 *)(v4 + 4);
          *(_DWORD *)(v4 + 1768) |= 1 << v18;
          if ( !_bittest64(*(const signed __int64 **)(v19 + 496), a2)
            && ((-1 << *(_DWORD *)(a1 + 404)) & *(_DWORD *)(v4 + 1772)) == 0
            && !*(_DWORD *)(v4 + 2900) )
          {
            RtlSetBitEx(v19 + 488, a2);
          }
        }
        if ( !*(_DWORD *)(v4 + 2876) )
        {
          if ( (unsigned __int8)RtlAreBitsClearEx(v8 + 440, 0LL, *(unsigned int *)(v8 + 84))
            && *(_DWORD *)(*(_QWORD *)(v8 + 16) + 160LL) == 1 )
          {
            if ( *(_DWORD *)(v4 + 11272) != -1 )
            {
              v42 = *(void (__fastcall **)(_QWORD))(v8 + 3080);
              if ( v42 )
                v42(*(_QWORD *)(v8 + 3120));
            }
            if ( *(_DWORD *)(v4 + 11272) != -1 )
            {
              v43 = *(void (__fastcall **)(_QWORD))(v8 + 3088);
              if ( v43 )
                v43(*(_QWORD *)(v8 + 3120));
            }
          }
          RtlSetBitEx(v8 + 440, *(unsigned __int16 *)(v4 + 4));
        }
        ++*(_DWORD *)(v4 + 2876);
        *(_DWORD *)(a1 + 184) |= 1u;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
        v21 = 16LL * *(unsigned int *)(a1 + 404);
        v12 = v20 == 1;
        v22 = v4 + 2056;
        if ( v12 )
        {
          v33 = (__int64 *)(v21 + v22);
          v34 = *v33;
          if ( *(__int64 **)(*v33 + 8) != v33 )
            goto LABEL_64;
          *v16 = v34;
          *(_QWORD *)(a1 + 16) = v33;
          *(_QWORD *)(v34 + 8) = v16;
          *v33 = (__int64)v16;
        }
        else
        {
          v23 = v21 + v22;
          v24 = *(_QWORD **)(v23 + 8);
          if ( *v24 != v23 )
            goto LABEL_64;
          *v16 = v23;
          *(_QWORD *)(a1 + 16) = v24;
          *v24 = v16;
          *(_QWORD *)(v23 + 8) = v16;
        }
        if ( *(_DWORD *)(a1 + 408) == 1 )
        {
          a2 = a1 + 416;
          v29 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                          + 216LL);
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
          {
            v30 = *v29;
            if ( *(__int64 **)(*v29 + 8) != v29 )
              goto LABEL_64;
            *(_QWORD *)a2 = v30;
            *(_QWORD *)(a1 + 424) = v29;
            *(_QWORD *)(v30 + 8) = a2;
            *v29 = a2;
          }
          else
          {
            v35 = (__int64 *)v29[1];
            if ( (__int64 *)*v35 != v29 )
              goto LABEL_64;
            *(_QWORD *)a2 = v29;
            *(_QWORD *)(a1 + 424) = v35;
            *v35 = a2;
            v29[1] = a2;
          }
        }
        v5 = 1;
      }
      goto LABEL_45;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1024LL, v8, v4, a1);
    __debugbreak();
LABEL_93:
    v44 = *(_QWORD **)(v4 + 2624);
    if ( *v44 != v4 + 2616 )
      goto LABEL_64;
    *v3 = v4 + 2616;
    v3[1] = v44;
    *v44 = v3;
    *(_QWORD *)(v4 + 2624) = v3;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) )
    {
      KeResetEvent((PRKEVENT)(v8 + 2984));
      *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 1;
    }
    *(_DWORD *)(a1 + 184) |= 0x200u;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
    goto LABEL_45;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v10 + 8) != a1 + 8 )
    goto LABEL_64;
  v11 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)*v11 != v3 )
    goto LABEL_64;
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    v12 = (*(_DWORD *)(v4 + 2876))-- == 1;
    if ( v12 )
      RtlClearBitEx(v8 + 440, *(unsigned __int16 *)(v4 + 4));
    v13 = *(_DWORD *)(a1 + 404);
    if ( *(_QWORD *)(v4 + 16LL * v13 + 2056) == v4 + 16LL * v13 + 2056 )
      *(_DWORD *)(v4 + 1768) &= ~(1 << v13);
    if ( *(_DWORD *)(a1 + 408) == 1 )
    {
      v31 = (_QWORD *)(a1 + 416);
      a2 = *(_QWORD *)(a1 + 416);
      if ( *(_QWORD *)(a2 + 8) != a1 + 416 )
        goto LABEL_64;
      v32 = *(__int64 **)(a1 + 424);
      if ( (_QWORD *)*v32 != v31 )
        goto LABEL_64;
      *v32 = a2;
      *(_QWORD *)(a2 + 8) = v32;
      *(_QWORD *)(a1 + 424) = 0LL;
      *v31 = 0LL;
    }
    *(_DWORD *)(a1 + 184) &= ~1u;
  }
  switch ( v6 )
  {
    case 0:
      v27 = *(_QWORD **)(v4 + 2592);
      if ( *v27 != v4 + 2584 )
        goto LABEL_64;
      *v3 = v4 + 2584;
      *(_QWORD *)(a1 + 16) = v27;
      *v27 = v3;
      *(_QWORD *)(v4 + 2592) = v3;
      *(_DWORD *)(a1 + 184) = 0;
      break;
    case 8:
      *(_DWORD *)(a1 + 184) |= 0x80u;
      v28 = *(_QWORD **)(v4 + 2608);
      if ( *v28 != v4 + 2600 )
        goto LABEL_64;
      *v3 = v4 + 2600;
      *(_QWORD *)(a1 + 16) = v28;
      *v28 = v3;
      *(_QWORD *)(v4 + 2608) = v3;
      break;
    case 9:
      goto LABEL_93;
    case 10:
      v38 = *(_QWORD **)(v4 + 2624);
      if ( *v38 != v4 + 2616 )
        goto LABEL_64;
      *v3 = v4 + 2616;
      *(_QWORD *)(a1 + 16) = v38;
      *v38 = v3;
      *(_QWORD *)(v4 + 2624) = v3;
      if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
        *(_DWORD *)(a1 + 184) &= ~0x200u;
      }
      *(_DWORD *)(a1 + 184) |= 0x100u;
      *(_DWORD *)(a1 + 184) &= ~0x80u;
      v39 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 11272LL);
      if ( v39 != -1 )
      {
        for ( i = *(__int64 **)(a1 + 664); i != (__int64 *)(a1 + 664); i = (__int64 *)*i )
        {
          if ( (i[6] & 0x10) != 0 )
          {
            v45 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3088);
            if ( v45 )
              v45(*(_QWORD *)(v8 + 3120), v39);
            *((_DWORD *)i + 12) &= ~0x10u;
          }
        }
      }
      v41 = *(_QWORD *)(a1 + 104);
      if ( !*(_DWORD *)(v41 + 1396) )
      {
        *(_BYTE *)(v41 + 1392) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 0;
        KeSetEvent((PRKEVENT)(v8 + 2984), 0, 0);
      }
      break;
    case 1:
      v14 = *(_QWORD **)(v4 + 2592);
      if ( *v14 == v4 + 2584 )
      {
        *v3 = v4 + 2584;
        *(_QWORD *)(a1 + 16) = v14;
        *v14 = v3;
        *(_QWORD *)(v4 + 2592) = v3;
        break;
      }
LABEL_64:
      __fastfail(3u);
    default:
      v36 = *(_QWORD **)(v4 + 2576);
      if ( *v36 != v4 + 2568 )
        goto LABEL_64;
      *v3 = v4 + 2568;
      *(_QWORD *)(a1 + 16) = v36;
      *v36 = v3;
      *(_QWORD *)(v4 + 2576) = v3;
      switch ( v6 )
      {
        case 2:
          *(_DWORD *)(a1 + 184) |= 8u;
          break;
        case 3:
          v37 = *(_DWORD *)(a1 + 184) | 0x10;
          goto LABEL_71;
        case 4:
          v37 = *(_DWORD *)(a1 + 184) | 0x20;
LABEL_71:
          *(_DWORD *)(a1 + 184) = v37;
          goto LABEL_45;
        case 7:
          v37 = *(_DWORD *)(a1 + 184) | 0x40;
          goto LABEL_71;
      }
      break;
  }
LABEL_45:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 188) = v6;
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 316) + 12LL)) = a3;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 196) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 200) = *(_DWORD *)(a1 + 780);
  v12 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 316) = ((unsigned __int8)*(_DWORD *)(a1 + 316) + 1) & 7;
  if ( !v12 )
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( !v25 || (LODWORD(a2) = *(_DWORD *)(a1 + 112), (a2 & 0x40) != 0) )
      LODWORD(v25) = a1;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        a2,
        *(_QWORD *)(v4 + 2016),
        v25,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v4 + 2016),
        *(_DWORD *)(a1 + 436),
        3);
  }
  return v5;
}
