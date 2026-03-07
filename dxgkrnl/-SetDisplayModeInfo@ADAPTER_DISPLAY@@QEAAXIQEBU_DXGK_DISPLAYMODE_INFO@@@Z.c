void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  int v6; // edx
  int v7; // r8d
  PERESOURCE *v8; // rax
  __int64 v9; // rsi
  PERESOURCE *v10; // rcx
  int v11; // eax
  PERESOURCE *v12; // rcx
  int v13; // eax
  DXGDODPRESENT *v14; // rcx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5675LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v16,
          v6,
          v7,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          5675LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 5676LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v17,
          v6,
          v7,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          5676LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v8 = this[16];
  v9 = 500 * v4;
  *(_OWORD *)&v8[v9 + 126] = *(_OWORD *)a3;
  *(_OWORD *)&v8[v9 + 128] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v8[v9 + 130] = *((_OWORD *)a3 + 2);
  *(_OWORD *)&v8[v9 + 132] = *((_OWORD *)a3 + 3);
  *(_OWORD *)&v8[v9 + 134] = *((_OWORD *)a3 + 4);
  v10 = this[16];
  v11 = HIDWORD(v10[500 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v10[v9 + 79]) = *(_DWORD *)a3 + v11;
    v12 = this[16];
    v13 = *((_DWORD *)a3 + 1) + LODWORD(v12[v9 + 79]);
  }
  else
  {
    HIDWORD(v10[v9 + 79]) = *((_DWORD *)a3 + 1) + v11;
    v12 = this[16];
    v13 = *(_DWORD *)a3 + LODWORD(v12[v9 + 79]);
  }
  LODWORD(v12[v9 + 80]) = v13;
  v14 = (DXGDODPRESENT *)this[56];
  if ( v14 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v14, v4, (struct _D3DKMT_DISPLAYMODE *)&this[16][v9 + 126]);
  v15 = bTracingEnabled == 0;
  HIDWORD(this[16][v9 + 141]) = -1;
  LODWORD(this[16][v9 + 142]) = -1;
  if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v7,
      (_DWORD)this,
      v4,
      *(_DWORD *)a3,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 5),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7),
      *((_DWORD *)a3 + 8),
      *((_BYTE *)a3 + 36) & 1,
      *((_DWORD *)a3 + 11),
      *((_DWORD *)a3 + 12));
}
