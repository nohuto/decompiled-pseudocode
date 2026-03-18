/*
 * XREFs of VidMmTerminateProcess @ 0x1C0005950
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C009C460 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

void __fastcall VidMmTerminateProcess(VIDMM_PROCESS *P)
{
  if ( P )
  {
    VIDMM_PROCESS::~VIDMM_PROCESS(P);
    ExFreePoolWithTag(P, 0);
  }
}
