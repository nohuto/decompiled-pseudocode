/*
 * XREFs of ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x18002BBB8
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18002BAB0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023AE9C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD3DPixelShader::Initialize(
        CD3DPixelShader *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11PixelShader *a4)
{
  char *v4; // rax
  char **v7; // rdx
  char *v8; // rcx
  unsigned int v10; // eax

  *((_DWORD *)this + 20) = a3;
  v4 = (char *)a2 + 32;
  *((_BYTE *)this + 86) = 1;
  *((_QWORD *)this + 2) = a2;
  v7 = (char **)*((_QWORD *)a2 + 5);
  v8 = (char *)this + 40;
  if ( *v7 != v4 )
    __fastfail(3u);
  *(_QWORD *)v8 = v4;
  *((_QWORD *)v8 + 1) = v7;
  *v7 = v8;
  *((_QWORD *)v4 + 1) = v8;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 24LL))((char *)this + 24) )
    *((_BYTE *)this + 85) = 1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 84) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 85) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 20);
  v10 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v10 )
    *((_DWORD *)a2 + 13) = v10;
  *((_QWORD *)this + 14) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))a4->lpVtbl->AddRef)(a4);
  return 0LL;
}
