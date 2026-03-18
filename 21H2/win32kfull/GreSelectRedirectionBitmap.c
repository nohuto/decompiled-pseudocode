/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C0027F30
 * Callers:
 *     InvalidateDCE @ 0x1C0026C64 (InvalidateDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x1C00DC330 (UpdateRedirectedDCE.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E21E0 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015D5DC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C016EA98 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C016EAE6 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C016FB2C (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP BitmapForDisplayDevice)
{
  unsigned int v2; // edi
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  DC *v9; // rcx
  HDEV v10; // rbx
  __int64 v11; // rdx
  HDEV v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edx
  DC *v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  int v21; // eax
  HSURF v22; // rdx
  DC *v23; // rdx
  __int64 v24; // rcx
  DC *v25; // rdx
  DC *v26[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v27[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v28[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h]
  _BYTE v30[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+98h] [rbp-1h]
  _BYTE v32[32]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+100h] [rbp+67h] BYREF

  v2 = 0;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v26[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v27);
    LOBYTE(v7) = 1;
    v8 = HmgShareLockEx(v5, v7, 0LL);
    v26[0] = (DC *)v8;
    v9 = (DC *)v8;
    if ( !v8 )
      break;
    v10 = *(HDEV *)(v8 + 48);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
    {
      v21 = *(_DWORD *)(v8 + 36);
      v22 = (HSURF)*((_QWORD *)v9 + 63);
      if ( (v21 & 0x4000) != 0 )
      {
        if ( !v22 )
          v22 = (HSURF)**((_QWORD **)v9 + 62);
        SURFREF::SURFREF((SURFREF *)v28, v22);
        if ( v29 )
        {
          if ( BitmapForDisplayDevice )
          {
            SURFREF::SURFREF((SURFREF *)v32, (HSURF)BitmapForDisplayDevice);
            v24 = v33;
            if ( v33 )
            {
              if ( v29 != v33 )
              {
                v25 = v26[0];
                if ( (*((_DWORD *)v26[0] + 9) & 0x40000) == 0 )
                {
                  INC_SHARE_REF_CNT(v29);
                  v25 = v26[0];
                }
                *((_DWORD *)v25 + 9) |= 0x40000u;
                *((_QWORD *)v26[0] + 265) = BitmapForDisplayDevice;
                v24 = v33;
              }
              v2 = 1;
              if ( v24 )
                DEC_SHARE_REF_CNT(v24);
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
          }
          else
          {
            v23 = v26[0];
            if ( (*((_DWORD *)v26[0] + 9) & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v29);
              v23 = v26[0];
            }
            *((_DWORD *)v23 + 9) |= 0x40000u;
            *((_QWORD *)v26[0] + 265) = 0LL;
            v2 = 1;
          }
          if ( v29 )
            DEC_SHARE_REF_CNT(v29);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
      }
      else
      {
        v2 = 1;
        *((_DWORD *)v9 + 9) = v21 | 0x40000;
        *((_QWORD *)v26[0] + 265) = BitmapForDisplayDevice;
      }
      goto LABEL_59;
    }
    if ( BitmapForDisplayDevice && a1 == v5 )
    {
      SURFREF::SURFREF((SURFREF *)v30);
      v12 = (HDEV)*((_QWORD *)v10 + 3);
      if ( v10 != v12 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v12, v10, BitmapForDisplayDevice);
      LOBYTE(v11) = 5;
      v13 = HmgShareLockCheck(BitmapForDisplayDevice, v11);
      v31 = v13;
      v6 = v13;
      if ( !v13 )
      {
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
LABEL_59:
        if ( v26[0] )
          XDCOBJ::vAltUnlockFast((XDCOBJ *)v26);
        break;
      }
      DEC_SHARE_REF_CNT(v13);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
      v9 = v26[0];
    }
    if ( (*((_DWORD *)v9 + 9) & 0x4000) != 0 )
    {
      v14 = *((_QWORD *)v9 + 62);
      if ( v14 )
      {
        SURFREF::SURFREF((SURFREF *)v28, *(HSURF *)(v14 + 32));
        if ( v29 )
        {
          DEC_SHARE_REF_CNT(v29);
          if ( v29 )
            DEC_SHARE_REF_CNT(v29);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
        v9 = v26[0];
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v28, (HSURF)BitmapForDisplayDevice);
      if ( v29 )
        INC_SHARE_REF_CNT(v29);
      *((_DWORD *)v26[0] + 9) |= 0x4000u;
      v15 = *(_DWORD *)(v6 + 112);
      if ( (v15 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v15 | 0x800;
      if ( v29 )
        DEC_SHARE_REF_CNT(v29);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
    }
    else
    {
      v6 = *((_QWORD *)v10 + 316);
      *((_DWORD *)v9 + 9) &= ~0x4000u;
    }
    v16 = *((_DWORD *)v26[0] + 9) | 0x8000;
    if ( (*(_DWORD *)(v6 + 112) & 0x200) == 0 )
      v16 = *((_DWORD *)v26[0] + 9) & 0xFFFF7FFF;
    *((_DWORD *)v26[0] + 9) = v16;
    v17 = v26[0];
    *((_QWORD *)v26[0] + 62) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v17,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 660), (__m128)*(unsigned int *)(v6 + 664)).m128_u64[0]);
    }
    else
    {
      v18 = *((_DWORD *)v17 + 130);
      if ( (v18 & 1) != 0 )
      {
        *((_DWORD *)v17 + 9) |= 0x10u;
        *(_QWORD *)((char *)v17 + 524) = 0LL;
        *((_DWORD *)v17 + 130) = v18 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v17 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v17);
      }
    }
    *((_QWORD *)v26[0] + 64) = *(_QWORD *)(v6 + 56);
    *((_DWORD *)v26[0] + 79) |= 0xFu;
    if ( *((int *)v26[0] + 26) <= 1 )
      v5 = 0LL;
    else
      v5 = *((_QWORD *)v26[0] + 14);
    v34 = 0;
    v19 = *(_QWORD *)v26[0];
    HmgDecrementShareReferenceCountEx(v26[0], &v34);
    if ( v34 )
      bDeleteDCInternalEx(v19, 0LL);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
    if ( !v5 )
      return 1LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
  return v2;
}
