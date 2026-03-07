__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r11d
  struct VIDMM_DEVICE *v7; // r15
  __int64 v9; // rbp
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  struct _VIDMM_GLOBAL_ALLOC **v17; // rdi
  int OneAllocation; // ebp
  PRKPROCESS *v19; // rcx
  int v20; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24[8]; // [rsp+A0h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF

  v4 = *((_QWORD *)a2 + 11);
  v5 = *(_DWORD *)this;
  v7 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 13);
  v9 = a3;
  v10 = 1616LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v11 = 0;
  v12 = v10 + *(_QWORD *)(v4 + 40224);
  if ( (*(_BYTE *)(v4 + 40936) & 0x40) != 0 || !((__int16)v5 >> 13) )
    v11 = 1;
  v24[0] = 0;
  v13 = v11 | 0x40;
  v14 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 436LL);
  if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 || _bittest(*(const signed __int32 **)(v12 + 448), 0xCu) )
    v13 |= 4u;
  if ( a4 )
    LOBYTE(v15) = a4 - 1;
  else
    v15 = *(unsigned __int16 *)(v10 + *(_QWORD *)(v4 + 40224) + 36) - *(_DWORD *)(v10 + *(_QWORD *)(v4 + 40224) + 28);
  v16 = *(_DWORD *)(v12 + 48LL * (v5 & 7) + 108);
  v17 = this + 2;
  if ( !v16 )
    v16 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v4,
                    v7,
                    (v5 >> 7) & 0x1F,
                    v9,
                    v9,
                    v16,
                    1 << v15,
                    0,
                    0,
                    v13,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    this,
                    0LL,
                    this + 2,
                    *(_DWORD *)v24);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C00767B8);
    WdLogSingleEntry1(6LL, 4150LL);
    DxgkLogInternalTriageEvent(v22, 262145LL);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 36) & 4) != 0 )
      *((_DWORD *)*v17 + 17) |= 0x200u;
    v19 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v19, &ApcState);
    v20 = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v4, v7, *v17, 0LL, 0, 0LL, this + 3, v24);
    KeUnstackDetachProcess(&ApcState);
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1C00767BC);
      WdLogSingleEntry1(6LL, 4180LL);
      DxgkLogInternalTriageEvent(v23, 262145LL);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
