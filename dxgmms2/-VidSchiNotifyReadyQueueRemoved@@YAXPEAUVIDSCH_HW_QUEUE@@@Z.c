/*
 * XREFs of ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D1A2
 * Callers:
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C001D4C6 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0046764 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C001C8D0 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiNotifyReadyQueueRemoved(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdi
  void (__fastcall *v4)(_QWORD); // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1712);
  if ( !v2 || (v3 = *(_QWORD *)(v1 + 24), !*(_DWORD *)(v3 + 68)) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, v1, 0LL);
    __debugbreak();
    JUMPOUT(0x1C001D25ALL);
  }
  *(_DWORD *)(v1 + 1712) = v2 - 1;
  if ( !*((_BYTE *)a1 + 144) )
    --*(_DWORD *)(v1 + 1716);
  --*(_DWORD *)(v3 + 68);
  if ( !*(_DWORD *)(v1 + 1712) )
  {
    VidSchiCheckHwSchNodeProgress((struct _VIDSCH_NODE *)v1, 0);
    if ( *(_DWORD *)(v1 + 11272) != -1 )
    {
      v4 = *(void (__fastcall **)(_QWORD))(v3 + 3088);
      if ( v4 )
        v4(*(_QWORD *)(v3 + 3120));
    }
  }
}
