/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00CD124
 * Callers:
 *     CoreMsgInitialize @ 0x1C00CD050 (CoreMsgInitialize.c)
 * Callees:
 *     CoreUICallComputeMaximumMessageSize @ 0x1C00AE174 (CoreUICallComputeMaximumMessageSize.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::RegistrarClient::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // r9
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = &CoreMessagingK::SendHost::s_Vtbl;
  v4 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v13,
         (const unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x1Du,
         a4,
         v7,
         v9,
         &v11);
  if ( v4 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v4, 0LL);
  if ( v11 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v11, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = v11;
  v6 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v13,
         (const unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x23u,
         v5,
         v8,
         v10,
         &v12);
  if ( v6 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v6, 0LL);
  if ( v12 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v12, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = v12;
}
