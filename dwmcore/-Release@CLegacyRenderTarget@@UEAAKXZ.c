/*
 * XREFs of ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800DE0B0
 * Callers:
 *     ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EJBI@EAAKXZ @ 0x180118E30 (-Release@CLegacyRenderTarget@@$4PPPPPPPM@EJBI@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EJCI@EAAKXZ @ 0x180118E50 (-Release@CLegacyRenderTarget@@$4PPPPPPPM@EJCI@EAAKXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?SetReleasingResources@CThreadContext@@SAX_N@Z @ 0x18007B580 (-SetReleasingResources@CThreadContext@@SAX_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::Release(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rbx
  volatile signed __int32 *v2; // rsi
  unsigned __int32 v3; // edi
  CLegacyRenderTarget *v5; // rsi
  struct CThreadContext *v6; // rcx
  __int64 v7; // rax
  struct CThreadContext *v8; // rax
  __int64 v9; // rcx
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF
  struct CThreadContext *v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CLegacyRenderTarget *)((char *)this + 8));
    (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v1 + 32LL))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      if ( (int)CThreadContext::GetCurrent(&v10) >= 0 && *(_BYTE *)v10 )
      {
        if ( (int)CThreadContext::GetCurrent(&v11) >= 0 )
        {
          v8 = v11;
          v9 = *((_QWORD *)v11 + 2);
          if ( v9 )
          {
            *(_QWORD *)(v9 + 56) = v1;
            *((_QWORD *)v8 + 2) = v1;
          }
          else
          {
            *((_QWORD *)v11 + 2) = v1;
            *((_QWORD *)v8 + 1) = v1;
          }
        }
      }
      else
      {
        CThreadContext::SetReleasingResources(1);
        do
        {
          while ( 1 )
          {
            --*((_DWORD *)v1 + 2);
            (*(void (__fastcall **)(CLegacyRenderTarget *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
            v5 = 0LL;
            if ( (int)CThreadContext::GetCurrent(&v11) < 0 )
              break;
            v6 = v11;
            v5 = (CLegacyRenderTarget *)*((_QWORD *)v11 + 1);
            v1 = v5;
            if ( !v5 )
              break;
            v7 = *((_QWORD *)v5 + 7);
            *((_QWORD *)v11 + 1) = v7;
            if ( v7 )
              break;
            *((_QWORD *)v6 + 2) = 0LL;
          }
          v1 = v5;
        }
        while ( v5 );
        CThreadContext::SetReleasingResources(0);
      }
    }
  }
  return v3;
}
