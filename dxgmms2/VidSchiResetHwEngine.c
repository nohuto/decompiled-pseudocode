/*
 * XREFs of VidSchiResetHwEngine @ 0x1C00460A0
 * Callers:
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C0033C14 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C003404C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0034144 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VidSchiResetHwEngine(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  _DWORD *v6; // r15
  struct _TDR_RECOVERY_CONTEXT *v7; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r12d
  bool v21; // r14
  _QWORD *i; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _BYTE *v29; // r12
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  _BYTE *v34; // rdx
  _BYTE *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  bool v39; // cf
  int v40; // eax
  bool result; // al
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v49[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  struct _TDR_RECOVERY_CONTEXT *v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 *v58; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-20h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v60; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v61; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-8h] BYREF
  void *v63; // [rsp+100h] [rbp+0h] BYREF
  __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v65; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v66; // [rsp+118h] [rbp+18h] BYREF
  __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v69[4]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v70; // [rsp+160h] [rbp+60h]
  char v71; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v72; // [rsp+1C0h] [rbp+C0h] BYREF
  int v73; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1728), &LockHandle);
  v51 = a1;
  v52.QuadPart = 0LL;
  v53 = 0LL;
  v71 = 0;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v51,
    *(unsigned int *)(v2 + 32),
    &v71);
  PerformanceCounter = v52;
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((LARGE_INTEGER *)v6 + 1) = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v6 = 10;
  v7 = 0LL;
  *(_QWORD *)(v6 + 9) = v53;
  if ( *(_QWORD *)(v2 + 3024) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 3016) = RecoveryContext;
    v7 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 3012;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v9 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v7 + 4) = v9;
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
      v10 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 5) = -1LL;
      *((_DWORD *)v7 + 36) = 65540;
      *((_DWORD *)v7 + 37) = DpiGetDriverVersion(*(_QWORD *)(v10 + 216));
      *((_DWORD *)v7 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 3024) + 4LL);
      v11 = *((_QWORD *)v7 + 4);
      v12 = *(_QWORD *)(v11 + 592);
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 448);
      *((_QWORD *)v7 + 13) = v12;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 3016), 1);
    }
  }
  v13 = *(unsigned __int16 *)(a1 + 4);
  ++*(_DWORD *)(a1 + 492);
  v14 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v13 < *(_DWORD *)(v2 + 704) )
    v14 += 8 * v13;
  v49[1] = *(unsigned __int16 *)(*(_QWORD *)v14 + 6LL);
  v15 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v13 < *(_DWORD *)(v2 + 704) )
    v15 += 8 * v13;
  v49[0] = *(unsigned __int16 *)(*(_QWORD *)v15 + 8LL);
  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v18 = *(_QWORD *)(v2 + 16);
    v42 = *((_DWORD *)v7 + 14);
    v55 = *(_QWORD *)(a1 + 96);
    v56 = *(_QWORD *)(a1 + 64);
    v57 = *(_QWORD *)(a1 + 168);
    v73 = v17;
    v54 = v7;
    v58 = *(unsigned __int16 **)(v18 + 1744);
    v59 = *(_QWORD *)(v18 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1C0056C4E,
      v16,
      v17,
      (__int64)&v59,
      &v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v42,
      (__int64)&v73);
  }
  *(_QWORD *)(a1 + 1760) = v7;
  *(_QWORD *)(a1 + 1752) = v6 + 4;
  v19 = DxgCoreInterface[39](
          *(ADAPTER_DISPLAY **)(v2 + 8),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v49);
  *(_QWORD *)(a1 + 1752) = 0LL;
  v20 = v19;
  *(_QWORD *)(a1 + 1760) = 0LL;
  if ( !v19 )
  {
    KeFlushQueuedDpcs();
    v69[0] = v2 + 1728;
    v70 = 0;
    AcquireSpinLock::Acquire((Acquire *)v69);
    v21 = 1;
    for ( i = *(_QWORD **)(a1 + 1696); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(a1 + 1696) )
      {
        *(_DWORD *)(a1 + 16) = 2;
        AcquireSpinLock::Release((AcquireSpinLock *)v69);
        goto LABEL_23;
      }
      v23 = *(i - 5);
      v24 = *(i - 6);
      if ( v23 != v24 )
        break;
    }
    v25 = *(_QWORD *)(v2 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 40960LL, v25, v23, v24);
    __debugbreak();
  }
  v21 = 0;
  KeFlushQueuedDpcs();
LABEL_23:
  *((_BYTE *)v6 + 53) = 1;
  v6[11] = v20;
  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v28 = *(_QWORD *)(v2 + 16);
    v43 = *(_DWORD *)(a1 + 492);
    v44 = v20;
    v45 = 0;
    v60 = v7;
    v61 = *(unsigned __int16 **)(v28 + 1744);
    v62 = *(_QWORD *)(v28 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_1C0056BD4,
      v26,
      v27,
      (__int64)&v62,
      &v61,
      (__int64)&v60,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43);
  }
  if ( v7 )
  {
    *((_DWORD *)v7 + 704) = v20;
    TdrUpdateDbgReport(v7, 1);
    TdrCollectDbgInfoStage2(v7);
    v29 = (_BYTE *)(a1 + 2036);
    if ( !*(_BYTE *)(a1 + 2036) )
      v29 = (char *)v7 + 2821;
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
    {
      v46 = *((unsigned __int8 *)v7 + 2820);
      v32 = *(_QWORD *)(v2 + 16);
      v47 = *(_DWORD *)(a1 + 2028);
      v64 = *((_QWORD *)v7 + 351);
      v48 = *(_DWORD *)(a1 + 492);
      v65 = v7;
      v66 = *(unsigned __int16 **)(v32 + 1744);
      v67 = *(_QWORD *)(v32 + 404);
      v72 = 3;
      v63 = v29;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v32,
        byte_1C0056B23,
        v30,
        v31,
        (__int64)&v72,
        (__int64)&v67,
        &v66,
        (__int64)&v65,
        (__int64)&v48,
        (__int64)&v64,
        &v63,
        (__int64)&v47,
        (__int64)&v46);
    }
    if ( !v21 )
    {
      if ( !v29 )
        goto LABEL_41;
      v33 = 15LL;
      v34 = (_BYTE *)(v2 + 3037);
      do
      {
        if ( v33 == -2147483631 )
          break;
        if ( !*v29 )
          break;
        *v34++ = *v29++;
        --v33;
      }
      while ( v33 );
      v35 = v34 - 1;
      if ( v33 )
        v35 = v34;
      *v35 = 0;
      if ( !v33 )
LABEL_41:
        *(_BYTE *)(v2 + 3037) = 0;
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v2 + 3016) = 0LL;
  }
  if ( v21 )
  {
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_DWORD *)(a1 + 480) = 0;
  }
  RtlClearBitEx(v2 + 584, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  if ( v21 )
  {
    v36 = *(unsigned __int16 *)(a1 + 4);
    v37 = *(_QWORD *)(v2 + 632);
    v38 = v37 + 8 * v36;
    v39 = (unsigned int)v36 < *(_DWORD *)(v2 + 704);
    if ( (unsigned int)v36 >= *(_DWORD *)(v2 + 704) )
      v38 = *(_QWORD *)(v2 + 632);
    v50[1] = *(unsigned __int16 *)(*(_QWORD *)v38 + 6LL);
    if ( v39 )
      v37 += 8 * v36;
    v50[0] = *(unsigned __int16 *)(*(_QWORD *)v37 + 8LL);
    v40 = DxgCoreInterface[40](
            *(ADAPTER_DISPLAY **)(v2 + 8),
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v50);
    *((_BYTE *)v6 + 54) = 1;
    v6[12] = v40;
    v21 = v40 == 0;
  }
  result = v21;
  *((_BYTE *)v6 + 52) = v21;
  return result;
}
