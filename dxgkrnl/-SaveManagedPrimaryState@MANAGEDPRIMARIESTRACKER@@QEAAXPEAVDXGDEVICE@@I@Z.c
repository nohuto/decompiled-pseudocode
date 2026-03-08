/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C017B0DC
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v6; // rsi
  int v7; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v9; // rbx
  int v10; // edx
  int v11; // ebx
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 61LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 61LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 64LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
      64LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v7;
  if ( (v7 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v6 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)this, v6) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)this, v6);
        v9 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v6) )
        {
          *((_QWORD *)this + v6 + 3) = VidPnSourceOwner;
          v10 = *((_DWORD *)this + v6 + 86) ^ (*((_DWORD *)this + v6 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner + v6 + 310)) << 8)) & 0x100;
          *((_DWORD *)this + v6 + 86) = v10;
          *((_DWORD *)this + v6 + 86) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v6 + 310) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v6 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v6);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, v9 + 38, 0);
          DXGPUSHLOCK::AcquireExclusive(v13);
          v11 = *((_DWORD *)v9 + v6 + 294);
          v14 = 2;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
          *((_DWORD *)this + v6 + 70) = v11;
          *((_BYTE *)this + v6 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v6);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 4) >> 2 );
  }
}
