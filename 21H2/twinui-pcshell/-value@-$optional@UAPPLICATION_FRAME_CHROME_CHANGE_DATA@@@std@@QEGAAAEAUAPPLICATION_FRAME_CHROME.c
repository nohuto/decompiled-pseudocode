/*
 * XREFs of ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x1801C9B50
 * Callers:
 *     _lambda_34e39aef9b6af58545d6992c86a4e9be_::operator() @ 0x18005E410 (_lambda_34e39aef9b6af58545d6992c86a4e9be_--operator().c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C68CC (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(__int64 a1)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 8) )
  {
    pExceptionObject = &std::bad_optional_access::`vftable';
    v3 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return a1;
}
