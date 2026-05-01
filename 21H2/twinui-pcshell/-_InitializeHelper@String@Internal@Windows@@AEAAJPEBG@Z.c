/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800244C0
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180021C00 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180024468 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180024670 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180062B00 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180340960 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rax
  HRESULT v4; // ebx
  HSTRING v5; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  string = 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 > 0xFFFFFFFF )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v4 = WindowsCreateString(a2, v2, &string);
    if ( v4 >= 0 )
    {
      v5 = *this;
      *this = string;
      WindowsDeleteString(v5);
    }
  }
  return (unsigned int)v4;
}
