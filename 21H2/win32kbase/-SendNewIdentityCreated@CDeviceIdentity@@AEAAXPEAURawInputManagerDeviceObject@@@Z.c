/*
 * XREFs of ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B60C8
 * Callers:
 *     _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C0097210 (_lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_--_lambda_invoker_cdecl_.c)
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C00B60A0 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C00B614C (GetKnownRIMDeviceKind.c)
 */

void __fastcall CDeviceIdentity::SendNewIdentityCreated(CDeviceIdentity *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9

  if ( (unsigned int)GetKnownRIMDeviceKind((char *)a2 + 88) - 1 > 1 )
    v2 = *(_QWORD *)(v3 + 544);
  InputExtensibilityCallout::CoreMsgSendMessage(v2, 0);
}
