/*
 * XREFs of ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C0004A18
 * Callers:
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C018D14C (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B50A0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v3 = *((_QWORD *)a3 + 8);
  if ( !v3 || (v3 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry1(1LL, 1003LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v8, v7, v9, 0, 2, -1, (__int64)L"pVidSchProcess", 235, 0, 0, 0, 0);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64))(*((_QWORD *)this + 1) + 840LL))(a2, v3);
}
