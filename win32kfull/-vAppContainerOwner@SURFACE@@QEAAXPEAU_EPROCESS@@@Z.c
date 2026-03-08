/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0128EA0
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2)
{
  struct _EPROCESS *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = a2;
  if ( !a2 || (unsigned int)UserIsProcessImmersiveAppContainer(a2) )
  {
    GreAcquireHmgrSemaphore();
    if ( v2 )
    {
      v5 = HmgPentryFromPobj(this);
      *(_BYTE *)(v5 + 15) |= 0x80u;
      goto LABEL_4;
    }
  }
  else
  {
    v2 = 0LL;
    GreAcquireHmgrSemaphore();
  }
  v4 = HmgPentryFromPobj(this);
  *(_BYTE *)(v4 + 15) &= ~0x80u;
LABEL_4:
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore();
}
