/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009663C
 * Callers:
 *     VidMmInitializePagingProcess @ 0x1C0017760 (VidMmInitializePagingProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     VidSchCreateSchedulingLogs @ 0x1C0096760 (VidSchCreateSchedulingLogs.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00967D0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0096860 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0096934 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     VidSchCreateSystemDevices @ 0x1C0096A64 (VidSchCreateSystemDevices.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0096D08 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int inited; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384), this);
  if ( inited < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v3, v2, v5);
    *(_QWORD *)(v23 + 24) = 21785LL;
LABEL_16:
    WdLogEvent5_WdAssertion(v23);
    goto LABEL_9;
  }
  inited = VidSchCreateSystemDevices(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL));
  if ( inited < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6, v8);
    *(_QWORD *)(v23 + 24) = 21796LL;
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v23 + 24) = 21808LL;
    goto LABEL_16;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
    *(_QWORD *)(v23 + 24) = 21819LL;
    goto LABEL_16;
  }
  v15 = 0;
  if ( *((_DWORD *)this + 1750) )
  {
    while ( 1 )
    {
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, v15, 0);
      if ( inited < 0 )
        break;
      if ( ++v15 >= *((_DWORD *)this + 1750) )
        goto LABEL_8;
    }
    v23 = WdLogNewEntry5_WdAssertion(v17, v16, v18);
    *(_QWORD *)(v23 + 24) = 21831LL;
    goto LABEL_16;
  }
LABEL_8:
  inited = VidSchCreateSchedulingLogs(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL));
  if ( inited < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = 21839LL;
    goto LABEL_16;
  }
LABEL_9:
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
