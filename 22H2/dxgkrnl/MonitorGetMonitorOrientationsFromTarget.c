/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C01217A4
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01204C0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C012E9F0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromTarget(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 2696);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v7 = *(_QWORD *)(a1 + 2696);
  }
  v8 = *(_QWORD *)(v7 + 96);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( v8 == -168 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
  v10 = v8 + 128;
  for ( i = *(_QWORD *)(v8 + 128); i != v10; i = *(_QWORD *)(v12 + 16) )
  {
    v12 = i - 16;
    if ( !i )
      v12 = 0LL;
    if ( !v12 )
      break;
    if ( *(_DWORD *)(v12 + 44) == (_DWORD)v4 )
    {
      if ( *(_DWORD *)(v12 + 432) != 1 )
        v12 = *(_QWORD *)(v12 + 440);
      if ( v12 )
      {
        if ( v8 == -168 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v10, v9);
          WdLogEvent5_WdAssertion(v17);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(v12 + 296), 1u);
        if ( a3 )
        {
          if ( *(_DWORD *)(v12 + 456) != *(_DWORD *)(v12 + 448) )
            v3 = *(_DWORD *)(v12 + 456);
          *a3 = v3;
        }
        ExReleaseResourceLite((PERESOURCE)(v12 + 296));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      break;
    }
  }
  v18 = WdLogNewEntry5_WdTrace(v10, v9);
  *(_QWORD *)(v18 + 24) = v4;
  *(_QWORD *)(v18 + 32) = v8;
  if ( v8 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
  return 3221226021LL;
}
