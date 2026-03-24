/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C0083440
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090090 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x1C00D4F90 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x1C00D5344 (InvalidateDCE.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E748C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C0169DF4 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C02730F0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02731CC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02A33B0 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP BitmapForDisplayDevice)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  HDEV v9; // rbx
  __int64 v10; // rdx
  HDEV v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rbx
  unsigned int v23; // ebx
  int v24; // eax
  HSURF v25; // rcx
  DC *v26; // rdx
  DC *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  DC *v30; // [rsp+20h] [rbp-79h]
  _BYTE v31[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v32[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+70h] [rbp-29h]
  _BYTE v34[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v35; // [rsp+98h] [rbp-1h]
  _BYTE v36[32]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+27h]
  int v38; // [rsp+100h] [rbp+67h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v31);
    LOBYTE(v6) = 1;
    v7 = HmgShareLockEx(v4, v6, 0LL);
    v30 = (DC *)v7;
    v8 = v7;
    if ( !v7 )
    {
      v23 = 0;
      goto LABEL_65;
    }
    v9 = *(HDEV *)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
      break;
    if ( BitmapForDisplayDevice && a1 == v4 )
    {
      SURFREF::SURFREF((SURFREF *)v34);
      v11 = (HDEV)*((_QWORD *)v9 + 3);
      if ( v9 != v11 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v11, v9, BitmapForDisplayDevice);
      LOBYTE(v10) = 5;
      v12 = HmgShareLockCheck(BitmapForDisplayDevice, v10);
      v35 = v12;
      v5 = v12;
      if ( !v12 )
      {
        v23 = 0;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
        goto LABEL_61;
      }
      DEC_SHARE_REF_CNT(v12, v13);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
      v8 = (__int64)v30;
    }
    if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
    {
      v14 = *(_QWORD *)(v8 + 496);
      if ( v14 )
      {
        SURFREF::SURFREF((SURFREF *)v32, *(HSURF *)(v14 + 32));
        if ( v33 )
        {
          DEC_SHARE_REF_CNT(v33, v15);
          if ( v33 )
            DEC_SHARE_REF_CNT(v33, v16);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
        v8 = (__int64)v30;
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v32, (HSURF)BitmapForDisplayDevice);
      if ( v33 )
        INC_SHARE_REF_CNT(v33);
      *((_DWORD *)v30 + 9) |= 0x4000u;
      v18 = *(_DWORD *)(v5 + 112);
      if ( (v18 & 0x800) == 0 )
        *(_DWORD *)(v5 + 112) = v18 | 0x800;
      if ( v33 )
        DEC_SHARE_REF_CNT(v33, v17);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
    }
    else
    {
      v5 = *((_QWORD *)v9 + 319);
      *(_DWORD *)(v8 + 36) &= ~0x4000u;
    }
    v19 = *((_DWORD *)v30 + 9) | 0x8000;
    if ( (*(_DWORD *)(v5 + 112) & 0x200) == 0 )
      v19 = *((_DWORD *)v30 + 9) & 0xFFFF7FFF;
    *((_DWORD *)v30 + 9) = v19;
    *((_QWORD *)v30 + 62) = v5;
    if ( (*(_DWORD *)(v5 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v30,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 660), (__m128)*(unsigned int *)(v5 + 664)).m128_u64[0]);
    }
    else
    {
      v20 = *((_DWORD *)v30 + 130);
      if ( (v20 & 1) != 0 )
      {
        *((_DWORD *)v30 + 9) |= 0x10u;
        *(_QWORD *)((char *)v30 + 524) = 0LL;
        *((_DWORD *)v30 + 130) = v20 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v30 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v30);
      }
    }
    *((_QWORD *)v30 + 64) = *(_QWORD *)(v5 + 56);
    *((_DWORD *)v30 + 79) |= 0xFu;
    if ( *((int *)v30 + 26) <= 1 )
      v4 = 0LL;
    else
      v4 = *((_QWORD *)v30 + 14);
    v38 = 0;
    v21 = *(_QWORD *)v30;
    HmgDecrementShareReferenceCountEx(v30, &v38);
    if ( v38 )
      bDeleteDCInternalEx(v21, 0LL);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
    if ( !v4 )
      return 1LL;
  }
  v24 = *(_DWORD *)(v7 + 36);
  v25 = *(HSURF *)(v8 + 504);
  if ( (v24 & 0x4000) != 0 )
  {
    if ( !v25 )
      v25 = **(HSURF **)(v8 + 496);
    SURFREF::SURFREF((SURFREF *)v32, v25);
    if ( v33 )
    {
      if ( BitmapForDisplayDevice )
      {
        SURFREF::SURFREF((SURFREF *)v36, (HSURF)BitmapForDisplayDevice);
        v28 = v37;
        if ( v37 )
        {
          if ( v33 != v37 )
          {
            v27 = v30;
            if ( (*((_DWORD *)v30 + 9) & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v33);
              v27 = v30;
            }
            *((_DWORD *)v27 + 9) |= 0x40000u;
            *((_QWORD *)v30 + 266) = BitmapForDisplayDevice;
            v28 = v37;
          }
          v23 = 1;
          if ( v28 )
            DEC_SHARE_REF_CNT(v28, v27);
        }
        else
        {
          v23 = 0;
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
      }
      else
      {
        v26 = v30;
        if ( (*((_DWORD *)v30 + 9) & 0x40000) == 0 )
        {
          INC_SHARE_REF_CNT(v33);
          v26 = v30;
        }
        *((_DWORD *)v26 + 9) |= 0x40000u;
        v23 = 1;
        *((_QWORD *)v30 + 266) = 0LL;
      }
      if ( v33 )
      {
        DEC_SHARE_REF_CNT(v33, v26);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
        goto LABEL_61;
      }
    }
    else
    {
      v23 = 0;
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
  }
  else
  {
    v23 = 1;
    *(_DWORD *)(v8 + 36) = v24 | 0x40000;
    *((_QWORD *)v30 + 266) = BitmapForDisplayDevice;
  }
LABEL_61:
  if ( v30 )
  {
    v38 = 0;
    v29 = *(_QWORD *)v30;
    HmgDecrementShareReferenceCountEx(v30, &v38);
    if ( v38 )
    {
      bDeleteDCInternalEx(v29, 0LL);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
      return v23;
    }
  }
LABEL_65:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
  return v23;
}
