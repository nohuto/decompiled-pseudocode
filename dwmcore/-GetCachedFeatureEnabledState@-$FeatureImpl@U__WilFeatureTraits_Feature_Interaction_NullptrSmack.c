signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  signed __int32 v6; // edx
  int v7; // eax
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int v11; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-8h]
  int i; // [rsp+50h] [rbp+20h] BYREF
  int v14; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_1803E2DFC;
    if ( !dword_1803E2DFC )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetCurrentFeatureEnabledState(
      a1,
      &v14,
      &i);
    v6 = *a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      *a2 = v6;
      v8 = v6;
      if ( v7 && (v6 & 2) == 0 )
      {
        v8 = v6 ^ ((unsigned __int16)v14 ^ (unsigned __int16)v6) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (v6 & 4) == 0 )
      {
        v8 = ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, v6);
      if ( v6 == v9 )
        break;
      v6 = v9;
    }
    if ( (v6 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&stru_1803E2DE8, &v15);
      if ( !v5
        || v5 != dword_1803E2DFC
        || (v11 = 0, v12 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1803E2E30, &v11, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
