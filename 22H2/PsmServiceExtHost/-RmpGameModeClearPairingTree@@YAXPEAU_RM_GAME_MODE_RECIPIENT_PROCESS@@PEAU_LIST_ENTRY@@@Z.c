/*
 * XREFs of ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006EB30
 * Callers:
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006F6A0 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006FF20 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180070B90 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006EA78 (-RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F428 (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeClearPairingTree(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, struct _LIST_ENTRY *a2)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  unsigned __int8 IsProcessValidPairingTarget; // r12
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // rax

  if ( a2 )
  {
    a2->Blink = a2;
    a2->Flink = a2;
  }
  v3 = (unsigned __int64)a1 + 72;
  v4 = *((_QWORD *)a1 + 9);
  if ( (*((_BYTE *)a1 + 80) & 1) != 0 )
  {
    if ( !v4 )
      return;
    v4 ^= v3;
  }
  if ( v4 )
  {
    IsProcessValidPairingTarget = RmpGameModeIsProcessValidPairingTarget(a1);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 8);
      v8 = *(_QWORD *)v3;
      if ( (v7 & 1) != 0 )
      {
        if ( !v8 )
          return;
        v8 ^= v3;
      }
      if ( !v8 )
        break;
      if ( (*(_QWORD *)(v3 + 8) & 1LL) != 0 )
      {
        if ( v7 == 1 )
          v9 = 0LL;
        else
          v9 = v7 ^ (v3 | 1);
      }
      else
      {
        v9 = *(_QWORD *)(v3 + 8);
      }
      if ( IsProcessValidPairingTarget )
      {
        v6 = *(_QWORD *)(v9 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v6) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v9 -= 24LL;
      }
      if ( *(_QWORD *)(v9 + 16) != -1LL )
      {
        v10 = *(_QWORD *)(v9 + 56);
        RtlRbRemoveNode(*(_QWORD *)(v9 + 48) + 72LL, v9);
        *(_QWORD *)(v9 + 16) = -1LL;
        RtlRbRemoveNode(v10 + 72, v9 + 24);
        *(_QWORD *)(v9 + 40) = -1LL;
      }
      RmpGameModeDereferenceRecipientProcess(*(PVOID *)(v9 + 48));
      RmpGameModeDereferenceRecipientProcess(*(PVOID *)(v9 + 56));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v9);
      if ( IsProcessValidPairingTarget )
      {
        if ( RmpGameModeCheckRemovePairedAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v6) )
        {
          Blink = a2->Blink;
          v12 = (struct _LIST_ENTRY *)(v6 + 56);
          if ( Blink->Flink != a2 )
            __fastfail(3u);
          v12->Flink = a2;
          *(_QWORD *)(v6 + 64) = Blink;
          Blink->Flink = v12;
          a2->Blink = v12;
        }
        else
        {
          RmpGameModeDereferenceRecipientProcess((PVOID)v6);
        }
      }
    }
  }
}
