/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0025500
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0023020 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0081220 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00BA000 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00232AC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C0023454 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00236D0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0023754 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0025818 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C0025894 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C0026524 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  int Batch; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  PVOID *v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  DirectComposition::CBatchSharedMemoryPoolSet *v21; // rsi
  unsigned __int64 v22; // rdx
  struct _ERESOURCE *v23; // rbx
  int v24; // eax
  __int64 v26; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v27; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 674) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
    *((_QWORD *)this + 334) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v14 = (void *)*((_QWORD *)this + 334);
    *((_QWORD *)this + 336) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v14, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v15 = *((_DWORD *)this + 678);
  if ( !v15 )
    goto LABEL_9;
  if ( Batch < 0 )
  {
LABEL_26:
    v21 = (DirectComposition::CApplicationChannel *)((char *)this + 2592);
    goto LABEL_12;
  }
  v16 = (v15 + 4095) & 0xFFFFF000;
  *((_DWORD *)this + 678) = v16;
  if ( !v16 )
  {
    Batch = -1073741801;
    goto LABEL_26;
  }
  v17 = (PVOID *)((char *)this + 2704);
  v29 = v16;
  Batch = MmCreateSection((char *)this + 2704, 6LL, 0LL, &v29, 4, 138412032, 0LL, 0LL);
  if ( Batch < 0 )
    goto LABEL_26;
  Batch = MmMapViewInSessionSpace(*v17, (PVOID *)this + 340, &ViewSize);
  if ( Batch < 0 )
    goto LABEL_26;
  v18 = *((unsigned int *)this + 678);
  v26 = 0LL;
  Batch = ((__int64 (__fastcall *)(PVOID, _QWORD, char *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
            *v17,
            *((_QWORD *)this + 334),
            (char *)this + 2728,
            0LL,
            v18,
            &v26,
            &ViewSize,
            2,
            0x400000,
            4);
LABEL_9:
  if ( Batch < 0 )
    goto LABEL_26;
  v19 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  Batch = DirectComposition::CEvent::Create(v20, v19 != 3, (struct DirectComposition::CEvent **)this + 27);
  if ( Batch < 0 )
    goto LABEL_26;
  v21 = (DirectComposition::CApplicationChannel *)((char *)this + 2592);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 2592),
            2uLL);
LABEL_12:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v21,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 328,
      (unsigned __int64 *)this + 329);
    v27 = 0LL;
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(v21, v22, &v27, (unsigned __int64 *)this + 330);
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 22);
      if ( Batch >= 0 )
      {
        v23 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v23, 1u);
        v24 = DirectComposition::CConnection::RegisterChannel(
                *((DirectComposition::CConnection **)this + 5),
                this,
                (unsigned int *)this + 7);
        Batch = v24;
        if ( v24 < 0 )
        {
          if ( v24 == -1073741300 )
          {
            *((_DWORD *)this + 6) = 3;
            Batch = 0;
          }
        }
        else
        {
          DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
            v21,
            *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
          *((_DWORD *)this + 6) = 0;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
        KeLeaveCriticalRegion();
        if ( Batch >= 0 )
        {
          if ( a2 )
            *a2 = *((_DWORD *)this + 678);
          if ( a3 )
            *a3 = (void *)*((_QWORD *)this + 341);
        }
      }
    }
  }
  return (unsigned int)Batch;
}
