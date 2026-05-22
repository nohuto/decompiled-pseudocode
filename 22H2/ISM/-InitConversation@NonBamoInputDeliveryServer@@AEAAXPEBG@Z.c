/*
 * XREFs of ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18002E560
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18002CA40 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@$$QEAPEAV4@@Z @ 0x18002E648 (--$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonBamoInputDeliveryServer::InitConversation(
        NonBamoInputDeliveryServer *this,
        const unsigned __int16 *a2)
{
  char *v2; // rsi
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, const unsigned __int16 *, __int64, __int64 *); // rbp
  __int64 v9; // r8
  int v10; // eax
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  NonBamoInputDeliveryServer *v15; // [rsp+90h] [rbp+8h] BYREF

  v2 = (char *)this + 24;
  v15 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer *>(
         v2,
         &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x69,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5,
      v11);
    __debugbreak();
  }
  v6 = *((_QWORD *)this + 6);
  v7 = *((_QWORD *)this + 8);
  v8 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64, __int64 *))(*(_QWORD *)v6 + 288LL);
  if ( v7 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v12 = 0LL;
  v9 = *((_QWORD *)this + 7);
  v13 = 1;
  v10 = v8(v6, a2, v9, &v12);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v10,
      3);
    JUMPOUT(0x18005F8FELL);
  }
}
