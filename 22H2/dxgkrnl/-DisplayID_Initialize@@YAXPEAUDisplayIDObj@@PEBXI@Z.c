/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00225A8
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0182398 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01848C8 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0184E90 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02F9E14 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, char *a2, int a3)
{
  int v3; // r9d
  char *v4; // r11
  char *v6; // r8
  int v7; // ebp
  __int64 v8; // rsi
  char *v9; // rax
  int v10; // r15d
  char v11; // dl
  char *v12; // r14
  char *v13; // rdi
  unsigned __int64 v14; // rsi
  int v15; // ecx
  int v16; // ecx

  if ( a1 )
  {
    v3 = 0;
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = a3;
    v4 = a2;
    *((_DWORD *)a1 + 3) = 0;
    *((_BYTE *)a1 + 16) = 0;
    *((_DWORD *)a1 + 5) = 0;
    if ( a2 )
    {
      if ( a3 )
      {
        v6 = &a2[a3];
        v7 = 0;
        if ( a2 + 3 >= v6 )
        {
LABEL_22:
          if ( v3 == v7 + 1 && v4 == v6 )
            *((_BYTE *)a1 + 16) = 1;
        }
        else
        {
          while ( 1 )
          {
            v8 = (unsigned __int8)v4[1];
            v9 = v4;
            v4 += (unsigned __int8)(v8 + 5);
            v10 = (unsigned __int8)(v8 + 5);
            if ( v4 > v6 || (unsigned __int8)(((unsigned __int8)*v9 >> 4) - 1) > 1u || (v9[2] & 0xF) == 0 && v9[3] )
              break;
            if ( (unsigned __int8)v8 > 0xFBu )
              break;
            v11 = 0;
            v12 = &v9[v8 + 4];
            v13 = v9;
            v14 = v8 + 4;
            if ( v9 > v12 )
              v14 = 0LL;
            if ( v14 )
            {
              do
                v11 += *v13++;
              while ( v13 - v9 < v14 );
            }
            if ( -v11 != *v12 )
              break;
            v15 = *((_DWORD *)a1 + 5);
            if ( v15 )
            {
              if ( (v9[2] & 0xF) != 0 )
                return;
            }
            else
            {
              v7 = (unsigned __int8)v9[3];
              *((_DWORD *)a1 + 3) = v10;
            }
            v16 = v15 + 1;
            *((_DWORD *)a1 + 5) = v16;
            if ( v4 + 3 >= v6 )
            {
              v3 = v16;
              goto LABEL_22;
            }
          }
        }
      }
    }
  }
}
