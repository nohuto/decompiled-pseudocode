/*
 * XREFs of EtwpEnableKernelTrace @ 0x140786150
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoPerfInit @ 0x140556AD8 (IoPerfInit.c)
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1405A53E0 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786730 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcRegisterLogRoutine @ 0x140977034 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x14097950C (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1409DEA4C (WmiSetNetworkNotify.c)
 *     EtwpTimeProfileStart @ 0x1409E3D58 (EtwpTimeProfileStart.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(_DWORD *a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  int updated; // edi
  int v5; // r10d
  int v7; // esi
  _DWORD *v8; // r13
  int v9; // r15d
  int v10; // esi
  void (__fastcall *v11)(__int64, int, unsigned int, unsigned __int16); // r9
  __int64 v12; // r12
  int v13; // r14d
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, int, unsigned int, unsigned __int16, unsigned __int8); // r8
  __int64 v16; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // r8
  unsigned int i; // esi
  _DWORD *v21; // rdx
  char *v22; // rbx
  __int64 v23; // r9
  unsigned int v24; // [rsp+30h] [rbp-49h]
  __int128 v27; // [rsp+50h] [rbp-29h] BYREF
  __int128 v28; // [rsp+60h] [rbp-19h]
  _OWORD v29[2]; // [rsp+70h] [rbp-9h] BYREF

  v24 = a4;
  updated = 0;
  v5 = a3;
  v7 = (int)a1;
  v27 = 0LL;
  v28 = 0LL;
  if ( !EtwpBootPhase )
  {
    v18 = a2;
    v19 = 8LL;
    do
    {
      *v18 &= ~*(_DWORD *)((char *)v18 + (char *)&EtwpBootDeferredGroupMask - (char *)a2);
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  v8 = a2 + 1;
  if ( a2 && (*v8 & 0x80000) != 0 )
  {
    v9 = DWORD1(v27) | 0x80000;
    DWORD1(v27) |= 0x80000u;
  }
  else
  {
    v9 = DWORD1(v27);
    if ( !a2 )
      goto LABEL_9;
  }
  if ( (*v8 & 0x800000) != 0 )
  {
    v9 |= 0x800000u;
    DWORD1(v27) = v9;
  }
  if ( (*v8 & 0x880000) != 0 )
  {
    *(_QWORD *)&v29[0] = 0LL;
    *((_QWORD *)&v29[0] + 1) = -1LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v29);
    a4 = v24;
    v5 = a3;
  }
LABEL_9:
  if ( (unsigned __int8)EtwpBootPhase > 3u )
  {
    updated = EtwpUpdateFileInfoDriverState(v7, (_DWORD)a2, 1, v5, a4);
    if ( updated )
      goto LABEL_55;
  }
  v10 = v27;
  v11 = EtwpTraceFltIo;
  if ( a2 )
  {
    if ( (*a2 & 0x2000000) != 0 )
    {
      v10 = v27 | 0x2000000;
      qword_140C002E8 = (__int64)EtwpTraceFileIo;
      LODWORD(v27) = v27 | 0x2000000;
    }
    if ( (*a2 & 0x4000000) != 0 )
    {
      v10 |= 0x4000000u;
      qword_140C002E0 = (__int64)EtwpTraceFileIo;
      LODWORD(v27) = v10;
    }
    if ( (*a2 & 0x200) != 0 )
    {
      v10 |= 0x200u;
      qword_140C002D8 = (__int64)EtwpTraceFileName;
      LODWORD(v27) = v10;
    }
    if ( (*a2 & 0x100) != 0 )
    {
      v10 |= 0x100u;
      EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
      qword_140C00318 = (__int64)EtwpTraceRedirectedIo;
      LODWORD(v27) = v10;
    }
    if ( (*a2 & 0x400) != 0 )
    {
      v10 |= 0x400u;
      qword_140C64650 = (__int64)EtwpTraceIoInit;
      LODWORD(v27) = v10;
    }
    v12 = (__int64)(a2 + 4);
    if ( (a2[4] & 1) != 0 )
    {
      v13 = v28 | 1;
      qword_140C64658 = (__int64)EtwpTraceOpticalIo;
      LODWORD(v28) = v28 | 1;
      goto LABEL_24;
    }
  }
  else
  {
    v12 = 16LL;
  }
  v13 = v28;
  if ( !a2 )
  {
    v14 = 0x100000LL;
    goto LABEL_33;
  }
LABEL_24:
  if ( (*(_DWORD *)v12 & 2) != 0 )
  {
    v13 |= 2u;
    qword_140C64660 = (__int64)EtwpTraceOpticalIoInit;
    LODWORD(v28) = v13;
  }
  if ( (*a2 & 0x200000) != 0 )
  {
    v10 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    LODWORD(v27) = v10;
  }
  if ( (*(_DWORD *)v12 & 0x400000) != 0 )
  {
    v13 |= 0x400000u;
    qword_140C002F8 = (__int64)EtwpTraceFltIo;
    LODWORD(v28) = v13;
  }
  if ( (*(_DWORD *)v12 & 0x80000) != 0 )
  {
    v13 |= 0x80000u;
    qword_140C00300 = (__int64)EtwpTraceFltIo;
    LODWORD(v28) = v13;
  }
  v14 = 0x100000LL;
  if ( (*(_DWORD *)v12 & 0x100000) != 0 )
  {
    v13 |= 0x100000u;
    qword_140C00308 = (__int64)EtwpTraceFltTimedIo;
    LODWORD(v28) = v13;
    goto LABEL_34;
  }
LABEL_33:
  if ( !a2 )
    goto LABEL_55;
LABEL_34:
  if ( (*(_DWORD *)v12 & 0x200000) != 0 )
  {
    v13 |= 0x200000u;
    qword_140C00310 = (__int64)EtwpTraceFltTimedIo;
    LODWORD(v28) = v13;
  }
  v15 = EtwpTraceWdf;
  if ( (*(_DWORD *)v12 & 0x1000000) != 0 )
  {
    v13 |= 0x1000000u;
    qword_140C0C890 = (__int64)EtwpTraceWdf;
    LODWORD(v28) = v13;
  }
  if ( (*(_DWORD *)v12 & 0x2000000) != 0 )
  {
    v13 |= 0x2000000u;
    qword_140C0C898 = (__int64)EtwpTraceWdf;
    LODWORD(v28) = v13;
  }
  if ( (a2[2] & 0x8000000) != 0 )
  {
    DWORD2(v27) |= 0x8000000u;
    qword_140C0C8A0 = (__int64)EtwpSystemTraceWdf;
  }
  v16 = 0x20000LL;
  if ( (*a2 & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v10 |= 0x20000u;
    LODWORD(v27) = v10;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (*a2 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine(0x20000LL, 0x100000LL, EtwpTraceWdf, EtwpTraceFltIo);
    if ( updated < 0 )
      goto LABEL_76;
    v10 |= 0x100000u;
    LODWORD(v27) = v10;
  }
  if ( (*a2 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify(EtwpTraceNetwork, v14, v15, v11);
    v10 |= 0x10000u;
    LODWORD(v27) = v10;
  }
  if ( (*v8 & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_76;
    v9 |= 0x10u;
    DWORD1(v27) = v9;
  }
  if ( (*a2 & 0x40000) != 0 )
  {
    updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
    if ( updated < 0 )
      goto LABEL_76;
    LODWORD(v27) = v10 | 0x40000;
  }
  if ( (*v8 & 2) == 0 )
  {
LABEL_50:
    if ( (*v8 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140C31BA8 + 616 * i);
      DWORD1(v27) = v9 | 0x400;
    }
    if ( (*(_DWORD *)v12 & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace(v16, v14, v15, v11);
      LODWORD(v28) = v13 | 0x80;
    }
    if ( (*v8 & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
LABEL_55:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_76;
  }
  updated = EtwpTimeProfileStart(v16, v14, v15, v11);
  if ( updated >= 0 )
  {
    v9 |= 2u;
    DWORD1(v27) = v9;
    goto LABEL_50;
  }
LABEL_76:
  v21 = a1;
  v22 = (char *)((char *)a2 - (char *)a1);
  v23 = 8LL;
  memset(v29, 0, sizeof(v29));
  do
  {
    *(_DWORD *)((char *)v21 + (char *)v29 - (char *)a1) = *v21 & ~*(_DWORD *)((char *)v21 + (_QWORD)v22);
    ++v21;
    --v23;
  }
  while ( v23 );
  EtwpDisableKernelTrace(v29, &v27, a3, v24);
  return (unsigned int)updated;
}
