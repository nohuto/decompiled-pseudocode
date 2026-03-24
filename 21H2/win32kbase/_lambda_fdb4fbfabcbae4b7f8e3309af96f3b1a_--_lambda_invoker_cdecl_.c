/*
 * XREFs of _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C0089920
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004CFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0089970 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_(
        struct RawInputManagerDeviceObject *a1,
        int a2)
{
  int v2; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 == 2 )
      InputExtensibilityCallout::CoreMsgSendMessage((__int64)a1, 0);
  }
  else
  {
    CDeviceIdentity::SendNewIdentityCreated(a1, a1);
  }
}
