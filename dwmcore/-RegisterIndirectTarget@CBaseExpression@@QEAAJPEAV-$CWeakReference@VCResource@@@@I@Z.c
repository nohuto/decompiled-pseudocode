__int64 __fastcall CBaseExpression::RegisterIndirectTarget(struct CBaseExpression *a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_2831068478>::GetImpl'::`2'::impl) )
  {
    v6 = CExpressionManager::RegisterIndirectTarget(*(CExpressionManager **)(*((_QWORD *)a1 + 2) + 424LL), a1, a2, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::emplace_back<CWeakReference<CResource> * &,unsigned int &>(
        (__int64)a1 + 304,
        &v10,
        &v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::emplace_back<CWeakReference<CResource> * &,unsigned int &>(
      (__int64)a1 + 304,
      &v10,
      &v11);
    return CExpressionManager::RegisterIndirectTarget(
             *(CExpressionManager **)(*((_QWORD *)a1 + 2) + 424LL),
             a1,
             v10,
             v11);
  }
}
