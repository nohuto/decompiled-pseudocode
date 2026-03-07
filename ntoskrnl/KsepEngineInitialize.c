__int64 __fastcall KsepEngineInitialize(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rax

  if ( !a1 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 131872;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x320u, 0LL);
  }
  a1[6] = 0LL;
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[5] = a1 + 4;
  a1[4] = a1 + 4;
  v2 = KsepCacheInitialize(
         (__int64)a1,
         (__int64)KsepCacheDeviceEqual,
         (__int64)KsepCacheDeviceHash,
         (__int64)KsepCacheDeviceFree);
  a1[9] = v2;
  if ( !v2 )
    return 3221225495LL;
  v4 = KsepCacheInitialize(v3, (__int64)KsepCacheHwIdEqual, (__int64)KsepCacheHwIdHash, (__int64)KsepCacheHwIdFree);
  a1[10] = v4;
  if ( !v4 )
    return 3221225495LL;
  a1[7] = KseGetIoCallbacks;
  a1[8] = KseSetCompletionHook;
  result = KsepEngineReadFlags(&KseEngine);
  if ( (int)result >= 0 && (KseEngine & 3) == 3 )
    return 3221225659LL;
  return result;
}
