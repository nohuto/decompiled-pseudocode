/*
 * XREFs of ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C0171980
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C01718C0 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0201290 (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C02019C0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMONITOR::GetCCDMonitorID(DXGMONITOR *this, unsigned __int8 a2, int a3, unsigned __int16 *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  char v18; // al
  const WCHAR *v19; // rdx
  NTSTATUS appended; // eax
  NTSTATUS v21; // eax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  a4[a3 - 1] = 0;
  v8 = *((_QWORD *)this + 21);
  *(_QWORD *)&Destination.Length = 0LL;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * a3 - 2);
  Destination.Buffer = a4;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
    goto LABEL_6;
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 56LL))(*((_QWORD *)this + 21));
  v19 = L"MSNIL";
  if ( !v18 )
    v19 = L"MSBDD_";
  appended = RtlAppendUnicodeToString(&Destination, v19);
  LODWORD(v14) = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(3LL, appended);
  }
  else
  {
LABEL_6:
    v9 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 16 * (v4 ^ 1) + 392));
    v14 = v9;
    if ( v9 >= 0 )
    {
      v15 = *((_QWORD *)this + 55);
      if ( v15 && !*(_DWORD *)(v15 + 16) )
        WdLogSingleEntry0(1LL);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 48LL))(*((_QWORD *)this + 21))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21)) )
      {
        v16 = *((_QWORD *)this + 55);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 16) <= 1u )
            return 0LL;
        }
      }
      v21 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 424));
      v14 = v21;
      if ( v21 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = v14;
  }
  return (unsigned int)v14;
}
