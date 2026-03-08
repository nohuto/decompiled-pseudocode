/*
 * XREFs of ?GetPresentCount@CLegacySwapChain@@UEBAIXZ @ 0x1800DC6E0
 * Callers:
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011B750 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x18011C7D0 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x18011CE90 (-GetPresentCount@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentCount(CLegacySwapChain *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 28);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
    return v3;
  }
  return result;
}
