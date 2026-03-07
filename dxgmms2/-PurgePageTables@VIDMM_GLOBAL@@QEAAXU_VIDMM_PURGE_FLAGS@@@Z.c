void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2, void (*a3)(void *), void *a4)
{
  __int64 i; // rbp
  __int64 v7; // rsi
  CVirtualAddressAllocator *v8; // r14
  _QWORD *v9; // rdx
  CVirtualAddressAllocator ***v10; // r9
  CVirtualAddressAllocator ***v11; // r8
  CVirtualAddressAllocator *j; // r15
  CVirtualAddressAllocator *v13; // [rsp+20h] [rbp-28h] BYREF
  CVirtualAddressAllocator **v14; // [rsp+28h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 7016); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a1 + 40224) + 1616LL * (unsigned int)i;
      if ( (*(_BYTE *)(v7 + 444) & 1) != 0 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 445) & 2) != 0) )
      {
        v14 = &v13;
        v13 = (CVirtualAddressAllocator *)&v13;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 41072));
        v9 = *(_QWORD **)(a1 + 41120);
        if ( v9 != (_QWORD *)(a1 + 41120) )
        {
          v10 = (CVirtualAddressAllocator ***)v14;
          do
          {
            v11 = (CVirtualAddressAllocator ***)v9[60];
            if ( v11 && v9[2] != *(_QWORD *)(a1 + 40384) )
            {
              if ( *v10 != &v13 )
                __fastfail(3u);
              v11[1] = (CVirtualAddressAllocator **)v10;
              *v11 = &v13;
              *v10 = (CVirtualAddressAllocator **)v11;
              v10 = v11;
              v14 = (CVirtualAddressAllocator **)v11;
            }
            v9 = (_QWORD *)*v9;
          }
          while ( v9 != (_QWORD *)(a1 + 41120) );
        }
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 41088));
        ExReleasePushLockSharedEx(a1 + 41072, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v13; j != (CVirtualAddressAllocator *)&v13; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v7 + 444) |= 0x40u;
      }
      v8 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40416);
      if ( v8 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 445) & 4) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, a3, a4);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF);
        *(_BYTE *)(a1 + 40936) |= 0x40u;
        CVirtualAddressAllocator::EvictRootPageTable(v8, i, a2 & 1);
        *(_BYTE *)(a1 + 40936) &= ~0x40u;
        *(_BYTE *)(v7 + 444) |= 0x80u;
      }
      *(_BYTE *)(v7 + 445) &= 0xF9u;
    }
  }
}
