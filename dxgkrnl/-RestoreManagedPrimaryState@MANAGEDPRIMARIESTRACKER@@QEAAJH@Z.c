/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0178B04
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00032F0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0177ACC (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C78EC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  int v4; // eax
  unsigned int v6; // r14d
  DXGDEVICE *v7; // rbp
  int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbx
  int updated; // eax

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 107LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 107LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v4 & 0xFFFFFFFD;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        WdLogSingleEntry1(1LL, 125LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
          125LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v6 = 0;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v7 = (DXGDEVICE *)*((_QWORD *)this + v6 + 3);
          if ( v7 )
          {
            if ( *((_QWORD *)v7 + 235) != *(_QWORD *)(*(_QWORD *)this + 16LL)
              || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v7 + 2) + 16LL)) )
            {
              WdLogSingleEntry1(1LL, 134LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"(pOwnerDevice == NULL) || ((pOwnerDevice->GetDisplayAdapter(VidPnSourceId) == m_pDisplayCore->G"
                          "etAdapter()) && (pOwnerDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()))",
                134LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v7, v6) )
            {
              if ( *((_BYTE *)this + v6 + 408) )
              {
                v8 = *((_DWORD *)this + v6 + 86);
                if ( (v8 & 0x200) != 0 )
                {
                  v9 = *((_QWORD *)this + v6 + 19);
                  if ( v9 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 48) + 4LL) & 1) != 0 )
                    {
                      if ( (v8 & 0x100) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 157LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_PrimaryDescription[VidPnSourceId].Pinned",
                          157LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v6)
                        || (*((_DWORD *)v7 + v6 + 310) & 0x300) != 0x300 )
                      {
                        v10 = DXGDEVICE::PinPrimaryAllocations(v7, v6);
                        if ( v10 >= 0 )
                        {
                          updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                      *(ADAPTER_DISPLAY **)this,
                                      v7,
                                      v6,
                                      *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v6 + 19) + 48LL));
                          if ( updated < 0 )
                          {
                            v12 = updated;
                            WdLogSingleEntry4(
                              2LL,
                              updated,
                              *(_QWORD *)(*(_QWORD *)this + 16LL),
                              v6,
                              *((_QWORD *)this + v6 + 19));
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Status=0x%I64x Adapter 0x%I64x: UpdateModeWithPrimary failed 0x%I64x 0x%I64x",
                              v12,
                              *(_QWORD *)(*(_QWORD *)this + 16LL),
                              v6,
                              *((_QWORD *)this + v6 + 19),
                              0LL);
                          }
                          else
                          {
                            DXGDEVICE::SetDisplayedPrimary(
                              v7,
                              v6,
                              *((const struct DXGALLOCATION **)this + v6 + 19),
                              *((_DWORD *)this + v6 + 70),
                              1u);
                            *((_DWORD *)v7 + v6 + 310) |= 0x200u;
                          }
                        }
                        else
                        {
                          v11 = v10;
                          WdLogSingleEntry3(2LL, v10, v7, v6);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Status=0x%I64x Device 0x%I64x: PinPrimaryAllocations failed 0x%I64x",
                            v11,
                            (__int64)v7,
                            v6,
                            0LL,
                            0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ++v6;
        }
        while ( v6 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
