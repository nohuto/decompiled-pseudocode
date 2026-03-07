__int64 __fastcall CCompositingShaderCache::EnsureCache(struct CCompositingShaderCache **a1)
{
  CShaderCache *v1; // rax
  CShaderCache *v3; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = g_spCompositingShaderCache;
  if ( g_spCompositingShaderCache )
    goto LABEL_7;
  v1 = (CShaderCache *)DefaultHeap::Alloc(0x20uLL);
  if ( v1 )
  {
    *((_DWORD *)v1 + 5) = 0;
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_DWORD *)v1 + 4) = 0;
    *((_QWORD *)v1 + 3) = v1;
  }
  v3 = g_spCompositingShaderCache;
  g_spCompositingShaderCache = v1;
  if ( v3 )
  {
    CShaderCache::`scalar deleting destructor'(v3);
    v1 = g_spCompositingShaderCache;
  }
  if ( v1 )
  {
LABEL_7:
    *a1 = v1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\compositingshadercache.cpp",
      (const char *)0x8007000ELL,
      v5);
    return 2147942414LL;
  }
}
