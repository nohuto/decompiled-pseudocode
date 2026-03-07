__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP a2)
{
  HBITMAP BitmapForDisplayDevice; // r15
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  HDEV v9; // rbx
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rbx
  HDEV v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  _QWORD v29[7]; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+60h] [rbp+8h] BYREF

  BitmapForDisplayDevice = a2;
  v4 = a1;
  v5 = 0LL;
  if ( !a1 )
    return 1LL;
  v29[1] = 0LL;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    v6 = HmgShareLockEx(v4, a2, 0LL);
    v29[0] = v6;
    v8 = v6;
    if ( !v6 )
      return 0LL;
    v9 = *(HDEV *)(v6 + 48);
    if ( (*(_DWORD *)(v6 + 40) & 1) != 0 )
      break;
    if ( BitmapForDisplayDevice && a1 == v4 )
    {
      v14 = (HDEV)*((_QWORD *)v9 + 3);
      if ( v9 != v14 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v14, v9, BitmapForDisplayDevice);
      LOBYTE(v7) = 5;
      v15 = HmgShareLockCheck(BitmapForDisplayDevice, v7);
      v5 = v15;
      if ( !v15 )
        goto LABEL_52;
      DEC_SHARE_REF_CNT(v15);
    }
    if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
    {
      v19 = *(_QWORD *)(v8 + 496);
      if ( v19 )
      {
        LOBYTE(v7) = 5;
        v20 = HmgShareLockCheck(*(_QWORD *)(v19 + 32), v7);
        v21 = v20;
        if ( v20 )
        {
          DEC_SHARE_REF_CNT(v20);
          DEC_SHARE_REF_CNT(v21);
        }
      }
    }
    if ( BitmapForDisplayDevice )
    {
      LOBYTE(v7) = 5;
      v16 = HmgShareLockCheck(BitmapForDisplayDevice, v7);
      v17 = v16;
      if ( v16 )
        INC_SHARE_REF_CNT(v16);
      *(_DWORD *)(v8 + 36) |= 0x4000u;
      v18 = *(_DWORD *)(v5 + 112);
      if ( (v18 & 0x800) == 0 )
        *(_DWORD *)(v5 + 112) = v18 | 0x800;
      if ( v17 )
        DEC_SHARE_REF_CNT(v17);
    }
    else
    {
      v5 = *((_QWORD *)v9 + 316);
      *(_DWORD *)(v8 + 36) &= ~0x4000u;
    }
    v10 = *(_DWORD *)(v8 + 36) | 0x8000;
    if ( (*(_DWORD *)(v5 + 112) & 0x200) == 0 )
      v10 = *(_DWORD *)(v8 + 36) & 0xFFFF7FFF;
    *(_DWORD *)(v8 + 36) = v10;
    *(_QWORD *)(v8 + 496) = v5;
    if ( (*(_DWORD *)(v5 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v8,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 660), (__m128)*(unsigned int *)(v5 + 664)).m128_u64[0]);
    }
    else
    {
      v11 = *(_DWORD *)(v8 + 520);
      if ( (v11 & 1) != 0 )
      {
        *(_DWORD *)(v8 + 36) |= 0x10u;
        *(_QWORD *)(v8 + 524) = 0LL;
        *(_QWORD *)(v8 + 532) = 0LL;
        *(_DWORD *)(v8 + 520) = v11 & 0xFFFFFFF8 | 4;
        DC::vUpdateCachedDPIScaleValue((DC *)v8);
      }
    }
    *(_QWORD *)(v8 + 512) = *(_QWORD *)(v5 + 56);
    *(_DWORD *)(v8 + 316) |= 0xFu;
    if ( *(int *)(v8 + 104) > 1 )
      v4 = *(_QWORD *)(v8 + 112);
    else
      v4 = 0LL;
    v30 = 0;
    v12 = *(_QWORD *)v8;
    HmgDecrementShareReferenceCountEx(v8, &v30);
    if ( v30 )
      GrepDeleteDC(v12, 0x2000000LL);
    if ( !v4 )
      return 1LL;
  }
  v22 = *(_DWORD *)(v6 + 36);
  v23 = *(_QWORD *)(v8 + 504);
  if ( (v22 & 0x4000) == 0 )
  {
    *(_DWORD *)(v8 + 36) = v22 | 0x40000;
    *(_QWORD *)(v8 + 2120) = BitmapForDisplayDevice;
    goto LABEL_55;
  }
  if ( !v23 )
    v23 = **(_QWORD **)(v8 + 496);
  LOBYTE(v7) = 5;
  v24 = HmgShareLockCheck(v23, v7);
  v26 = v24;
  if ( !v24 )
    goto LABEL_52;
  if ( BitmapForDisplayDevice )
  {
    LOBYTE(v25) = 5;
    v27 = HmgShareLockCheck(BitmapForDisplayDevice, v25);
    v28 = v27;
    if ( v27 )
    {
      if ( v26 != v27 )
      {
        if ( (*(_DWORD *)(v8 + 36) & 0x40000) == 0 )
          INC_SHARE_REF_CNT(v26);
        *(_DWORD *)(v8 + 36) |= 0x40000u;
        *(_QWORD *)(v8 + 2120) = BitmapForDisplayDevice;
      }
      DEC_SHARE_REF_CNT(v28);
      goto LABEL_50;
    }
    DEC_SHARE_REF_CNT(v26);
LABEL_52:
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v29);
    return 0LL;
  }
  if ( (*(_DWORD *)(v8 + 36) & 0x40000) == 0 )
    INC_SHARE_REF_CNT(v24);
  *(_DWORD *)(v8 + 36) |= 0x40000u;
  *(_QWORD *)(v8 + 2120) = 0LL;
LABEL_50:
  DEC_SHARE_REF_CNT(v26);
LABEL_55:
  XDCOBJ::vAltUnlockFast((XDCOBJ *)v29);
  return 1LL;
}
