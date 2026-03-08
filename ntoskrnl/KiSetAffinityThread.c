/*
 * XREFs of KiSetAffinityThread @ 0x1402AFA28
 * Callers:
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403A9688 (KeSetAffinityProcess.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140237154 (KiUpdateNodeAffinitizedFlag.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140238A10 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiCheckPrcbAffinityEx @ 0x1402ADF54 (KiCheckPrcbAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeFirstGroupAffinityEx @ 0x1402AEC40 (KeFirstGroupAffinityEx.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14035977C (KiReselectIdealProcessorAfterAffinityChange.c)
 *     EtwTraceThreadAffinity @ 0x14045F1AC (EtwTraceThreadAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405FA980 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 *v10; // r9
  __int64 result; // rax
  char v12; // r13
  __int64 v13; // rsi
  volatile signed __int32 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  bool v17; // zf
  int v18; // r9d
  __int64 v19; // r15
  unsigned __int16 v20; // ax
  char v21; // al
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-60h]
  unsigned int v26; // [rsp+40h] [rbp-40h]
  int v27; // [rsp+44h] [rbp-3Ch] BYREF
  int v28; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-34h]
  unsigned int v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+68h] [rbp-18h] BYREF
  __int16 v34; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+48h]
  int v36; // [rsp+D8h] [rbp+58h]

  v35 = a2;
  v3 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v31 = 0LL;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_DWORD *)(a1 + 196);
  v7 = *(_DWORD *)(a1 + 588);
  v8 = *(_QWORD *)(a1 + 552);
  v30 = v7;
  v29 = v6;
  v26 = v6;
  KiCopyAffinityEx(v8, *(_WORD *)(v8 + 2), a3);
  v36 = *(_DWORD *)(a1 + 196);
  v9 = KiProcessorBlock[v36];
  v32 = v9;
  if ( !KiCheckPrcbAffinityEx(a3, v9) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    KeFirstGroupAffinityEx((__int64)&v33, a3);
    v34 = *(unsigned __int8 *)(v9 + 209);
    v20 = KiReselectIdealProcessorAfterAffinityChange(a1, &v33, v9, &v34);
    v10 = KiProcessorBlock;
    *(_DWORD *)(a1 + 196) = v20;
    v26 = v20;
    v36 = v20;
    v32 = KiProcessorBlock[v20];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v32 + 208);
  }
  result = *(unsigned int *)(a1 + 116);
  if ( (result & 8) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_BYTE *)(a1 + 388);
      v13 = 0LL;
      v14 = 0LL;
      if ( v12 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_16:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v13 = v10[v16];
            KiAcquirePrcbLocksForIsolationUnit(v13, 0, &v31);
            v17 = a1 == *(_QWORD *)(v13 + 8);
            goto LABEL_18;
          }
          break;
        case 3:
          v15 = *(unsigned int *)(a1 + 536);
          if ( (int)v15 >= 0 )
          {
            v13 = v10[v15];
            KiAcquirePrcbLocksForIsolationUnit(v13, 0, &v31);
            if ( a1 == *(_QWORD *)(v13 + 16) )
              goto LABEL_19;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
              __fastfail(0x1Eu);
            goto LABEL_12;
          }
          break;
        case 5:
          v21 = *(_BYTE *)(a1 + 112) & 7;
          if ( v21 == 1 || (unsigned __int8)(v21 - 3) <= 3u )
            goto LABEL_19;
          v12 = 2;
          goto LABEL_16;
        default:
          goto LABEL_19;
      }
    }
    v22 = *(unsigned int *)(a1 + 536);
    if ( (int)v22 >= 0 )
    {
      v13 = v10[v22];
      KiAcquirePrcbLocksForIsolationUnit(v13, 0, &v31);
      if ( *(_BYTE *)(a1 + 388) != 1 )
      {
LABEL_12:
        KiReleasePrcbLocksForIsolationUnit(&v31);
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(a1 + 536) == (_DWORD)v22;
LABEL_18:
      if ( v17 )
        break;
      goto LABEL_12;
    }
    v23 = (unsigned int)v22;
    v28 = 0;
    LODWORD(v23) = v22 & 0x7FFFFFFF;
    v14 = *(volatile signed __int32 **)(v10[v23] + 34888);
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( *(_QWORD *)v14 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v22 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
LABEL_13:
    v10 = KiProcessorBlock;
  }
LABEL_19:
  KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
  if ( !(unsigned int)KiComputeThreadAffinity(a1) )
  {
    v19 = v32;
    *(_DWORD *)(a1 + 588) = v36;
    *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v19 + 208);
    KiUpdateNodeAffinitizedFlag(a1);
    KiUpdateSharedReadyQueueAffinityThread(v19, a1);
  }
  LOBYTE(v18) = v12;
  v7 = *(_DWORD *)(a1 + 588);
  result = KiRescheduleThreadAfterAffinityChange(
             a1,
             *(_QWORD *)(a1 + 576),
             0,
             v18,
             v13,
             (__int64)&v31,
             (__int64)v14,
             v35);
  v6 = v29;
LABEL_22:
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, v30, v7, v25);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, v6, v26, v25);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    v24 = *(unsigned __int16 *)(a1 + 560);
    WORD4(v33) = v24;
    if ( (unsigned __int16)v24 < *a3 )
      v3 = *(_QWORD *)&a3[4 * v24 + 4];
    *(_QWORD *)&v33 = v3;
    return EtwTraceThreadAffinity(a1, &v33);
  }
  return result;
}
