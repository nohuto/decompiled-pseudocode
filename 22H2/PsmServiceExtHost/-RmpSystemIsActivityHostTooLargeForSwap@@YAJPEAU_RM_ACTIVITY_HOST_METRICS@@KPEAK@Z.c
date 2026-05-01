/*
 * XREFs of ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180032B78
 * Callers:
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B08 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18006BC10 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     MemUtilIsWorkingSetTooLargeForSwap @ 0x180032BB8 (MemUtilIsWorkingSetTooLargeForSwap.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemIsActivityHostTooLargeForSwap(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  result = MemUtilIsWorkingSetTooLargeForSwap(*((_QWORD *)a1 + 3), a2, a3);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v10 = 0;
        v8 = &v6;
        v6 = v5;
        v9 = 4;
        tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009EA5E, 0LL, 0LL, 3u, &v7);
      }
    }
    return 3221225473LL;
  }
  return result;
}
