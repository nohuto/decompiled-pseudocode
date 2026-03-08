/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C0194E80
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159D70 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00A03DC (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D8708 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateRemoteGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  __int64 DxgkWin32kInterface; // rax
  int v10; // eax
  unsigned int v11; // eax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)(v5 + 3016));
  if ( !gRemoteSessionUseWddm )
  {
    for ( i = *(_QWORD *)(v5 + 1344); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 && !*(_QWORD *)(i + 272) )
      {
        v13 = 0;
        *(_QWORD *)(i + 288) = 0LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
        if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, char *))(DxgkWin32kInterface + 392))(
               i + 272,
               i + 288,
               i + 296,
               i + 280,
               &v13) >= 0 )
        {
          v10 = *(_DWORD *)(i + 164);
          if ( v13 )
            v11 = v10 | 4;
          else
            v11 = v10 & 0xFFFFFFFB;
          *(_DWORD *)(i + 164) = v11;
          DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)i);
        }
        else
        {
          WdLogSingleEntry2(2LL, i);
        }
      }
    }
  }
  return 1LL;
}
