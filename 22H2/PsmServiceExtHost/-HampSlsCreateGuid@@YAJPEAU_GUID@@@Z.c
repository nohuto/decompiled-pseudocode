/*
 * XREFs of ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x180083994
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180083474 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800837C4 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsCreateGuid(struct _GUID *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = UuidCreate(a1);
  if ( v1 && (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v1;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800A23A9, 0LL, 0LL, 3u, &v5);
  }
  return v1;
}
