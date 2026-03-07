__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _OWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  result = 3221225659LL;
  v4 = v8[1];
  *(_OWORD *)a2 = v8[0];
  v5 = v8[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v8[3];
  *((_OWORD *)a2 + 2) = v5;
  v7 = v8[4];
  *((_OWORD *)a2 + 3) = v6;
  *((_OWORD *)a2 + 4) = v7;
  return result;
}
