/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C031DA20
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C031D8A0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C01E570C (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03CD1E8 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03CEB9C (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r14
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v12; // xmm2
  __int128 v13; // xmm0
  __int64 v14; // rax
  int v15; // ecx
  D3DDDIFORMAT Format; // eax
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  struct _DXGKARG_DESCRIBEALLOCATION v23; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  _DWORD v27[20]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v28; // [rsp+160h] [rbp+60h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    return 3223191814LL;
  }
  if ( !DXGDEVICE::IsVSyncAvailable((DXGDEVICE *)this, (v4 >> 6) & 0xF) )
  {
    WdLogSingleEntry3(4LL, 0LL, this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
    return 0LL;
  }
  memset(v27, 0, sizeof(v27));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v27);
  if ( !v27[8] )
  {
    v7 = -1073741811;
    WdLogSingleEntry4(2LL, -1073741811LL, this, a2, *((unsigned int *)a2 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkpGetDodPrimaryInfo failed for front buffer 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)a2,
      *((unsigned int *)a2 + 4),
      0LL);
    return v7;
  }
  v8 = *((_QWORD *)a2 + 6);
  v23.Rotation = -1;
  memset(&v23.Width, 0, 32);
  v23.Flags.Value = 1;
  v23.hAllocation = *(HANDLE *)(v8 + 16);
  v9 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v23, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry5(2LL, v9, this, a2, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, *((unsigned int *)a2 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
      v10,
      (__int64)this,
      (__int64)a2,
      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
      *((unsigned int *)a2 + 4));
    return (unsigned int)v10;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((ADAPTER_DISPLAY **)this[235] + 365),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v12 = *(_OWORD *)DisplayModeInfo;
  v13 = *((_OWORD *)DisplayModeInfo + 1);
  v14 = *(_QWORD *)DisplayModeInfo;
  v25 = v12;
  v26 = v13;
  if ( *(_QWORD *)&v23.Width == v14 && (v23.Rotation == -1 || v23.Rotation == HIDWORD(v26)) )
  {
    v15 = 22;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v23.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v23.Format;
    if ( DWORD2(v25) != 21 )
      v15 = DWORD2(v25);
    if ( Format == v15 )
    {
      memset(v24, 0, sizeof(v24));
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL)
                                                                                                 + 256LL))(
              *((_QWORD *)this[2] + 96),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2LL,
              0,
              0LL,
              &v24[1]);
      v10 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry4(2LL, v17, this, a2, *((unsigned int *)a2 + 4));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: VidMmBeginCPUAccess failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
          v10,
          (__int64)this,
          (__int64)a2,
          *((unsigned int *)a2 + 4),
          0LL);
        return (unsigned int)v10;
      }
      v18 = *((_QWORD *)a2 + 6);
      v28 = 0LL;
      v19 = (*(_DWORD *)(v18 + 4) >> 6) & 0xF;
      LODWORD(v24[0]) = v19;
      if ( v23.Format != D3DDDIFMT_A8R8G8B8 && v23.Format != D3DDDIFMT_X8R8G8B8 )
      {
        v7 = -1073741811;
        WdLogSingleEntry4(2LL, -1073741811LL, this, a2, v23.Format);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: front buffer's format is not supported 0x%I64x 0x%I64x",
          -1073741811LL,
          (__int64)this,
          (__int64)a2,
          v23.Format,
          0LL);
        return v7;
      }
      LODWORD(v24[2]) = 4;
      if ( HIDWORD(v26) != 1 )
      {
        if ( HIDWORD(v26) == 2 )
        {
LABEL_28:
          *((_QWORD *)&v28 + 1) = __PAIR64__(v23.Width, v23.Height);
          v20 = v27[9];
LABEL_30:
          HIDWORD(v24[2]) = v20;
          goto LABEL_31;
        }
        if ( HIDWORD(v26) != 3 )
        {
          if ( HIDWORD(v26) != 4 )
          {
LABEL_31:
            if ( HIDWORD(v26) != 1 )
              LODWORD(v24[3]) |= 1u;
            LODWORD(v24[5]) = 1;
            v24[6] = &v28;
            v21 = *(_QWORD *)(*((_QWORD *)this[235] + 365) + 448LL);
            if ( v21 && v19 < *(_DWORD *)v21 && (v22 = *(_QWORD *)(v21 + 8)) != 0 )
              v7 = BLTQUEUE::PresentDisplayOnly(v22 + 2920LL * v19, v24, 0LL, 1LL);
            else
              v7 = -1073741811;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL)
                                                                           + 264LL))(
              *((_QWORD *)this[2] + 96),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              0LL,
              0LL);
            return v7;
          }
          goto LABEL_28;
        }
      }
      *((_QWORD *)&v28 + 1) = *(_QWORD *)&v23.Width;
      v20 = v27[8];
      goto LABEL_30;
    }
  }
  WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
  return 3223191557LL;
}
