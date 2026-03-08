/*
 * XREFs of VidSchiResetEngine @ 0x1C003B96C
 * Callers:
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C0033C14 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C003404C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0034144 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x1C0037D00 (McTemplateK0dp_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0047148 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C00ADB04 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C0106444 (VidSchiMarkDevicesInError.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall VidSchiResetEngine(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER *v6; // r12
  struct _TDR_RECOVERY_CONTEXT *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  char v10; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // cf
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // rcx
  DWORD v25; // r13d
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r13
  __int64 v38; // rax
  _BYTE *v39; // r10
  __int64 v40; // r9
  __int64 v41; // rdx
  _BYTE *v42; // rcx
  __int64 v43; // r9
  char v44; // al
  _BYTE *v45; // rax
  int v46; // eax
  bool IsLimitExhausted; // al
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  _BYTE *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  char v55; // r13
  _BYTE *v56; // rcx
  __int64 v57; // rdx
  _BYTE *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  char result; // al
  char v62; // [rsp+70h] [rbp-90h] BYREF
  char v63; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v64; // [rsp+72h] [rbp-8Eh] BYREF
  int v65; // [rsp+74h] [rbp-8Ch] BYREF
  int v66; // [rsp+78h] [rbp-88h] BYREF
  int v67; // [rsp+7Ch] [rbp-84h] BYREF
  DWORD v68; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v69; // [rsp+84h] [rbp-7Ch] BYREF
  int v70; // [rsp+88h] [rbp-78h] BYREF
  int v71; // [rsp+8Ch] [rbp-74h] BYREF
  int v72; // [rsp+90h] [rbp-70h] BYREF
  __int64 v73; // [rsp+98h] [rbp-68h] BYREF
  __int128 v74; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v75; // [rsp+B0h] [rbp-50h]
  __int128 v76; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER v77; // [rsp+D0h] [rbp-30h]
  struct _TDR_RECOVERY_CONTEXT *v78; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v82; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v83; // [rsp+100h] [rbp+0h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v84; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v85; // [rsp+110h] [rbp+10h] BYREF
  __int64 v86; // [rsp+118h] [rbp+18h] BYREF
  void *v87; // [rsp+120h] [rbp+20h] BYREF
  __int64 v88; // [rsp+128h] [rbp+28h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v89; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int16 *v90; // [rsp+138h] [rbp+38h] BYREF
  __int64 v91; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  _DWORD v93[2]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v94; // [rsp+168h] [rbp+68h]

  WdLogSingleEntry3(4LL, *(_QWORD *)(a1 + 168), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2892) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 732), 1u);
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2896)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2896));
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 732));
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  v77.QuadPart = 0LL;
  v63 = 0;
  v74 = a1;
  v75 = 0LL;
  v76 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v4 + 24),
    VidSchiSetNodeResettingStateAtISR,
    &v74,
    *(unsigned int *)(v4 + 32),
    &v63);
  PerformanceCounter = *(LARGE_INTEGER *)((char *)&v74 + 8);
  v6 = (LARGE_INTEGER *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  if ( !PerformanceCounter.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6[1] = PerformanceCounter;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  v6->LowPart = 6;
  v7 = 0LL;
  *(_OWORD *)&v6[2].LowPart = v75;
  v6[4].QuadPart = v76;
  v6[6] = v77;
  if ( v77.LowPart == v77.HighPart && !*(_DWORD *)(a1 + 2028) )
  {
    v8 = *(unsigned int *)(a1 + 2892);
    if ( (_DWORD)v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2048LL, (unsigned int)v77.HighPart, v8, 0LL);
      __debugbreak();
    }
    WdLogSingleEntry2(4LL, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
    v9 = v4 + 3024;
    *((_QWORD *)&v76 + 1) = v75;
    v10 = 1;
    BYTE5(v6[7].QuadPart) = 0;
    goto LABEL_42;
  }
  v9 = v4 + 3024;
  if ( *(_QWORD *)(v4 + 3024) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v4 + 3016) = RecoveryContext;
    v7 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v4 + 3012;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v12 = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v7 + 4) = v12;
      _InterlockedAdd64((volatile signed __int64 *)(v12 + 24), 1uLL);
      v13 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 5) = -1LL;
      *((_DWORD *)v7 + 36) = 65540;
      *((_DWORD *)v7 + 37) = DpiGetDriverVersion(*(_QWORD *)(v13 + 216));
      *((_DWORD *)v7 + 14) = *(unsigned __int16 *)(*(_QWORD *)v9 + 4LL);
      v14 = *((_QWORD *)v7 + 4);
      v15 = *(_QWORD *)(v14 + 592);
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + 448);
      *((_QWORD *)v7 + 13) = v15;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v4 + 3016), 1);
    }
  }
  v16 = *(unsigned __int16 *)(a1 + 4);
  v17 = *(_DWORD *)(a1 + 492) + 1;
  v94 = 0;
  *(_DWORD *)(a1 + 492) = v17;
  v18 = *(_QWORD *)(v4 + 632);
  v19 = v18 + 8 * v16;
  v20 = (unsigned int)v16 < *(_DWORD *)(v4 + 704);
  if ( (unsigned int)v16 >= *(_DWORD *)(v4 + 704) )
    v19 = *(_QWORD *)(v4 + 632);
  v93[1] = *(unsigned __int16 *)(*(_QWORD *)v19 + 6LL);
  if ( v20 )
    v18 += 8 * v16;
  v93[0] = *(unsigned __int16 *)(*(_QWORD *)v18 + 8LL);
  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v24 = *(_QWORD *)(v4 + 16);
    v66 = *((_DWORD *)v7 + 14);
    v79 = *(_QWORD *)(a1 + 96);
    v80 = *(_QWORD *)(a1 + 64);
    v81 = *(_QWORD *)(a1 + 168);
    v65 = v23;
    v78 = v7;
    v82 = *(unsigned __int16 **)(v24 + 1744);
    v83 = *(_QWORD *)(v24 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      byte_1C0056C4E,
      v21,
      v22,
      (__int64)&v83,
      &v82,
      (__int64)&v81,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v66,
      (__int64)&v65);
  }
  v25 = DxgCoreInterface[38](
          *(ADAPTER_DISPLAY **)(v4 + 8),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v93);
  if ( v25 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  BYTE5(v6[7].QuadPart) = 1;
  v6[7].LowPart = v25;
  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v28 = *(_QWORD *)(v4 + 16);
    v67 = *(_DWORD *)(a1 + 492);
    v69 = v94;
    v68 = v25;
    v84 = v7;
    v85 = *(unsigned __int16 **)(v28 + 1744);
    v86 = *(_QWORD *)(v28 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_1C0056BD4,
      v26,
      v27,
      (__int64)&v86,
      &v85,
      (__int64)&v84,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67);
  }
  v29 = v94;
  v6[5].QuadPart = v94;
  BYTE4(v6[7].QuadPart) = v10;
  if ( v10 )
  {
    v30 = v75;
    if ( (unsigned __int64)v76 >= (unsigned __int64)v75
      && (_QWORD)v76 - (_QWORD)v75 <= 0x7FFFFFFFuLL
      && (int)v75 - (int)v29 <= 0
      && (int)v76 - (int)v29 >= 0 )
    {
      if ( (unsigned int)v75 > (unsigned int)v29 )
        v30 = v76;
      *((_QWORD *)&v76 + 1) = v29 | v30 & 0xFFFFFFFF00000000uLL;
      goto LABEL_40;
    }
    v31 = *(_QWORD *)(v4 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 10LL, v29, v75, v31);
    __debugbreak();
  }
  *((_QWORD *)&v76 + 1) = v76;
LABEL_40:
  if ( v7 )
    *((_DWORD *)v7 + 704) = v25;
LABEL_42:
  v73 = 0LL;
  v62 = 0;
  if ( *(_QWORD *)v9 == a1 )
  {
    v32 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1560) + 1568);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 104);
      v34 = *(_QWORD *)(v33 + 40);
      if ( v34 )
      {
        v35 = 0LL;
        if ( *(_QWORD *)(v34 + 8) )
          v35 = v33;
        v73 = v35;
      }
    }
  }
  VidSchiMarkDevicesInError(&v74, &v62, &v73);
  if ( v7 )
  {
    v36 = v73;
    if ( v73 )
    {
      v37 = *(_QWORD *)(v73 + 40);
      v38 = *(_QWORD *)(v37 + 8);
      if ( v38 )
      {
        v39 = (char *)v7 + 2821;
        *((_QWORD *)v7 + 351) = *(_QWORD *)(*(_QWORD *)(v38 + 64) + 80LL);
        v40 = *(_QWORD *)(v37 + 2648);
        if ( !v40 )
          goto LABEL_59;
        v41 = 15LL;
        v42 = (char *)v7 + 2821;
        v43 = v40 - (_QWORD)v39;
        do
        {
          if ( v41 == -2147483631 )
            break;
          v44 = v42[v43];
          if ( !v44 )
            break;
          *v42++ = v44;
          --v41;
        }
        while ( v41 );
        v45 = v42 - 1;
        if ( v41 )
          v45 = v42;
        *v45 = 0;
        if ( !v41 )
LABEL_59:
          *v39 = 0;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v36 + 40) + 2632LL) )
      {
        v46 = *(_DWORD *)(v36 + 48);
        if ( (v46 & 8) == 0 && (v46 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v37 + 40), v7);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v37 + 40), v7, 1);
          *((_BYTE *)v7 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v48 = *(_QWORD *)(v37 + 2624);
            v49 = (unsigned __int64)*(unsigned int *)(v4 + 4) >> 5;
            v50 = *(_DWORD *)(v4 + 4) & 0x1F;
            *(_DWORD *)(v48 + 4 * v49) |= 1 << (*(_BYTE *)(v4 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (byte_1C00769C1 & 1) != 0 )
                McTemplateK0dp_EtwWriteTransfer(v50, v48, v49, *(_DWORD *)(v4 + 4), *((_QWORD *)v7 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v7, 1);
    TdrCollectDbgInfoStage2(v7);
    v51 = (_BYTE *)(a1 + 2036);
    if ( !*(_BYTE *)(a1 + 2036) )
      v51 = (char *)v7 + 2821;
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
    {
      v70 = *((unsigned __int8 *)v7 + 2820);
      v54 = *(_QWORD *)(v4 + 16);
      v71 = *(_DWORD *)(a1 + 2028);
      v88 = *((_QWORD *)v7 + 351);
      v72 = *(_DWORD *)(a1 + 492);
      v89 = v7;
      v90 = *(unsigned __int16 **)(v54 + 1744);
      v91 = *(_QWORD *)(v54 + 404);
      v64 = 3;
      v87 = v51;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v54,
        byte_1C0056B23,
        v52,
        v53,
        (__int64)&v64,
        (__int64)&v91,
        &v90,
        (__int64)&v89,
        (__int64)&v72,
        (__int64)&v88,
        &v87,
        (__int64)&v71,
        (__int64)&v70);
    }
    v55 = v62;
    if ( !v10 || v62 )
    {
      if ( !v51 )
        goto LABEL_82;
      v56 = (_BYTE *)(v4 + 3037);
      v57 = 15LL;
      do
      {
        if ( v57 == -2147483631 )
          break;
        if ( !*v51 )
          break;
        *v56++ = *v51++;
        --v57;
      }
      while ( v57 );
      v58 = v56 - 1;
      if ( v57 )
        v58 = v56;
      *v58 = 0;
      if ( !v57 )
LABEL_82:
        *(_BYTE *)(v4 + 3037) = 0;
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v4 + 3016) = 0LL;
  }
  else
  {
    v55 = v62;
  }
  if ( v10 )
  {
    v59 = *((_QWORD *)&v76 + 1);
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_DWORD *)(a1 + 480) = 0;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v59, 0LL);
    v60 = *((_QWORD *)&v76 + 1);
    *(_QWORD *)(a1 + 64) = *((_QWORD *)&v76 + 1);
    *(_QWORD *)(a1 + 72) = v60;
    if ( v55 )
      v10 = 0;
    else
      *(_BYTE *)(a1 + 2036) = 0;
  }
  RtlClearBitEx(v4 + 584, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  result = v10;
  BYTE4(v6[7].QuadPart) = v10;
  BYTE6(v6[7].QuadPart) = v55;
  v6[5] = *(LARGE_INTEGER *)((char *)&v76 + 8);
  return result;
}
