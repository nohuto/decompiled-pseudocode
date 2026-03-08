/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x140A196A4
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x140A19654 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406B7DC0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A252A8 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A252DC (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int *v9; // rax
  ULONG_PTR v10; // rdx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  _QWORD *v14; // rcx

  if ( !*(_QWORD *)(a1 + 104) )
    return;
  v5 = *(_DWORD *)(a1 + 68);
  if ( v5 <= 5 )
  {
    if ( v5 != 5 )
    {
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          goto LABEL_24;
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return;
            goto LABEL_9;
          }
LABEL_24:
          *(_QWORD *)(a1 + 104) = 0LL;
          return;
        }
        goto LABEL_20;
      }
LABEL_19:
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 88) = 0;
LABEL_20:
      if ( *(_QWORD *)(a1 + 104) )
      {
        CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v14 = *(_QWORD **)(a1 + 112);
      if ( v14 )
      {
        CmpCleanupDiscardReplaceContext(v14, a3);
        CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
LABEL_13:
        *(_QWORD *)(a1 + 112) = 0LL;
        return;
      }
      return;
    }
LABEL_9:
    CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(_QWORD *)(a1 + 104));
    v9 = *(unsigned int **)(a1 + 112);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( !v9 )
      return;
    v10 = *v9;
    if ( (_DWORD)v10 != -1 )
      CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v10);
    CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
    goto LABEL_13;
  }
  v11 = v5 - 6;
  if ( !v11 )
    goto LABEL_9;
  v12 = v11 - 3;
  if ( !v12 )
  {
    CmpLightWeightCleanupSetSecDescUoW(*(PVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
    return;
  }
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_24;
  if ( v13 == 2 )
    goto LABEL_19;
}
