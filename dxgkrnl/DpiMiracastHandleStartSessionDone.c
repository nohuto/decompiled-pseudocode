/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C039AACC
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C005F33C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C006274C (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1C006281C (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C00668BC (TraceLoggingWriteMiracastSessionStart.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0399F0C (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // r8
  struct _KEVENT *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  const wchar_t **v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // eax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm0
  int v38; // eax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  _OWORD v42[56]; // [rsp+40h] [rbp-C0h] BYREF

  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 176) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 708) = *(_OWORD *)(a2 + 772);
  *(_OWORD *)(P + 724) = *(_OWORD *)(a2 + 788);
  *(_OWORD *)(P + 740) = *(_OWORD *)(a2 + 804);
  *(_OWORD *)(P + 756) = *(_OWORD *)(a2 + 820);
  *((_WORD *)P + 386) = 0;
  *((_DWORD *)P + 194) = *(_DWORD *)(a2 + 840);
  *((_DWORD *)P + 195) = *(_DWORD *)(a2 + 8);
  if ( *(int *)(a2 + 4) < 0 )
  {
    WdLogSingleEntry1(2LL, *(int *)(a2 + 4));
    v16 = (const wchar_t **)(P + 352);
    *((_DWORD *)P + 196) = *(_DWORD *)(a2 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
    {
      McTemplateK0qqqz_EtwWriteTransfer(
        v14,
        &EventMiracastStartMiracastSessionFail,
        v15,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 50),
        *v16);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
        McTemplateK0qqz_EtwWriteTransfer(
          v17,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v18,
          *((_DWORD *)P + 110),
          *((_DWORD *)P + 50),
          *v16);
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v7 = *((_DWORD *)P + 102) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v7 )
    {
      *((_DWORD *)P + 103) = 1;
      *((_DWORD *)P + 102) = 2;
      *((_DWORD *)P + 104) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v5, v6);
      KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
      v9 = (struct _KEVENT *)*((_QWORD *)P + 59);
      if ( v9 )
      {
        KeSetEvent(v9, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 59));
        *((_QWORD *)P + 59) = 0LL;
      }
      v10 = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)P + 162) = (MEMORY[0xFFFFF78000000014] - *((_DWORD *)P + 158)) / 10000;
      v11 = *((_QWORD *)P + 80);
      if ( v11 )
      {
        v12 = *(_DWORD *)(a2 + 32);
        v10 -= v11;
        if ( v10 > 1200000000 )
          v13 = v12 & 0xFFFFFFFB;
        else
          v13 = v12 | 4;
        *(_DWORD *)(a2 + 32) = v13;
      }
      *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 48);
      if ( !P[590] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
          McTemplateK0qqz_EtwWriteTransfer(
            v10,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v8,
            *((_DWORD *)P + 110),
            *((_DWORD *)P + 50),
            *((const wchar_t **)P + 44));
        P[590] = 1;
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart();
  memset(v42, 0, sizeof(v42));
  v19 = *(_DWORD *)(a2 + 32);
  *((_QWORD *)&v42[1] + 1) = 0LL;
  v20 = 5LL;
  v42[3] = *(_OWORD *)(a2 + 40);
  *(_QWORD *)&v42[4] = *(_QWORD *)(a2 + 56);
  *(_QWORD *)&v42[0] = 0x38000000018LL;
  DWORD2(v42[2]) = 0;
  DWORD2(v42[4]) ^= (BYTE8(v42[4]) ^ (unsigned __int8)(8 * v19)) & 0x38;
  v21 = &v42[6];
  LODWORD(v42[5]) = *(_DWORD *)(a2 + 16);
  DWORD1(v42[5]) = *(_DWORD *)(a2 + 4);
  *((_QWORD *)&v42[5] + 1) = *(_QWORD *)(a2 + 8);
  v22 = (_OWORD *)(a2 + 64);
  *(_QWORD *)&v42[2] = 0LL;
  *(_OWORD *)((char *)v42 + 8) = 0LL;
  do
  {
    v23 = v22[1];
    *v21 = *v22;
    v24 = v22[2];
    v21[1] = v23;
    v25 = v22[3];
    v21[2] = v24;
    v26 = v22[4];
    v21[3] = v25;
    v27 = v22[5];
    v21[4] = v26;
    v28 = v22[6];
    v21[5] = v27;
    v29 = v22[7];
    v22 += 8;
    v21[6] = v28;
    v21 += 8;
    *(v21 - 1) = v29;
    --v20;
  }
  while ( v20 );
  v30 = v22[1];
  *v21 = *v22;
  v31 = v22[2];
  v21[1] = v30;
  v32 = v22[3];
  v33 = *((_DWORD *)v22 + 16);
  v21[2] = v31;
  v34 = *(_OWORD *)(a2 + 772);
  v21[3] = v32;
  *((_DWORD *)v21 + 16) = v33;
  v35 = *(_OWORD *)(a2 + 788);
  v36 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)((char *)&v42[50] + 8) = v34;
  DWORD1(v42[50]) = v36;
  v37 = *(_OWORD *)(a2 + 804);
  v38 = *((_DWORD *)P + 197);
  *(_OWORD *)((char *)&v42[51] + 8) = v35;
  HIDWORD(v42[54]) = v38;
  v39 = *(_OWORD *)(a2 + 820);
  WORD4(v42[54]) = 0;
  *(_OWORD *)((char *)&v42[52] + 8) = v37;
  v40 = *((_OWORD *)P + 7);
  *(_OWORD *)((char *)&v42[53] + 8) = v39;
  v42[55] = v40;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v42, 0x200000000LL);
}
