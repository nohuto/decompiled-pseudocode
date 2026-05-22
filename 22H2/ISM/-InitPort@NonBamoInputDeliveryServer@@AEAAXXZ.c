/*
 * XREFs of ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x18002C544
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18002CA40 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180068450 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall NonBamoInputDeliveryServer::InitPort(NonBamoInputDeliveryServer *this)
{
  const char *v2; // r9
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, HLOCAL, char *); // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  hMem = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &hMem,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x59,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v2);
    __debugbreak();
  }
  v3 = *((_QWORD *)this + 6);
  v4 = *(__int64 (__fastcall **)(__int64, HLOCAL, char *))(*(_QWORD *)v3 + 64LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 56);
  v5 = v4(v3, hMem, (char *)this + 56);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5,
      v6);
    JUMPOUT(0x18005EFD8LL);
  }
  LocalFree(hMem);
}
