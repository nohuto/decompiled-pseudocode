/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C007952C
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0078C00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C0079500 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0077FB0 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0078048 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rax
  char v4; // r9
  __int64 v5; // rdx
  CompositionSurfaceObject *v6; // rcx

  if ( !*((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 12);
    if ( v3 > 1 )
    {
      v4 = 1;
      if ( !*((_BYTE *)this + 49) )
        v4 = a2;
      CompositionSurfaceObject::SignalGpuFence(
        *((CompositionSurfaceObject **)this + 4),
        *((_QWORD *)this + 5),
        v3 - 1,
        v4);
    }
  }
  *((_QWORD *)this + 12) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v5 = *((_QWORD *)this + 5);
    v6 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v6, v5);
  }
}
