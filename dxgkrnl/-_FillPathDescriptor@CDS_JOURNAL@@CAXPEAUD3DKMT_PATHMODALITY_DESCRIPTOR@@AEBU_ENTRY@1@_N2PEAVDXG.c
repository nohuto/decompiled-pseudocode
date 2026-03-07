void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        char a3,
        char a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rdi
  __int64 v7; // r10
  int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r9
  int v17; // r10d
  unsigned int v18; // ecx
  struct DXGADAPTER *v19; // rbp
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v20; // rdx
  _DWORD *v21; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v22; // rdx
  char v23; // cl
  unsigned int v24; // eax
  __int64 v25; // rdx

  *(_QWORD *)a1 &= 0xFFFFFFFFFF7DFE78uLL;
  v5 = (unsigned int *)((char *)a2 + 44);
  v7 = *(_QWORD *)a1;
  if ( (*((_DWORD *)a2 + 11) & 0x80u) != 0 )
  {
    CDS_JOURNAL::_GetRotationFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(v5, (_DWORD *)a1 + 33);
    *(_QWORD *)a1 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
    v7 = *(_QWORD *)a1;
  }
  if ( _bittest((const signed __int32 *)v5, 0x13u) )
  {
    v11 = *((_DWORD *)a2 + 17);
    v7 |= 0x20000uLL;
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 38) = v11;
  }
  if ( _bittest((const signed __int32 *)v5, 0x14u) )
  {
    v12 = *((_DWORD *)a2 + 18);
    v7 |= 0x20000uLL;
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 39) = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    v13 = v7;
    if ( _bittest((const signed __int32 *)v5, 0x13u) )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 25) = v14;
      else
        *((_DWORD *)a1 + 24) = v14;
      v13 = v15 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v15 | 0x40000000000100LL;
    }
    v7 = v13;
    if ( _bittest((const signed __int32 *)v5, 0x14u) )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 24) = v17;
      else
        *((_DWORD *)a1 + 25) = v17;
      v7 = v16 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v16 | 0x40000000000100LL;
    }
  }
  if ( (*v5 & 0x20) != 0 )
  {
    v7 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 = v7;
  }
  if ( (*v5 & 0x20000000) != 0 )
  {
    v18 = *((_DWORD *)a2 + 15);
    if ( v18 )
    {
      ConvertGdiScalingToDMMScaling(v18, (_DWORD *)a1 + 35);
      goto LABEL_23;
    }
  }
  if ( (v7 & 0x10000) != 0 )
  {
LABEL_23:
    v19 = a5;
    v20 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
    v21 = (_DWORD *)((char *)a1 + 140);
    if ( a5 )
    {
LABEL_24:
      EnforceDriverModelScalingPolicy((__int64)v19, v20);
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v19 = a5;
  v22 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
  if ( a5 )
  {
    DmmGetDefaultScaling(a5, v22);
    v20 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
    v21 = (_DWORD *)((char *)a1 + 140);
    goto LABEL_24;
  }
  DxgkGetAdapterDefaultScaling((struct _LUID *)((char *)a2 + 20), v22);
  v20 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
  v21 = (_DWORD *)((char *)a1 + 140);
LABEL_29:
  EnforceDriverModelScalingPolicy((struct _LUID *)((char *)a2 + 20), (__int64)v20);
LABEL_30:
  *((_DWORD *)a1 + 34) = *v21;
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*v5 & 0x40000) != 0 )
    CDS_JOURNAL::_GetPixelFormatFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(v5, (_DWORD *)a1 + 29);
  if ( (*v5 & 0x200000) != 0 )
  {
    v23 = -((*v5 & 0x200000) != 0 && (*((_BYTE *)a2 + 76) & 2) != 0);
    v24 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8;
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v24 | ((v23 != 0) + 1);
  }
  if ( (*v5 & 0x400000) != 0 )
  {
    v25 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 28) = *((_QWORD *)a2 + 10);
    if ( (v25 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
    {
      if ( (unsigned int)(2 * *((_DWORD *)a2 + 20)) <= *((_DWORD *)a2 + 20) )
        *((_DWORD *)a1 + 57) >>= 1;
      else
        *((_DWORD *)a1 + 56) *= 2;
    }
    *((_DWORD *)a1 + 60) = 1;
    *(_QWORD *)a1 = v25 | 0x1000000;
  }
  if ( !a4 && !a3 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
