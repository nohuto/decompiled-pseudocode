/*
 * XREFs of ?Release@CCompSwapChain@@UEAAKXZ @ 0x18029B628
 * Callers:
 *     ?Release@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ @ 0x18011BEF0 (-Release@CCompSwapChain@@$4PPPPPPPM@A@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::Release(CCompSwapChain *this)
{
  char *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rdx

  v1 = (char *)this - 392;
  v2 = (volatile signed __int32 *)((char *)this - 376);
  v3 = _InterlockedDecrement(v2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CCompSwapChain *)((char *)this - 376));
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 88LL))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)v1;
      --*v2;
      (*(void (__fastcall **)(char *, __int64))(v4 + 80))(v1, 1LL);
    }
  }
  return v3;
}
