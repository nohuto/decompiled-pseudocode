void __fastcall VIDMM_GLOBAL::ForceUncommitVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_ALLOC *a3)
{
  __int64 v5; // rbp
  int v6; // esi

  v5 = **(_QWORD **)a3;
  if ( *((_DWORD *)this + 2) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    VIDMM_GLOBAL::StartPreparation((__int64)this, *(_DWORD *)(v5 + 68) & 0x3F, (__int64)a2, (__int64)a3, 218);
  }
  VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, a3);
  if ( !v6 )
    VIDMM_GLOBAL::EndPreparation(this, *(_DWORD *)(v5 + 68) & 0x3F, 0LL, 0, 0LL, 0LL);
}
