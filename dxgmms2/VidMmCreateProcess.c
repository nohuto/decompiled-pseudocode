/*
 * XREFs of VidMmCreateProcess @ 0x1C0001A60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002C7A8 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0093FEC (--0VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0094260 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  VIDMM_PROCESS *Pool2; // rax
  VIDMM_PROCESS *v3; // rax
  VIDMM_PROCESS *v4; // rdi
  VIDMM_PROCESS *v5; // rbx
  unsigned int v6; // edx

  Pool2 = (VIDMM_PROCESS *)ExAllocatePool2(256LL, 304LL, 959474006LL);
  if ( !Pool2 )
    return 0LL;
  v3 = VIDMM_PROCESS::VIDMM_PROCESS(Pool2);
  v4 = v3;
  v5 = v3;
  if ( v3 && (int)VIDMM_PROCESS::Init(v3, a1) < 0 )
  {
    VIDMM_PROCESS::`scalar deleting destructor'(v4, v6);
    return 0LL;
  }
  return v5;
}
