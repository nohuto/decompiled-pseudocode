/*
 * XREFs of ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A588C
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01A4058 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall InputTraceLogging::RIM::StartFrameFromContainer(
        struct RIMDEV *const a1,
        const struct RIMCOMPLETEFRAME *a2)
{
  bool v2; // al
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 )
  {
    v2 = tlgKeywordOn((__int64)&dword_1C028EE70, 256LL);
    v5 = 0LL;
    if ( v2 )
    {
      if ( v3 )
      {
        v6 = *(_QWORD *)(v3 + 464);
        v10 = *(unsigned __int16 *)(v6 + 18);
        v5 = *(unsigned __int16 *)(v6 + 16);
      }
      else
      {
        v10 = 0;
      }
      v12 = *(_DWORD *)(v4 + 196);
      v7 = *(_DWORD *)(v4 + 24);
      v8 = *(_QWORD *)(v4 + 48);
      v11 = v5;
      v9 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C028EE70,
        byte_1C025E589,
        v5,
        v3,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
