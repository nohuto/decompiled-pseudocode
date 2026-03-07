__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        ADAPTER_DISPLAY **a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  CCD_BTL_ACTIVE_PATHS_COLLECTOR *v7; // rbx
  unsigned __int16 v8; // r12
  __int64 v9; // rcx
  int v10; // eax
  bool IsCoreResourceSharedOwner; // al
  unsigned int v12; // edx
  ADAPTER_DISPLAY *v13; // r15
  DXGMONITOR *v14; // rbx
  char IsVirtualModeSupportDisabled; // di
  bool v16; // r9
  bool v17; // r14
  char v18; // r8
  int v19; // edi
  char v20; // dl
  unsigned int *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r15
  DXGMONITOR *v24; // rbx
  __int64 v25; // rax
  __int64 v27; // rcx
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // xmm0_8
  DMMVIDPNSOURCEMODE *v31; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v33; // xmm1
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v34; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v36; // r9
  __int64 v37; // r8
  int v38; // eax
  struct _LUID v39; // rcx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v41; // r9
  int v42; // [rsp+20h] [rbp-58h]
  int v43; // [rsp+28h] [rbp-50h]
  int v44; // [rsp+30h] [rbp-48h]
  _BYTE v45[20]; // [rsp+64h] [rbp-14h] BYREF
  DXGMONITOR *v48; // [rsp+D0h] [rbp+58h] BYREF
  char v49; // [rsp+D8h] [rbp+60h]

  v49 = a4;
  v7 = this;
  if ( (*(_BYTE *)(*(_QWORD *)this + 84LL) & 5) == 5 )
  {
    WdLogSingleEntry0(1LL);
    a4 = v49;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v10 = *(_DWORD *)(*(_QWORD *)v7 + 84LL);
  if ( *(_DWORD *)(v9 + 92) )
  {
    if ( (v10 & 5) == 0 || (v10 & 4) != 0 && !*(_QWORD *)(v9 + 544) )
      return 0LL;
  }
  else if ( (v10 & 4) != 0 )
  {
    return 0LL;
  }
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNTARGET **)a3) )
  {
    WdLogSingleEntry5(
      1LL,
      *((int *)a2 + 102),
      *((unsigned int *)a2 + 101),
      *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
      *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    return 0LL;
  }
  ++*((_WORD *)v7 + 4);
  LOBYTE(v48) = 0;
  v45[0] = 0;
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2);
  v12 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( IsCoreResourceSharedOwner )
  {
    if ( a2 && v12 != -1 )
    {
      v13 = a2[365];
      if ( v13 )
      {
        MONITOR_MGR::AcquireMonitorShared(&v48, (__int64)a2, v12);
        v14 = v48;
        if ( v48 )
        {
          if ( *((_DWORD *)v48 + 78) != 1 )
            WdLogSingleEntry0(1LL);
          IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v14);
          ExReleaseResourceLite((PERESOURCE)((char *)v14 + 24));
          KeLeaveCriticalRegion();
          if ( IsVirtualModeSupportDisabled )
          {
            v16 = 1;
            LOBYTE(v48) = 1;
            v17 = 1;
LABEL_16:
            if ( v17 || (v18 = 0, (*((_DWORD *)v13 + 6) & 0x20) == 0) )
              v18 = 1;
            v7 = this;
            v19 = 0;
            goto LABEL_20;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, -1073741632LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v48);
        }
        v16 = *((_BYTE *)v13 + 290) == 0;
        v17 = *((_BYTE *)v13 + 289) == 0;
        LOBYTE(v48) = v17;
        goto LABEL_16;
      }
      WdLogSingleEntry1(2LL, 9698LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The selected adapter is render-only",
        9698LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = 0;
    v19 = -1073741811;
    v18 = 0;
LABEL_20:
    v20 = (char)v48;
    v21 = (unsigned int *)a2 + 101;
    *(_QWORD *)&v45[4] = (char *)a2 + 404;
    goto LABEL_21;
  }
  v21 = (unsigned int *)a2 + 101;
  v39 = *(struct _LUID *)((char *)a2 + 404);
  *(_QWORD *)&v45[4] = (char *)a2 + 404;
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(v39, v12, (__int64)v45, 0LL, 0LL, 0LL);
  v20 = 0;
  v19 = IsVirtualizationDisabledForTarget;
  v16 = 0;
  v18 = v45[0];
LABEL_21:
  if ( v19 >= 0 )
  {
    v22 = *((_QWORD *)a3 + 12);
    v23 = *(_QWORD *)v7;
    v48 = 0LL;
    LOBYTE(v44) = v18 == 0;
    LOBYTE(v43) = !v16;
    LOBYTE(v42) = v20 == 0;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         v23,
                         *(_QWORD *)&v45[4],
                         *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(unsigned int *)(v22 + 24),
                         v42,
                         v43,
                         v44,
                         *(_DWORD *)(*(_QWORD *)(v22 + 96) + 80LL),
                         *(_DWORD *)(*(_QWORD *)(v22 + 96) + 84LL),
                         *(_DWORD *)(*(_QWORD *)(v22 + 96) + 92LL),
                         &v48) == -1073741789 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v41 )
        v8 = *(_WORD *)(v41 + 22);
      WdLogSingleEntry5(3LL, this, *(_QWORD *)this, v41, v8, *((unsigned __int16 *)this + 4));
    }
    else
    {
      v24 = v48;
      *((_DWORD *)v48 + 69) = *((unsigned __int16 *)a3 + 54);
      *((_DWORD *)v24 + 22) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *((_DWORD *)v24 + 23) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      v25 = *(_QWORD *)v24 | 0x800000000000LL;
      *(_QWORD *)v24 = v25;
      if ( v49 )
      {
        *(_QWORD *)v24 = v25 | 0x8000000000000000uLL;
        *(_QWORD *)v24 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceActive(a2[365], *((_DWORD *)v24 + 6)) != 0) & 0x20000000000LL;
        *(_QWORD *)v24 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(a2[365], *((_DWORD *)v24 + 6)) != 0) & 0x80000000000LL;
        *(_QWORD *)&v45[4] = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 12));
        v27 = *(_QWORD *)(*(_QWORD *)&v45[4] + 144LL);
        if ( v27 )
        {
          v28 = *(_OWORD *)(v27 + 88);
          v29 = *(_OWORD *)(v27 + 104);
          v30 = *(_QWORD *)(v27 + 120);
          *((_OWORD *)v24 + 2) = *(_OWORD *)(v27 + 72);
          *((_OWORD *)v24 + 3) = v28;
          *((_OWORD *)v24 + 4) = v29;
          *((_QWORD *)v24 + 10) = v30;
          *(_QWORD *)v24 |= 0x87uLL;
          *((_DWORD *)v24 + 51) = *(_DWORD *)(v27 + 132);
          *((_DWORD *)v24 + 52) = *(_DWORD *)(v27 + 136);
          *(_QWORD *)v24 |= 8uLL;
          *((_QWORD *)v24 + 28) = *(_QWORD *)(v27 + 152);
          *((_QWORD *)v24 + 29) = *(_QWORD *)(v27 + 144);
          *((_DWORD *)v24 + 60) = *(_DWORD *)(v27 + 160);
          *(_QWORD *)v24 |= 0x801000000uLL;
        }
        else
        {
          *((_DWORD *)v24 + 51) = 0;
          *((_DWORD *)v24 + 52) = 4;
        }
        v48 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 11));
        v31 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v48 + 18);
        if ( v31 )
        {
          *((_BYTE *)v24 + 128) = (unsigned int)(*((_DWORD *)v31 + 18) - 3) <= 1;
          GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v31);
          v33 = *(_OWORD *)&GraphicsInfo->Stride;
          *((_OWORD *)v24 + 6) = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
          *((_OWORD *)v24 + 7) = v33;
          *(_QWORD *)v24 |= 0x100uLL;
          v34 = *((_DWORD *)a3 + 29);
          *((_DWORD *)v24 + 33) = v34;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *((_DWORD *)v24 + 33) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                      a2[365],
                                      v34,
                                      *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *((_DWORD *)v24 + 34) = *((_DWORD *)a3 + 28);
          *(_QWORD *)v24 |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a2[365], *((_DWORD *)v24 + 6));
            *((_QWORD *)v24 + 35) = SessionViewOwner;
            if ( SessionViewOwner )
            {
              v36 = 4000LL * *((unsigned int *)v24 + 6);
              v37 = *((_QWORD *)a2[365] + 16);
              *((_DWORD *)v24 + 38) = *((_DWORD *)SessionViewOwner + 8) - *((_DWORD *)SessionViewOwner + 6);
              *((_DWORD *)v24 + 39) = *((_DWORD *)SessionViewOwner + 9) - *((_DWORD *)SessionViewOwner + 7);
              *((_DWORD *)v24 + 36) = *((_DWORD *)SessionViewOwner + 6);
              *((_DWORD *)v24 + 37) = *((_DWORD *)SessionViewOwner + 7);
              *((_DWORD *)v24 + 42) = *(_DWORD *)(v36 + v37 + 688);
              *((_DWORD *)v24 + 44) = *(_DWORD *)(v36 + v37 + 696);
              *((_DWORD *)v24 + 43) = *(_DWORD *)(v36 + v37 + 692);
              *((_DWORD *)v24 + 45) = *(_DWORD *)(v36 + v37 + 700);
              *(_QWORD *)v24 |= 0x820800uLL;
              *(_QWORD *)((char *)v24 + 196) = *((_QWORD *)SessionViewOwner + 8);
            }
            *((_DWORD *)v24 + 54) = *(_DWORD *)(4000LL * *((unsigned int *)v24 + 6) + *((_QWORD *)a2[365] + 16) + 3780);
            *(_QWORD *)v24 |= 0x1000000000000uLL;
            v38 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 536LL) + 168LL);
            if ( v38 == 12 )
            {
              *((_DWORD *)v24 + 48) = 259;
            }
            else if ( v38 == 13 )
            {
              *((_DWORD *)v24 + 48) = -1073741437;
            }
          }
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v48, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45[4], 0LL);
      }
    }
    return 0LL;
  }
  WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL), *((int *)a2 + 102), *v21);
  return (unsigned int)v19;
}
