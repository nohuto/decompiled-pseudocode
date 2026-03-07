struct CInteraction *__fastcall CManipulationContext::GetHoverTarget(CManipulationContext *this, int a2)
{
  int Key; // eax
  __int64 v3; // r10
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 56,
          &v5);
  if ( Key == -1 )
    return 0LL;
  else
    return *(struct CInteraction **)(*(_QWORD *)(v3 + 64) + 8LL * Key);
}
