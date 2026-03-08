/*
 * XREFs of KiEnableXSave @ 0x140A89800
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     KiRestoreXSaveSupport @ 0x140A9C5D4 (KiRestoreXSaveSupport.c)
 *     KiConfigureDynamicProcessor @ 0x140A9C7FC (KiConfigureDynamicProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEnableXSave(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v3; // eax
  unsigned __int64 v4; // rdx

  v1 = __readcr4();
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (v1 & 0x40000) == 0 )
      __writecr4(v1 | 0x40000);
    __asm { xsetbv }
    if ( KeEnabledSupervisorXStateFeatures )
      __writemsr(0xDA0u, KeEnabledSupervisorXStateFeatures);
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      if ( a1 )
        v4 = *a1;
      else
        v4 = MEMORY[0xFFFFF78000000710];
      __writemsr(0x1C4u, v4);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
    {
      v3 = CurrentPrcb->ContextFlagsInit | 0x100040;
      CurrentPrcb->ContextFlagsInit = v3;
      if ( (_BYTE)KiKernelCetEnabled )
        CurrentPrcb->ContextFlagsInit = v3 | 0x100080;
    }
  }
  else if ( (v1 & 0x40000) != 0 )
  {
    __writecr4(v1 & 0xFFFFFFFFFFFBFFFFuLL);
  }
}
