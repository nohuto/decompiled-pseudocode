/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0007310 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000748C (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C018C67C (-PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018C720 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018C750 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1C033ED08 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *v2; // rax
  struct DXGTERMINATIONTRACKER *v3; // rbx
  struct _KPROCESS *v4; // rcx
  DXGDEVICE *v5; // rcx
  struct DXGPROCESS *v6; // rdx
  ULONG_PTR Count; // rcx
  _OWORD v8[3]; // [rsp+28h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  while ( 1 )
  {
    v2 = ADAPTER_RENDER::PopDeferredTracker((ADAPTER_RENDER *)this);
    v3 = v2;
    if ( !v2 )
      break;
    v4 = (struct _KPROCESS *)*((_QWORD *)v2 + 2);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v4, &ApcState);
    v5 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    v6 = (struct DXGPROCESS *)*((_QWORD *)v5 + 5);
    memset(v8, 0, sizeof(v8));
    if ( (*((_DWORD *)v6 + 106) & 0x100) != 0 )
    {
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v8, v6, 1u);
      v5 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    }
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
      if ( *(_QWORD *)v3 )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)v3);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, v3);
    }
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v8);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[174], 0LL);
    this[175].Count = (ULONG_PTR)KeGetCurrentThread();
    this[172].Count -= *((_QWORD *)v3 + 5);
    this[175].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[174], 0LL);
    KeLeaveCriticalRegion();
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)this, v3);
  }
  ExReleaseRundownProtection(this + 173);
  Count = this[2].Count;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(Count + 16), (struct DXGADAPTER *)Count);
}
