/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C01852B0
 * Callers:
 *     _IsValidParallelButton @ 0x1C00D3CC0 (_IsValidParallelButton.c)
 *     _IsValidParallelValue @ 0x1C00D3DE4 (_IsValidParallelValue.c)
 *     RIMDeliverConfigRequest @ 0x1C0180768 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C01811D4 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMIsInputUsagePresent @ 0x1C018240C (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C0182600 (RIMPopulatePointerDevice.c)
 *     _PopulatePropertyUsageValues @ 0x1C01858C8 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C0186894 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C0186BCC (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0188240 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01890E0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01897E0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C018A2D0 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C018AF60 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C018B6DC (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C018BDCC (RIMRetrieveLinkCollection.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0192394 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C01938DC (RIMIDECheckScanTimeSupport.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1C01B37DC (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetSpecificValueCaps(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // si
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 136) )
    return 3221225659LL;
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(v15 + 136))(
           v10,
           v9,
           v8,
           v7,
           a5,
           a6,
           a7);
}
