/*
 * XREFs of ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x1802981C0
 * Callers:
 *     ?SetDisplayId@CLegacySwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z @ 0x18011BA30 (-SetDisplayId@CLegacySwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z.c)
 *     ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z @ 0x18029CFCC (-SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z.c)
 *     ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z @ 0x18029F5F4 (-SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::SetDisplayId(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 - 336) != a2 )
  {
    *(_DWORD *)(a1 - 336) = a2;
    v2 = *(_QWORD *)(a1 - 304);
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
  }
  return result;
}
