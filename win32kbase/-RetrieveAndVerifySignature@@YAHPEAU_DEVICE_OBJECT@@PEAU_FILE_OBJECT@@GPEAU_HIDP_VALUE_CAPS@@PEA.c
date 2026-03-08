/*
 * XREFs of ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01E0604
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1C01E1A0C (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00EFA58 (rimHidP_GetUsageValueArray.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1C01DFE00 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01E0588 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01E08B4 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 */

__int64 __fastcall RetrieveAndVerifySignature(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        unsigned __int16 a3,
        struct _HIDP_VALUE_CAPS *a4,
        struct _HIDP_CAPS *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        struct _HID_COLLECTION_INFORMATION *a7,
        unsigned __int16 a8,
        unsigned int *a9)
{
  unsigned int v10; // edi
  USHORT ProductID; // r14
  USHORT VendorID; // r13
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int8 *v16; // rbx
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // r14d
  __int64 UsagePage; // rdx
  char *v23; // [rsp+58h] [rbp-51h] BYREF
  char *v24; // [rsp+60h] [rbp-49h] BYREF
  _HIDP_VALUE_CAPS v25; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 v27; // [rsp+118h] [rbp+6Fh]

  v23 = 0LL;
  v24 = 0LL;
  v10 = 0;
  ProductID = a7->ProductID;
  VendorID = a7->VendorID;
  v27 = ProductID;
  if ( a3 == 199 )
  {
    v13 = *(_OWORD *)&a4[a8].HasNull;
    *(_OWORD *)&v25.UsagePage = *(_OWORD *)&a4[a8].UsagePage;
    v14 = *(_OWORD *)&a4[a8].UnitsExp;
    *(_OWORD *)&v25.HasNull = v13;
    v15 = *(_OWORD *)&a4[a8].PhysicalMin;
    *(_OWORD *)&v25.UnitsExp = v14;
    *(_QWORD *)&v25.NotRange.DesignatorIndex = *(_QWORD *)&a4[a8].NotRange.DesignatorIndex;
    *(_OWORD *)&v25.PhysicalMin = v15;
    if ( (int)RetrieveSegmentedBlob(DeviceObject, a2, &v23, &v24, a5, a6, &v25) < 0 )
    {
LABEL_3:
      *a9 = 0;
LABEL_4:
      v16 = (unsigned __int8 *)v23;
      goto LABEL_5;
    }
    v16 = (unsigned __int8 *)v23;
    v10 = CoreSignatureVerify(VendorID, ProductID, (unsigned __int8 *)v23, a9);
  }
  else
  {
    v18 = BuildSignatureFeatureReport(a5, a4, DeviceObject, a2, &v24, &v23);
    if ( v18 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          (_DWORD)gRimLog,
          3,
          1,
          30,
          (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
          v18);
      }
      goto LABEL_3;
    }
    v21 = 0;
    if ( !a5->NumberFeatureValueCaps )
      goto LABEL_4;
    v16 = (unsigned __int8 *)v23;
    do
    {
      UsagePage = a4[v21].UsagePage;
      if ( (unsigned __int16)UsagePage >= 0xFF00u && a4[v21].BitSize == 8 && a4[v21].ReportCount == 256 )
      {
        if ( (int)rimHidP_GetUsageValueArray(
                    2LL,
                    UsagePage,
                    0LL,
                    a3,
                    (__int64)v16,
                    256,
                    (__int64)a6,
                    (__int64)v24,
                    a5->FeatureReportByteLength) >= 0 )
        {
          v10 = CoreSignatureVerify(VendorID, v27, v16, a9);
          if ( v10 )
            break;
        }
        else
        {
          v10 = 0;
          *a9 = 0;
        }
      }
      ++v21;
    }
    while ( v21 < a5->NumberFeatureValueCaps );
  }
LABEL_5:
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v16);
  if ( v24 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v24);
  return v10;
}
