/*
 * XREFs of ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z @ 0x18029CFCC
 * Callers:
 *     ?SetDisplayId@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z @ 0x18011CAD0 (-SetDisplayId@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x1802981C0 (-SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 - 344) != a2 )
  {
    v4 = *(_QWORD *)(a1 - 80);
    if ( v4 )
    {
      v5 = *(int *)(*(_QWORD *)(v4 + 8) + 24LL) + v4 + 8;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, a2);
    }
    return CLegacySwapChain::SetDisplayId(a1 - 8, a2);
  }
  return result;
}
