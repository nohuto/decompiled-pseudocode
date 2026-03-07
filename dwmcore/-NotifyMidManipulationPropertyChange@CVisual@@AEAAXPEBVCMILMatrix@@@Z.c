void __fastcall CVisual::NotifyMidManipulationPropertyChange(CVisual *this, const struct CMILMatrix *a2)
{
  CComposition *v4; // rbx
  struct CManipulationManager *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 101) & 0x40) != 0 )
  {
    v4 = (CComposition *)*((_QWORD *)this + 2);
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
    if ( (int)CComposition::GetManipulationManager(v4, &v5) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(v5, this, a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
  }
}
