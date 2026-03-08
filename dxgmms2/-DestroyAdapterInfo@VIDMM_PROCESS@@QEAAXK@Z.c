/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C00AD588
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABBB0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014898 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rbp
  VIDMM_GLOBAL **v4; // rbx
  unsigned int i; // edi
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct _PCW_INSTANCE *v8; // rcx
  VIDMM_GLOBAL *v9; // r8
  VIDMM_GLOBAL ***v10; // rcx
  __int64 v11; // rcx
  __int64 **v12; // rdx

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 41072));
    for ( i = 0; i < *((_DWORD *)*v4 + 1754); ++i )
    {
      v6 = (__int64 *)((char *)v4[6] + 296 * i);
      v7 = *v6;
      if ( *v6 )
      {
        if ( *(__int64 **)(v7 + 8) != v6 )
          goto LABEL_11;
        v12 = (__int64 **)v6[1];
        if ( *v12 != v6 )
          goto LABEL_11;
        *v12 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v12;
        *v6 = 0LL;
        v6[1] = 0LL;
      }
      v8 = (struct _PCW_INSTANCE *)v6[31];
      if ( v8 )
        PcwCloseInstance(v8);
    }
    v9 = v4[3];
    if ( *((VIDMM_GLOBAL ***)v9 + 1) != v4 + 3 || (v10 = (VIDMM_GLOBAL ***)v4[4], *v10 != v4 + 3) )
LABEL_11:
      __fastfail(3u);
    *v10 = (VIDMM_GLOBAL **)v9;
    *((_QWORD *)v9 + 1) = v10;
    *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
    v11 = (__int64)*v4 + 41072;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
  }
}
