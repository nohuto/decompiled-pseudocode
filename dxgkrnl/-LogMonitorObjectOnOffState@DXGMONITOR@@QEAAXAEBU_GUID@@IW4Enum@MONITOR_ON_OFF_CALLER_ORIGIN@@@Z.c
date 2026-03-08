/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01691C4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01E7FF0 (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C45DC (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x1C001C684 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 */

void __fastcall DXGMONITOR::LogMonitorObjectOnOffState(__int64 a1, __int64 a2, int a3, char a4)
{
  char *v5; // rdi
  char v7; // si
  __int64 v8; // rbx
  const GUID *v9; // r9
  __int64 v10; // rcx
  char v11; // [rsp+70h] [rbp-9h] BYREF
  char v12; // [rsp+71h] [rbp-8h] BYREF
  __int16 v13; // [rsp+72h] [rbp-7h] BYREF
  __int64 v14; // [rsp+78h] [rbp-1h] BYREF
  int v15; // [rsp+80h] [rbp+7h] BYREF
  __int64 v16; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+17h] BYREF
  __int64 v18; // [rsp+98h] [rbp+1Fh] BYREF
  const GUID *v19; // [rsp+A0h] [rbp+27h] BYREF
  char v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v5 = (char *)(a1 + 136);
  if ( a4 == 1 )
  {
    v7 = 2 - (a3 != 0);
    if ( v7 == *v5 )
      return;
  }
  else
  {
    v7 = *v5;
  }
  v8 = MEMORY[0xFFFFF78000000014];
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 404LL);
  if ( (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000000010LL) )
  {
    v10 = (unsigned int)dword_1C013B3F8;
    v20 = *v5;
    v16 = *(_QWORD *)(a1 + 144);
    v15 = *(_DWORD *)(a1 + 180);
    v18 = v14;
    ++dword_1C013B3F8;
    v11 = v7;
    v17 = v8;
    v12 = a4;
    v19 = v9;
    LODWORD(v14) = v10;
    v13 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v10,
      byte_1C00A0F79,
      v9,
      (__int64)v9,
      (__int64)&v13,
      (__int64)&v14,
      (__int64 *)&v19,
      (__int64)&v18,
      (__int64)&v15,
      (__int64)&v12,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v11,
      (__int64)&v20);
  }
  if ( a4 == 1 )
  {
    *(_QWORD *)(a1 + 144) = v8;
    *v5 = v7;
  }
}
