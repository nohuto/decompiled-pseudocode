/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02F235C
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02F1F88 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E41A0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E43A4 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1C02E64E0 (-GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02F222C (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(VIDPNSOURCEINFO *this, struct DXGALLOCATION *a2)
{
  DXGDEVICE *v2; // r14
  struct DXGCONTEXT *PresentContext; // rax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  struct DXGHWQUEUE *v11; // rcx
  __int64 v12; // rax
  int v13; // r13d
  int v14; // eax
  __int64 v15; // r15
  int v16; // ecx
  UINT Height; // eax
  int v18; // edx
  signed int Width; // r9d
  unsigned int v20; // ebx
  signed int v21; // r8d
  UINT v22; // ecx
  UINT v23; // r13d
  UINT v24; // eax
  LONG v25; // r11d
  LONG v26; // r10d
  unsigned int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int *v36; // rbx
  char *v37; // rcx
  VIDPNSOURCEINFO *v38; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+50h] [rbp-B0h]
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v41; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43[2]; // [rsp+68h] [rbp-98h] BYREF
  UINT v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+74h] [rbp-8Ch]
  struct DXGHWQUEUE *v46; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v47; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v48[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h]
  char v50; // [rsp+C0h] [rbp-40h]
  struct tagRECT v51; // [rsp+C8h] [rbp-38h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v52; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v54[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v55[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v56[120]; // [rsp+168h] [rbp+68h] BYREF

  v2 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  PresentContext = DXGDEVICE::GetPresentContext(v2);
  v6 = 0;
  v42 = PresentContext;
  if ( PresentContext )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)PresentContext + 448));
    v8 = *((_QWORD *)v2 + 2);
    v50 = 0;
    v49 = *(_QWORD *)(v8 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v2, 1, v9, 0);
    LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
    if ( (int)v10 >= 0 )
    {
      v46 = 0LL;
      if ( (*((_DWORD *)v42 + 101) & 0x10) != 0 )
      {
        v11 = 0LL;
        if ( *((struct DXGCONTEXT **)v42 + 51) != (struct DXGCONTEXT *)((char *)v42 + 408) )
          v11 = (struct DXGHWQUEUE *)*((_QWORD *)v42 + 51);
        v46 = v11;
      }
      v12 = *((_QWORD *)a2 + 6);
      *(_QWORD *)v43 = 0LL;
      memset(&v47, 0, sizeof(v47));
      v13 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      v47.hAllocation = *(HANDLE *)(v12 + 16);
      v14 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v42 + 2) + 16LL), &v47, (__int64)v42);
      v10 = v14;
      v15 = 2LL;
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiDescribeAllocation() failed with status : 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
        *((_DWORD *)this + 12) = 1;
        goto LABEL_56;
      }
      v16 = *((_DWORD *)this + 7);
      if ( (v16 & 0x20) != 0 )
      {
        v39 = 1;
      }
      else
      {
        Height = v47.Height;
        if ( v47.Width > v47.Height )
          Height = v47.Width;
        v39 = 2 * Height;
      }
      v18 = *((_DWORD *)this + 7);
      if ( v47.Format != D3DDDIFMT_A8R8G8B8
        && v47.Format != D3DDDIFMT_X8R8G8B8
        && v47.Format != D3DDDIFMT_A8B8G8R8
        && v47.Format != D3DDDIFMT_X8B8G8R8 )
      {
        v18 = v16 | 0x40;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v16 | 0x40;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0xC000) != 0 )
      {
        v18 |= 0x80u;
        *((_DWORD *)this + 12) = 1;
        *((_DWORD *)this + 7) = v18;
      }
      if ( !*((_DWORD *)this + 12) )
      {
        if ( (v18 & 0x1000) == 0 && (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 0x2000) != 0 )
          *((_DWORD *)this + 7) = v18 | 0x2000;
        KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v2 + 5) + 56LL), &ApcState);
        v45 = 1;
        v52.Width = 512;
        *(_QWORD *)&v52.Height = 512LL;
        do
        {
          LODWORD(v10) = DXGDEVICE::CreateStagingSurface2(v2, &v52, (struct COREDEVICEACCESS *)v54, &v43[v6], 0LL);
          if ( (int)v10 < 0 )
            break;
          ++v6;
        }
        while ( v6 < 2 );
        Width = v47.Width;
        v20 = 0;
        v21 = v47.Height;
        v51 = 0LL;
        v41 = 0;
        v40 = 0;
        v22 = (v47.Width + 511) >> 9;
        v23 = v22 * ((v47.Height + 511) >> 9);
        v44 = v22;
        *(_QWORD *)((char *)this + 52) = 0LL;
        v24 = v23 + 1;
        if ( v23 == -1 )
          goto LABEL_48;
        while ( 1 )
        {
          if ( v20 < v23 )
          {
            v25 = (v20 % v22) << 9;
            v51.left = v25;
            v26 = (v20 / v22) << 9;
            v51.top = v26;
            if ( v25 + 512 < Width )
              Width = v25 + 512;
            v51.right = Width;
            if ( v26 + 512 < v21 )
              v21 = v26 + 512;
            v27 = *((_DWORD *)a2 + 4);
            v51.bottom = v21;
            v28 = 16LL * (v20 & 1);
            *(_DWORD *)&v56[v28 + 92] = 0;
            *(_DWORD *)&v56[v28 + 88] = 0;
            *(_DWORD *)&v56[v28 + 96] = Width - v25;
            *(_DWORD *)&v56[v28 + 100] = v21 - v26;
            LODWORD(v10) = DXGCONTEXT::Blt(
                             v42,
                             v27,
                             v43[v20 & 1],
                             0,
                             &v42,
                             &v51,
                             1u,
                             (const struct tagRECT *)&v56[v28 + 88],
                             (struct COREDEVICEACCESS *)v54,
                             &v46);
            if ( (int)v10 < 0 )
              goto LABEL_48;
            v21 = v47.Height;
            v24 = v23 + 1;
            Width = v47.Width;
          }
          if ( v20 )
          {
            v38 = (VIDPNSOURCEINFO *)&v56[16 * (((_BYTE)v20 - 1) & 1) + 88];
            v29 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
                    v38,
                    v2,
                    v43[((_BYTE)v20 - 1) & 1],
                    v52.Pitch,
                    (const struct tagRECT *)v38,
                    (struct COREDEVICEACCESS *)v54,
                    &v41,
                    &v40);
            v10 = v29;
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(2LL, v29);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"CheckPrimaryContentTile() failed with status : 0x%I64x",
                v10,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_48:
              v33 = v39;
LABEL_49:
              v34 = *((_DWORD *)this + 7);
              if ( (int)v10 < 0 )
              {
                v35 = v34 & 0xFFFFFFE7 | 0x10;
                goto LABEL_54;
              }
              if ( (v34 & 0x18) != 0 && *((_DWORD *)this + 14) < v33 )
              {
                v35 = v34 & 0xFFFFFFE7 | 8;
LABEL_54:
                *((_DWORD *)this + 7) = v35;
              }
              v13 = v45;
              break;
            }
            v30 = v40;
            if ( v40 == v41 )
            {
              *((_DWORD *)this + 7) &= 0xFFFFFFE7;
              goto LABEL_48;
            }
            v31 = *((_DWORD *)this + 14);
            *((_DWORD *)this + 13) += v41;
            v32 = v30 + v31;
            *((_DWORD *)this + 14) = v32;
            if ( v20 >= 2 )
            {
              v33 = v39;
              if ( v32 >= v39 )
              {
                *((_DWORD *)this + 7) &= 0xFFFFFFE7;
                goto LABEL_49;
              }
            }
            v21 = v47.Height;
            v24 = v23 + 1;
            Width = v47.Width;
          }
          if ( ++v20 >= v24 )
            goto LABEL_48;
          v22 = v44;
        }
      }
LABEL_56:
      v36 = v43;
      do
      {
        if ( *v36 )
          DXGDEVICE::DestroyStagingSurface(v2, *v36, 0, (struct COREDEVICEACCESS *)v54);
        ++v36;
        --v15;
      }
      while ( v15 );
      if ( v13 )
        KeUnstackDetachProcess(&ApcState);
    }
    v37 = (char *)v42 + 448;
    *((_QWORD *)v42 + 57) = 0LL;
    ExReleasePushLockExclusiveEx(v37, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::~COREACCESS((COREACCESS *)v56);
    COREACCESS::~COREACCESS((COREACCESS *)v55);
    if ( v50 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The rendering device (0x%I64x) has not been used for Present",
      (__int64)v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225860LL;
  }
}
