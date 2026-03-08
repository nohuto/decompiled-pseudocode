/*
 * XREFs of ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C01FCA00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001ED38 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001EEE8 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C03BFCE4 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetManufactureDate(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  unsigned __int8 *v5; // rax
  int IsEDIDBaseBlock; // eax
  unsigned __int8 *v7; // r11
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // rdx

  if ( *((_DWORD *)this + 4) )
  {
    v5 = (unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v5 )
    {
      while ( 1 )
      {
        v5 = *(unsigned __int8 **)v5;
        if ( !v5 )
          break;
        if ( *((_DWORD *)v5 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v5 + 24);
          v8 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            MonitorLogBadEDID(v8);
            goto LABEL_11;
          }
          v9 = EDIDV1_ObtainMonitorManufactureDate(v7, a2, a3);
          v8 = v9;
          if ( v9 >= 0 )
            return 0LL;
          v11 = v9;
          goto LABEL_12;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  v8 = -1071841279;
LABEL_11:
  v11 = (int)v8;
LABEL_12:
  WdLogSingleEntry1(2LL, v11);
  return v8;
}
