/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18028EB68
 * Callers:
 *     ??0?$RuntimeClass@U?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18028E490 (--0-$RuntimeClass@U-$IIterator@PEAU-$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Founda.c)
 *     ??0?$RuntimeClass@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18028E510 (--0-$RuntimeClass@U-$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U-$IIterabl.c)
 *     ??0?$RuntimeClass@U?$IMapView@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18028E5A0 (--0-$RuntimeClass@U-$IMapView@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U-$IIte.c)
 *     ??0?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@QEAA@Upermission@01234@@Z @ 0x18028E630 (--0-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@Col.c)
 *     ??0?$ValueReference@I@@QEAA@XZ @ 0x18028E6E4 (--0-$ValueReference@I@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  __int64 *v1; // r14
  LPUNKNOWN v3; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)((char *)this + 24);
  *(_QWORD *)this = &Microsoft::WRL::FtmBase::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
      v3,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  return this;
}
