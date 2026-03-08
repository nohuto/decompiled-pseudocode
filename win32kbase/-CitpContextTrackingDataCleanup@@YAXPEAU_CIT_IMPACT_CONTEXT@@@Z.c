/*
 * XREFs of ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0D10
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0CD0 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C02734F8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0087C68 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0087CA0 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CitpContextTrackingDataCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 i; // rsi
  char *v3; // rdx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 14); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)a1 + 96 * i;
    if ( *(_BYTE *)(v4 + 34) )
    {
      --*((_DWORD *)a1 + 15);
    }
    else if ( *(_BYTE *)(v4 + 35) )
    {
      --*((_DWORD *)a1 + 16);
    }
    v5 = (_QWORD *)(v4 + 16);
    v6 = *(_QWORD *)(v4 + 16);
    if ( *(_QWORD *)(v6 + 8) != v4 + 16 || (v7 = *(_QWORD **)(v4 + 24), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *v5 = v5;
    CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v4 + 88));
    CitpProgramIdCleanup((void **)(v4 + 40));
  }
  if ( *(_QWORD *)a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)a1);
  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 17) = 0;
  v3 = (char *)*((_QWORD *)a1 + 11);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_DWORD *)a1 + 19) = 0;
}
