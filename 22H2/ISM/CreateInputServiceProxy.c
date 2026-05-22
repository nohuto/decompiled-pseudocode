/*
 * XREFs of CreateInputServiceProxy @ 0x18002D878
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18002CA40 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x180181BD0 (-Initialize@TapProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x18002D8FC (--$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputServiceProxy(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<InputServiceProxy,IInputServiceProxy,IInputServiceProxyOwner * &>(
         &v10,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v3,
      v7);
  }
  else
  {
    v5 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v5 = v10;
    }
    *a2 = v5;
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
  return v4;
}
