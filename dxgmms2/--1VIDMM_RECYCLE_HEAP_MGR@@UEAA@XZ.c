/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C00179D0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0001DB8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001DE4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001EC0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001F48 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C0096348 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0096A78 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C00B3284 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // rdx
  __int64 v4; // rcx
  char **v5; // rax
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rdi
  struct VIDMM_RECYCLE_RANGE *v8; // r14
  unsigned __int8 v9; // dl
  _QWORD *v10; // rdi
  VIDMM_RECYCLE_RANGE *v11; // rsi
  unsigned __int8 v12; // dl
  _QWORD *v13; // rax
  PVOID *v14; // rdi
  __int64 v15; // rsi
  void *v16; // rdx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  void *v19; // rcx
  bool v20; // [rsp+38h] [rbp-29h] BYREF
  int v21; // [rsp+3Ch] [rbp-25h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-11h] BYREF
  DXGPUSHLOCK *v24; // [rsp+58h] [rbp-9h]
  int v25; // [rsp+60h] [rbp-1h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp+7h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
    (DXGAUTOPUSHLOCK *)v23,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    0);
  DXGPUSHLOCK::AcquireExclusive(v24);
  v3 = (char *)this + 1600;
  v25 = 2;
  v4 = *((_QWORD *)this + 200);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 201), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  _InterlockedExchange((volatile __int32 *)this + 396, 1);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 384);
  if ( (_DWORD)v6 && !KeCancelTimer((PKTIMER)((char *)this + 1376)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    KeWaitForSingleObject(*((PVOID *)this + 199), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  }
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  while ( v7 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v7 - 104);
    v7 = *(VIDMM_RECYCLE_HEAP_MGR **)v7;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, v8);
    v20 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v8, &v20);
    if ( !v20 )
    {
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v8 + 17);
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6, v9);
    }
  }
  v10 = (_QWORD *)((char *)this + 1560);
  while ( 1 )
  {
    v13 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    v11 = (VIDMM_RECYCLE_RANGE *)(v13 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, (struct VIDMM_RECYCLE_RANGE *)(v13 - 13));
    v21 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v11, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v21);
    if ( !v21 )
    {
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v11 + 17);
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6, v12);
    }
  }
  Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v14 = (PVOID *)((char *)this + 1656);
  v15 = 4LL;
  do
  {
    v16 = *(v14 - 4);
    if ( v16 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164), v16);
    if ( *v14 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165), *v14);
    ++v14;
    --v15;
  }
  while ( v15 );
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 164));
  }
  v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v18 )
  {
    ExDeleteLookasideListEx(v18);
    operator delete(*((void **)this + 165));
  }
  v19 = (void *)*((_QWORD *)this + 199);
  if ( v19 )
    operator delete(v19);
  KeUnstackDetachProcess(&ApcState);
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
