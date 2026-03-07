__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  MONITOR_MGR *v6; // rcx
  _QWORD v8[10]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v9[144]; // [rsp+70h] [rbp-A8h] BYREF

  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 33;
  LOBYTE(v8[6]) = -1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741130 )
    {
      WdLogSingleEntry2(3LL, a1, v3);
      goto LABEL_7;
    }
  }
  else if ( (*((_DWORD *)a1 + 109) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry((__int64)a1, 1, (__int64)v8);
    v5 = *((_QWORD *)a1 + 365);
    if ( v5 )
    {
      v6 = *(MONITOR_MGR **)(v5 + 112);
      if ( v6 )
        MONITOR_MGR::_MonitorTelemetry(v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v8);
    }
  }
  v4 = 0;
LABEL_7:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  return v4;
}
