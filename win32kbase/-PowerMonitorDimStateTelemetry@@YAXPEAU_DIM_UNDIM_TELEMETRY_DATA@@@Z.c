/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0086BD0
 * Callers:
 *     PowerDimUndimResend @ 0x1C00108AC (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C0086A40 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C015B728 (PowerDimMonitor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C0086D3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x1C02745A4 (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  char v6; // al
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rbx
  bool v18; // [rsp+60h] [rbp-20h] BYREF
  bool v19[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v20; // [rsp+64h] [rbp-1Ch] BYREF
  int v21; // [rsp+68h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h] BYREF
  char v24; // [rsp+B8h] [rbp+38h] BYREF
  char v25; // [rsp+C0h] [rbp+40h] BYREF
  char v26; // [rsp+C8h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C02C4098 > 5 && tlgKeywordOn((__int64)&dword_1C02C4098, 0x400000000100LL) )
  {
    v5 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3080);
    v18 = HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) != 0;
    v24 = *((_BYTE *)a1 + 6);
    v6 = *((_BYTE *)a1 + 5);
    v19[0] = gProtocolType == 0;
    v25 = v6;
    v26 = *((_BYTE *)a1 + 4);
    v21 = *(_DWORD *)a1;
    v20 = v5;
    v22 = 16779264LL;
    v23 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_1C0294036,
      v7,
      (unsigned int)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v20);
  }
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 792) )
  {
    v16 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 792) = v16;
  }
  v13 = *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 792);
  if ( MEMORY[0xFFFFF78000000008] > v13 )
  {
    v17 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 792) = v17;
    TlgAggregateFlush();
  }
}
