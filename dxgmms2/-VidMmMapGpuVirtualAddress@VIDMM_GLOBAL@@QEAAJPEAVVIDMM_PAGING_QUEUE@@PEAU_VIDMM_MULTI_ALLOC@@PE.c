int __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v11; // ebp
  unsigned int v12; // r15d
  __int64 v13; // rcx

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) == 0 || (*(_BYTE *)&Value & 7) == 0 )
  {
    if ( (*(_BYTE *)&Value & 0xC) != 0 )
    {
      if ( a3 )
      {
        WdLogSingleEntry1(3LL, 21223LL);
        return -1073741811;
      }
    }
    else if ( !a3 )
    {
      WdLogSingleEntry1(3LL, 21229LL);
      return -1073741811;
    }
    a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
    v11 = 0;
    if ( a6 == -1 )
    {
      v12 = 0;
      if ( !*((_DWORD *)this + 1754) )
        return v11;
      while ( 1 )
      {
        v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                this,
                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 80LL) + 176LL * v12),
                a3,
                a4,
                0);
        if ( v11 < 0 )
          break;
        ++v12;
        a4->BaseAddress = a4->VirtualAddress;
        if ( v12 >= *((_DWORD *)this + 1754) )
          return v11;
      }
      WdLogSingleEntry1(1LL, v12);
    }
    else
    {
      v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 80LL) + 176LL * a6),
              a3,
              a4,
              0);
      if ( v11 >= 0 )
        return v11;
      WdLogSingleEntry1(1LL, a6);
    }
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return v11;
  }
  WdLogSingleEntry0(3LL);
  return -1073741811;
}
