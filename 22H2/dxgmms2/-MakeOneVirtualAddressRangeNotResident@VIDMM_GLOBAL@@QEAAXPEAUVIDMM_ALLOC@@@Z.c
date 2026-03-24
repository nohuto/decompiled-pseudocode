/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006EEC4
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0067080 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006E588 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001C30 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F08C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006FBAC (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_PROCESS *v4; // r12
  unsigned int v5; // r8d
  struct _KTHREAD **VirtualAddressAllocator; // r15
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 **v9; // r14
  __int64 *i; // rsi
  __int64 j; // rdi
  CVirtualAddressAllocator *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-468h] BYREF
  struct _KTHREAD **v19; // [rsp+28h] [rbp-460h]
  int v20; // [rsp+30h] [rbp-458h]
  unsigned __int64 v21[64]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v22[64]; // [rsp+240h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v4 = *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL);
  if ( (*((_DWORD *)v4 + 24) & 2) != 0 )
    v5 = *(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x3F;
  else
    v5 = -1;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  v4,
                                                  *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                                  v5);
  if ( VirtualAddressAllocator )
  {
    v7 = *((_DWORD *)this + 1750);
    if ( v7 )
    {
      memset(v22, 0xFFu, 8LL * v7);
      memset(v21, 0, 8LL * v7);
    }
    v8 = 0;
    v20 = 0;
    v19 = VirtualAddressAllocator + 7;
    if ( VirtualAddressAllocator[8] != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 7));
      v20 = 2;
    }
    v9 = (__int64 **)((char *)a2 + 128);
    for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( (i[5] & 0xC00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          (CVirtualAddressAllocator *)VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v13 = *((_DWORD *)i + 10);
        v14 = (v13 >> 4) & 0x3F;
        v15 = v22[v14];
        if ( v15 >= i[9] )
          v15 = i[9];
        v16 = i[10];
        v22[v14] = v15;
        v17 = v21[v14];
        if ( v17 <= v16 )
          v17 = v16;
        v21[v14] = v17;
        _bittestandset((int *)&v8, (v13 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    for ( j = 0LL; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v12 = VIDMM_PROCESS::GetVirtualAddressAllocator(v4, *(_DWORD *)(*((_QWORD *)this + 3) + 232LL), j);
        CVirtualAddressAllocator::FlushGpuVaTlb(v12, j, v22[j], v21[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
