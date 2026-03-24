/*
 * XREFs of UmfdQueryFontData @ 0x1C00F36C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C00305A8 (_tlgKeywordOn.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C00F39E0 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C00F3ACC (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C016AF30 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D0994 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02DE4E8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  void *v12; // r14
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v13; // rax
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v14; // rdi
  int v15; // ebx
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v16; // rdx
  unsigned __int64 v17; // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // r8d
  int v22; // r9d
  bool v24[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  void ***v29; // [rsp+50h] [rbp-B8h] BYREF
  void *v30; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v31[4]; // [rsp+68h] [rbp-A0h] BYREF
  void **v32; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  char v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+BCh] [rbp-4Ch]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  __int64 v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  int v43; // [rsp+D8h] [rbp-30h]
  unsigned int v44; // [rsp+DCh] [rbp-2Ch]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  __int128 v46; // [rsp+E8h] [rbp-20h]
  __int128 ThreadInformation; // [rsp+F8h] [rbp-10h] BYREF

  v33 = 2;
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v35 = ThreadInformation;
    v36 = 1;
  }
  v45 = 0LL;
  v44 = -1;
  v32 = &QueryFontDataRequest::`vftable';
  v41 = a5;
  v42 = a6;
  v43 = a7;
  v46 = 0LL;
  v37 = a1;
  v40 = a2;
  v38 = a3;
  v39 = a4;
  v11 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v29 = &v32;
  if ( (unsigned int)v11 > 3 )
    return 0xFFFFFFFFLL;
  v12 = (void *)g_pUmfdClientPort[v11];
  v13 = (struct CMultipleConsumerWorkQueue::CWaitableWorkItem **)EngAllocMem(0, 8u, 0x71724446u);
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  v31[0] = v12;
  *v13 = 0LL;
  v31[2] = v13;
  v31[1] = &v29;
  v30 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v15 = lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(v31);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v30);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v15 = -1073741823;
  }
  if ( v15 >= 0 )
  {
    v16 = *v14;
    if ( *v14 )
    {
      v24[0] = 0;
      if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
             (CMultipleConsumerWorkQueue *)v12,
             v16,
             (const unsigned int *)"0u",
             v24) )
      {
        *v14 = 0LL;
        v15 = 0;
      }
      else if ( v24[0] )
      {
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)dword_1C032A3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3D8, 0x200000000000LL) )
        {
          v25 = 0;
          v26 = v17;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v18,
            (unsigned int)&unk_1C02F4165,
            v19,
            v20,
            (__int64)&v26,
            (__int64)&v25);
        }
        v15 = UmfdClientWaitForCompletion(v12, v14, 0LL);
        if ( (unsigned int)dword_1C032A3D8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C032A3D8, 0x200000000000LL) )
          {
            LODWORD(v28) = v15;
            v27 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v17;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              MEMORY[0xFFFFF78000000320],
              (unsigned int)&unk_1C02F410E,
              v21,
              v22,
              (__int64)&v28,
              (__int64)&v27);
          }
        }
      }
      else
      {
        *v14 = 0LL;
        v15 = -1073741823;
      }
    }
    else
    {
      v15 = -1073741811;
    }
  }
  EngFreeMem(v14);
  if ( v15 >= 0 )
    return v44;
  else
    return 0xFFFFFFFFLL;
}
