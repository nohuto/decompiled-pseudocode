/*
 * XREFs of ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C538
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DBC4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EB44 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000A210 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000AAE4 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000B6F0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetDbBasicSupportSideband @ 0x1C00298AC (PropertyGetDbBasicSupportSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
        CSidebandDevice *this,
        unsigned int a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  int PinFromEpIndex; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  int SidetoneNodes; // eax
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+28h] [rbp-28h]
  int v19; // [rsp+28h] [rbp-28h]
  unsigned int v20; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v22; // [rsp+38h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF

  v20 = -1;
  v21 = -1;
  v24 = -1;
  v22 = -1;
  v8 = *((_QWORD *)this + 4);
  v23 = 0LL;
  v9 = *(_QWORD *)(v8 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0LL,
      9u,
      0x7Au,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, a2, &v20, &v23);
  v12 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v13 = 123;
    goto LABEL_7;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), v20, &v21);
  v12 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    SidetoneNodes = CSidebandDevice::GetSidetoneNodes(this, v21, (struct _KSFILTER_DESCRIPTOR *)(v9 + 128), &v24, &v22);
    v12 = SidetoneNodes;
    if ( SidetoneNodes >= 0 )
    {
      if ( v24 == -1 )
      {
        v12 = -1073741275;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v12;
        v16 = 126;
        v19 = -1073741275;
        goto LABEL_15;
      }
      SidetoneNodes = PropertyGetDbBasicSupportSideband(*(_QWORD *)(v9 + 200) + v24 * *(_DWORD *)(v9 + 196), a3, a4);
      v12 = SidetoneNodes;
      if ( SidetoneNodes >= 0 )
        goto LABEL_22;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v12;
      v16 = 127;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v12;
      v16 = 125;
    }
    v19 = SidetoneNodes;
LABEL_15:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      v16,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      v19);
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v12;
  v13 = 124;
LABEL_7:
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    9u,
    v13,
    (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
    PinFromEpIndex);
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v12;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0x80u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      v18);
  }
  return v12;
}
