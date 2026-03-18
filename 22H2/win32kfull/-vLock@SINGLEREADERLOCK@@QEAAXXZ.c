/*
 * XREFs of ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027FEC4
 * Callers:
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C001AD98 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C001B244 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F4380 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027A3C8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SINGLEREADERLOCK::vLock(SINGLEREADERLOCK *this)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(void **)this;
  if ( v2 )
  {
    KeWaitForSingleObject(v2, UserRequest, 0, 0, 0LL);
    CurrentThread = KeGetCurrentThread();
    ++*((_DWORD *)this + 4);
    *((_QWORD *)this + 1) = CurrentThread;
  }
}
