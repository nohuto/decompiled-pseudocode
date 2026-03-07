void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // r13
  _QWORD *v5; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rsi
  unsigned int v7; // eax
  size_t v8; // rbx
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  char *v14; // r15
  char *v15; // rdi
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 i; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // rsi
  VIDMM_GLOBAL *v23; // r14
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r12
  unsigned int *v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  struct VIDMM_PROCESS *v29; // r9
  int v30; // r9d
  unsigned int v31; // eax
  int v32; // [rsp+40h] [rbp-478h]
  struct _D3DGPU_PHYSICAL_ADDRESS v33; // [rsp+50h] [rbp-468h]
  struct _D3DGPU_PHYSICAL_ADDRESS v34; // [rsp+60h] [rbp-458h] BYREF
  unsigned __int64 v35[64]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v36[64]; // [rsp+270h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_DWORD *)(v4 + 96) & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                *(_DWORD *)(**(_QWORD **)a2 + 68LL) & 0x3F);
  }
  else
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v4 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( !v5 || !*(_DWORD *)(*v5 + 40928LL) )
      return;
    VirtualAddressAllocator = (struct CVirtualAddressAllocator *)v5[63];
  }
  if ( VirtualAddressAllocator )
  {
    v7 = *((_DWORD *)this + 1754);
    if ( v7 )
    {
      v8 = 8LL * v7;
      memset(v35, -1, v8);
      memset(v36, 0, v8 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v9 = 0;
    v10 = 0;
    v32 = 0;
    if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) == KeGetCurrentThread() )
    {
      v13 = (_QWORD *)((char *)VirtualAddressAllocator + 64);
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v30 = *((_DWORD *)VirtualAddressAllocator + 20);
          if ( v30 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v30);
        }
        ExAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      }
      v13 = (_QWORD *)((char *)VirtualAddressAllocator + 64);
      v9 = 2;
      *((_QWORD *)VirtualAddressAllocator + 8) = KeGetCurrentThread();
      v32 = 2;
    }
    v14 = (char *)a2 + 128;
    v15 = (char *)*((_QWORD *)a2 + 16);
    if ( v15 != v14 )
    {
      do
      {
        if ( ((*((_DWORD *)v15 + 10) | ((unsigned int)(*((_DWORD *)v15 + 10) | (*((_DWORD *)v15 + 10) >> 1)) >> 1)) & 0x400) != 0 )
        {
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            VirtualAddressAllocator,
            (struct VIDMM_MAPPED_VA_RANGE *)(v15 - 24),
            0LL,
            0);
          v16 = *((_DWORD *)v15 + 10);
          v17 = v35[(v16 >> 4) & 0x3F];
          if ( v17 >= *((_QWORD *)v15 + 9) )
            v17 = *((_QWORD *)v15 + 9);
          v18 = *((_QWORD *)v15 + 10);
          v35[(*((_DWORD *)v15 + 10) >> 4) & 0x3F] = v17;
          v19 = v36[(v16 >> 4) & 0x3F];
          if ( v19 <= v18 )
            v19 = v18;
          v36[(v16 >> 4) & 0x3F] = v19;
          _bittestandset((int *)&v10, (v16 >> 4) & 0x3F);
        }
        v15 = *(char **)v15;
      }
      while ( v15 != v14 );
      v9 = v32;
      v13 = (_QWORD *)((char *)VirtualAddressAllocator + 64);
    }
    if ( v9 == 2 )
    {
      *v13 = 0LL;
      ExReleasePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*((_BYTE *)this + 40936) & 2) != 0 )
    {
      for ( i = 0LL; v10; v10 >>= 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v21 = *(_QWORD **)(*(_QWORD *)(v4 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
          if ( v21 && *(_DWORD *)(*v21 + 40928LL) )
          {
            if ( (*(_DWORD *)(v4 + 96) & 2) != 0 )
              v22 = *(_QWORD *)(*v21 + 8 * i + 40416);
            else
              v22 = v21[63];
          }
          else
          {
            v22 = 0LL;
          }
          v23 = *(VIDMM_GLOBAL **)(v22 + 88);
          if ( (*((_BYTE *)v23 + 40936) & 0x40) == 0 )
          {
            v24 = v35[i];
            v25 = v36[i];
            if ( v24 <= v25 )
            {
              v26 = (unsigned int *)(32LL * (unsigned int)i + *(_QWORD *)(v22 + 120));
              v27 = *(_QWORD *)(*(_QWORD *)v26 + 16LL);
              if ( v27 )
              {
                if ( *(_QWORD *)(v27 + 120) )
                {
                  *(_QWORD *)&v33.SegmentId = v26[6];
                  v33.SegmentOffset = *(_QWORD *)(v27 + 128);
                  if ( !*(_QWORD *)(v22 + 112) )
                  {
                    v31 = VIDMM_GLOBAL::AdapterId(v23);
                    *(_QWORD *)(v22 + 112) = VIDMM_PROCESS::GetKmdProcessHandle(*(VIDMM_PROCESS **)(v22 + 96), v31);
                  }
                  v28 = *(void **)(v22 + 112);
                  v29 = *(struct VIDMM_PROCESS **)(v22 + 96);
                  v34 = v33;
                  VIDMM_GLOBAL::FlushGpuVaTlb(v23, i, &v34, v29, v28, v24, v25);
                }
              }
            }
          }
        }
        i = (unsigned int)(i + 1);
      }
    }
  }
}
