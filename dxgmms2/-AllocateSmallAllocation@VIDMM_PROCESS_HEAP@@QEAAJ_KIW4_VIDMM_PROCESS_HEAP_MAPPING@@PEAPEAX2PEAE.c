/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0104134
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C0103360 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C0103AD4 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0104814 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C0104CFC (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  __int64 v9; // rbx
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // rsi
  union _LARGE_INTEGER *v13; // rax
  union _LARGE_INTEGER *v14; // r15
  int Block; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD **BlockListHead; // rsi
  __int64 v20; // r9
  _QWORD *v21; // rdi
  struct _VIDMM_PROCESS_HEAP_BLOCK *v22; // r14
  VIDMM_LINEAR_POOL *v23; // rcx
  __int64 v24; // r9
  union _LARGE_INTEGER v25; // rbx
  int v26; // edi
  int v27; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v28; // rax
  int v29; // edx
  int v30; // ecx
  __int64 (__fastcall *v31)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int); // rax
  __int64 v32; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // r8
  LONGLONG v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // [rsp+20h] [rbp-69h]
  unsigned __int64 v41; // [rsp+28h] [rbp-61h]
  char v42[8]; // [rsp+30h] [rbp-59h]
  char v43[8]; // [rsp+38h] [rbp-51h]
  char v44; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v45; // [rsp+68h] [rbp-21h] BYREF
  LONGLONG v46; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v47; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v48[8]; // [rsp+80h] [rbp-9h] BYREF
  char v49; // [rsp+D0h] [rbp+47h]
  unsigned __int64 v50; // [rsp+D8h] [rbp+4Fh] BYREF

  v50 = a2;
  v46 = 0LL;
  v9 = a3;
  v45 = 0LL;
  v48[0] = 0LL;
  v47.QuadPart = 0LL;
  v49 = 0;
  v44 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v11[3] = v50;
    v11[4] = v9;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v14 = v13;
  if ( !v13 )
  {
    Block = -1073741801;
    _InterlockedIncrement(&dword_1C00767E4);
    WdLogSingleEntry1(6LL, 657LL);
    *(_QWORD *)v43 = 0LL;
    *(_QWORD *)v42 = 0LL;
    v41 = 0LL;
    v40 = 657LL;
    DxgkLogInternalTriageEvent(v16, 262145LL);
LABEL_24:
    v22 = v45;
LABEL_25:
    if ( v46 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, LONGLONG *, unsigned __int64 *, __int64, unsigned __int64, unsigned __int64, char *, char *))VirtualMemoryInterface
       + 2))(
        -1LL,
        &v46,
        &v50,
        0x4000LL,
        v40,
        v41,
        *(char **)v42,
        *(char **)v43);
    }
    if ( v48[0] && v22 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v22 + 9), v48[0]);
    if ( v49 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v22);
    if ( v14 )
      ExFreeToPagedLookasideList(v12, v14);
    if ( v44 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
    return (unsigned int)Block;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 16));
  v44 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v17);
  v21 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v18);
    Block = VIDMM_PROCESS_HEAP::AllocateBlock(a1, v50, v9, a4, (__int64 *)&v45, a8);
    if ( Block < 0 )
      goto LABEL_23;
    v22 = v45;
    LOBYTE(v24) = 1;
    v49 = 1;
    Block = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)v45 + 9),
              v50,
              (unsigned int)v9,
              v24,
              0LL,
              0LL,
              0,
              0,
              0LL,
              &v47,
              (void **)v48);
    if ( Block < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v18);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_25;
    }
  }
  else
  {
    while ( 1 )
    {
      v22 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v21 - 1);
      v23 = (VIDMM_LINEAR_POOL *)v21[8];
      v21 = (_QWORD *)*v21;
      LOBYTE(v20) = 1;
      v45 = v22;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v23, v50, (unsigned int)v9, v20, 0LL, 0LL, 0, 0, 0LL, &v47, (void **)v48) >= 0 )
        break;
      if ( v21 == BlockListHead )
        goto LABEL_8;
    }
  }
  v25 = v47;
  if ( !*((_QWORD *)v22 + 7) && !*((_QWORD *)v22 + 11) )
  {
    v26 = *((_DWORD *)v22 + 20);
    v46 = v47.QuadPart + *((_QWORD *)v22 + 4);
    v27 = *((_DWORD *)v22 + 12);
    v28 = DxgkGetVirtualMemoryInterface();
    v29 = 8392704;
    v30 = 4096;
    v31 = *(__int64 (__fastcall **)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int))v28;
    if ( v26 != 2 )
      v30 = 8392704;
    if ( !a8 )
      v29 = v30;
    Block = v31(-1LL, &v46, 0LL, &v50, v29, v27);
    if ( Block < 0 )
    {
      v46 = 0LL;
      _InterlockedIncrement(&dword_1C0076870);
      WdLogSingleEntry1(6LL, 780LL);
      *(_QWORD *)v43 = 0LL;
      *(_QWORD *)v42 = 0LL;
      v41 = 0LL;
      v40 = 780LL;
      DxgkLogInternalTriageEvent(v32, 262145LL);
LABEL_23:
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_24;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v18);
    v35[4] = v47.HighPart;
    v35[5] = v25.LowPart;
    v35[3] = v22;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += v50;
  v36 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v36[20] += v50;
  }
  else if ( a4 == 2 )
  {
    v36[22] += v50;
  }
  else
  {
    v36[24] += v50;
  }
  v14->LowPart &= ~1u;
  v14[7].QuadPart = v50;
  v14[3] = (union _LARGE_INTEGER)v48[0];
  LOBYTE(v14[9].LowPart) = 0;
  v14[1].QuadPart = (LONGLONG)v22;
  v14[2] = v25;
  v14[4].QuadPart = 0LL;
  ++*((_DWORD *)v22 + 6);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
  *a5 = v14;
  if ( a4 - 3 <= 1 )
    v38 = 0LL;
  else
    v38 = v14[2].QuadPart + *(_QWORD *)(v14[1].QuadPart + 32);
  *a6 = v38;
  if ( bTracingEnabled )
  {
    v39 = a4 - 3 <= 3 ? *((_QWORD *)v22 + 11) : *((_QWORD *)v22 + 4);
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v39,
        &EventCreateProcessAllocationDetails,
        v37,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v14,
        v50,
        v39);
  }
  *a7 = 1;
  return 0LL;
}
