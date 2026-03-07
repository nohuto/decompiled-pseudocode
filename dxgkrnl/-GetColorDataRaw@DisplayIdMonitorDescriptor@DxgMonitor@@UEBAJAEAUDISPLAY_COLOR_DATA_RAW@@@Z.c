__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetColorDataRaw(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_COLOR_DATA_RAW *a2)
{
  int ColorDataRaw; // edx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  bool v13; // [rsp+50h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  v11 = 0LL;
  v12 = 0LL;
  ColorDataRaw = DisplayID_GetColorDataRaw(
                   (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                   (struct DISPLAY_COLOR_DATA_RAW *)&v11,
                   (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v14,
                   &v13);
  if ( ColorDataRaw >= 0 )
  {
    v4 = (unsigned int)v12 >> 2;
    *(_DWORD *)a2 = (unsigned int)v11 >> 2;
    v5 = DWORD1(v11);
    *((_DWORD *)a2 + 4) = v4;
    v6 = DWORD1(v12) >> 2;
    *((_DWORD *)a2 + 1) = v5 >> 2;
    v7 = DWORD2(v11);
    *((_DWORD *)a2 + 5) = v6;
    v8 = DWORD2(v12) >> 2;
    *((_DWORD *)a2 + 2) = v7 >> 2;
    v9 = HIDWORD(v11);
    *((_DWORD *)a2 + 6) = v8;
    *((_DWORD *)a2 + 7) = HIDWORD(v12) >> 2;
    *((_DWORD *)a2 + 3) = v9 >> 2;
  }
  return (unsigned int)ColorDataRaw;
}
