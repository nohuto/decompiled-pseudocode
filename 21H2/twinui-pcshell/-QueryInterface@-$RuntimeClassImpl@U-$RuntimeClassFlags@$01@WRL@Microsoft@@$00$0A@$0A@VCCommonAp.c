/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041AD0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180167CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180167CD0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // r11
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3) )
  {
    *v4 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0LL;
  }
  else
  {
    v8 = *v5;
    if ( *(_QWORD *)v5 == __PAIR64__(*(unsigned int *)&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data2, -1563043002)
      && v5[2] == *(_DWORD *)GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data4
      && v5[3] == *(_DWORD *)&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1.Data4[4]
      || v8 == 1069557117
      && v5[1] == *(_DWORD *)&GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data2
      && v5[2] == *(_DWORD *)GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data4
      && v5[3] == *(_DWORD *)&GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2.Data4[4]
      || v8 == -105327437
      && v5[1] == *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data2
      && v5[2] == *(_DWORD *)GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4
      && v5[3] == *(_DWORD *)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6.Data4[4] )
    {
      *v7 = v6;
      v9 = 0;
    }
    else
    {
      v9 = -2147467262;
    }
    if ( v9 == -2147467262 )
    {
      if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v6 + 104) )
      {
        *v7 = v11;
        v9 = 0;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_00000003_0000_0000_c000_000000000046, v11) )
      {
        *v7 = v12;
        v9 = 0;
      }
    }
    if ( v9 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)v9;
  }
}
