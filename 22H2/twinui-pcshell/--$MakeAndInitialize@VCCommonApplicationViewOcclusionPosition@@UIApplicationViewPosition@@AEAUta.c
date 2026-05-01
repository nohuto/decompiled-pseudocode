/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802D3D3C
 * Callers:
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E5228 (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004CF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1802D8DF4 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x1802DBED4 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1802E68C0 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagWINDOWPLACEMENT &>(
        void **a1,
        __int128 *a2)
{
  CCommonApplicationViewOcclusionPosition *v4; // rax
  int CanCastTo; // edi
  CCommonApplicationViewOcclusionPosition *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  CCommonApplicationViewOcclusionPosition *v9; // rbx
  struct _GUID *v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // r9
  struct tagWINDOWPLACEMENT v16; // [rsp+20h] [rbp-38h] BYREF
  CCommonApplicationViewOcclusionPosition *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v4);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v17, v6);
    v7 = *a2;
    v8 = a2[1];
    v16.rcNormalPosition.bottom = *((_DWORD *)a2 + 10);
    *(_OWORD *)&v16.length = v7;
    *(_QWORD *)&v7 = *((_QWORD *)a2 + 4);
    v9 = v17;
    *(_OWORD *)&v16.ptMinPosition.y = v8;
    *(_QWORD *)&v16.rcNormalPosition.top = v7;
    CanCastTo = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v17, &v16);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v9;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPosition *))(*(_QWORD *)v9 + 8LL))(v9);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v11, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1)
          || InlineIsEqualGUID(v12, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2)
          || InlineIsEqualGUID(v13, v14) )
        {
          *a1 = v9;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (CCommonApplicationViewOcclusionPosition *)((char *)v9 + 104),
                        v10,
                        a1);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v9,
        (volatile int *)v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
