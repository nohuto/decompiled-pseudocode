void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGDEVICE *VidPnSourceOwner; // rsi
  char v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  DXGADAPTER *v9; // rcx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v11; // rdx
  unsigned __int8 v12; // di
  bool v13; // bl
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r8d
  struct COREDEVICEACCESS *v17; // r9
  int v18; // r8d
  int v19; // eax
  int VidPnSourceOwnerType; // eax
  __int64 v21; // rbx

  VidPnSourceOwner = a2;
  v6 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3412LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice != NULL", 3412LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
  {
    v7 = (__int64)a3 + 48;
    if ( *(_QWORD *)v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = 48LL;
  }
  WdLogSingleEntry1(1LL, 3413LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"(pDxgAllocation != NULL) && (pDxgAllocation->m_pAllocation != NULL)",
    3413LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_5:
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 3) == 0 )
  {
    WdLogSingleEntry1(1LL, 3414LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary || pDxgAllocation->m_pAllocation->m_Primary",
      3414LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3415LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3415LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3416LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3416LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (*(_DWORD *)(*(_QWORD *)v7 + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v8 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3419LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3419LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL);
  if ( *((DXGADAPTER **)VidPnSourceOwner + 235) == v9 && (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(v9);
    v11 = *((_QWORD *)VidPnSourceOwner + 2);
    v12 = IsLegacyDisplayStateSynchronization;
    if ( *(int *)(*(_QWORD *)(v11 + 16) + 2820LL) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, (PERESOURCE **)v11);
    }
    else
    {
      v13 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) + v8 + 310) & 0x200) != 0 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8);
        if ( VidPnSourceOwnerType == 3 && (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 2) != 0 )
        {
          v6 = 1;
          v13 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) == VidPnSourceOwner )
        {
          v13 = 1;
        }
      }
      else
      {
        v13 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v8, 0) == *(struct DXGADAPTERALLOCATION **)v7;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
      {
        if ( v12 )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8u, v8, 0);
        }
        else
        {
          v14 = 0;
          if ( v13 )
            v14 = 1 << v8;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v8,
            0LL,
            v14,
            0);
        }
      }
      if ( v13 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 736LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 744LL),
               (unsigned int)v8) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8, v18);
        v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v8, 0, 2, 0);
        if ( v19 < 0 )
        {
          v21 = v19;
          WdLogSingleEntry3(2LL, (unsigned int)v8, this[2], v19);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
            (unsigned int)v8,
            (__int64)this[2],
            v21,
            0LL,
            0LL);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 116) == 2 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 2) == 0 )
        {
          WdLogSingleEntry1(1LL, 3550LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_CddPrimary",
            3550LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !*(_QWORD *)(*(_QWORD *)v7 + 8LL) )
        {
          WdLogSingleEntry1(1LL, 3551LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDxgAllocation->m_pAllocation->m_hVidMmAllocation != NULL",
            3551LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 760LL) + 8LL)
                                               + 184LL))(
          *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 768LL),
          *(_QWORD *)(*(_QWORD *)v7 + 8LL));
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) |= 0x10u;
        if ( v6 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8);
      }
      v15 = *((_DWORD *)VidPnSourceOwner + 116);
      if ( v15 != 2 )
      {
        if ( v15 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v8);
          if ( *(int *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2820LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v8, v16, v17);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v8);
        }
      }
    }
  }
}
