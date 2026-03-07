void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *P)
{
  __int64 v2; // rax
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  struct VIDMM_PAGING_QUEUE *v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[13]; // [rsp+50h] [rbp-68h] BYREF

  memset(v8, 0, 0x58uLL);
  v2 = *((_QWORD *)P + 11);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)P + 1);
  LODWORD(v8[0]) = 119;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *((unsigned int *)P + 4);
  v8[1] = v4;
  v6 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v4 + 80) + 176 * v5);
  v8[4] = P;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(v3, v6, (struct _VIDMM_DEFERRED_COMMAND *)v8, 0, 0LL) < 0 )
  {
    WdLogSingleEntry1(1LL, 26297LL);
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(P);
  }
}
