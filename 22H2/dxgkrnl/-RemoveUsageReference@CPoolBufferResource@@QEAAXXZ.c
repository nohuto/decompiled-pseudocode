/*
 * XREFs of ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0085CA0
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C007FD94 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x1C00822C8 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00851F0 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0088958 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v3; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8

  v1 = *((_DWORD *)this + 22);
  if ( v1 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 22) = v3;
    if ( !v3 )
    {
      KeSetEvent(*((PRKEVENT *)this + 9), 1, 0);
      Global = DXGGLOBAL::GetGlobal();
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(_QWORD, CPoolBufferResource *, __int64))(*((_QWORD *)Global + 38069) + 232LL))(
        *(unsigned int *)(*((_QWORD *)this + 7) + 332LL),
        this,
        v5);
    }
  }
}
