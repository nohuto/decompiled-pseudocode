void __fastcall CDS_JOURNAL::_FillEntry(
        struct CDS_JOURNAL::_ENTRY *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  struct CDS_JOURNAL::_ENTRY *v3; // r9
  const struct D3DKMT_AUGMENT_CDSJ *v4; // r10
  _DWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r11
  _QWORD *v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp+18h]

  v3 = a1;
  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  v4 = a2;
  *(_QWORD *)((char *)a1 + 20) = *(_QWORD *)((char *)a2 + 4);
  v5 = (_DWORD *)((char *)a1 + 44);
  *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 5);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v6 + 72) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 76);
    *v5 |= 0x20u;
    *((_QWORD *)v3 + 6) = v7;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v8 + 72) & 0x80u) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 84);
    *v5 |= 0x80u;
    *((_DWORD *)v3 + 14) = v9;
  }
  v10 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v10 + 72) & 0x20000000) != 0 )
  {
    v11 = *(_DWORD *)(v10 + 88);
    *v5 |= 0x20000000u;
    *((_DWORD *)v3 + 15) = v11;
  }
  v12 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v12 + 72) & 0x40000) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 168);
    *v5 |= 0x40000u;
    *((_DWORD *)v3 + 16) = v13;
  }
  v14 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v14 + 72) & 0x80000) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 172);
    *v5 |= 0x80000u;
    *((_DWORD *)v3 + 17) = v15;
  }
  v16 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v16 + 72) & 0x100000) != 0 )
  {
    v17 = *(_DWORD *)(v16 + 176);
    *v5 |= 0x100000u;
    *((_DWORD *)v3 + 18) = v17;
  }
  v18 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v18 + 72) & 0x400000) != 0 )
  {
    LODWORD(v24) = *(_DWORD *)(v18 + 184);
    HIDWORD(v24) = 1;
    *((_QWORD *)v3 + 10) = v24;
    v19 = *((_QWORD *)a2 + 4);
    if ( *(_DWORD *)(v19 + 64) == 67175425
      && *(_WORD *)(v19 + 68) == 220
      && *(_WORD *)(v19 + 70) == 24
      && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v19 + 220))
      && *(_DWORD *)v20
      && *(_DWORD *)(v21 + 224) )
    {
      *((_QWORD *)v3 + 10) = *v20;
    }
    *v5 |= 0x400000u;
  }
  v22 = *((_QWORD *)v4 + 4);
  if ( (*(_DWORD *)(v22 + 72) & 0x200000) != 0 )
  {
    v23 = *(_DWORD *)(v22 + 180);
    *v5 |= 0x200000u;
    *((_DWORD *)v3 + 19) = v23;
  }
}
