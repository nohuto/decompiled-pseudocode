/*
 * XREFs of ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z @ 0x1C02FEE80
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02FEFE0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@G@@33333333@Z @ 0x1C004BE0C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTem.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        const unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v7; // rcx
  void *v8; // r9
  __int64 *v9; // r10
  __int64 v10; // r11
  char *v11; // rdx
  __int64 v12; // [rsp+80h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp-11h] BYREF
  __int64 v14; // [rsp+90h] [rbp-9h] BYREF
  __int64 v15; // [rsp+98h] [rbp-1h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+1Fh] BYREF
  void *v20; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000002000LL) )
    {
      v11 = (char *)this + 4720 * a5;
      v12 = 50331648LL;
      v20 = v8;
      v22 = v10;
      v23 = 16LL;
      v13 = *(unsigned int *)&v11[72 * a6 + 176];
      v14 = *(unsigned int *)&v11[72 * a6 + 168];
      v15 = *(_QWORD *)&v11[72 * a6 + 160];
      v16 = *(_QWORD *)&v11[72 * a6 + 152];
      v17 = *(unsigned int *)&v11[72 * a6 + 148];
      v18 = *(_QWORD *)&v11[72 * a6 + 136];
      v19 = *(_QWORD *)&v11[72 * a6 + 128];
      v21 = *v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_1C009E4E3,
        9LL * a6,
        (__int64)v8,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        &v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
