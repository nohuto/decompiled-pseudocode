/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F2438
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092740 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0092D70 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0092E28 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        struct VIDMM_ALLOC **a10)
{
  __int64 v12; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  char v19; // al
  int v20; // r14d
  __int64 v21; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-91h]
  PVOID BaseAddressa; // [rsp+20h] [rbp-91h]
  struct VIDMM_GLOBAL *P; // [rsp+28h] [rbp-89h]
  struct VIDMM_GLOBAL *Pa; // [rsp+28h] [rbp-89h]
  _QWORD v26[10]; // [rsp+50h] [rbp-61h] BYREF

  v12 = a4;
  v14 = *((_QWORD *)this + 6);
  v15 = a4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a4) & 2) == 0 )
    v15 = a5;
  v16 = (unsigned int)v15;
  if ( !*(_QWORD *)(v14 + 8 * v15) )
  {
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v15) = CreatePageTable(
                                                                     a2,
                                                                     (*(_DWORD *)this >> 7) & 0x1F,
                                                                     (unsigned int)v15 > a4,
                                                                     0);
    v14 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v14 + 8 * v16) )
    {
      WdLogSingleEntry1(1LL, 5415LL);
      DxgkLogInternalTriageEvent(v17, 0x40000LL);
      return 3221225495LL;
    }
  }
  memset(v26, 0, sizeof(v26));
  v19 = *((_BYTE *)a3 + 65);
  v26[0] |= 3uLL;
  BYTE1(v26[8]) = v19;
  LOBYTE(v26[8]) = *((_BYTE *)a3 + 64);
  v26[7] = 0xFFFFFFFE00000006uLL;
  if ( a8 < a6 )
  {
    P = (struct VIDMM_GLOBAL *)(a6 - a8);
    BaseAddress = (PVOID)(a8 << 12);
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v20 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v14 + 8 * v16),
              a2,
              (const struct COMMIT_VA_STATE *)v26,
              0LL,
              (unsigned __int64)BaseAddress,
              P,
              0LL,
              0,
              a10);
      if ( v20 < 0 )
      {
LABEL_9:
        WdLogSingleEntry0(3LL);
        return (unsigned int)v20;
      }
    }
    else
    {
      v20 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v14 + 8 * v12),
              a2,
              (const struct COMMIT_VA_STATE *)v26,
              0LL,
              (unsigned __int64)BaseAddress,
              (unsigned __int64)P,
              0LL,
              0,
              a10);
      if ( v20 < 0 )
        goto LABEL_9;
    }
  }
  if ( a7 < a9 )
  {
    v21 = *((_QWORD *)this + 6);
    Pa = (struct VIDMM_GLOBAL *)(a9 - a7);
    BaseAddressa = (PVOID)(a7 << 12);
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v20 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v21 + 8 * v16),
              a2,
              (const struct COMMIT_VA_STATE *)v26,
              0LL,
              (unsigned __int64)BaseAddressa,
              Pa,
              0LL,
              0,
              a10);
      if ( v20 < 0 )
        goto LABEL_9;
    }
    else
    {
      v20 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v21 + 8 * v12),
              a2,
              (const struct COMMIT_VA_STATE *)v26,
              0LL,
              (unsigned __int64)BaseAddressa,
              (unsigned __int64)Pa,
              0LL,
              0,
              a10);
      if ( v20 < 0 )
        goto LABEL_9;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 16 * v16) &= ~2uLL;
  VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v16);
  return 0LL;
}
