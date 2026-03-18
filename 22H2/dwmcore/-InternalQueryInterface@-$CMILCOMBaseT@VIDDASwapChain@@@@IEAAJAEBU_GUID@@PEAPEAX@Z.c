/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VIDDASwapChain@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180288074
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@VIDDASwapChain@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180288110 (-QueryInterface@-$CMILCOMBaseT@VIDDASwapChain@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029C7B4 (-QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseT<IDDASwapChain>::InternalQueryInterface(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  int v5; // esi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      if ( a1 )
        v6 = (__int64)a1 + *(int *)(a1[1] + 4LL) + 8;
      *a3 = v6;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 2));
  }
  return (unsigned int)v5;
}
