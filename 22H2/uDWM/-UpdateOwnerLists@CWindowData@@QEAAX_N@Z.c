/*
 * XREFs of ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013558
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ED30 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016360 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016538 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B0F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180042108 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowData::UpdateOwnerLists(CWindowData *this, bool a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx

  *((_BYTE *)this + 610) &= ~2u;
  v2 = *((_QWORD *)this + 67);
  *((_BYTE *)this + 610) |= 2 * a2;
  v3 = 0LL;
  if ( *(_DWORD *)(v2 + 456) )
  {
    v6 = v2;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 432) + 8 * v3);
      if ( *(_QWORD *)(v7 + 64) == v2 && *(_DWORD *)(v7 + 72) == 1 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
          (CSecondaryWindowRepresentation *)v7,
          this,
          a2);
      v6 = *((_QWORD *)this + 67);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v6 + 456) );
  }
}
