/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0077B78
 * Callers:
 *     PowerUnDimMonitor @ 0x1C00778C0 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0077A40 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C011A020 (PowerDimMonitor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C01180A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@55554@Z @ 0x1C011824C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x1C0200074 (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1)
{
  int v1; // ecx
  int v2; // r9d
  int *v3; // r10
  char v4; // r11
  char v5; // r8
  int v6; // r8d
  int *v7; // r10
  char v8; // r9
  bool v9; // [rsp+60h] [rbp+17h] BYREF
  char v10; // [rsp+61h] [rbp+18h] BYREF
  char v11; // [rsp+62h] [rbp+19h] BYREF
  char v12; // [rsp+63h] [rbp+1Ah] BYREF
  bool v13; // [rsp+64h] [rbp+1Bh] BYREF
  bool v14[3]; // [rsp+65h] [rbp+1Ch] BYREF
  int v15; // [rsp+68h] [rbp+1Fh] BYREF
  int v16; // [rsp+6Ch] [rbp+23h] BYREF
  int v17; // [rsp+70h] [rbp+27h] BYREF
  int v18; // [rsp+74h] [rbp+2Bh] BYREF
  __int64 v19; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+80h] [rbp+37h] BYREF
  __int64 v21; // [rsp+88h] [rbp+3Fh] BYREF
  char v22; // [rsp+B0h] [rbp+67h] BYREF
  char v23; // [rsp+B8h] [rbp+6Fh] BYREF
  char v24; // [rsp+C0h] [rbp+77h] BYREF
  bool v25; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)a1 + 5) )
  {
    if ( (unsigned int)dword_1C0246378 > 5 && tlgKeywordOn((__int64)&dword_1C0246378, 0x400000000100LL) )
    {
      v5 = *((_BYTE *)v3 + 6);
      LOBYTE(v1) = gfSwitchInProgress != 0;
      LOBYTE(v2) = *((_BYTE *)v3 + 4);
      v15 = dword_1C02521A0;
      v9 = gProtocolType == 0;
      v16 = *v3;
      v22 = v5;
      v23 = v4;
      v24 = v2;
      v25 = gfSwitchInProgress != 0;
      v19 = 16779264LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v1,
        (unsigned int)&unk_1C021939C,
        (_DWORD)v3 + 8,
        v2,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&v9,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v15);
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0246378 > 5 && tlgKeywordOn((__int64)&dword_1C0246378, 0x400000000100LL) )
    {
      v8 = *((_BYTE *)v7 + 4);
      LOBYTE(v6) = gfSwitchInProgress != 0;
      v10 = *((_BYTE *)v7 + 6);
      v14[0] = gProtocolType == 0;
      v18 = *v7;
      v12 = v8;
      v17 = dword_1C02521A0;
      v11 = 0;
      v13 = gfSwitchInProgress != 0;
      v20 = 16779264LL;
      v21 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        dword_1C02521A0,
        (unsigned int)&unk_1C02192C6,
        v6,
        (unsigned int)&v21,
        (__int64)&v20,
        (__int64)&v18,
        (__int64)v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v17);
    }
    if ( (dword_1C0251ED8 & 1) == 0 )
    {
      dword_1C0251ED8 |= 1u;
      qword_1C0251EE0 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    }
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)qword_1C0251EE0 )
    {
      qword_1C0251EE0 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
      TlgAggregateFlush();
    }
  }
}
