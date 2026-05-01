/*
 * XREFs of ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800325A4
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180032290 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F40C (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006F5D4 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006F628 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006FFE4 (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModePromoteNewRecipients(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2,
        struct _LIST_ENTRY *a3,
        bool *a4)
{
  struct _RM_GAME_MODE_CONTEXT *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  char *v12; // rdi
  __int64 v13; // r8
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY **v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  bool v18; // zf
  char v19; // dl
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r11
  char *i; // r10
  __int64 v24; // r10

  *a4 = *((_DWORD *)a1 + 34) != 0;
  v7 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  if ( v7 != (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
  {
    v12 = (char *)v7 - 88;
    goto LABEL_26;
  }
  v8 = (unsigned __int64)a1 + 8;
  v9 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
    v9 ^= v8;
  v10 = *(_BYTE *)(v8 + 8) & 1;
  while ( 1 )
  {
    if ( !v9 )
      return;
    if ( a2 < *(_DWORD *)(v9 + 100) )
    {
      v11 = *(_QWORD *)v9;
      goto LABEL_10;
    }
    if ( a2 <= *(_DWORD *)(v9 + 100) )
      break;
    v11 = *(_QWORD *)(v9 + 8);
LABEL_10:
    if ( v10 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  v12 = (char *)(v9 - 8);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 - 8)) <= 1 )
    __fastfail(0xEu);
  if ( v9 != 8 )
  {
    if ( (v12[170] & 5) == 1 && RmpGameModeIsProcessPrimary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v12) )
    {
      *((_DWORD *)v12 + 26) = 0;
      v14 = (struct _LIST_ENTRY *)(v12 + 88);
      v12[171] |= 1u;
      v15 = *(struct _LIST_ENTRY ***)(v13 + 8);
      if ( *v15 != a3 )
        __fastfail(3u);
      v14->Flink = a3;
      *((_QWORD *)v12 + 12) = v15;
      *v15 = v14;
      *(_QWORD *)(v13 + 8) = v14;
LABEL_26:
      v16 = *((_QWORD *)v12 + 9);
      if ( v16 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v16, a3) < 0 )
              goto LABEL_47;
            v17 = *(_QWORD *)v16;
            if ( *(_QWORD *)v16 )
            {
              v18 = (v12[80] & 1) == 0;
              goto LABEL_32;
            }
            v17 = *(_QWORD *)(v16 + 8);
            v19 = v12[80] & 1;
            if ( v17 )
            {
              v18 = v19 == 0;
LABEL_32:
              if ( v18 )
                v16 = v17;
              else
                v16 ^= v17;
              continue;
            }
            break;
          }
          v20 = v16;
LABEL_36:
          v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v19 )
          {
            if ( !v20 )
              goto LABEL_47;
            v20 ^= v16;
          }
          if ( !v20 )
            goto LABEL_47;
          v21 = *(_QWORD *)(v20 + 8);
          if ( v19 )
          {
            if ( v21 )
            {
              v21 ^= v20;
              goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            if ( v21 && v21 != v16 )
            {
              v16 = v21;
              continue;
            }
          }
          break;
        }
        v16 = v20;
        goto LABEL_36;
      }
LABEL_47:
      v22 = (char *)a1 + 24;
      for ( i = (char *)*((_QWORD *)a1 + 3); i != v22; i = *(char **)v24 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56))
          && (*(_BYTE *)(v24 + 114) & 8) == 0 )
        {
          RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v24 - 56), a3);
        }
      }
    }
    else
    {
      RmpGameModeDereferenceRecipientProcess(v12);
    }
  }
}
