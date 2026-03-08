/*
 * XREFs of Isoch_PrepareStage @ 0x1C0004AD0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0001D18 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0003050 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0006DF0 (WPP_RECORDER_SF_DDqq.c)
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C0041850 (TR_EnsureInputBufferForTrbs.c)
 *     Isoch_GetPacketLength @ 0x1C00445B8 (Isoch_GetPacketLength.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C00465AC (WPP_RECORDER_SF_DDqDDD.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C0046704 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // r8
  int v6; // r9d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r8d
  struct _MDL *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbp
  unsigned int i; // eax
  struct _MDL **v15; // r13
  unsigned int v16; // r14d
  unsigned int v17; // ebp
  unsigned int v18; // esi
  __int64 v19; // r10
  int v20; // r10d
  __int64 v21; // r14
  int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // esi
  __int64 *v32; // r14
  int v33; // eax
  int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v41; // r8
  __int64 v42; // rsi
  char *v43; // r14
  struct _MDL *Mdl; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // r8
  __int64 v48; // rbp
  unsigned int v49; // r11d
  unsigned int v50; // r13d
  int j; // r10d
  int v52; // eax
  int PacketLength; // eax
  int v54; // r11d
  int v55; // r11d
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r13
  __int64 v60; // rcx
  int v61; // edx
  int v62; // edx
  __int64 v63; // r8
  __int64 v64; // rbp
  int Irp; // [rsp+20h] [rbp-A8h]
  __int64 Length; // [rsp+D0h] [rbp+8h]
  ULONG Lengtha; // [rsp+D0h] [rbp+8h]
  __int64 Lengthb; // [rsp+D0h] [rbp+8h]
  int v69; // [rsp+D8h] [rbp+10h]
  unsigned int v70; // [rsp+E0h] [rbp+18h]
  PMDL *v71; // [rsp+E8h] [rbp+20h]

  v1 = *(__int64 **)(a1 + 368);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 108) + *(_DWORD *)(*v1 + 104);
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_QWORD *)(v3 + 48);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = (unsigned int)(v4 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356) + *(_DWORD *)(v5 + 128);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v8 + 8) + 336LL), 0x3Bu) || (*(_DWORD *)(v8 + 104) & 0x800) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 328);
    if ( (v9 & 0x20) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 364);
      if ( v7 != v10 + 1 && ((v9 & 0x10) != 0 || *(_DWORD *)(a1 + 376)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            v10,
            v6);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v42 = *v1;
        if ( *((_BYTE *)v1 + 56) )
        {
          IoFreeMdl((PMDL)v1[8]);
          v1[8] = 0LL;
          *((_BYTE *)v1 + 56) = 0;
        }
        LOBYTE(v41) = 1;
        TR_ReleaseSegments(a1, v1 + 1, v41);
        TR_ReleaseSegments(a1, v1 + 3, 0LL);
        StageQueue_Release(v42 + 128, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return 2;
      }
    }
  }
  if ( v6 != 10 )
  {
    switch ( v6 )
    {
      case '9':
      case ':':
        v15 = (struct _MDL **)(v1 + 8);
        goto LABEL_66;
      default:
        break;
    }
  }
  v11 = *(struct _MDL **)(v3 + 72);
  v12 = *(_DWORD *)(v3 + 88) + *(_DWORD *)(v3 + 92);
  v13 = *(_QWORD *)(v3 + 56);
  for ( i = v11->ByteCount; v12 >= i; i = v11->ByteCount )
  {
    v11 = v11->Next;
    v12 -= i;
  }
  v15 = (struct _MDL **)(v1 + 8);
  v71 = (PMDL *)(v1 + 8);
  if ( v12 )
  {
    v43 = (char *)v11->StartVa + v11->ByteOffset + v12;
    Lengtha = v11->ByteCount - v12;
    Mdl = IoAllocateMdl(v43, Lengtha, 0, 0, 0LL);
    *v15 = Mdl;
    if ( !Mdl )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
        LOBYTE(v46) = 2;
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
          v46,
          v45,
          45,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          (char)v1);
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v48 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      LOBYTE(v47) = 1;
      TR_ReleaseSegments(a1, v1 + 1, v47);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      StageQueue_Release(v48 + 128, v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, v3, -1, -1073737728, 0, 0);
        v17 = 1;
LABEL_64:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v17;
      }
LABEL_63:
      v17 = 4;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      goto LABEL_64;
    }
    *((_BYTE *)v1 + 56) = 1;
    IoBuildPartialMdl(v11, Mdl, v43, Lengtha);
    (*v15)->Next = v11->Next;
LABEL_66:
    v71 = v15;
  }
  else
  {
    *v15 = v11;
  }
  v16 = *(_DWORD *)(a1 + 4);
  v17 = 1;
  v18 = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 92) - *(_DWORD *)(v3 + 88);
  if ( !*(_BYTE *)(a1 + 280) )
  {
    LOBYTE(Irp) = (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 32LL) & 1) == 0;
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    (*(void (__fastcall **)(__int64, struct _MDL *, _QWORD, _QWORD))(*(_QWORD *)(v19 + 8) + 136LL))(v19, *v15, 0LL, v18);
  }
  if ( v18 > v16 )
  {
    v49 = *(_DWORD *)(a1 + 356);
    v50 = *((_DWORD *)v1 + 10);
    v18 = 0;
    v70 = v49;
    for ( j = v50 / v49; ; ++j )
    {
      v69 = j;
      v52 = 0;
      if ( v49 )
      {
        do
        {
          PacketLength = Isoch_GetPacketLength(v3, v50);
          v55 = PacketLength + v54;
          ++v50;
        }
        while ( v56 != 1 );
        j = v69;
        v52 = v55;
        v49 = v70;
      }
      if ( v18 + v52 > v16 )
        break;
      v18 += v52;
    }
    v15 = v71;
    v20 = v49 * j;
  }
  else
  {
    v20 = *(_DWORD *)(v3 + 96);
  }
  *((_DWORD *)v1 + 11) = v20 - 1;
  *((_DWORD *)v1 + 13) = v18;
  v21 = *(_QWORD *)(a1 + 40);
  Length = *(_QWORD *)(a1 + 56);
  v22 = (((unsigned __int64)*(unsigned int *)(Length + 152) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v21 + 336), 0x2Fu)
    || (v57 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v57 + 20) != 1)
    || !*(_DWORD *)(v57 + 40) )
  {
    v22 = ((unsigned __int64)*(unsigned int *)(Length + 152) + 8190) >> 12;
  }
  v23 = v22 + 1;
  if ( *(_WORD *)(*(_QWORD *)(*v1 + 48) + 2LL) == 10 )
  {
LABEL_16:
    if ( (*v15)->ByteCount < v18 )
      v23 = v22 + 3;
  }
  else
  {
    switch ( *(_WORD *)(*(_QWORD *)(*v1 + 48) + 2LL) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_16;
    }
  }
  v24 = *(_DWORD *)(a1 + 196);
  v25 = v24 - *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = v23;
  v26 = v23 * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1);
  if ( v23 == 3 )
    v27 = v25 % 3;
  else
    v27 = v25 % v23;
  v28 = v25 - v27;
  if ( v26 <= v28 )
  {
    v31 = 0;
  }
  else
  {
    if ( v23 == 3 )
      v29 = v24 % 3;
    else
      v29 = v24 % v23;
    v24 -= v29;
    v30 = v24 - v28 + v26 - 1;
    if ( v24 == 30 )
      v31 = v30 / 0x1E;
    else
      v31 = v30 / v24;
  }
  if ( _bittest64((const signed __int64 *)(v21 + 336), 0x2Fu) )
  {
    v58 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v58 + 20) == 1 )
    {
      if ( *(_DWORD *)(v58 + 40) )
        ++v31;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(Length + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v24,
      v26,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(Length + 144),
      (char)v1,
      v31,
      v23,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 280)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 432) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v59 = *v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl(*v71);
      *v71 = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    TR_ReleaseSegments(a1, v1 + 1, 1LL);
    TR_ReleaseSegments(a1, v1 + 3, 0LL);
    v60 = v59 + 128;
    goto LABEL_86;
  }
  if ( !v31 )
    return 0;
  v32 = v1 + 1;
  v33 = TR_EnsureSegments(a1);
  if ( v33 != 259 )
  {
    if ( v33 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v61 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v61) = 2;
        WPP_RECORDER_SF_DDqqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v61,
          v34,
          49,
          Irp,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          (char)v1,
          v31);
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Lengthb = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl(*v71);
        *v71 = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      TR_ReleaseSegments(a1, v1 + 1, 1LL);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      v60 = Lengthb + 128;
LABEL_86:
      StageQueue_Release(v60, v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, v3, -1, -1073737728, 0, 0);
        goto LABEL_64;
      }
      goto LABEL_63;
    }
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v35 = 0;
    v36 = a1 + 208;
    do
    {
      v37 = *(_QWORD **)v36;
      if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36
        || (v38 = *v37, *(_QWORD **)(*v37 + 8LL) != v37)
        || (*(_QWORD *)v36 = v38, *(_QWORD *)(v38 + 8) = v36, v39 = *v32, *(__int64 **)(*v32 + 8) != v32) )
      {
        __fastfail(3u);
      }
      *v37 = v39;
      ++v35;
      v37[1] = v32;
      *(_QWORD *)(v39 + 8) = v37;
      *v32 = (__int64)v37;
    }
    while ( v35 < v31 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    *(_DWORD *)(a1 + 336) = 0;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v62 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v62) = 4;
    WPP_RECORDER_SF_DDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v62,
      v34,
      48,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v3 + 24),
      (char)v1,
      v31);
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v64 = *v1;
  if ( *((_BYTE *)v1 + 56) )
  {
    IoFreeMdl(*v71);
    *v71 = 0LL;
    *((_BYTE *)v1 + 56) = 0;
  }
  LOBYTE(v63) = 1;
  TR_ReleaseSegments(a1, v1 + 1, v63);
  TR_ReleaseSegments(a1, v1 + 3, 0LL);
  StageQueue_Release(v64 + 128, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
