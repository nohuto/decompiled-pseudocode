/*
 * XREFs of EtwpDisableKernelTrace @ 0x1407864C4
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpEnableKernelTrace @ 0x140786150 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     IoPerfReset @ 0x140556BD4 (IoPerfReset.c)
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1405A53E0 (DbgSetDebugPrintCallback.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786730 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcUnregisterLogRoutine @ 0x140977128 (AlpcUnregisterLogRoutine.c)
 *     ObDisableEtwReferenceTrace @ 0x140979480 (ObDisableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1409DEA4C (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpDisableKernelTrace(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r15d
  int v5; // r12d
  const signed __int32 *v8; // r14
  _DWORD *v9; // rdi
  unsigned int i; // esi

  v4 = (int)a4;
  v5 = a3;
  if ( !a2 )
    goto LABEL_57;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    CmpTraceRoutine = 0LL;
    CmpTraceTxrRoutine = 0LL;
  }
  if ( _bittest((const signed __int32 *)a2, 0x14u) )
    AlpcUnregisterLogRoutine();
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    qword_140C002E8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_57;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    qword_140C002E0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_57;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    qword_140C002D8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_57;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    EtwpDiskIoNotifyRoutines = 0LL;
    qword_140C00318 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_57;
  }
  if ( (*(_DWORD *)a2 & 0x400) == 0 )
  {
    if ( a2 )
      goto LABEL_16;
LABEL_57:
    v8 = (const signed __int32 *)(a2 + 16);
    goto LABEL_17;
  }
  qword_140C64650 = 0LL;
LABEL_16:
  v8 = (const signed __int32 *)(a2 + 16);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    qword_140C64658 = 0LL;
    goto LABEL_18;
  }
LABEL_17:
  if ( !a2 )
    goto LABEL_71;
LABEL_18:
  if ( (*v8 & 2) != 0 )
  {
    qword_140C64660 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( _bittest((const signed __int32 *)a2, 0x15u) )
  {
    EtwpSplitIoNotifyRoutines = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    WmiSetNetworkNotify(0LL, a2, a3, a4);
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    IoPerfReset(1);
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*v8 & 0x400000) != 0 )
  {
    qword_140C002F8 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*v8 & 0x80000) != 0 )
  {
    qword_140C00300 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( _bittest(v8, 0x14u) )
  {
    qword_140C00308 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( _bittest(v8, 0x15u) )
  {
    qword_140C00310 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*v8 & 0x1000000) != 0 )
  {
    qword_140C0C890 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*v8 & 0x2000000) != 0 )
  {
    qword_140C0C898 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x8000000) != 0 )
  {
    qword_140C0C8A0 = 0LL;
  }
  else if ( !a2 )
  {
    goto LABEL_71;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
    if ( a2 )
      goto LABEL_42;
LABEL_71:
    v9 = (_DWORD *)(a2 + 4);
LABEL_43:
    if ( !a2 )
      return EtwpUpdateFileInfoDriverState(a1, a2, 0, v5, v4);
    goto LABEL_44;
  }
  DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 0);
LABEL_42:
  v9 = (_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a2 + 4) & 2) == 0 )
    goto LABEL_43;
  KeStopProfile((ULONG_PTR)&EtwpProfileObject);
LABEL_44:
  if ( (*v9 & 0x400) != 0 )
  {
    for ( i = 0; i < EtwpPmcProfile; ++i )
      KeStopProfile((ULONG_PTR)qword_140C31BA8 + 616 * i);
  }
  else if ( !a2 )
  {
    return EtwpUpdateFileInfoDriverState(a1, a2, 0, v5, v4);
  }
  if ( (*v8 & 0x80u) != 0 )
  {
    ObDisableEtwReferenceTrace();
  }
  else if ( !a2 )
  {
    return EtwpUpdateFileInfoDriverState(a1, a2, 0, v5, v4);
  }
  if ( (*v9 & 0x880000) != 0 && (!a1 || (*(_DWORD *)(a1 + 4) & 0x880000) == 0) )
    KeCancelTimer2((__int64)&EtwpMemInfoTimer, 0LL, a3, a4);
  return EtwpUpdateFileInfoDriverState(a1, a2, 0, v5, v4);
}
