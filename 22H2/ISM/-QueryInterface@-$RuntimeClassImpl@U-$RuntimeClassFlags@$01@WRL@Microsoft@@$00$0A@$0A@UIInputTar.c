/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputSiteTarget@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002280
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputSiteTarget@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D2A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D2A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputTarget,IInputSiteTarget>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // r9d

  v3 = 0;
  *a3 = 0LL;
  v4 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || v4 == -1786336208
    && a2[1] == *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data2
    && a2[2] == *(_DWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4
    && a2[3] == *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4[4]
    || (a1 += 8LL, v4 == 1822514047)
    && a2[1] == *(_DWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data2
    && a2[2] == *(_DWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4
    && a2[3] == *(_DWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
