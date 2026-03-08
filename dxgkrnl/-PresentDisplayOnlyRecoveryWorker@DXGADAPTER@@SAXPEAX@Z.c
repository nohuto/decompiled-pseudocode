/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02B4150
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EC0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkInvalidateDeviceState @ 0x1C005E3A0 (DxgkInvalidateDeviceState.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C017FCE4 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0309FA0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  void *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-28h]
  char v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v8 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v7);
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v3, v1, 1);
  }
  while ( *(_QWORD *)(v1 + 168) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 0) )
  {
    *(_DWORD *)(v1 + 4676) = 1;
    *(_DWORD *)(v1 + 4680) = DXGGLOBAL::GetFirstProfilerInterface();
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v6) = *(_QWORD *)(v1 + 168) != 0LL;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v3, v1, v6);
  }
  if ( *(_QWORD *)(v1 + 168) )
  {
    v4 = *(void **)(v1 + 216);
    if ( v4 )
      ObfReferenceObject(*(PVOID *)(v1 + 216));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v5, v1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    if ( v4 )
    {
      if ( (*(_DWORD *)(v1 + 436) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v4);
      ObfDereferenceObject(v4);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v8 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v7);
}
