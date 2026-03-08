/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74
 * Callers:
 *     UmfdDestroyFont @ 0x1C00EB960 (UmfdDestroyFont.c)
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C011D990 (UmfdQueryFontFile.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C011E69C (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryFont @ 0x1C011EB60 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C01204D0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0121100 (UmfdQueryAdvanceWidths.c)
 *     UmfdUnloadFontFileInternal @ 0x1C0121FD8 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFontTree @ 0x1C0122480 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0125098 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDrvFreeInternal @ 0x1C0307E40 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C0307EA0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C0307F50 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C0308010 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C0308090 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0308130 (UmfdQueryTrueTypeOutline.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00EF4CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00F8F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     _lambda_eef90ce73a6a62b5089d029612c95735_::operator() @ 0x1C011F5B4 (_lambda_eef90ce73a6a62b5089d029612c95735_--operator().c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C011F7BC (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C011F92C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C01526A0 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+48h] BYREF
  int v29; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+58h] BYREF

  v28 = a2;
  v2 = (int)a1;
  if ( (unsigned int)a1 > 3 )
    return 3221225485LL;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  _mm_lfence();
  v4 = *(_QWORD **)(v3 + 8 * v2 + 16);
  v5 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v7 = v5;
  if ( v5 )
  {
    v26[0] = v4;
    *v5 = 0LL;
    v26[1] = &v28;
    v26[2] = v5;
    v8 = *(_QWORD *)(SGDGetSessionState(v6) + 32) + 23520LL;
    v23 = v8;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(v8);
    if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v9) + 32) + 23536LL) )
    {
      v10 = lambda_eef90ce73a6a62b5089d029612c95735_::operator()(v26);
      AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v23);
      if ( v10 < 0 )
        goto LABEL_7;
      v12 = *v7;
      if ( !*v7 )
      {
        v10 = -1073741811;
        goto LABEL_7;
      }
      if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                           **(_QWORD **)(*v4 + 8LL),
                           **(_QWORD **)(*(_QWORD *)(v12 + 40) + 8LL),
                           0LL,
                           0LL,
                           "0u") == 258 )
      {
        v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
        {
          v27 = 0;
          v29 = v16;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v17,
            (int)&unk_1C0320210,
            v18,
            v19,
            (__int64)&v29,
            (__int64)&v27);
        }
        v10 = UmfdClientSignalServerAndWaitForCompletion(v4, v7, 0LL);
        if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL) )
        {
          v22 = v10;
          v30 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v16;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v30,
            (int)&unk_1C032023E,
            v20,
            v21,
            (__int64)&v22,
            (__int64)&v30);
        }
        goto LABEL_7;
      }
      v13 = *(_DWORD *)(v12 + 8) == 3;
      v14 = v4[1];
      v15 = *(_QWORD *)(v12 + 40);
      v25[1] = v15;
      v25[0] = v14;
      v24 = v12;
      if ( v13 )
      {
        CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v24);
        CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v25);
        *v7 = 0LL;
        v10 = 0;
        goto LABEL_7;
      }
      EngFreeMem((PVOID)v12);
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v14) > 8 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v14);
        CEventPool::CEventPoolEntry::Destroy((_QWORD *)v15);
      }
      else
      {
        KeResetEvent(**(PRKEVENT **)(v15 + 8));
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 16), (PSLIST_ENTRY)v15);
      }
      *v7 = 0LL;
    }
    else if ( v8 )
    {
      GreReleasePushLockShared(v8);
      KeLeaveCriticalRegion();
    }
    v10 = -1073741823;
LABEL_7:
    EngFreeMem(v7);
    return (unsigned int)v10;
  }
  return 3221225495LL;
}
