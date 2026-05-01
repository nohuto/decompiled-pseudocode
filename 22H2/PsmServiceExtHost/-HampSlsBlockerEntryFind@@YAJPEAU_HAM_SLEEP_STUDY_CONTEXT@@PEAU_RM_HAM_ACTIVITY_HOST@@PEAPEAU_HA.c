/*
 * XREFs of ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18008363C
 * Callers:
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800836E4 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180083B88 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008345C (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall HampSlsBlockerEntryFind(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned __int64)a1 + 16;
  v4 = 0;
  v11 = *((_QWORD *)a2 - 4);
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v3;
    else
      v6 = 0LL;
  }
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( !v6 )
    return (unsigned int)-1073741275;
  do
  {
    v8 = HampSlsBlockerEntryCompare(&v11, (struct _RTL_BALANCED_NODE *)v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v6;
    }
    if ( v7 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
  while ( v6 );
  if ( v6 )
    *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v6;
  else
    return (unsigned int)-1073741275;
  return v4;
}
