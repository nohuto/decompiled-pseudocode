struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  __int64 v10; // rax
  struct VIDMM_MAPPED_VA_RANGE *v11; // rax
  struct VIDMM_VAD *v12; // rdx
  VIDMM_MAPPED_VA_RANGE *v13; // rbx
  unsigned int v15; // edx
  __int64 v16; // rcx

  v10 = operator new(136LL, 0x39346956u, 256LL);
  if ( v10
    && (v11 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                v10,
                                                (__int64)a2,
                                                a4,
                                                a4 + a5,
                                                0,
                                                0LL,
                                                0LL,
                                                (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                                a6.Value,
                                                a7,
                                                0LL,
                                                0LL),
        (v13 = v11) != 0LL) )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, v12, 0, 0LL, v11) >= 0 )
      return v13;
    WdLogSingleEntry0(3LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v13, v15);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768B4);
    WdLogSingleEntry1(6LL, 1847LL);
    DxgkLogInternalTriageEvent(v16, 262145LL);
  }
  return 0LL;
}
