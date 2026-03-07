__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  __int64 *v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  char CachedFeatureEnabledState; // al
  unsigned int v10; // r8d
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  v12 = 0LL;
  v13 = 0LL;
  v3 = a2;
  v5 = (a2 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 32);
    v7 = v6 == 0LL;
LABEL_3:
    if ( !v7 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        if ( !*(_BYTE *)(v8 + 30) && !*(_BYTE *)(v8 + 29) )
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v8,
                                        *v6);
          v5 = v5 && (CachedFeatureEnabledState & 1) != 0;
          ++v6;
          v7 = v5 == 0;
          goto LABEL_3;
        }
        if ( !v5 || !*(_BYTE *)(v8 + 31) )
        {
          v5 = 0;
          break;
        }
        v5 = 1;
        ++v6;
      }
    }
  }
  LODWORD(v12) = v3;
  while ( 1 )
  {
    v10 = v5 & 0xFFFFFFCF | v3 & 0xFFFFFFCE;
    if ( (v3 & 1) == v5 )
      v10 = v5 | v3 & 0xFFFFFFFE;
    LODWORD(v13) = v10 & 0xFFFFFDFF;
    if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(a1, (signed __int32 *)&v12, v10 & 0xFFFFFDFF) )
      break;
    v3 = v12;
  }
  return v13;
}
