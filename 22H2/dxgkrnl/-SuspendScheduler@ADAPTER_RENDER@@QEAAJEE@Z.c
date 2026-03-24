/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00EAF88
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C013042C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00EB0B0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2, __int64 a3)
{
  char v3; // si
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v3 = a3;
  if ( *((_DWORD *)this + 159) && DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this + 2)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
    v14[3] = 275LL;
    v14[4] = 39LL;
    v14[5] = *((_QWORD *)this + 2);
    v15 = *((unsigned int *)this + 159);
    v14[7] = 0LL;
    v14[6] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  v6 = 0;
  if ( !*((_QWORD *)this + 81) )
    goto LABEL_5;
  LOBYTE(a3) = a2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, (unsigned int)(v3 != 0) + 1, a3);
  v8 = *((_QWORD *)this + 78);
  if ( !v8
    || (LOBYTE(v7) = v3 != 0,
        v9 = *(_QWORD *)(*((_QWORD *)this + 77) + 8LL),
        v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 760),
        LOBYTE(v9) = a2,
        v6 = v10(v8, v9, v7),
        v6 >= 0) )
  {
LABEL_5:
    *((_DWORD *)this + 159) = 0xFFFF;
  }
  return (unsigned int)v6;
}
