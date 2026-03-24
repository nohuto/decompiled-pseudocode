/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C007331C
 * Callers:
 *     CoreMsgInitialize @ 0x1C0074028 (CoreMsgInitialize.c)
 * Callees:
 *     CoreUICallComputeMaximumMessageSize @ 0x1C00983D0 (CoreUICallComputeMaximumMessageSize.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FF1F4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void CoreMessagingK::RegistrarClient::Initialize(void)
{
  int v0; // eax
  int v1; // eax
  void *v2; // [rsp+60h] [rbp+18h] BYREF

  v2 = &CoreMessagingK::SendHost::s_Vtbl;
  v0 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v2,
         (unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x22u);
  if ( v0 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v0, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = 0;
  v1 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v2,
         (unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x27u);
  if ( v1 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v1, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = 0;
}
