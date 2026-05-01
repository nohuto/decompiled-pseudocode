/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003680
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AD90 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ADA0 (-QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ADB0 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ADC0 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ADD0 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800037A0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800037D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        Windows::System::CMemoryManager **a3)
{
  unsigned int v3; // ebx
  Windows::System::CMemoryManager *v4; // r10
  const struct _GUID *v5; // rcx
  const struct _GUID *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r10
  const struct _GUID *v9; // rcx
  __int64 v10; // r10
  const struct _GUID *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r10
  int CanCastTo; // eax
  void (*v16)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  v4 = this;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || (unsigned int)InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v4;
    v16 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    goto LABEL_12;
  }
  if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *(_QWORD *)v7 = v8;
    goto LABEL_11;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *(_QWORD *)v7 = v10;
    CanCastTo = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *(_QWORD *)v7 = v12;
      CanCastTo = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    {
      *(_QWORD *)v7 = v14;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
                    v14 + 8,
                    v13,
                    v7);
      if ( CanCastTo != -2147467262 )
        goto LABEL_10;
    }
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
LABEL_10:
  v3 = CanCastTo;
  if ( CanCastTo >= 0 )
  {
LABEL_11:
    v16 = *(void (**)(void))(**(_QWORD **)v7 + 8LL);
LABEL_12:
    v16();
  }
  return v3;
}
