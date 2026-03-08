/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C00770C8 (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0077288 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C0078888 (-CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00793E8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C007952C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0079624 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v6; // edx
  int CanReleaseToFrame; // edi
  int v8; // eax
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  if ( CompositionSurfaceObject::IsVBlankVirtualizationDisabled(
         *((CompositionSurfaceObject **)this + 4),
         *((_QWORD *)this + 5)) )
  {
    v6 = *((_DWORD *)a2 + 13);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 12);
  }
  CanReleaseToFrame = CFlipToken::CanReleaseToFrame(this, v6, a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v10 = 0;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(
                          *((CompositionSurfaceObject **)this + 4),
                          this,
                          &v10);
    if ( CanReleaseToFrame >= 0 )
    {
      *((_BYTE *)this + 88) = v10;
      v8 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(this, *((unsigned int *)a2 + 12));
      if ( v8 )
        CompositionSurfaceObject::SetSyncRefreshCount(*((CompositionSurfaceObject **)this + 4), v8);
      CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)CanReleaseToFrame;
}
