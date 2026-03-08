/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C017FED0
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C017F7AC (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C017FFE0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2, __int64 a3)
{
  char v3; // si
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  __int64 v12; // rcx
  __int64 v13; // r9

  v3 = a3;
  if ( *((_DWORD *)this + 189) && DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this + 2)) )
    WdLogSingleEntry5(0LL, 275LL, 39LL, v12, v13, 0LL);
  v6 = 0;
  if ( !*((_QWORD *)this + 96) )
    goto LABEL_5;
  LOBYTE(a3) = a2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, (unsigned int)(v3 != 0) + 1, a3);
  v8 = *((_QWORD *)this + 93);
  if ( !v8
    || (LOBYTE(v7) = v3 != 0,
        v9 = *(_QWORD *)(*((_QWORD *)this + 92) + 8LL),
        v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 760),
        LOBYTE(v9) = a2,
        v6 = v10(v8, v9, v7),
        v6 >= 0) )
  {
LABEL_5:
    *((_DWORD *)this + 189) = 0xFFFF;
  }
  return (unsigned int)v6;
}
