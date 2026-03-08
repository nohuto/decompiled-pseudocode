/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C033A3A4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C01CA530 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01CA6CC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02B8374 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // r14
  DXGADAPTER **v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v12; // r14d
  __int64 v13; // r15
  int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // rsi
  char *v17; // r12
  int v18; // esi
  _BYTE *Pool2; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-E0h]
  __int128 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[14]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v32[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v33; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 235) + 2920LL);
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 9732LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 9732LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 9733LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9733LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    WdLogSingleEntry1(1LL, 9734LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
      9734LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)this + v7 + 83);
  v10 = v7;
  if ( v9 && *((_DWORD *)this + 116) == 1 )
  {
    if ( (*(_DWORD *)(v9 + 4) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 9743LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
        9743LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 83) + 24LL) + 16LL) )
    {
      WdLogSingleEntry1(1LL, 9744LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
        9744LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v7 + 83) + 24LL) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v7 + 83) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle((ADAPTER_DISPLAY *)v8, v7);
    v12 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v28 = 0LL;
      DWORD1(v28) = CddPrimaryShareResourceHandle;
      v29 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v28,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v13 = DWORD1(v29);
        v14 = DWORD2(v29);
        v15 = DWORD1(v29) + DWORD2(v29);
        if ( (unsigned int)(DWORD1(v29) + DWORD2(v29)) >= DWORD1(v29) )
        {
          v16 = v15;
          v17 = (char *)operator new[](v15, 0x4B677844u, 256LL);
          if ( v17 )
          {
            memset(v30, 0, 0x48uLL);
            P = 0LL;
            v33 = 0;
            v18 = HIDWORD(v29);
            if ( HIDWORD(v29) <= 4 )
            {
              Pool2 = v32;
              P = v32;
              if ( HIDWORD(v29) )
              {
                memset(v32, 0, 80LL * HIDWORD(v29));
                Pool2 = P;
              }
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v29) < 0x50 )
                goto LABEL_27;
              Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v29), 1265072196LL);
              P = Pool2;
            }
            v33 = v18;
            if ( !Pool2 )
            {
LABEL_27:
              WdLogSingleEntry1(6LL, 9785LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
                9785LL,
                0LL,
                0LL,
                0LL,
                0LL);
              operator delete(v17);
              if ( P != v32 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
              }
              return 0LL;
            }
            HIDWORD(v30[0]) = v12;
            LODWORD(v30[1]) = v18;
            v30[2] = Pool2;
            if ( v14 )
              v30[5] = &v17[v13];
            else
              v30[5] = 0LL;
            LODWORD(v30[6]) = v14;
            v30[7] = v17;
            LODWORD(v30[8]) = v13;
            if ( (_DWORD)v29 )
            {
              WdLogSingleEntry1(1LL, 9807LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"QueryResInfo.PrivateRuntimeDataSize == 0",
                9807LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v12 = HIDWORD(v30[0]);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v30,
                        v12,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              WdLogSingleEntry2(4LL, this, v10);
            }
            else
            {
              *((_BYTE *)this + v10 + 648) = 1;
              if ( !*((_QWORD *)this + v10 + 83) )
              {
                WdLogSingleEntry1(1LL, 9818LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pCddPrimaryResource[nOutput]",
                  9818LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            operator delete(v17);
            if ( P != v32 && P )
              ExFreePoolWithTag(P, 0);
          }
          else
          {
            WdLogSingleEntry2(6LL, this, v16);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Device 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
              (__int64)this,
              v16,
              0LL,
              0LL,
              0LL);
          }
          v4 = a4;
        }
        v5 = a3;
      }
    }
  }
  v21 = *((_QWORD *)this + v10 + 83);
  if ( !v21 )
    return 0LL;
  if ( (*(_DWORD *)(v21 + 4) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 9838LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
      9838LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v10 + 83) + 24LL) + 16LL) )
  {
    WdLogSingleEntry1(1LL, 9839LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
      9839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
  {
    memset(v30, 0, 0x68uLL);
    v22 = (_QWORD *)*((_QWORD *)this + 2);
    v30[7] = 1LL;
    LOBYTE(v25) = 0;
    v30[2] = *(_QWORD *)(v22[2] + 2768LL);
    v23 = *((_QWORD *)this + v10 + 83);
    v30[3] = *(_QWORD *)(v22[2] + 2776LL);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(v22[95] + 8LL) + 792LL))(
            v22[96],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v23 + 24) + 24LL),
            v30,
            v25,
            v4);
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(3LL, v24);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v10 + 83) + 24LL) + 16LL);
}
