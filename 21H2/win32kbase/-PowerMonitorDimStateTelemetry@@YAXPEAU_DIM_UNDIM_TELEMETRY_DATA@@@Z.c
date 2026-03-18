/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C007D730
 * Callers:
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0147D4C (PowerDimMonitor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C007D86C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x1C0241244 (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1)
{
  struct _DIM_UNDIM_TELEMETRY_DATA *v1; // r8
  char v2; // al
  char v3; // al
  bool v4; // [rsp+60h] [rbp-20h] BYREF
  bool v5[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v6; // [rsp+64h] [rbp-1Ch] BYREF
  int v7; // [rsp+68h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp-8h] BYREF
  char v10; // [rsp+98h] [rbp+18h] BYREF
  char v11; // [rsp+A0h] [rbp+20h] BYREF
  char v12; // [rsp+A8h] [rbp+28h] BYREF

  v1 = a1;
  if ( (unsigned int)dword_1C0288378 > 5 && tlgKeywordOn((__int64)&dword_1C0288378, 0x400000000100LL) )
  {
    v6 = dword_1C0296F70;
    v2 = *((_BYTE *)v1 + 6);
    v4 = gfSwitchInProgress != 0;
    v10 = v2;
    v3 = *((_BYTE *)v1 + 5);
    v5[0] = gProtocolType == 0;
    v11 = v3;
    v12 = *((_BYTE *)v1 + 4);
    v7 = *(_DWORD *)v1;
    v8 = 16779264LL;
    v9 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      0,
      (unsigned int)&unk_1C025B048,
      (_DWORD)v1,
      (unsigned int)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)v5,
      (__int64)&v4,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v6);
  }
  if ( (dword_1C0296CA4 & 1) == 0 )
  {
    dword_1C0296CA4 |= 1u;
    qword_1C0296CA8 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
  }
  if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)qword_1C0296CA8 )
  {
    qword_1C0296CA8 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    TlgAggregateFlush(0xFFFFF78000000008uLL, 36000000000LL, v1);
  }
}
