/*
 * XREFs of VidSchTerminateHwContext @ 0x1C0045190
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0042114 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DE9C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C0042604 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchTerminateHwContext(PVOID P)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  bool v4; // zf
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // r9

  v2 = *(_QWORD *)(*((_QWORD *)P + 2) + 24LL);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 2880), 1u);
  _InterlockedCompareExchange((volatile signed __int32 *)P + 61, 1, 0);
  ExReleaseResourceLite((PERESOURCE)(v2 + 2880));
  *(_QWORD *)(*((_QWORD *)P + 4) + 8LL) = 0LL;
  if ( (*((_DWORD *)P + 14) & 1) != 0 )
  {
    if ( *((_QWORD *)P + 6) )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[24])(*(_QWORD *)(v2 + 8));
      v4 = bTracingEnabled == 0;
      *((_QWORD *)P + 6) = 0LL;
      if ( !v4 )
      {
        v6 = *((_QWORD *)P + 1);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( !v7 )
            v7 = *((_QWORD *)P + 1);
        }
        else
        {
          v7 = 0LL;
        }
        if ( (byte_1C00769C1 & 4) != 0 )
        {
          v5 = *(unsigned __int16 *)(*((_QWORD *)P + 2) + 4LL);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v5,
            &EventDestroyContext,
            v3,
            v7,
            v5,
            1 << *((_DWORD *)P + 16),
            0,
            0,
            0,
            0,
            0,
            3,
            P);
        }
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0);
}
