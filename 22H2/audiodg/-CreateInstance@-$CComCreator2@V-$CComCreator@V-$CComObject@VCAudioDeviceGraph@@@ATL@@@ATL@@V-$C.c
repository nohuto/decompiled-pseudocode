/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance();
}
