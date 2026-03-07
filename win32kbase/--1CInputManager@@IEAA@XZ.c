void __fastcall CInputManager::~CInputManager(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
    ZwClose(v2);
  CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>(this + 13);
}
