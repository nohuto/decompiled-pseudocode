/*
 * XREFs of ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007DBE4
 * Callers:
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180043AF0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x180080830 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002808 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@PEAK@Z @ 0x180081DEC (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_AC.c)
 *     ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180082034 (-HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampHostAmbientStateChanged(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, unsigned int a3)
{
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v7; // rbx
  struct _HAM_ACTIVITY *j; // rax
  int v9; // r8d
  struct _HAM_ACTIVITY *v10; // rbx
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

LABEL_1:
  HampHostAcquireLockExclusiveEx(a1, 0);
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(i) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( (*((_BYTE *)i + 544) & 1) != 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)i + 3) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseLockExclusiveEx(a1);
      HampActWaitForNoChangeInProgress(v7);
      CemRcObjectDereference(v7);
      goto LABEL_1;
    }
  }
  for ( j = HampHostGetFirstActivity(a1); ; j = HampHostGetNextActivity(v10) )
  {
    v10 = j;
    if ( !j )
      break;
    if ( (unsigned int)HampActShouldBeRevoked(j, a2, a3, &v11) )
      HampActRequestStopEx((__int64)v10, 1u, v9, 0, 6912, v11, 0LL);
  }
  HampHostReleaseLockExclusiveEx(a1);
}
