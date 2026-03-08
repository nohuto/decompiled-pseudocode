/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C00A2DF8
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C00A206C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A21C0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C006AE20 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C00AB580 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017D8AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  void *v1; // rsi
  CInputSink *v3; // rdi
  int v4; // r8d
  int v5; // r9d
  CInputSink *v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (void *)*((_QWORD *)this + 33);
  if ( v1 )
  {
    v6 = 0LL;
    if ( (int)CompositionInputObject::LockForWrite(v1, &v6) >= 0 )
    {
      v3 = v6;
      if ( *((_QWORD *)v6 + 10) )
        *((_QWORD *)v6 + 10) = 0LL;
      if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
      {
        v6 = 0LL;
        v7 = v1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1C02CA7E0,
          (unsigned int)&unk_1C029E9F8,
          v4,
          v5,
          (__int64)&v7,
          (__int64)&v6);
      }
      CInputSink::UnlockAndRelease(v3);
    }
    ObfDereferenceObject(*((PVOID *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
}
