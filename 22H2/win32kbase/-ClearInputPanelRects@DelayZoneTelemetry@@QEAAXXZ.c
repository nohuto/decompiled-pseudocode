/*
 * XREFs of ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C00B7794
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B76E0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01FBDF4 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DelayZoneTelemetry::ClearInputPanelRects(DelayZoneTelemetry *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rax
  char *v4; // rdx
  char **v5; // rcx

  v1 = (char *)this + 12288;
  v2 = (char *)*((_QWORD *)this + 1536);
  while ( v2 != v1 )
  {
    v3 = *(char **)v2;
    v4 = v2;
    v2 = v3;
    v5 = (char **)*((_QWORD *)v4 + 1);
    if ( *((char **)v3 + 1) != v4 || *v5 != v4 )
      __fastfail(3u);
    *v5 = v3;
    *((_QWORD *)v3 + 1) = v5;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
}
