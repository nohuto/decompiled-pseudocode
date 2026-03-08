/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01F9F6C
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C01FB0DC (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(DXGMONITOR *this, struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  bool v8; // zf
  struct _STRING v10; // [rsp+20h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-9h] BYREF
  WCHAR v13[4]; // [rsp+50h] [rbp+7h] BYREF
  __int16 v14; // [rsp+58h] [rbp+Fh]
  WCHAR SourceString[4]; // [rsp+60h] [rbp+17h] BYREF
  WCHAR v16[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+80h] [rbp+37h]

  *(_DWORD *)a2 = *((_DWORD *)this + 78);
  v4 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( v4 )
  {
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, v12);
    v6 = *v5;
    *v5 = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, __int64))v12[0];
    v12[0] = 0LL;
  }
  else
  {
    v6 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v7 = 0LL;
  }
  if ( v7 )
    (**v7)(v7, 1LL);
  *(_QWORD *)SourceString = 0LL;
  *(_QWORD *)v13 = 0LL;
  v14 = 0;
  v17 = 0LL;
  v18 = 0;
  *(_OWORD *)v16 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 27) + 128LL) == 0LL;
    DestinationString.Buffer = SourceString;
    *(_QWORD *)&DestinationString.Length = 0x80000LL;
    *((_DWORD *)a2 + 1) = !v8;
    (*(void (__fastcall **)(__int64, struct _UNICODE_STRING *))(*(_QWORD *)v6 + 64LL))(v6, &DestinationString);
    v12[0] = 655360LL;
    v12[1] = v13;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, v12);
    *(_QWORD *)&v10.Length = 1835008LL;
    v10.Buffer = (PCHAR)v16;
    (*(void (__fastcall **)(__int64, struct _STRING *))(*(_QWORD *)v6 + 80LL))(v6, &v10);
  }
  *((_BYTE *)a2 + 8) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = 0LL;
  RtlInitAnsiString(&v10, (PCSZ)a2 + 8);
  v10.MaximumLength = 4;
  RtlUnicodeStringToAnsiString(&v10, &DestinationString, 0);
  *((_BYTE *)a2 + 12) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, v13);
  v10 = 0LL;
  RtlInitAnsiString(&v10, (PCSZ)a2 + 12);
  v10.MaximumLength = 5;
  RtlUnicodeStringToAnsiString(&v10, &DestinationString, 0);
  *((_BYTE *)a2 + 17) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, v16);
  v10 = 0LL;
  RtlInitAnsiString(&v10, (PCSZ)a2 + 17);
  v10.MaximumLength = 14;
  RtlUnicodeStringToAnsiString(&v10, &DestinationString, 0);
  if ( v6 )
    (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
  return 0LL;
}
