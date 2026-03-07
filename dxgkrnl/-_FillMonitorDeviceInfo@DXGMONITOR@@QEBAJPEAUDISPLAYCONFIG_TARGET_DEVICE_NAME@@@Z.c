__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // ebx
  int v5; // esi
  __int64 v6; // r14
  int v7; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 1;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v6 )
    return 3223126017LL;
  v9[0] = 0x800000LL;
  v9[1] = (char *)a2 + 36;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 104LL))(v6, v9);
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(7LL, v7);
    v5 = 0;
  }
  *((_DWORD *)a2 + 5) = v5 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
  if ( (*(int (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v6 + 112LL))(v6, (char *)a2 + 28, (char *)a2 + 30) >= 0 )
    v2 = 4;
  *((_DWORD *)a2 + 5) = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  return 0LL;
}
