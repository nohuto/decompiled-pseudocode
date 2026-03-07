// write access to const memory has been detected, the output may be wrong!
void __fastcall DeferredSetVprCallback(char *a1)
{
  bool v2; // si
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD v10[12]; // [rsp+50h] [rbp-68h] BYREF

  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
    *((VIDMM_GLOBAL **)a1 + 5),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 16LL) + 380LL));
  v2 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 6) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56));
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0qqqxxp_EtwWriteTransfer(
      *((_QWORD *)a1 + 12),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL),
      v3,
      *((_DWORD *)a1 + 14),
      *((_DWORD *)a1 + 15),
      *((_DWORD *)a1 + 16),
      *((_QWORD *)a1 + 11),
      *((_QWORD *)a1 + 12),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 2928LL),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 56)) < 0
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
  {
    memset(v10, 0, 0x58uLL);
    v4 = *((_QWORD *)a1 + 6);
    LODWORD(v10[0]) = 128;
    LODWORD(v10[6]) = 1;
    v10[5] = *(_QWORD *)(v4 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 5), (struct _VIDMM_SYSTEM_COMMAND *)v10, 1);
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( v5[3] )
  {
    v6 = *((_QWORD *)a1 + 5);
    v7 = v6 + 40056;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 40056));
    v8 = v6 + 40040;
    v9 = *(_QWORD **)(v8 + 8);
    if ( *v9 != v8 )
      __fastfail(3u);
    *v5 = v8;
    v5[1] = v9;
    *v9 = v5;
    *(_QWORD *)(v8 + 8) = v5;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
