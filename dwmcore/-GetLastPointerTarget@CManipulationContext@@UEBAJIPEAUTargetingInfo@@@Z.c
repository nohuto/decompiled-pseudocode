__int64 __fastcall CManipulationContext::GetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  int Key; // eax
  __int64 v6; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *(_DWORD *)a3 = 0;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)a3 + 1);
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 80,
          &v8);
  if ( Key != -1 )
  {
    v6 = *((_QWORD *)this + 11) + 16LL * Key;
    *(_DWORD *)a3 = *(_DWORD *)v6;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))a3 + 1,
      (_QWORD *)(v6 + 8));
  }
  return 0LL;
}
