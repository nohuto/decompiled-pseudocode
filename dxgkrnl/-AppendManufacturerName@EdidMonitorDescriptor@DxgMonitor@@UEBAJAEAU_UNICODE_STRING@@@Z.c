/*
 * XREFs of ?AppendManufacturerName@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C01FCF30
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001ED38 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001ED74 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     MonitorLogBadEDID @ 0x1C03BFCE4 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::AppendManufacturerName(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  unsigned __int8 *v3; // rax
  int IsEDIDBaseBlock; // eax
  unsigned __int8 *v5; // r11
  __int64 v6; // rbx
  int v7; // eax
  NTSTATUS appended; // eax
  __int64 v10; // rdx
  WCHAR Source[4]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v3 = (unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      while ( 1 )
      {
        v3 = *(unsigned __int8 **)v3;
        if ( !v3 )
          break;
        if ( *((_DWORD *)v3 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v3 + 24);
          LODWORD(v6) = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            MonitorLogBadEDID((unsigned int)v6);
            goto LABEL_12;
          }
          *(_QWORD *)Source = 0LL;
          v7 = EDIDV1_ObtainMonitorManufacturerName(v5, Source);
          v6 = v7;
          if ( v7 >= 0 )
          {
            appended = RtlAppendUnicodeToString(a2, Source);
            v6 = appended;
            if ( appended >= 0 )
              return 0LL;
          }
          v10 = v6;
          goto LABEL_13;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  LODWORD(v6) = -1071841279;
LABEL_12:
  v10 = (int)v6;
LABEL_13:
  WdLogSingleEntry1(2LL, v10);
  return (unsigned int)v6;
}
