/*
 * XREFs of ??1CInputManager@@IEAA@XZ @ 0x1C00C3C40
 * Callers:
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00C3C0C (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x1C00C3C74 (--1-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ.c)
 */

void __fastcall CInputManager::~CInputManager(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
    ZwClose(v2);
  CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>(this + 13);
}
