/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F6E3C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0180340 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C018464C (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(DXGMONITOR *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  const WCHAR *v7; // r8
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int ValueData; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR Path; // [rsp+58h] [rbp+20h] BYREF

  Path = 0LL;
  v2 = a2;
  LODWORD(v5) = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, (void **)&Path);
  if ( (int)v5 >= 0 )
  {
    v6 = WdLogNewEntry5_WdDmmEvent(v4);
    *(_QWORD *)(v6 + 24) = v2;
    *(_QWORD *)(v6 + 32) = *((unsigned int *)this + 11);
    WdLogEvent5_WdDmmEvent(v6);
    v7 = (const WCHAR *)*(&DXGMONITOR::_MonitorConfigInfoTable + 3 * v2);
    ValueData = *(_DWORD *)((char *)this + *((int *)&DXGMONITOR::_MonitorConfigInfoTable + 6 * v2 + 3));
    v8 = RtlWriteRegistryValue(0x40000000u, Path, v7, 4u, &ValueData, 4u);
    v5 = v8;
    if ( v8 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      v11[3] = v2;
      v11[4] = *((unsigned int *)this + 11);
      v11[5] = v5;
      WdLogEvent5_WdError(v11);
    }
  }
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v5;
}
