/*
 * XREFs of VidSchiInitializeNode @ 0x1C00B7C50
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C002C9B4 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 Pool2; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  unsigned int m; // esi
  unsigned int n; // esi
  __int64 ii; // rax
  ADAPTER_RENDER *v15; // rcx
  int v16; // eax
  _DXGKARG_SETUPPRIORITYBANDS v17; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 224);
  *(_DWORD *)(a1 + 192) = v3;
  Pool2 = ExAllocatePool2(64LL, 112 * v3, 828467542LL);
  v5 = 0;
  *(_QWORD *)(a1 + 184) = Pool2;
  if ( Pool2
    && (v6 = *(unsigned int *)(v1 + 224),
        *(_DWORD *)(a1 + 208) = v6,
        v7 = ExAllocatePool2(64LL, 96 * v6, 828467542LL),
        (*(_QWORD *)(a1 + 200) = v7) != 0LL) )
  {
    InitializeSListHead((PSLIST_HEADER)(a1 + 6272));
    for ( i = 0; i < 0x10; ++i )
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6272), (PSLIST_ENTRY)(112LL * (int)i + a1 + 6288));
    if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
      return 0LL;
    InitializeSListHead((PSLIST_HEADER)(a1 + 2960));
    for ( j = 0;
          j < 0x40;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 2960), (PSLIST_ENTRY)(a1 + 48 * ((int)j++ + 62LL))) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 6048));
    for ( k = 0;
          k < 2;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6048), (PSLIST_ENTRY)(48LL * (int)k++ + a1 + 6064)) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 6160));
    for ( m = 0;
          m < 2;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6160), (PSLIST_ENTRY)(48LL * (int)m++ + a1 + 6176)) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 8080));
    for ( n = 0;
          n < 0x40;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8080), (PSLIST_ENTRY)(48LL * (int)n++ + a1 + 8096)) )
    {
      ;
    }
    memset(&v17, 0, sizeof(v17));
    for ( ii = 0LL; ii < 2; v17.processGracePeriodForBand[ii++] = 20000LL )
      v17.processQuantumForBand[ii] = 50000LL;
    v17.processGracePeriodForBand[3] = 50000LL;
    v17.targetNormalBandPercentage = *(_DWORD *)(v1 + 208);
    v15 = *(ADAPTER_RENDER **)(v1 + 8);
    v17.processQuantumForBand[3] = 20000LL;
    v17.gracePeriodForBand[2] = 10000LL;
    v17.processQuantumForBand[2] = 10000LL;
    v17.processGracePeriodForBand[2] = 30000LL;
    v16 = ADAPTER_RENDER::DdiSetupPriorityBands(
            v15,
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v17);
    if ( v16 < 0 )
    {
      if ( v16 != -1073741822 )
        return (unsigned int)v16;
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
}
