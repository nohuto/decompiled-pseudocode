/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042E80
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163330 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163340 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163350 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163360 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163370 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163380 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180163390 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800438C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r11
  CWin32ApplicationView *v4; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r10
  _QWORD *v15; // r11
  int CanCastTo; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9

  *a3 = 0LL;
  v3 = a3;
  v4 = this;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3)
      || (unsigned int)InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v9) )
    {
      *v9 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      return 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9) )
      {
        *v13 = v14;
        CanCastTo = 0;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, v14 + 8) )
        {
          *v15 = v18;
          CanCastTo = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, v18 + 8) )
        {
          *v15 = v21;
          CanCastTo = 0;
        }
        else if ( *v19 == 480212245
               && v19[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
               && v19[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
               && v19[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
        {
          CanCastTo = 0;
          *v15 = v21 + 8;
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
        {
          if ( (unsigned int)InlineIsEqualGUID(v19, &GUID_00000038_0000_0000_c000_000000000046, v20 + 144) )
          {
            *v15 = v23;
            CanCastTo = 0;
LABEL_30:
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
            return (unsigned int)CanCastTo;
          }
          if ( (unsigned int)InlineIsEqualGUID(v22, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v23 + 8) )
          {
            *v15 = v24;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                          v24 + 8,
                          v25,
                          v15);
          }
        }
      }
      if ( CanCastTo >= 0 )
        goto LABEL_30;
    }
    return (unsigned int)CanCastTo;
  }
  v5 = *((_QWORD *)this + 26);
  while ( v5 >= 0 )
  {
    if ( (_DWORD)v5 == 0x7FFFFFFF )
      goto LABEL_8;
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v5 + 1, v5);
    if ( v6 == v5 )
    {
      *a3 = this;
      return 0LL;
    }
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v5 + 16));
LABEL_8:
  *v3 = v4;
  return 0LL;
}
