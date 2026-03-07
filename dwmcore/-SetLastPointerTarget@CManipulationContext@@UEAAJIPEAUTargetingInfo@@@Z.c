__int64 __fastcall CManipulationContext::SetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  unsigned int v3; // ebx
  int Key; // eax
  const struct TargetingInfo *v5; // r10
  __int64 v6; // r11
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = 0;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 80,
          &v8);
  if ( Key == -1 )
  {
    if ( v5
      && !(unsigned int)CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::Add(
                          v6,
                          (__int64)&v8,
                          (__int64)v5) )
    {
      return (unsigned int)-2147024882;
    }
  }
  else if ( v5 )
  {
    CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::SetAtIndex(
      v6,
      Key,
      (unsigned int *)&v8,
      v5);
  }
  else
  {
    CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveRange(v6, Key);
  }
  return v3;
}
