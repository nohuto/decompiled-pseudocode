/*
 * XREFs of ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005E6C
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180037FD4 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007E260 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x1800800A0 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002808 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006028 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostIssueStopRequests(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        unsigned int (__fastcall *a8)(__int64, _QWORD),
        __int64 a9,
        __int64 a10)
{
  int v13; // esi
  struct _HAM_ACTIVITY *result; // rax
  __int64 v15; // rdx
  __int64 i; // rbx
  int v17; // eax

  if ( a3 == 5 )
    v13 = *(unsigned __int16 *)(a1 + 648);
  else
    v13 = 6912;
  result = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  for ( i = (__int64)result; result; i = (__int64)result )
  {
    if ( (*(_BYTE *)(i + 544) & 8) == 0 )
    {
      LOBYTE(v15) = a5;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v15) )
      {
        v17 = *(_DWORD *)(i + 112);
        if ( ((v17 & 0x2000) != 0 || (a7 & 2) == 0)
          && ((v17 & 0x400) != 0 || (a7 & 1) == 0)
          && ((a7 & 4) == 0 || (*(_BYTE *)(i + 116) & 0x40) != 0)
          && ((v17 & 0x800) != 0 || (a7 & 8) == 0)
          && (!a8 || a8(i, 0LL)) )
        {
          HampActRequestStopEx(i, a2, a3, a4, v13, a6, a10);
        }
      }
    }
    result = HampHostGetNextActivity((struct _HAM_ACTIVITY *)i);
  }
  return result;
}
