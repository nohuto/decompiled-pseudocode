__int64 __fastcall GetMonitorPhysicalDimensions(__int64 a1, unsigned int *a2, unsigned int *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v9; // rax
  struct tagGRAPHICS_DEVICE *v10; // rax
  struct tagGRAPHICS_DEVICE *v11; // rdx
  unsigned int v12; // ebx
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v19; // r8d
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C0h]
  char v25[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  _DWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  unsigned int v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[230]; // [rsp+74h] [rbp-8Ch] BYREF

  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( a1 )
  {
    v10 = *(struct tagGRAPHICS_DEVICE **)(v9 + 1264);
    v11 = *(struct tagGRAPHICS_DEVICE **)(a1 + 2552);
    if ( v10 && v10 == v11 )
    {
      v26 = 0;
      P = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v25, v11);
      v12 = v26;
      v13 = 0;
      v14 = 0;
      if ( v26 )
      {
        do
        {
          v24 = 0;
          v23 = 0LL;
          EnsureMonitorDevices::GetMonitorDevice(
            (EnsureMonitorDevices *)v25,
            v14,
            (struct tagVIDEO_MONITOR_DEVICE *)&v23);
          if ( (v23 & 3) == 3 )
          {
            memset(v31, 0, sizeof(v31));
            v15 = *((_QWORD *)&v23 + 1);
            v29 = *((_QWORD *)&v23 + 1);
            v30 = DWORD1(v23);
            v28[0] = -7;
            v28[1] = 940;
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
            if ( (*(int (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, _QWORD))(DxgkWin32kInterface + 264))(
                   v29,
                   v30,
                   v28,
                   0LL,
                   0LL) >= 0 )
            {
              v13 = 1;
              if ( v31[226] )
              {
                v19 = v31[227];
                if ( v31[227] )
                {
                  *a2 = (v31[226] + 9) / 0xAu;
                  *a3 = (v19 + 9) / 0xAu;
                  if ( a4 )
                    *a4 = DWORD1(v23);
                  if ( a5 )
                  {
                    v21 = 2LL;
                    do
                    {
                      *a5 = v15;
                      --v21;
                    }
                    while ( v21 );
                  }
                  v20 = 0;
                  goto LABEL_13;
                }
              }
            }
            v12 = v26;
          }
          ++v14;
        }
        while ( v14 < v12 );
        v20 = -1073741823;
        if ( v13 )
          goto LABEL_13;
      }
      v20 = -1073741810;
LABEL_13:
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741810;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v20;
}
