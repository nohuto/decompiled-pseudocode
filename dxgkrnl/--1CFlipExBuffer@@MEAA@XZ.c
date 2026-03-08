/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000BAE4
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C000BA50 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 *     ??_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z @ 0x1C00893B0 (--_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C000D9C0 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C000DA04 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C007D24C (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z @ 0x1C007E560 (-SignalPresentLimitSemaphore@@YAJPEAU_KSEMAPHORE@@J@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C034E2AC (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  int v3; // edx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = *((_DWORD *)this + 96) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 43) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::DisableCascadedSignaling(this);
  v3 = *((_DWORD *)this + 84);
  if ( v3 > 0 )
  {
    SignalPresentLimitSemaphore(*((struct _KSEMAPHORE **)this + 41), v3);
    *((_DWORD *)this + 84) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)this + 46) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 41);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (void *)*((_QWORD *)this + 43);
  if ( v6 )
    ObfDereferenceObject(v6);
  CCompositionBuffer::~CCompositionBuffer(this);
}
