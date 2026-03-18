/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00146EC
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00138CC (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001CF4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005FB8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  char v3; // di
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rax

  v3 = a2;
  if ( *((_DWORD *)a1 + 246) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1, a2, a3);
  if ( *((_QWORD *)a1 + 124) || (v6 = operator new[](1024LL, 0x61616956u, 64LL), (*((_QWORD *)a1 + 124) = v6) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !v3 )
      PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
    *(LARGE_INTEGER *)(*((_QWORD *)a1 + 124) + 8LL * (unsigned int)(*((_DWORD *)a1 + 246))++) = PerformanceCounter;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate GpuWorkRecords for long haul logging",
      458LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
