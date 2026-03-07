void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned int v4; // r12d
  unsigned __int8 v5; // bl
  __int64 v9; // rdx
  int *v10; // rcx
  char v11; // r13
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  unsigned int v13; // ebx
  unsigned int i; // ebp
  int v15; // edi
  unsigned int j; // ebp
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rbx
  int v20; // r8d
  struct COREDEVICEACCESS *v21; // r9

  v4 = 0;
  v5 = a4;
  if ( !a2 || *((_DWORD *)a2 + 116) == 2 )
  {
    WdLogSingleEntry1(1LL, 3686LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDevice != NULL) && !pDevice->IsCddDevice()",
      3686LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 3687LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_ALL) || (VidPnSourceId < GetNumVidPnSources())",
      3687LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3688LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 3689LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3689LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  v10 = *(int **)(v9 + 16);
  if ( *((int **)a2 + 235) == v10 )
  {
    if ( v10[705] < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((PERESOURCE **)this, (PERESOURCE **)v9);
    }
    else
    {
      v11 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v10);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 && !v5 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8u, a3, 0);
        }
        else
        {
          v13 = 0;
          for ( i = 0; v13 < *((_DWORD *)this + 24); ++v13 )
          {
            if ( a3 == -3 || v13 == a3 )
            {
              v15 = 1 << v13;
              if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v13) == a2 )
                v4 |= v15;
              i |= v15;
            }
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), i, 0LL, v4, 0);
          v5 = a4;
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 24); ++j )
      {
        if ( a3 == -3 || j == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, j) == a2 )
          {
            if ( !v11 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 200LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j);
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 744LL),
                     j) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), j, v17);
              v11 = 1;
            }
            v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, j, 0, 8, v5);
            if ( v18 < 0 )
            {
              v19 = v18;
              WdLogSingleEntry3(2LL, j, *((_QWORD *)this + 2), v18);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
                j,
                *((_QWORD *)this + 2),
                v19,
                0LL,
                0LL);
            }
          }
          if ( *((_DWORD *)a2 + 116) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, j);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2820LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations(a2, j, v20, v21);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, j);
          }
        }
        v5 = a4;
      }
    }
  }
}
