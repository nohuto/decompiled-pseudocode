signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v6; // esi
  signed __int32 v7; // edx
  int v8; // eax
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v6 = dword_1803E2DFC;
    if ( !dword_1803E2DFC )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCurrentFeatureEnabledState(a1, &v14, &i);
    v7 = *a2;
    v8 = v6 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v9 = v7 ^ ((unsigned __int16)v14 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (v7 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v14 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, v7);
      if ( v7 == v10 )
        break;
      v7 = v10;
    }
    if ( (v7 & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_1803E2DE8);
      if ( !v6
        || v6 != dword_1803E2DFC
        || (v11 = 0,
            v12 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1803E2E30,
               &v11,
               0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFF7C1);
      }
      ReleaseSRWLockExclusive(&stru_1803E2DE8);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
