/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148398
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01186D0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C004AA80 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C007EBF4 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00C4D4C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // eax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v2 = WdLogNewEntry5_WdAssertion(v1, v0);
    WdLogEvent5_WdAssertion(v2);
  }
  GreCleanupRemoteAdapterContext(v1);
  if ( !gRemoteSessionUseWddm )
  {
    for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 35) )
      {
        v12 = 0;
        *((_QWORD *)i + 37) = 0LL;
        v4 = ((__int64 (__fastcall *)(char *, char *, char *, char *, char *))qword_1C0250A18)(
               (char *)i + 280,
               (char *)i + 296,
               (char *)i + 304,
               (char *)i + 288,
               &v12);
        v7 = v4;
        if ( v4 >= 0 )
        {
          v9 = *((_DWORD *)i + 41);
          if ( v12 )
            v10 = v9 | 4;
          else
            v10 = v9 & 0xFFFFFFFB;
          *((_DWORD *)i + 41) = v10;
          DrvUpdateRemoteAdapterInfo(i);
        }
        else
        {
          v8 = WdLogNewEntry5_WdError(v6, v5);
          *(_QWORD *)(v8 + 24) = i;
          *(_QWORD *)(v8 + 32) = v7;
          WdLogEvent5_WdError(v8);
        }
      }
    }
  }
  return 1LL;
}
