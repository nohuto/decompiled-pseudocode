__int64 __fastcall CShaderCache::AddLinkedShader(__int64 a1, _OWORD *a2, volatile signed __int32 *a3)
{
  bool v6; // di
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a3 + 2));
  v6 = (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                       a1,
                       a2,
                       (__int64 *)&v9) == 0;
  if ( a3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(a3);
  if ( !v6 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadercache.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
