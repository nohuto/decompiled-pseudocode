/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@UIDwmCursorController@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180277380
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseT<IDwmCursorController>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = a1;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
  }
  return (unsigned int)v5;
}
