/*
 * XREFs of rimHidP_SetUsageValue @ 0x1C01B2248
 * Callers:
 *     RIMConfigureDeviceFeedback @ 0x1C01ACF00 (RIMConfigureDeviceFeedback.c)
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C01B2DEC (RIMAddSimulatedPointerDeviceData.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C01C5080 (RIMIDESetLinkCollectionUsageValues.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01E08B4 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_SetUsageValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // di
  unsigned __int16 v10; // si
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 176) )
    return 3221225659LL;
  v16 = SGDGetUserSessionState(v13, v12, v14, v15);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64, __int64, int))(v16 + 176))(
           v11,
           v10,
           v9,
           v8,
           a5,
           a6,
           a7,
           a8);
}
