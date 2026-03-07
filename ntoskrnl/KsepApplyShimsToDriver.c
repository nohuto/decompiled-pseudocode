__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  unsigned int v10; // edi
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0;
  if ( !a4 )
  {
LABEL_15:
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 459445;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(8LL, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    KsepLogInfo(8, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    return 0;
  }
  v8 = a3 + 72;
  while ( (*(_DWORD *)(*(_QWORD *)v8 + 28LL) & 4) != 0 )
  {
LABEL_14:
    ++v7;
    v8 += 80LL;
    if ( v7 >= a4 )
      goto LABEL_15;
  }
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 40LL);
  if ( v9 )
  {
    v15 = v9(a2, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), *(unsigned int *)(a1 + 156), *(_DWORD *)(a1 + 120));
    if ( v15 < 0 )
    {
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C40404[2 * v16] = v15;
      KsepHistoryErrors[2 * v16] = 459403;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(8LL, "KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v15);
      KsepLogError(8LL, (__int64)"KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v15);
      return (unsigned int)-1073740948;
    }
  }
  v10 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
  if ( (v10 & 0x80000000) == 0 )
  {
    v11 = *(void **)(*(_QWORD *)v8 + 32LL);
    if ( v11 )
      ObfReferenceObject(v11);
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 459441;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(
        8LL,
        "KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8));
    KsepLogInfo(
      8,
      "KSE: Applied shim [0x%08X] to driver [%ws]\n",
      **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
      *(_QWORD *)(a2 + 8));
    goto LABEL_14;
  }
  v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_140C40404[2 * v17] = v10;
  KsepHistoryErrors[2 * v17] = 459422;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(8LL, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v10);
  KsepLogError(8LL, (__int64)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v10);
  return v10;
}
