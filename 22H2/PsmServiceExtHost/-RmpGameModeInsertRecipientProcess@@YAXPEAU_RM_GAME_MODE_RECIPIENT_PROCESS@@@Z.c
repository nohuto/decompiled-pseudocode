/*
 * XREFs of ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F2F8
 * Callers:
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18006EED4 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     ?RmpGameModeAddRecipientToAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E70C (-RmpGameModeAddRecipientToAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F40C (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeInsertRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax

  v3 = *((_QWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 27);
  v6 = v3 + 8;
  v7 = *(_QWORD *)(v3 + 8);
  if ( (*(_BYTE *)(v3 + 16) & 1) != 0 && v7 )
    v7 ^= v6;
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v5 < *(_DWORD *)(v7 + 100) )
      {
        v8 = *(_QWORD *)v7;
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v7;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_10;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_10:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(v6, v7, a3, (char *)a1 + 8);
  if ( (*((_BYTE *)a1 + 144) & 1) != 0 )
    RmpGameModeAddRecipientToAuxiliaryList(a1);
  if ( RmpGameModeIsProcessPrimary(a1) )
    ++*(_DWORD *)(v3 + 136);
  *((_BYTE *)a1 + 170) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  TpSetWait(*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 5), 0LL);
  *((_BYTE *)a1 + 170) |= 2u;
  RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)v3);
}
