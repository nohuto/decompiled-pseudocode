/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C000E608
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1C000E3C8 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     Bulk_Transfer_Complete @ 0x1C000E8D8 (Bulk_Transfer_Complete.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C00118C4 (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0011C34 (TR_ReleaseDoubleBuffer.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0012EEC (StageQueue_ForwardScanGetNextStage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0047C80 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rdx
  _QWORD **result; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 **v19; // rcx
  int v20; // eax
  __int64 ****v21; // rax
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 ***v24; // rbx
  __int64 ****v25; // rax
  int v26; // eax
  __int64 **v27; // rdx
  struct _MDL *v28; // rcx
  __int64 **v29; // r8
  char v30; // al
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // [rsp+20h] [rbp-60h]
  _QWORD *v34; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v35; // [rsp+58h] [rbp-28h]
  __int64 *v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v37; // [rsp+68h] [rbp-18h]
  __int64 *v38; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v39; // [rsp+78h] [rbp-8h]

  v37 = &v36;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v36 = (__int64 *)&v36;
  v39 = &v38;
  v38 = (__int64 *)&v38;
  v35 = (__int64 ***)&v34;
  v34 = &v34;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 ***)a2 )
      break;
    if ( v5[1] != (__int64 **)a2 )
      goto LABEL_55;
    v6 = *v5;
    if ( (*v5)[1] != (__int64 *)v5 )
      goto LABEL_55;
    *a2 = (__int64 ***)v6;
    v6[1] = (__int64 *)a2;
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    v5[1] = (__int64 **)v5;
    *v5 = (__int64 **)v5;
    for ( i = StageQueue_ForwardScanGetNextStage(v5 + 16); ; i = StageQueue_ForwardScanGetNextStage(v5 + 16) )
    {
      v8 = i;
      if ( !i )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      Bulk_Stage_FreeScatterGatherList(a1, v8);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      v10 = *(_QWORD *)v8;
      if ( *(_BYTE *)(v8 + 44) )
      {
        IoFreeMdl(*(PMDL *)(v8 + 48));
        *(_QWORD *)(v8 + 48) = 0LL;
        *(_BYTE *)(v8 + 44) = 0;
      }
      LOBYTE(v9) = 1;
      TR_ReleaseSegments(a1, v8 + 8, v9);
      TR_ReleaseSegments(a1, v8 + 24, 0LL);
      StageQueue_Release(v10 + 128, v8);
      ++*((_DWORD *)v5 + 29);
      --*(_DWORD *)(a1 + 348);
    }
    if ( *((_DWORD *)v5 + 16) == 3 )
    {
      v11 = v37;
      if ( *v37 != (__int64 *)&v36 )
        goto LABEL_55;
      v5[1] = v37;
      *v5 = &v36;
      *v11 = v5;
      v37 = (__int64 **)v5;
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01023 + 2048))(
              WdfDriverGlobals,
              v5[3]);
      if ( v16 >= 0 )
      {
        v20 = *((_DWORD *)v5 + 17);
        *((_DWORD *)v5 + 16) = 0;
        if ( v20 == 1 || v20 == 28 )
        {
          v22 = v39;
          if ( *v39 != (__int64 *)&v38 )
            goto LABEL_55;
          v5[1] = v39;
          *v5 = &v38;
          *v22 = v5;
          v39 = (__int64 **)v5;
        }
        else
        {
          v21 = (__int64 ****)v35;
          if ( *v35 != &v34 )
            goto LABEL_55;
          v5[1] = (__int64 **)v35;
          *v5 = &v34;
          *v21 = v5;
          v35 = v5;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_QWORD *)(a1 + 48);
          v18 = *(unsigned __int8 *)(v17 + 135);
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_DDDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v17,
            v18,
            14,
            v33,
            v18,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            (char)v5[3],
            v16);
        }
        *((_DWORD *)v5 + 16) = 2;
        v19 = *(__int64 ***)(a1 + 392);
        if ( *v19 != (__int64 *)(a1 + 384) )
LABEL_55:
          __fastfail(3u);
        *v5 = (__int64 **)(a1 + 384);
        v5[1] = v19;
        *v19 = (__int64 *)v5;
        *(_QWORD *)(a1 + 392) = v5;
      }
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v12 = v36;
    if ( v36 == (__int64 *)&v36 )
      break;
    if ( (__int64 **)v36[1] != &v36 )
      goto LABEL_55;
    v13 = (__int64 *)*v36;
    if ( *(__int64 **)(*v36 + 8) != v36 )
      goto LABEL_55;
    v36 = (__int64 *)*v36;
    v13[1] = (__int64)&v36;
    v12[1] = (__int64)v12;
    *v12 = (__int64)v12;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v12 + 17) )
      *((_DWORD *)v12 + 17) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v12, 3221291008LL);
  }
  while ( 1 )
  {
    v14 = v38;
    if ( v38 == (__int64 *)&v38 )
      break;
    if ( (__int64 **)v38[1] != &v38 )
      goto LABEL_55;
    v23 = (__int64 *)*v38;
    if ( *(__int64 **)(*v38 + 8) != v38 )
      goto LABEL_55;
    v38 = (__int64 *)*v38;
    v23[1] = (__int64)&v38;
    v14[1] = (__int64)v14;
    *v14 = (__int64)v14;
    Bulk_Transfer_Complete(a1, v14, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v34;
    if ( v34 == &v34 )
      return result;
    v24 = v35;
    if ( *v35 != &v34 )
      goto LABEL_55;
    v25 = (__int64 ****)v35[1];
    if ( *v25 != v35 )
      goto LABEL_55;
    v35 = (__int64 ***)v35[1];
    *v25 = (__int64 ***)&v34;
    v26 = *((_DWORD *)v24 + 27);
    v24[1] = (__int64 **)v24;
    *v24 = (__int64 **)v24;
    v27 = v24[12];
    *((_DWORD *)v24 + 28) = v26;
    if ( v27 )
    {
      TR_ReleaseDoubleBuffer(a1);
      v24[12] = 0LL;
    }
    v28 = (struct _MDL *)v24[10];
    if ( v28 )
    {
      if ( (v29 = v24[6], *((_WORD *)v29 + 1) != 8)
        && *((_WORD *)v29 + 1) != 9
        && *((_WORD *)v29 + 1) != 10
        && *((_WORD *)v29 + 1) != 50
        && *((_WORD *)v29 + 1) != 55
        && *((_WORD *)v29 + 1) != 56
        && (unsigned int)*((unsigned __int16 *)v29 + 1) - 57 < 2
        || v28 != (struct _MDL *)v29[6] )
      {
        if ( v28 != (struct _MDL *)v24[7][15] )
        {
          IoFreeMdl(v28);
          v24[10] = 0LL;
        }
      }
    }
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01023 + 2264))(
            WdfDriverGlobals,
            v24[3]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = *(_QWORD *)(a1 + 48);
      v32 = *(unsigned __int8 *)(v31 + 135);
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v31,
        v32,
        15,
        v33,
        v32,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        (char)v24[3],
        v30);
    }
  }
}
