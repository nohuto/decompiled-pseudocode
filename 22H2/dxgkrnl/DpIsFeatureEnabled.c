/*
 * XREFs of DpIsFeatureEnabled @ 0x1C02C65C0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     Feature_GpuHardwareScheduling__private_ReportDeviceUsage @ 0x1C00283EC (Feature_GpuHardwareScheduling__private_ReportDeviceUsage.c)
 */

__int64 __fastcall DpIsFeatureEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // si
  int v10; // eax
  __int64 v12; // rax

  v4 = *(_DWORD **)(*(_QWORD *)a1 + 64LL);
  if ( !v4 || v4[4] != 1953656900 || v4[5] != 2 )
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_25;
  }
  v5 = *(_DWORD *)(a1 + 8);
  if ( !v5 )
  {
    v4[1474] |= 0x8000u;
    v9 = 0;
    if ( dword_1C00B2B30 == 2 )
    {
      v9 = 1;
    }
    else if ( !dword_1C00B2B30 )
    {
      Feature_GpuHardwareScheduling__private_ReportDeviceUsage();
    }
    if ( !byte_1C00B2B34 )
    {
      v10 = v4[1474];
      if ( (v10 & 0x800) != 0 )
      {
        v9 = 0;
        v4[1474] = v10 & 0xFFFF7FFF;
      }
    }
    if ( v9 )
    {
      *(_BYTE *)(a1 + 12) = 1;
      v4[1474] |= 0x10000u;
    }
    else
    {
      *(_BYTE *)(a1 + 12) = 0;
    }
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    {
      *(_BYTE *)(a1 + 12) = 1;
      v4[1474] |= 0x100000u;
    }
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v7 )
  {
    if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
      return 0LL;
LABEL_10:
    *(_BYTE *)(a1 + 12) = 1;
    return 0LL;
  }
  if ( (_DWORD)v7 == 2 )
    goto LABEL_10;
  v8 = WdLogNewEntry5_WdWarning(v7, a2, a3);
  *(_QWORD *)(v8 + 24) = *(int *)(a1 + 8);
  WdLogEvent5_WdWarning(v8);
LABEL_25:
  *(_BYTE *)(a1 + 12) = 0;
  return 3221225485LL;
}
