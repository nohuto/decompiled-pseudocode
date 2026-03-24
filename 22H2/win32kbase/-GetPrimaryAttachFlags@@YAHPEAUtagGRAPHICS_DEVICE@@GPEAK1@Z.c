/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0013860
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00126BC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00128E8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0143F38 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(struct tagGRAPHICS_DEVICE *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int16 v7; // r13
  __int64 v9; // rax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v17; // eax
  const WCHAR *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  WCHAR *v21; // r15
  NTSTATUS v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD v25[4]; // [rsp+30h] [rbp-A9h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-99h] BYREF
  __int64 v27; // [rsp+78h] [rbp-61h]
  int v28; // [rsp+80h] [rbp-59h]
  const wchar_t *v29; // [rsp+88h] [rbp-51h]
  unsigned int *v30; // [rsp+90h] [rbp-49h]
  int v31; // [rsp+98h] [rbp-41h]
  _DWORD *v32; // [rsp+A0h] [rbp-39h]
  int v33; // [rsp+A8h] [rbp-31h]
  __int64 v34; // [rsp+B0h] [rbp-29h]
  int v35; // [rsp+B8h] [rbp-21h]
  __int128 v36; // [rsp+C0h] [rbp-19h]
  __int128 v37; // [rsp+D0h] [rbp-9h]
  __int64 v38; // [rsp+E0h] [rbp+7h]

  v4 = 0;
  v25[0] = 0;
  v7 = a2;
  v9 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdTrace(v9);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.DefaultType = 67108868;
  QueryTable.Flags = 288;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = v25;
  v29 = L"Attach.ToDesktop";
  v32 = v25;
  v28 = 288;
  v31 = 67108868;
  v33 = 4;
  *a4 = 0;
  v38 = 0LL;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v27 = 0LL;
  v30 = a4;
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v37 = 0LL;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(a1, 1LL, 0LL, 0LL, 0, 0LL, v25[0]);
  v11 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v11);
  }
  else
  {
    v18 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(a1, 0LL, 0LL, 0LL, 0, 0LL, v25[0]);
    v21 = (WCHAR *)v18;
    if ( v18 )
    {
      v22 = RtlQueryRegistryValues(0x40000000u, v18, &QueryTable, 0LL, 0LL);
      ZwClose(v21);
      if ( v22 < 0 )
      {
        v23 = WdLogNewEntry5_WdTrace(v13, v12);
        WdLogEvent5_WdTrace(v23);
        *a4 = 0;
        *a3 = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdTrace(v20, v19);
      WdLogEvent5_WdTrace(v24);
    }
  }
  v14 = *((_DWORD *)a1 + 40);
  if ( v7 )
  {
    v17 = v14 & 0x2000000;
    v13 = 0xFFFFLL;
    if ( v7 == -1 )
    {
      LOBYTE(v4) = v17 != 0;
    }
    else if ( !v17 )
    {
      *a4 = *((_DWORD *)a1 + 65);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( (v14 & 0x6000000) != 0 )
LABEL_5:
    *a4 = v4;
LABEL_6:
  v15 = WdLogNewEntry5_WdTrace(v13, v12);
  *(_QWORD *)(v15 + 24) = *a3;
  *(_QWORD *)(v15 + 32) = *a4;
  WdLogEvent5_WdTrace(v15);
  return 1LL;
}
