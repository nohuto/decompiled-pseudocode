/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C001BC7C
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C000B5EC (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDestroyFont @ 0x1C0018410 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C0018730 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C001B8F4 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryAdvanceWidths @ 0x1C001BA50 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryFontData @ 0x1C001BB60 (UmfdQueryFontData.c)
 *     UmfdLoadFontFile @ 0x1C00E9FA0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00EA118 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C0105750 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C0106F80 (UmfdQueryFontTree.c)
 *     UmfdQueryFontFile @ 0x1C0109C60 (UmfdQueryFontFile.c)
 *     UmfdDrvFreeInternal @ 0x1C010AD68 (UmfdDrvFreeInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C013ED90 (UmfdQueryTrueTypeOutline.c)
 *     UmfdEscape @ 0x1C02DBCB0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DBD60 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DBE20 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DBEA0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00F6E98 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C011AC00 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C0159258 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015DD8C (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C0E88 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02DBF38 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DC8AC (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC8EC (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02DC930 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, struct _SLIST_ENTRY *a2)
{
  _QWORD *v3; // r15
  __int64 *v4; // rdi
  unsigned __int64 v5; // rax
  signed int v6; // ebx
  __int64 v7; // rbx
  PSLIST_ENTRY v8; // rax
  PSLIST_ENTRY v9; // rsi
  char *v10; // rax
  struct _SLIST_ENTRY *v11; // rbx
  __int64 v12; // rsi
  struct _SLIST_ENTRY *v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // r14
  unsigned __int64 v19; // rsi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r8d
  int v24; // r9d
  signed __int32 v26[8]; // [rsp+0h] [rbp-70h] BYREF
  signed int v27; // [rsp+30h] [rbp-40h] BYREF
  PSLIST_ENTRY v28; // [rsp+38h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v29; // [rsp+40h] [rbp-30h] BYREF
  void *v30; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-10h] BYREF
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  int v35; // [rsp+C0h] [rbp+50h] BYREF
  int v36; // [rsp+C8h] [rbp+58h] BYREF

  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v3 = (_QWORD *)g_pUmfdClientPort[a1];
  v4 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  if ( v4 )
  {
    *v4 = 0LL;
    v30 = &UmfdHostLifeTimeManager::s_ReadyLock;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    if ( !UmfdHostLifeTimeManager::s_Ready )
    {
      GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
      KeLeaveCriticalRegion();
      goto LABEL_35;
    }
    if ( ((unsigned __int8 (__fastcall *)(struct _SLIST_ENTRY *))a2->Next[1].Next)(a2)
      && UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread != KeGetCurrentThread() )
    {
      v5 = (*((__int64 (__fastcall **)(struct _SLIST_ENTRY *))&a2->Next->Next + 1))(a2);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v5);
      v6 = -1073741823;
LABEL_14:
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v30);
      if ( v6 < 0 )
      {
LABEL_36:
        EngFreeMem(v4);
        return (unsigned int)v6;
      }
      v12 = *v4;
      if ( !*v4 )
      {
        v6 = -1073741811;
        goto LABEL_36;
      }
      v15 = *(_QWORD *)(v12 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v15 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
        {
          v34 = 0;
          v35 = v22;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v20,
            (unsigned int)&unk_1C02F26BA,
            v21,
            v22,
            (__int64)&v35,
            (__int64)&v34);
        }
        v6 = UmfdClientWaitForCompletion(v3, v4, 0LL);
        if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
        {
          v27 = v6;
          v36 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            MEMORY[0xFFFFF78000000320],
            (unsigned int)&unk_1C02F2663,
            v23,
            v24,
            (__int64)&v27,
            (__int64)&v36);
        }
        goto LABEL_36;
      }
      v16 = *(_DWORD *)(v12 + 8) == 3;
      v17 = v3[1];
      v18 = *(_QWORD *)(v12 + 40);
      v33[0] = v17;
      v33[1] = v18;
      v32 = v12;
      if ( v16 )
      {
        CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v32);
        CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v33);
        *v4 = 0LL;
        v6 = 0;
        goto LABEL_36;
      }
      EngFreeMem((PVOID)v12);
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v17) > 8 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v17);
        CEventPool::CEventPoolEntry::Destroy((PVOID)v18);
      }
      else
      {
        KeResetEvent(**(PRKEVENT **)(v18 + 8));
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v17 + 16), (PSLIST_ENTRY)v18);
      }
      *v4 = 0LL;
LABEL_35:
      v6 = -1073741823;
      goto LABEL_36;
    }
    v7 = v3[1];
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 16));
    v9 = v8;
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v7);
    }
    else
    {
      v8 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      v9 = v8;
      if ( !v8 )
      {
        v28 = 0LL;
        goto LABEL_12;
      }
    }
    v28 = v8;
    v10 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v11 = (struct _SLIST_ENTRY *)v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 6) = 8;
      *((_QWORD *)v10 + 5) = v9;
      *((_DWORD *)v10 + 7) = 8;
      v13 = (struct _SLIST_ENTRY *)(v10 + 56);
      v11[1].Next = v13;
      v29 = v11;
      v13->Next = a2;
      *((_DWORD *)&v11->Next + 2) = 0;
      v14 = (_BYTE *)*v3;
      if ( !*(_BYTE *)*v3 )
      {
        *((_DWORD *)&v11->Next + 2) = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v14 + 1, v11);
        _InterlockedOr(v26, 0);
        KeSetEvent(**((PRKEVENT **)v14 + 1), 1, 0);
        goto LABEL_13;
      }
    }
    else
    {
      v29 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v29);
LABEL_12:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v28);
    v11 = 0LL;
LABEL_13:
    *v4 = (__int64)v11;
    v6 = v11 == 0LL ? 0xC0000001 : 0;
    goto LABEL_14;
  }
  return 3221225495LL;
}
