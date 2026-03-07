__int64 KseVersionLieInitialize()
{
  int v0; // eax
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  char v8; // al

  v0 = KseRegisterShim((__int64)&Win7VersionLieShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = v0;
    v4 = KsepDebugFlag;
    KsepHistoryErrors[2 * v3] = 786673;
    if ( (v4 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win7 version lie shims: failed to register.\n");
    KsepLogError(12LL, (__int64)"Built-in Win7 version lie shims: failed to register.\n");
  }
  v1 = KseRegisterShim((__int64)&Win8VersionLieShim, 0LL, 0LL);
  if ( v1 < 0 )
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = v1;
    v6 = KsepDebugFlag;
    KsepHistoryErrors[2 * v5] = 786681;
    if ( (v6 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win8 version lie shims: failed to register.\n");
    KsepLogError(12LL, (__int64)"Built-in Win8 version lie shims: failed to register.\n");
  }
  result = KseRegisterShim((__int64)&Win81VersionLieShim, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = result;
    v8 = KsepDebugFlag;
    KsepHistoryErrors[2 * v7] = 786689;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win8.1 version lie shims: failed to register.\n");
    return KsepLogError(12LL, (__int64)"Built-in Win8.1 version lie shims: failed to register.\n");
  }
  return result;
}
