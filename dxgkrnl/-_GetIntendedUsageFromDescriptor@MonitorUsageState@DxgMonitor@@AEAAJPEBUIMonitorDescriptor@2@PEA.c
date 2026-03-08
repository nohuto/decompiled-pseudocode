/*
 * XREFs of ?_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEAW4_DXGK_DISPLAY_USAGE@@PEA_N2@Z @ 0x1C021450C
 * Callers:
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2,
        enum _DXGK_DISPLAY_USAGE *a3,
        bool *a4,
        bool *a5)
{
  bool *v5; // rdi
  char v6; // bl
  __int64 v10; // rax
  int v11; // edx
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 1;
  *a4 = 0;
  v13 = 1;
  *v5 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 56LL))(v10, &v13);
  if ( v11 >= 0 )
  {
    v6 = v13;
    goto LABEL_17;
  }
  LOBYTE(a5) = 0;
  if ( a2 )
  {
    v11 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, bool **, bool *, bool *))(*(_QWORD *)a2 + 224LL))(
            a2,
            &a5,
            a4,
            v5);
    if ( v11 >= 0 )
    {
      if ( (unsigned __int8)a5 == 7 )
      {
        v6 = 3;
      }
      else
      {
        if ( (unsigned __int8)a5 != 8 )
        {
          if ( (unsigned __int8)a5 != 16 )
          {
            if ( (unsigned __int8)a5 == 17 )
            {
              v6 = 4;
              goto LABEL_17;
            }
            if ( (unsigned __int8)a5 != 18 && (unsigned int)(unsigned __int8)a5 - 19 > 1 )
              goto LABEL_17;
          }
          v6 = 5;
LABEL_17:
          *(_BYTE *)a3 = v6;
          return (unsigned int)v11;
        }
        v6 = 2;
      }
      *v5 = 0;
      goto LABEL_17;
    }
  }
  return (unsigned int)v11;
}
