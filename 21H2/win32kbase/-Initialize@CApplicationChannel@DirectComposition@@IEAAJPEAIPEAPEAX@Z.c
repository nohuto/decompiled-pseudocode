/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BA50
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005ADF0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C00AD734 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00AFCFC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C005AF08 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005AF70 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C005B5F8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C005B744 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C005B8C8 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005BD74 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005BDE4 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  PVOID *v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  enum _EVENT_TYPE v19; // ecx
  DirectComposition::CBatchSharedMemoryPoolSet *v20; // rsi
  unsigned __int64 v21; // rdx
  struct _ERESOURCE *v22; // rbx
  int v23; // eax
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v26; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 174) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    *((_QWORD *)this + 85) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v13 = (void *)*((_QWORD *)this + 85);
    *((_QWORD *)this + 86) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v13, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v14 = *((_DWORD *)this + 178);
  if ( v14 )
  {
    if ( Batch < 0 )
      goto LABEL_27;
    v15 = (v14 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 178) = v15;
    if ( !v15 )
      Batch = -1073741801;
    if ( Batch < 0 )
      goto LABEL_27;
    v16 = (PVOID *)((char *)this + 704);
    v28 = v15;
    Batch = MmCreateSection((char *)this + 704, 6LL, 0LL, &v28, 4, 138412032, 0LL, 0LL);
    if ( Batch < 0 )
      goto LABEL_27;
    Batch = MmMapViewInSessionSpace(*v16, (PVOID *)this + 90, &ViewSize);
    if ( Batch < 0 )
      goto LABEL_27;
    v17 = *((unsigned int *)this + 178);
    v25 = 0LL;
    Batch = ((__int64 (__fastcall *)(PVOID, _QWORD, char *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
              *v16,
              *((_QWORD *)this + 85),
              (char *)this + 728,
              0LL,
              v17,
              &v25,
              &ViewSize,
              2,
              0x400000,
              4);
  }
  if ( Batch < 0
    || (v18 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this),
        Batch = DirectComposition::CEvent::Create(v19, v18 != 3, (struct DirectComposition::CEvent **)this + 27),
        Batch < 0) )
  {
LABEL_27:
    v20 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
    goto LABEL_14;
  }
  v20 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 600),
            2uLL);
LABEL_14:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v20,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 79,
      (unsigned __int64 *)this + 80);
    v26 = 0LL;
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(v20, v21, &v26, (unsigned __int64 *)this + 81);
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 22);
      if ( Batch >= 0 )
      {
        v22 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v22, 1u);
        v23 = DirectComposition::CConnection::RegisterChannel(
                *((DirectComposition::CConnection **)this + 5),
                this,
                (unsigned int *)this + 7);
        Batch = v23;
        if ( v23 < 0 )
        {
          if ( v23 == -1073741300 )
          {
            *((_DWORD *)this + 6) = 3;
            Batch = 0;
          }
        }
        else
        {
          DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
            v20,
            *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
          *((_DWORD *)this + 6) = 0;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
        KeLeaveCriticalRegion();
        if ( Batch >= 0 )
        {
          if ( a2 )
            *a2 = *((_DWORD *)this + 178);
          if ( a3 )
            *a3 = (void *)*((_QWORD *)this + 91);
        }
      }
    }
  }
  return (unsigned int)Batch;
}
