/*
 * XREFs of ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C028273C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 * Callees:
 *     <none>
 */

void __fastcall vFixupMetaSpriteList(struct PDEVOBJ *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 i; // rcx
  __int64 v6; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)a1 + 144LL);
  v4 = *v3;
  for ( i = *(_QWORD *)(*v3 + 88); i != *(_QWORD *)(v4 + 1200); i = *(_QWORD *)(i + 24) )
  {
    *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) = 0LL;
    v6 = *(_QWORD *)(i + 8);
    if ( i == *(_QWORD *)(v4 + 88) )
      *(_QWORD *)(v1 + 152) = v6;
    else
      *(_QWORD *)(v2 + 8) = v6;
    v2 = *(_QWORD *)(i + 8);
  }
}
