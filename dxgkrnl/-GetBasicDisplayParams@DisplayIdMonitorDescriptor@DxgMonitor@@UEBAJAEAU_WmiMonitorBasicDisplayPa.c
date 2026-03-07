__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  const struct DisplayIDObj *v2; // rsi
  int PhysicalSize; // eax
  __int64 v5; // rdi
  int NativeLuminance; // eax
  int ColorimetryData; // eax
  unsigned int v9; // kr00_4
  unsigned int v10; // edx
  BOOLEAN v11; // al
  unsigned int v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v14; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0;
  v2 = (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24);
  v20 = 0;
  v12 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0LL;
  PhysicalSize = DisplayID_GetPhysicalSize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), &v19, &v20);
  v5 = PhysicalSize;
  if ( PhysicalSize < 0
    || (NativeLuminance = DisplayID_GetNativeLuminance(v2, &v15, &v14, &v13, &v12),
        v5 = NativeLuminance,
        NativeLuminance < 0)
    || (ColorimetryData = DisplayID_GetColorimetryData(
                            v2,
                            (struct DISPLAYID_COLORIMETRY_DATA *)&v18,
                            (struct DISPLAY_COLOR_DEPTHS *)&v16),
        v5 = ColorimetryData,
        ColorimetryData < 0) )
  {
    WdLogSingleEntry1(2LL, v5);
    return (unsigned int)v5;
  }
  else
  {
    a2->VideoInputType = 1;
    *(_WORD *)&a2->SupportedDisplayFeatures.HasPreferredTimingMode = 1;
    v9 = v19;
    *(_DWORD *)&a2->SupportedDisplayFeatures.StandbySupported = 16843009;
    a2->MaxHorizontalImageSize = v9 / 0x64;
    v10 = v20 / 0x64;
    a2->DisplayTransferCharacteristic = v12 - 100;
    v11 = v18 & 1;
    a2->MaxVerticalImageSize = v10;
    a2->SupportedDisplayFeatures.sRGBSupported = v11;
    return 0LL;
  }
}
