/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAA@XZ @ 0x1C004A76C
 * Callers:
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01E4278 (MonitorGetDisplayIDFromMonitor.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0228380 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::~unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
