/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18002CA40
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x18002C544 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x18002CB3C (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     CreateInputServiceProxy @ 0x18002D878 (CreateInputServiceProxy.c)
 *     ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18002E560 (-InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v6; // rcx
  int v9; // eax
  __int64 v10; // r8
  int InputServiceProxy; // eax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  int *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_DWORD *)(a1 + 40) = a4;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1 + 48);
  v9 = CoreUICreate(a1 + 48);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
    __debugbreak();
  }
  NonBamoInputDeliveryServer::InitPort((NonBamoInputDeliveryServer *)a1);
  NonBamoInputDeliveryServer::InitConversation((NonBamoInputDeliveryServer *)a1, a3);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    v14 = a1;
    *(_QWORD *)v13 = &off_1801B08E0;
    v15 = v13;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 72, a1 + 48, v10, v13);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1 + 272);
  InputServiceProxy = CreateInputServiceProxy(a1 + 8, a1 + 272);
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v13[0]);
    JUMPOUT(0x18005F142LL);
  }
  return 0LL;
}
