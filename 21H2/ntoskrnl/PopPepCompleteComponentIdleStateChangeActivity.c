/*
 * XREFs of PopPepCompleteComponentIdleStateChangeActivity @ 0x14045E3C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopPepTryPowerDownComponent @ 0x140354B08 (PopPepTryPowerDownComponent.c)
 *     PopPepUpdateIdleState @ 0x140354B48 (PopPepUpdateIdleState.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403B92D0 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14045DDF6 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CE3A0 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepCompleteComponentIdleStateChangeActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx

  if ( !a2 )
    return;
  *(_DWORD *)(*(_QWORD *)(a2 + 64) + 12LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 64) + 16LL) = 0;
  if ( *(_BYTE *)(a2 + 184) && *(_BYTE *)(a1 + 124) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( (v4 & 4) != 0 )
    {
      v5 = *(unsigned int *)(a2 + 176);
LABEL_9:
      PopFxUpdateComponentPerfStateNominalChange(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 8), 0LL, v5);
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a2 + 180) )
    {
      v5 = *(unsigned int *)(a2 + 176);
      if ( !(_DWORD)v5 && (v4 & 2) != 0 )
        goto LABEL_9;
    }
  }
LABEL_10:
  if ( !*(_DWORD *)(a2 + 176) )
    KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
  PopPepUpdateIdleState(a1, (unsigned int *)a2, 0);
  PopPepTryPowerDownComponent(a1, (_DWORD *)a2);
  v6 = *(unsigned int *)(a2 + 176);
  PopPepUpdateIdleStateRefCount(
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24LL * *(unsigned int *)(a2 + 180) + 16),
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 24 * v6 + 16),
    0,
    (volatile signed __int32 *)(a2 + 192));
  PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 8), v6, 1);
}
