/*
 * XREFs of RIMSetDeviceInputMode @ 0x1C00BC07C
 * Callers:
 *     _lambda_1fab3903b5a8bfcd713af340c69f2789_::operator() @ 0x1C00DF4BC (_lambda_1fab3903b5a8bfcd713af340c69f2789_--operator().c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01E2690 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     RIMIsWakeCapableDevice @ 0x1C00BBEF0 (RIMIsWakeCapableDevice.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00BC380 (RIMUpdateDeviceForInputMode.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00EE9F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C019FE1C (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C01BFB10 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(struct RIMDEV *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v5 = InputTraceLogging::InputModeToString(a2);
    v6 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v6,
      (__int64)&v5);
  }
  if ( a2 == 1 || a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice((__int64)a1) )
    rimInvalidateInputs(a1);
  result = RIMUpdateDeviceForInputMode(a1, a2);
  *((_DWORD *)a1 + 330) = a2;
  return result;
}
