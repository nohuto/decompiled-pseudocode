void __fastcall ADAPTER_RENDER::QueryGpuMmuCaps(ADAPTER_RENDER *this, unsigned int a2, struct _D3DKMT_GPUMMU_CAPS *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  UINT v8; // eax
  UINT v9; // ecx

  v4 = a2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 2284LL) & 0x40) == 0 )
  {
    WdLogSingleEntry1(1LL, 4311LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsGpuMmuSupported()",
      4311LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_QWORD *)this + 158);
  if ( v6 )
    v7 = (_DWORD *)(v6 + 144 * v4);
  else
    v7 = 0LL;
  a3->Flags.Value = 0;
  v8 = *v7 & 1;
  a3->Flags.Value = v8;
  v9 = v8 | *v7 & 2;
  a3->Flags.Value = v9;
  a3->Flags.Value = v9 | (*v7 >> 2) & 4;
  a3->VirtualAddressBitCount = v7[2];
}
