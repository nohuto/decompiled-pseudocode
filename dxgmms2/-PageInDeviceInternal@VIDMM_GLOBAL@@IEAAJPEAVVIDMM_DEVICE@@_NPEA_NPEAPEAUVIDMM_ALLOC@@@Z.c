__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD *v6; // r14
  char v8; // r10
  VIDMM_GLOBAL *v10; // rbp
  int v11; // edi
  __int64 v12; // rdx
  struct VIDMM_ALLOC **v13; // rax
  __int64 v14; // r12
  __int64 **v15; // rbx
  int v16; // ebp
  _QWORD *v17; // r15
  __int64 v18; // rcx
  VIDMM_DEVICE *v19; // rcx
  _QWORD *v20; // r15
  struct _KTHREAD **VirtualAddressAllocator; // rdi
  __int64 *v23; // rcx
  struct VIDMM_ALLOC **v24; // rcx
  int v25; // eax
  char v26[8]; // [rsp+30h] [rbp-58h] BYREF
  DXGPUSHLOCK *v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-48h]
  struct VIDMM_ALLOC **v32; // [rsp+B0h] [rbp+28h]

  v6 = (_QWORD *)((char *)a2 + 144);
  v8 = a3;
  v10 = this;
  v11 = 0;
  *a5 = 0LL;
  *a4 = 0;
  if ( (_QWORD *)*v6 == v6
    || (v12 = *((_QWORD *)a2 + 4)) != 0
    && (*(_BYTE *)(v12 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 200), 0, 0)) )
  {
    if ( *((_QWORD *)a2 + 32) )
      *((_QWORD *)a2 + 32) = 0LL;
    return (unsigned int)v11;
  }
  v13 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 3);
  v32 = v13;
  if ( v13 )
  {
    v14 = (__int64)(v13 + 101);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 101));
    v8 = a3;
  }
  else
  {
    v14 = 808LL;
  }
  v15 = (__int64 **)*((_QWORD *)a2 + 32);
  if ( !v15 )
    goto LABEL_8;
  if ( (*(_DWORD *)(**v15 + 68) & 0x100) != 0 )
  {
    VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                    *((VIDMM_PROCESS **)a2 + 1),
                                                    *(_DWORD *)(*((_QWORD *)v10 + 3) + 240LL),
                                                    *(_DWORD *)(**v15 + 68) & 0x3F);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, VirtualAddressAllocator + 7, 0);
    DXGPUSHLOCK::AcquireExclusive(v27);
    v23 = *v15;
    v28 = 2;
    v24 = *(struct VIDMM_ALLOC ***)(*v23 + 104);
    if ( (*(_DWORD *)v24 & 7) != 0 )
      v25 = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
              v24,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              a5);
    else
      v25 = VIDMM_PAGE_TABLE::CommitPageTable(
              (VIDMM_PAGE_TABLE *)v24,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              a5);
    v11 = v25;
    *a4 = v25 == -1073741267;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
LABEL_40:
    if ( v11 < 0 )
      goto LABEL_41;
    goto LABEL_44;
  }
  if ( (*((_DWORD *)v15 + 7) & 3) != 0 )
  {
    v11 = VIDMM_GLOBAL::PageInFaultedAllocation(v10, v15, v8, a4, a5);
    goto LABEL_40;
  }
  v11 = 0;
LABEL_44:
  *((_QWORD *)a2 + 32) = 0LL;
LABEL_8:
  v16 = 0;
LABEL_9:
  v17 = (_QWORD *)*v6;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( v17 == v6 )
        {
          v20 = (_QWORD *)*v6;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v20 == v6 )
              {
                if ( ++v16 >= 3 )
                  goto LABEL_27;
                goto LABEL_9;
              }
              v15 = (__int64 **)(v20 - 7);
              v20 = (_QWORD *)*v20;
              if ( !v16 )
                break;
              if ( v16 != 1 || *(_DWORD *)(**v15 + 400) >= 0xA0000000 )
                goto LABEL_24;
            }
            if ( (*(_DWORD *)(**v15 + 68) & 0x40) == 0 )
            {
LABEL_24:
              v11 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v15, a3, a4, a5);
              if ( v11 < 0 )
                goto LABEL_17;
            }
          }
        }
        v15 = (__int64 **)(v17 - 7);
        v17 = (_QWORD *)*v17;
        if ( v16 )
          break;
        if ( (*(_DWORD *)(**v15 + 68) & 0x40) == 0 )
          goto LABEL_15;
      }
    }
    while ( v16 == 1 && *(_DWORD *)(**v15 + 400) < 0xA0000000 );
LABEL_15:
    v18 = **v15;
    if ( *(_DWORD *)(v18 + 112) == 1 )
    {
      v11 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v15, a3, a4, a5);
      if ( v11 < 0 )
        break;
    }
  }
LABEL_17:
  v10 = this;
LABEL_41:
  if ( (*((_DWORD *)v15 + 7) & 3) == 2 )
    VIDMM_GLOBAL::FaultOneAllocation(v10, (VIDMM_DEVICE **)v15);
  else
    VIDMM_DEVICE::FaultCommitment(v19, (struct VIDMM_ALLOC *)v15);
  *((_QWORD *)a2 + 32) = *a5;
LABEL_27:
  if ( v32 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 16));
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v11;
}
