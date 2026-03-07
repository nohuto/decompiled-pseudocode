char __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  __int64 v8; // rax
  const struct CMILMatrix *v9; // rsi
  __int64 v10; // r8
  char v11; // si
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  float v15[20]; // [rsp+30h] [rbp-61h] BYREF
  _BYTE v16[64]; // [rsp+80h] [rbp-11h] BYREF
  int v17; // [rsp+C0h] [rbp+2Fh]
  bool v18; // [rsp+108h] [rbp+77h] BYREF

  v8 = *((_QWORD *)this + 31);
  v15[16] = 0.0;
  v17 = 0;
  v9 = (const struct CMILMatrix *)(((unsigned __int64)a5 + 288) & -(__int64)(a5 != 0LL));
  CVisual::CalcTransform(
    this,
    a2,
    v9,
    &v18,
    (struct CMILMatrix *)v15,
    (struct CMILMatrix *)((unsigned __int64)v16 & -(__int64)(v8 != 0)));
  if ( a4 || !v9 )
    LOBYTE(v10) = 1;
  else
    LOBYTE(v10) = v18 && !CMILMatrix::IsEqualTo<0>((float *)v9, v15);
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, float *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v15,
          v10,
          (unsigned __int64)v16 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  if ( v11 && CVisual::GetInteractionInternal(this) && (*((_BYTE *)this + 101) & 0x40) != 0 )
  {
    a5 = 0LL;
    v13 = (CComposition *)*((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
    ManipulationManager = CComposition::GetManipulationManager(v13, &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  }
  return v11;
}
