/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C002F2A0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x1C008F178 (InvalidateDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01BC9E4 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0131264 (--1DCOBJA@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013E478 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0159CE4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0159D32 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C015BD0A (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP BitmapForDisplayDevice)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  DC *v8; // rcx
  HDEV v9; // rbx
  int v10; // eax
  HSURF v11; // rdx
  DC *v12; // rdx
  __int64 v14; // rdx
  HDEV v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // edx
  DC *v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  DC *v23; // rdx
  _BYTE *v24; // rcx
  DC *v25[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v26[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v27[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v28; // [rsp+70h] [rbp-29h]
  _BYTE v29[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v30; // [rsp+98h] [rbp-1h]
  _BYTE v31[32]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+27h]
  int v33; // [rsp+100h] [rbp+67h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v25[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v26);
    LOBYTE(v6) = 1;
    v7 = HmgShareLockEx(v4, v6, 0LL);
    v25[0] = (DC *)v7;
    v8 = (DC *)v7;
    if ( !v7 )
    {
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
      return 0LL;
    }
    v9 = *(HDEV *)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v10 = *(_DWORD *)(v7 + 36);
      v11 = (HSURF)*((_QWORD *)v8 + 63);
      if ( (v10 & 0x4000) != 0 )
      {
        if ( !v11 )
          v11 = (HSURF)**((_QWORD **)v8 + 62);
        SURFREF::SURFREF((SURFREF *)v27, v11);
        if ( !v28 )
        {
          v24 = v27;
          goto LABEL_57;
        }
        if ( BitmapForDisplayDevice )
        {
          SURFREF::SURFREF((SURFREF *)v29, (HSURF)BitmapForDisplayDevice);
          if ( !v30 )
          {
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v29);
            SURFREF::~SURFREF((SURFREF *)v27);
            DCOBJA::~DCOBJA((DCOBJA *)v25);
            return 0LL;
          }
          if ( v28 != v30 )
          {
            v23 = v25[0];
            if ( (*((_DWORD *)v25[0] + 9) & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v28);
              v23 = v25[0];
            }
            *((_DWORD *)v23 + 9) |= 0x40000u;
            *((_QWORD *)v25[0] + 265) = BitmapForDisplayDevice;
          }
          SURFREF::~SURFREF((SURFREF *)v29);
        }
        else
        {
          v12 = v25[0];
          if ( (*((_DWORD *)v25[0] + 9) & 0x40000) == 0 )
          {
            INC_SHARE_REF_CNT(v28);
            v12 = v25[0];
          }
          *((_DWORD *)v12 + 9) |= 0x40000u;
          *((_QWORD *)v25[0] + 265) = 0LL;
        }
        SURFREF::~SURFREF((SURFREF *)v27);
      }
      else
      {
        *((_DWORD *)v8 + 9) = v10 | 0x40000;
        *((_QWORD *)v25[0] + 265) = BitmapForDisplayDevice;
      }
      DCOBJA::~DCOBJA((DCOBJA *)v25);
      return 1LL;
    }
    if ( BitmapForDisplayDevice && a1 == v4 )
      break;
LABEL_21:
    if ( (*((_DWORD *)v8 + 9) & 0x4000) != 0 )
    {
      v17 = *((_QWORD *)v8 + 62);
      if ( v17 )
      {
        SURFREF::SURFREF((SURFREF *)v27, *(HSURF *)(v17 + 32));
        if ( v28 )
        {
          DEC_SHARE_REF_CNT(v28);
          if ( v28 )
            DEC_SHARE_REF_CNT(v28);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
        v8 = v25[0];
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v27, (HSURF)BitmapForDisplayDevice);
      if ( v28 )
        INC_SHARE_REF_CNT(v28);
      *((_DWORD *)v25[0] + 9) |= 0x4000u;
      v18 = *(_DWORD *)(v5 + 112);
      if ( (v18 & 0x800) == 0 )
        *(_DWORD *)(v5 + 112) = v18 | 0x800;
      if ( v28 )
        DEC_SHARE_REF_CNT(v28);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
    }
    else
    {
      v5 = *((_QWORD *)v9 + 316);
      *((_DWORD *)v8 + 9) &= ~0x4000u;
    }
    v19 = *((_DWORD *)v25[0] + 9) | 0x8000;
    if ( (*(_DWORD *)(v5 + 112) & 0x200) == 0 )
      v19 = *((_DWORD *)v25[0] + 9) & 0xFFFF7FFF;
    *((_DWORD *)v25[0] + 9) = v19;
    v20 = v25[0];
    *((_QWORD *)v25[0] + 62) = v5;
    if ( (*(_DWORD *)(v5 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v20,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 660), (__m128)*(unsigned int *)(v5 + 664)).m128_u64[0]);
    }
    else
    {
      v21 = *((_DWORD *)v20 + 130);
      if ( (v21 & 1) != 0 )
      {
        *((_DWORD *)v20 + 9) |= 0x10u;
        *(_QWORD *)((char *)v20 + 524) = 0LL;
        *((_DWORD *)v20 + 130) = v21 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v20 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v20);
      }
    }
    *((_QWORD *)v25[0] + 64) = *(_QWORD *)(v5 + 56);
    *((_DWORD *)v25[0] + 79) |= 0xFu;
    if ( *((int *)v25[0] + 26) <= 1 )
      v4 = 0LL;
    else
      v4 = *((_QWORD *)v25[0] + 14);
    v33 = 0;
    v22 = *(_QWORD *)v25[0];
    HmgDecrementShareReferenceCountEx(v25[0], &v33);
    if ( v33 )
      GrepDeleteDC(v22, 0x2000000LL);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
    if ( !v4 )
      return 1LL;
  }
  SURFREF::SURFREF((SURFREF *)v31);
  v15 = (HDEV)*((_QWORD *)v9 + 3);
  if ( v9 != v15 )
    BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v15, v9, BitmapForDisplayDevice);
  LOBYTE(v14) = 5;
  v16 = HmgShareLockCheck(BitmapForDisplayDevice, v14);
  v32 = v16;
  v5 = v16;
  if ( v16 )
  {
    DEC_SHARE_REF_CNT(v16);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
    v8 = v25[0];
    goto LABEL_21;
  }
  v24 = v31;
LABEL_57:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
  DCOBJA::~DCOBJA((DCOBJA *)v25);
  return 0LL;
}
