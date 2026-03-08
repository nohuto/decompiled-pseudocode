/*
 * XREFs of ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1C0087C30
 * Callers:
 *     ?VidMmSuspendResumeDevice@@YAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x1C00013D0 (-VidMmSuspendResumeDevice@@YAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A5350 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::SuspendResume(VIDMM_GLOBAL **this, char a2, char a3)
{
  VIDMM_GLOBAL *v6; // rcx
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( a2 )
  {
    memset(v7, 0, 0x58uLL);
    v6 = *this;
    LODWORD(v7[0]) = 123;
    v7[5] = this;
    LOBYTE(v7[6]) = a2;
    BYTE1(v7[6]) = a3;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
  }
  else
  {
    VIDMM_DEVICE::EnsureSchedulable((VIDMM_DEVICE *)this, 0);
  }
}
