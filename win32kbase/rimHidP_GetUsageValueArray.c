/*
 * XREFs of rimHidP_GetUsageValueArray @ 0x1C00EFA58
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01D78A0 (rimExtractPointerDeviceUsages.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01E0604 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01E08B4 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetUsageValueArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  unsigned __int16 v11; // si
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 112) )
    return 3221225659LL;
  v17 = SGDGetUserSessionState(v14, v13, v15, v16);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int16, __int64, __int64, int))(v17 + 112))(
           v12,
           v11,
           v10,
           v9,
           a5,
           a6,
           a7,
           a8,
           a9);
}
