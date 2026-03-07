__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  struct _RTL_AVL_TREE *v10; // rdx
  struct VIDMM_VAD *v11; // rbx
  struct VIDMM_VAD *v12; // rdx
  _BYTE v14[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  struct VIDMM_VAD *v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v16 = 2;
  if ( (int)CVirtualAddressAllocator::AllocateVirtualAddressRange(
              (CVirtualAddressAllocator *)this,
              v10,
              a2,
              0LL,
              a4,
              a5,
              a6,
              &v17,
              1u) < 0 )
  {
    WdLogSingleEntry0(3LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    return 3221225473LL;
  }
  else
  {
    v11 = v17;
    v12 = v17;
    *((_DWORD *)v17 + 18) |= 0x800u;
    CVirtualAddressAllocator::InsertVadToReservedList((CVirtualAddressAllocator *)this, v12);
    *a7 = *((_QWORD *)v11 + 3);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    return 0LL;
  }
}
