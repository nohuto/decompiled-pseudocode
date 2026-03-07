struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  VIDMM_PROCESS *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rbx
  CVirtualAddressAllocator *v7; // rax
  CVirtualAddressAllocator *v8; // rax
  CVirtualAddressAllocator *v9; // r10
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  CVirtualAddressAllocator *v16; // rcx
  _BYTE v17[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( (*(_DWORD *)(v2 + 424) & 0x100) == 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)this + 28, 0);
    DXGPUSHLOCK::AcquireExclusive(v18);
    v6 = 0LL;
    v19 = 2;
    if ( *((_QWORD *)this + 27) )
      goto LABEL_14;
    v7 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = CVirtualAddressAllocator::CVirtualAddressAllocator(v7);
      *((_QWORD *)this + 27) = v8;
      v9 = v8;
      if ( v8 )
      {
        v10 = *((_QWORD *)this + 4);
        v11 = *(_DWORD *)(v10 + 424);
        if ( (v11 & 0x100) != 0 )
          v12 = *(_QWORD *)(v10 + 608);
        else
          v12 = v10 & -(__int64)((v11 & 0x80u) != 0);
        v13 = CVirtualAddressAllocator::InitializeVaAllocator(
                v9,
                *(_QWORD *)(*(_QWORD *)(v12 + 608) + 264LL),
                0,
                0LL,
                0LL);
        v16 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
        if ( v13 < 0 )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(v16, v14, v15);
          *((_QWORD *)this + 27) = 0LL;
LABEL_15:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
          return (struct CVirtualAddressAllocator *)v6;
        }
        CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          (struct _KTHREAD **)v16,
          0x1000uLL,
          v15,
          0LL,
          0LL,
          0x1000u,
          &v20);
LABEL_14:
        v6 = *((_QWORD *)this + 27);
        goto LABEL_15;
      }
    }
    else
    {
      *((_QWORD *)this + 27) = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 0LL;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 608) + 64LL);
  if ( v4 )
    v3 = *(VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v3);
}
