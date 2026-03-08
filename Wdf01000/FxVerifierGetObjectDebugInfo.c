/*
 * XREFs of FxVerifierGetObjectDebugInfo @ 0x1C00449C4
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0043BD8 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C0044CF0 (FxVerifierReadObjectDebugInfo.c)
 */

// local variable allocation has failed, the output may be wrong!
FxObjectDebugInfo *__fastcall FxVerifierGetObjectDebugInfo(void *Key, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v4; // rdi
  volatile int v5; // esi
  FxObjectDebugLeakDetection *Pool2; // rax
  int ObjectDebugInfo; // eax
  FxObjectDebugInfo *pInfo; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-11h] BYREF
  _BYTE valueName_buffer[56]; // [rsp+50h] [rbp-1h] OVERLAPPED BYREF
  wchar_t v12; // [rsp+88h] [rbp+37h]

  *(_QWORD *)&valueName.Length = 0LL;
  FxVerifierReadObjectDebugInfo(
    Key,
    FxDriverGlobals,
    (FxObjectDebugInfo **)&valueName,
    L"TrackHandles",
    FxObjectDebugTrackReferences,
    0LL);
  v4 = *(_QWORD *)&valueName.Length;
  if ( *(_QWORD *)&valueName.Length )
    FxDriverGlobals->FxVerifyTagTrackingEnabled = 1;
  LODWORD(pInfo) = 0;
  *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"ObjectLeakDetectionLimit";
  v12 = aObjectleakdete[24];
  valueName.Buffer = (wchar_t *)3276848;
  *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"akDetectionLimit";
  *(_QWORD *)valueName_buffer = &valueName_buffer[8];
  *(_OWORD *)&valueName_buffer[40] = *(_OWORD *)L"ionLimit";
  if ( FxRegKey::_QueryULong(Key, (_UNICODE_STRING *)&valueName.Buffer, (unsigned int *)&pInfo) >= 0 )
  {
    v5 = (int)pInfo;
    if ( (_DWORD)pInfo != -1 )
    {
      Pool2 = (FxObjectDebugLeakDetection *)ExAllocatePool2(64LL, 20LL, FxDriverGlobals->Tag);
      FxDriverGlobals->FxVerifyLeakDetection = Pool2;
      if ( Pool2 )
      {
        Pool2->Limit = v5;
        FxDriverGlobals->FxVerifyLeakDetection->LimitScaled = v5;
        FxDriverGlobals->FxVerifyLeakDetection->ObjectCnt = 0;
        FxDriverGlobals->FxVerifyLeakDetection->DeviceCnt = 0;
        FxDriverGlobals->FxVerifyLeakDetection->Enabled = 1;
        ObjectDebugInfo = FxVerifierReadObjectDebugInfo(
                            Key,
                            FxDriverGlobals,
                            (FxObjectDebugInfo **)&valueName,
                            L"ObjectsForLeakDetection",
                            FxObjectDebugTrackObjectCount,
                            FX_OBJECT_LEAK_DETECTION_DEFAULT_TYPES);
        v4 = *(_QWORD *)&valueName.Length;
        if ( ObjectDebugInfo < 0 || !*(_QWORD *)&valueName.Length )
        {
          ExFreePoolWithTag(FxDriverGlobals->FxVerifyLeakDetection, 0);
          FxDriverGlobals->FxVerifyLeakDetection = 0LL;
        }
      }
    }
  }
  return (FxObjectDebugInfo *)v4;
}
