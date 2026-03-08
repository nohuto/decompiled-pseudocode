/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0010B0C
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000FCEC (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011A3C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)a1 + 246) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( *((_QWORD *)a1 + 124) || (v5 = operator new[](1024LL, 0x61616956u, 64LL), (*((_QWORD *)a1 + 124) = v5) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !a2 )
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
