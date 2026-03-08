/*
 * XREFs of ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00787D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0077288 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00793E8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0079598 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0079624 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

__int64 __fastcall CFlipToken::CanReleaseAnalogToken(CompositionSurfaceObject **this, unsigned int a2, bool *a3)
{
  int v6; // edi
  int v7; // eax
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v6 = CompositionSurfaceObject::SyncIntervalSatisfied(this[4], a2, &v9);
  if ( v6 >= 0 && *((_DWORD *)this + 6) == 2 )
  {
    *a3 = 1;
    *((_DWORD *)this + 6) = 3;
    v9 = 0;
    CFlipToken::TraceStateChanged((CFlipToken *)this);
    v6 = CompositionSurfaceObject::NotifyTokenInFrame(this[4], (const struct CToken *)this, &v9);
    if ( v6 >= 0 )
    {
      *((_BYTE *)this + 88) = v9;
      v7 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, _QWORD))*this + 17))(this, a2);
      if ( v7 )
        CompositionSurfaceObject::SetSyncRefreshCount(this[4], v7);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v6;
}
