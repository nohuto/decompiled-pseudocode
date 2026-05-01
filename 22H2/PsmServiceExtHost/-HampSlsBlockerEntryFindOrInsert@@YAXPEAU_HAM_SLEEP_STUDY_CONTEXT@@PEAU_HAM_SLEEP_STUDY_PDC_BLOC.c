/*
 * XREFs of ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800836E4
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180083B88 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008345C (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18008363C (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 */

void __fastcall HampSlsBlockerEntryFindOrInsert(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  char v6; // bl
  unsigned __int64 v7; // rsi
  bool v8; // zf
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (int)HampSlsBlockerEntryFind(a1, *((struct _RM_HAM_ACTIVITY_HOST **)a2 + 3), a3) < 0 )
  {
    v7 = (unsigned __int64)a1 + 16;
    v8 = (*(_BYTE *)(v7 + 8) & 1) == 0;
    v9 = *(_QWORD *)(*((_QWORD *)a2 + 3) - 32LL);
    v10 = *(_QWORD *)v7;
    v13 = v9;
    if ( !v8 )
    {
      if ( v10 )
        v10 ^= v7;
      else
        v10 = 0LL;
    }
    v11 = *(_BYTE *)(v7 + 8) & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)HampSlsBlockerEntryCompare(&v13, (struct _RTL_BALANCED_NODE *)v10) < 0 )
        {
          v12 = *(_QWORD *)v10;
          if ( v11 )
          {
            if ( !v12 )
              break;
            v12 ^= v10;
          }
          if ( !v12 )
            break;
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_12;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_12:
            v6 = 1;
            break;
          }
        }
        v10 = v12;
      }
    }
    LOBYTE(v9) = v6;
    RtlRbInsertNodeEx(v7, v10, v9, a2);
    *a3 = a2;
  }
}
