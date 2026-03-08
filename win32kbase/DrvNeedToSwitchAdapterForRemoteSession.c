/*
 * XREFs of DrvNeedToSwitchAdapterForRemoteSession @ 0x1C019456C
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159D70 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z @ 0x1C018E540 (-DrvIsUsedByRemoteGraphicsDevices@@YAHPEAX@Z.c)
 */

__int64 __fastcall DrvNeedToSwitchAdapterForRemoteSession(void *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && (unsigned int)DrvIsUsedByRemoteGraphicsDevices(a1) )
    return 1LL;
  v7 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  if ( (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 392))(
         0LL,
         &v7,
         0LL,
         0LL,
         0LL) < 0 )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 1344LL);
  if ( v6 )
  {
    while ( (*(_DWORD *)(v6 + 160) & 0x4000000) == 0 || *(_QWORD *)(v6 + 288) == v7 )
    {
      v6 = *(_QWORD *)(v6 + 128);
      if ( !v6 )
        return v2;
    }
    return 1;
  }
  return v2;
}
