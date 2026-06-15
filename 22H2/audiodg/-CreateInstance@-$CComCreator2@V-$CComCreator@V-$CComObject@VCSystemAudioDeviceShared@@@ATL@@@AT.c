/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(0LL, a2, a3);
}
