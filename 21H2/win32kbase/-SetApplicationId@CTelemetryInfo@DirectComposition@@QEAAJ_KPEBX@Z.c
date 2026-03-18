/*
 * XREFs of ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00AF298
 * Callers:
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C00AFA10 (NtDCompositionTelemetrySetApplicationId.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::SetApplicationId(
        DirectComposition::CTelemetryInfo ***this,
        size_t a2,
        char *a3)
{
  int v6; // r15d
  __int64 Quota; // rbx
  int v8; // edi
  DirectComposition::CTelemetryInfo **v9; // rcx

  v6 = (a2 + 19) & 0xFFFFFFFC;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)this,
            260LL,
            (unsigned int)(v6 + 20),
            1869890372);
  v8 = 0;
  if ( !Quota )
    v8 = -1073741801;
  if ( v8 >= 0 )
  {
    *(_DWORD *)(Quota + 16) = v6;
    *(_DWORD *)(Quota + 20) = v6;
    *(_DWORD *)(Quota + 24) = 284;
    *(_QWORD *)(Quota + 28) = a2;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(Quota + 36), a3, a2);
    v9 = this[7];
    if ( *v9 != (DirectComposition::CTelemetryInfo *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)Quota = this + 6;
    *(_QWORD *)(Quota + 8) = v9;
    *v9 = (DirectComposition::CTelemetryInfo *)Quota;
    this[7] = (DirectComposition::CTelemetryInfo **)Quota;
    Quota = 0LL;
  }
  if ( Quota )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Quota);
  return (unsigned int)v8;
}
