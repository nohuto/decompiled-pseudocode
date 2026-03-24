/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C025B6A4
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C025A394 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1C02598D4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  const char *v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 22);
  v5 = 0LL;
  if ( v4 )
  {
    a4 = *((_QWORD *)this + 10);
    while ( *(_WORD *)(a4 + 8 * v5) != a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_5;
    }
    *(_WORD *)(a4 + 8 * v5 + 2) = a3;
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_1C032B2C0 > 4 )
    {
      v9 = a2;
      v7 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
      v8 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)this,
        byte_1C02F4B6C,
        a3,
        a4,
        (void **)&v7,
        (__int64)&v9,
        (__int64)&v8);
    }
    return 3221226021LL;
  }
}
