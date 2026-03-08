/*
 * XREFs of PnprQuiesceProcessors @ 0x140A9A884
 * Callers:
 *     PnprQuiesce @ 0x140560D88 (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeSuspendClockTimerSafe @ 0x14056D500 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x140A99834 (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  void *v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rsi
  __int64 v3; // r12
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  int *v6; // rdi
  int *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rcx
  int *v33; // rax
  __int64 v34; // rdx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  unsigned int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  int v49; // ebx
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  _OWORD *v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v71[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+80h] [rbp-88h]
  _QWORD v74[34]; // [rsp+88h] [rbp-80h] BYREF

  memset(v74, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v73) = 0;
  DeferredContext_4 = 0;
  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  v2 = 2LL;
  __writecr8(2uLL);
  v3 = (unsigned int)LOBYTE(Dpc.Number) + 1;
  if ( KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)(LOBYTE(Dpc.Number) + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = 4;
    if ( CurrentIrql != 2 )
      v5 = (-1LL << (LOBYTE(Dpc.Number) + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v5;
  }
  KeInitializeDpc((PRKDPC)&Dpc.DpcListEntry, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  v6 = KeActiveProcessors;
  BYTE1(Dpc.DpcListEntry.Next) = 2;
  v7 = KeActiveProcessors;
  v8 = v74;
  v9 = 2LL;
  do
  {
    v10 = *((_OWORD *)v7 + 1);
    *v8 = *(_OWORD *)v7;
    v11 = *((_OWORD *)v7 + 2);
    v8[1] = v10;
    v12 = *((_OWORD *)v7 + 3);
    v8[2] = v11;
    v13 = *((_OWORD *)v7 + 4);
    v8[3] = v12;
    v14 = *((_OWORD *)v7 + 5);
    v8[4] = v13;
    v15 = *((_OWORD *)v7 + 6);
    v8[5] = v14;
    v16 = *((_OWORD *)v7 + 7);
    v7 += 32;
    v8[6] = v15;
    v8 += 8;
    *(v8 - 1) = v16;
    v9 -= v3;
  }
  while ( v9 );
  *(_QWORD *)v8 = *(_QWORD *)v7;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v74, *(_DWORD *)(PnprContext + 180));
  v71[1] = (unsigned __int16 *)v74[1];
  v71[0] = (unsigned __int16 *)v74;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v71) )
  {
    if ( !v73 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_140C01AE8[0]() < 0 )
  {
    v17 = PnprContext;
    v18 = *(_DWORD *)(PnprContext + 33272);
    if ( !v18 )
      v18 = 2455;
    *(_DWORD *)(PnprContext + 33272) = v18;
    v19 = *(_DWORD *)(v17 + 33276);
    if ( !v19 )
      v19 = v3;
    *(_DWORD *)(v17 + 33276) = v19;
    v20 = v74;
    do
    {
      v21 = v20[1];
      *(_OWORD *)v6 = *v20;
      v22 = v20[2];
      *((_OWORD *)v6 + 1) = v21;
      v23 = v20[3];
      *((_OWORD *)v6 + 2) = v22;
      v24 = v20[4];
      *((_OWORD *)v6 + 3) = v23;
      v25 = v20[5];
      *((_OWORD *)v6 + 4) = v24;
      v26 = v20[6];
      *((_OWORD *)v6 + 5) = v25;
      v27 = v20[7];
      v20 += 8;
      *((_OWORD *)v6 + 6) = v26;
      v6 += 32;
      *((_OWORD *)v6 - 1) = v27;
      v2 -= v3;
    }
    while ( v2 );
LABEL_25:
    result = *(_QWORD *)v20;
    *(_QWORD *)v6 = result;
    return result;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))off_140C01A98[0])(0LL, *(_QWORD *)(PnprContext + 33160));
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v31 = PnprContext;
  *(_QWORD *)(PnprContext + 33280) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v31 + 184), v3);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), v3);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v30) = v3;
    (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 33264))(*(_QWORD *)(PnprContext + 33168), v30);
    *(_DWORD *)(PnprContext + 33288) = PnprGetMillisecondCounter(0);
  }
  v32 = v74;
  v33 = KeActiveProcessors;
  v34 = 2LL;
  do
  {
    v35 = *((_OWORD *)v33 + 1);
    *v32 = *(_OWORD *)v33;
    v36 = *((_OWORD *)v33 + 2);
    v32[1] = v35;
    v37 = *((_OWORD *)v33 + 3);
    v32[2] = v36;
    v38 = *((_OWORD *)v33 + 4);
    v32[3] = v37;
    v39 = *((_OWORD *)v33 + 5);
    v32[4] = v38;
    v40 = *((_OWORD *)v33 + 6);
    v32[5] = v39;
    v41 = *((_OWORD *)v33 + 7);
    v33 += 32;
    v32[6] = v40;
    v32 += 8;
    *(v32 - 1) = v41;
    v34 -= v3;
  }
  while ( v34 );
  v42 = 0;
  *(_QWORD *)v32 = *(_QWORD *)v33;
  v43 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v43 + 8) )
  {
    do
    {
      v44 = v42;
      v42 += v3;
      *(_QWORD *)&KeActiveProcessors[2 * v44 + 2] &= ~*(_QWORD *)(*(_QWORD *)v43 + 8 * v44);
    }
    while ( v42 < *(_DWORD *)(v43 + 8) );
  }
  v45 = PnprContext;
  v46 = *(_QWORD *)(PnprContext + 16);
  *(_DWORD *)(PnprContext + 204) = 0;
  *(_DWORD *)(v45 + 200) = v3;
  if ( *(_DWORD *)(v46 + 16) )
  {
    v47 = PnprGetMillisecondCounter(0);
    v48 = PnprContext;
    *(_DWORD *)(PnprContext + 33292) = v47;
    v49 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01A98[0])((unsigned int)v3, *(_QWORD *)(v48 + 33160));
    v50 = PnprGetMillisecondCounter(0);
    v51 = PnprContext;
    *(_DWORD *)(PnprContext + 33296) = v50;
    if ( v49 < 0 )
    {
      v52 = *(_DWORD *)(v51 + 33272);
      if ( !v52 )
        v52 = 2540;
      *(_DWORD *)(v51 + 33272) = v52;
      v53 = *(_DWORD *)(v51 + 33276);
      if ( !v53 )
        v53 = v3;
      *(_DWORD *)(v51 + 33276) = v53;
      v20 = v74;
      do
      {
        v54 = v20[1];
        *(_OWORD *)v6 = *v20;
        v55 = v20[2];
        *((_OWORD *)v6 + 1) = v54;
        v56 = v20[3];
        *((_OWORD *)v6 + 2) = v55;
        v57 = v20[4];
        *((_OWORD *)v6 + 3) = v56;
        v58 = v20[5];
        *((_OWORD *)v6 + 4) = v57;
        v59 = v20[6];
        *((_OWORD *)v6 + 5) = v58;
        v60 = v20[7];
        v20 += 8;
        *((_OWORD *)v6 + 6) = v59;
        v6 += 32;
        *((_OWORD *)v6 - 1) = v60;
        v2 -= v3;
      }
      while ( v2 );
      goto LABEL_25;
    }
  }
  v61 = v74;
  do
  {
    v62 = v61[1];
    *(_OWORD *)v6 = *v61;
    v63 = v61[2];
    *((_OWORD *)v6 + 1) = v62;
    v64 = v61[3];
    *((_OWORD *)v6 + 2) = v63;
    v65 = v61[4];
    *((_OWORD *)v6 + 3) = v64;
    v66 = v61[5];
    *((_OWORD *)v6 + 4) = v65;
    v67 = v61[6];
    *((_OWORD *)v6 + 5) = v66;
    v68 = v61[7];
    v61 += 8;
    *((_OWORD *)v6 + 6) = v67;
    v6 += 32;
    *((_OWORD *)v6 - 1) = v68;
    v2 -= v3;
  }
  while ( v2 );
  *(_QWORD *)v6 = *(_QWORD *)v61;
  while ( 1 )
  {
    result = PnprContext;
    if ( *(_DWORD *)(PnprContext + 204) >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
