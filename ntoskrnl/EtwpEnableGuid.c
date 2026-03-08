/*
 * XREFs of EtwpEnableGuid @ 0x14068EEBC
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1407FDA88 (EtwpEnableTrace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140204F00 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x140204F18 (EtwpEnableMetaProviderGuid.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x14068ECF4 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x14068ED78 (EtwpAllocDataBlock.c)
 *     EtwpValidateEnableNotification @ 0x14068F7E0 (EtwpValidateEnableNotification.c)
 *     EtwpFreeFilterInfo @ 0x14068F950 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14068FA30 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableDisableSpecialGuids @ 0x14068FF34 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpIsRegEntryAllowed @ 0x140690060 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14069059C (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x140690658 (EtwpCalculateUpdateNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x1406909A0 (EtwpUnreferenceDataBlock.c)
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140850B00 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A20CA (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpEventWriteCaptureState @ 0x1409E0594 (EtwpEventWriteCaptureState.c)
 *     EtwpEventWriteProviderEnabled @ 0x1409E0990 (EtwpEventWriteProviderEnabled.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E5C44 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E5D6C (EtwpReferenceStackLookasideList.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1409E96E0 (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpEnableGuid(_WORD *a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  int v6; // esi
  __int64 v7; // rdi
  _WORD *v8; // r15
  int v9; // eax
  int v10; // r8d
  int updated; // ebx
  unsigned int v12; // r12d
  int v13; // ebx
  unsigned int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rsi
  int CurrentThreadProcessId; // eax
  char v18; // di
  __int128 *v19; // rdx
  unsigned int v20; // r15d
  bool v21; // zf
  _WORD *v22; // rcx
  __int64 v23; // r8
  __int64 GuidEntryByGuid; // rax
  struct _KTHREAD *v25; // rax
  int v26; // ecx
  char v27; // r15
  __int16 v28; // cx
  char v29; // al
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // rbx
  size_t v34; // rcx
  int v35; // eax
  int v36; // r12d
  _DWORD *v37; // rdx
  unsigned __int8 i; // cl
  unsigned int v39; // r12d
  __int64 v40; // rcx
  _QWORD *v41; // r13
  _QWORD *v42; // rax
  _QWORD *v43; // r13
  __int64 v44; // rdx
  int v45; // r8d
  int v46; // r9d
  char v47; // r15
  char v48; // bl
  int v49; // r9d
  int v50; // edx
  int v51; // r8d
  char v52; // al
  __int16 v53; // cx
  void *v54; // rdx
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  unsigned int v57; // r13d
  const EVENT_DESCRIPTOR *v58; // r12
  int v59; // ecx
  __int64 v60; // r8
  __int64 v61; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // r10
  _BYTE *v66; // r8
  _DWORD *v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  struct _KPROCESS *v71; // rbx
  const EVENT_DESCRIPTOR *v72; // r15
  __int64 v73; // r8
  signed __int32 v74; // eax
  __int64 v75; // rcx
  signed __int32 v76; // ett
  struct _KTHREAD *v77; // rax
  struct _KPROCESS *SessionById; // rax
  unsigned int ProcessId; // eax
  __int16 v80; // bx
  struct _KTHREAD *v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // [rsp+28h] [rbp-D8h]
  char v86; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v87; // [rsp+51h] [rbp-AFh]
  char v88; // [rsp+52h] [rbp-AEh]
  _WORD v89[6]; // [rsp+53h] [rbp-ADh] BYREF
  _WORD *v90; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v91; // [rsp+68h] [rbp-98h] BYREF
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v93; // [rsp+78h] [rbp-88h]
  void *v94; // [rsp+80h] [rbp-80h]
  int v95; // [rsp+88h] [rbp-78h]
  int v96; // [rsp+8Ch] [rbp-74h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v98; // [rsp+98h] [rbp-68h]
  _QWORD *v99; // [rsp+A0h] [rbp-60h]
  _QWORD *v100; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  _QWORD *v102; // [rsp+B8h] [rbp-48h]
  __int64 v103; // [rsp+C0h] [rbp-40h]
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-30h]
  __int128 v106; // [rsp+D8h] [rbp-28h] BYREF
  int v107; // [rsp+E8h] [rbp-18h]
  unsigned int *v108; // [rsp+F0h] [rbp-10h]
  _QWORD *v109; // [rsp+F8h] [rbp-8h]
  _BYTE v110[112]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE v111; // [rsp+170h] [rbp+70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v113[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v114[8]; // [rsp+1D4h] [rbp+D4h] BYREF
  int v115; // [rsp+1DCh] [rbp+DCh]

  v103 = a2;
  v93 = a1;
  v105 = a2 + 40;
  v3 = a2 + 72;
  Handle = 0LL;
  Object = 0LL;
  v6 = (int)a1;
  Src = 0LL;
  v96 = 0;
  v88 = 0;
  v107 = 0;
  LOBYTE(v95) = 0;
  v7 = 0LL;
  v89[0] = 0;
  v106 = 0LL;
  v86 = 0;
  v8 = 0LL;
  v92 = 0LL;
  v90 = 0LL;
  memset(v110, 0, 0x68uLL);
  v9 = *(_DWORD *)(v3 + 8) & 0x20;
  v91 = 0;
  *(_DWORD *)((char *)&v89[2] + 1) = v9;
  LOBYTE(v10) = a3;
  v87 = v9 != 0 ? 2 : 0;
  updated = EtwpValidateEnableNotification(v6, a2, v10, (unsigned int)&v106, (__int64)&v92, (__int64)v110);
  if ( updated < 0 )
    goto LABEL_128;
  v12 = *(_DWORD *)v3;
  v98 = v12;
  if ( v12 == 2 )
  {
    v13 = a2 + 40;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v70, v3, a2 + 40);
  }
  else
  {
    v13 = a2 + 40;
  }
  v14 = *(_DWORD *)(a2 + 116);
  if ( v14 - 1 <= 1 )
  {
    v65 = *(unsigned int *)(a2 + 116);
    v66 = &v113[-a2 - 120];
    v67 = (_DWORD *)(a2 + 128);
    do
    {
      v68 = a2 + *((_QWORD *)v67 - 1);
      *(_DWORD *)&v114[(_QWORD)v67 - 120 - a2] = v67[1];
      v69 = *v67;
      *(_QWORD *)((char *)v67 + (_QWORD)v66 - 8) = v68;
      *(_DWORD *)((char *)v67 + (_QWORD)v66) = v69;
      v67 += 4;
      --v65;
    }
    while ( v65 );
  }
  else
  {
    v14 = 0;
    v115 = 0;
  }
  if ( !*(_DWORD *)((char *)&v89[2] + 1) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                (_DWORD)v93,
                v13,
                *(unsigned __int16 *)(v3 + 6),
                v12,
                *(_DWORD *)(v3 + 16),
                (__int64)v113,
                v14,
                (__int64)&v86);
    KeLeaveCriticalRegion();
    if ( !v86 )
    {
      v85 = v14;
      v16 = v92;
      updated = EtwpEnableMetaProviderGuid(v92, a2 + 40, v12, *(_QWORD *)(v3 + 16), (__int64)v113, v85);
      if ( updated != -1073741163 )
        goto LABEL_37;
      v8 = v90;
      goto LABEL_10;
    }
LABEL_128:
    v16 = v92;
    goto LABEL_37;
  }
  v16 = v92;
LABEL_10:
  if ( (*(_WORD *)(v3 + 6) & 0xFFFD) == 0 )
  {
    updated = -1073741790;
    goto LABEL_101;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v18 = BYTE2(v107);
  v19 = &PrivateLoggerNotificationGuid;
  v20 = v87;
  v21 = BYTE2(v107) == 0;
  v22 = v93;
  v23 = v87;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v21 )
    v19 = (__int128 *)(a2 + 40);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v22, v19, v23);
  if ( GuidEntryByGuid )
  {
    if ( v12 == 1 || (v7 = GuidEntryByGuid, !v12) )
    {
      v7 = GuidEntryByGuid;
      if ( v16 )
      {
        v31 = *(_QWORD *)&EventTracingProvGuid.Data1 - *(_QWORD *)(a2 + 40);
        if ( *(_QWORD *)&EventTracingProvGuid.Data1 == *(_QWORD *)(a2 + 40) )
          v31 = *(_QWORD *)EventTracingProvGuid.Data4 - *(_QWORD *)(a2 + 48);
        if ( !v31 )
        {
          v72 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
          if ( v12 != 1 )
            v72 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v72) )
          {
            if ( v12 == 1 )
              EtwpEventWriteProviderEnabled(
                (unsigned int)&EventTracingProvGuid,
                (_DWORD)v72,
                v73,
                v16 + 136,
                (__int64)&EventTracingProvGuid,
                *(_QWORD *)(v3 + 16),
                *(_QWORD *)(v3 + 24),
                *(_DWORD *)(v3 + 8),
                *(_BYTE *)(v3 + 4));
            else
              EtwpEventWriteTemplateSessAndProv(&EventTracingProvGuid, v72, v73, 2LL, v16 + 136, &EventTracingProvGuid);
          }
        }
      }
    }
  }
  else
  {
    if ( v18 || v12 != 1 )
    {
      updated = -1073741163;
      v7 = 0LL;
      goto LABEL_37;
    }
    v7 = EtwpAddGuidEntry(v93, a2 + 40, v20);
    if ( !v7 )
    {
      updated = -1073741801;
      goto LABEL_37;
    }
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 408, 0LL);
  v26 = *(_DWORD *)((char *)&v89[2] + 1);
  v27 = 1;
  *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
  HIBYTE(v89[0]) = 1;
  if ( v12 == 1 && (*(_BYTE *)(v7 + 91) & 1) != 0 && !v26 && *(_WORD *)(v3 + 6) != *(_WORD *)(v7 + 88) )
  {
    v32 = 0x4719A4EB910C653DLL - *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL )
      v32 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v7 + 48);
    if ( !v32 )
    {
      v16 = v92;
      updated = -1073741053;
      goto LABEL_36;
    }
    v26 = *(_DWORD *)((char *)&v89[2] + 1);
  }
  v16 = v92;
  if ( v92 && (*(_DWORD *)(v92 + 816) & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_36;
  }
  if ( v26 )
  {
    updated = EtwpAcquireTokenAccessInformation(v92);
    if ( updated )
      goto LABEL_36;
  }
  *(_DWORD *)(a2 + 112) = v12;
  v28 = *(_WORD *)(v3 + 6);
  *(_WORD *)(a2 + 104) = v28;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(v3 + 4);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(v3 + 16);
  v29 = BYTE2(v107);
  if ( BYTE2(v107) )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v28 & 0x7FFF;
  }
  if ( !*(_QWORD *)(v3 + 16) )
    *(_QWORD *)(v3 + 16) = -1LL;
  if ( !*(_BYTE *)(v3 + 4) )
    *(_BYTE *)(v3 + 4) = -1;
  if ( v12 != 2 && !v29 )
  {
    updated = EtwpUpdateGuidEnableInfo(v7, (__int64)v89);
    if ( updated < 0 )
    {
LABEL_36:
      *(_QWORD *)(v7 + 416) = 0LL;
      ExReleasePushLockEx((__int64 *)(v7 + 408), 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_37;
    }
    *(_OWORD *)v3 = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(v3 + 8) & 4) != 0 )
    {
      EtwpAllocateStackwalkApcPool(v16);
      _m_prefetchw((const void *)(v16 + 816));
      v74 = *(_DWORD *)(v16 + 816);
      do
      {
        v75 = v74 | 0x2000u;
        v76 = v74;
        v74 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 816), v75, v74);
      }
      while ( v76 != v74 );
      if ( (v74 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v75, 0x2000LL);
      v16 = v92;
    }
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 400) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
    updated = 0;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v7, &Handle);
    if ( updated < 0 )
      goto LABEL_36;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)EtwpBuildNotificationPacket(v7, (_OWORD *)a2, 255, &Src) < 0 )
  {
    updated = -1073741801;
    goto LABEL_104;
  }
  v33 = Src;
  v34 = *((unsigned int *)Src + 1);
  v108 = (unsigned int *)((char *)Src + 4);
  v35 = EtwpAllocDataBlock(v34, Src, &v90);
  v8 = v90;
  if ( v35 < 0 )
    goto LABEL_145;
  v36 = v95;
  v37 = (_DWORD *)(v7 + 128);
  v93 = v90;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v37 )
      v36 = (unsigned __int8)v36 | (1 << i);
    v37 += 8;
  }
  v95 = v36;
  v39 = v98;
  v86 = 0;
  v100 = 0LL;
  if ( !*(_QWORD *)(v7 + 400) )
  {
    v40 = *(_QWORD *)(v7 + 16);
    if ( v40 != v7 + 16 )
      v100 = (_QWORD *)(v40 - 16);
  }
  v41 = (_QWORD *)v7;
  v102 = (_QWORD *)v7;
  while ( 1 )
  {
    v42 = (_QWORD *)v41[7];
    v109 = v41 + 7;
    v99 = v42;
    if ( v42 != v41 + 7 )
      break;
LABEL_93:
    if ( v41 != (_QWORD *)v7 )
    {
      v41[52] = 0LL;
      ExReleasePushLockEx(v41 + 51, 0LL);
      KeLeaveCriticalRegion();
    }
    v55 = v100;
    if ( !v100 )
    {
      v56 = v103;
      updated = 0;
      *(_DWORD *)(v103 + 20) = v96;
      *(_QWORD *)(v56 + 24) = Handle;
      if ( v16 && v39 <= 1 )
      {
        v57 = v98;
        v58 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
        if ( v98 != 1 )
          v58 = &ETW_EVENT_PROVIDER_DISABLED;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v58) )
        {
          if ( v57 == 1 )
            EtwpEventWriteProviderEnabled(
              v59,
              (_DWORD)v58,
              v60,
              v16 + 136,
              v105,
              *(_QWORD *)(v3 + 16),
              *(_QWORD *)(v3 + 24),
              *(_DWORD *)(v3 + 8),
              *(_BYTE *)(v3 + 4));
          else
            EtwpEventWriteTemplateSessAndProv(v105, v58, v60, 2LL, v16 + 136, v105);
        }
      }
      goto LABEL_101;
    }
    v81 = KeGetCurrentThread();
    v86 = 1;
    v41 = v100;
    v102 = v100;
    --v81->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v55 + 51), 0LL);
    v16 = v92;
    v82 = 0LL;
    v8 = v90;
    v55[52] = KeGetCurrentThread();
    v83 = v55[2];
    v33 = Src;
    v84 = (_QWORD *)(v83 - 16);
    if ( v84 != (_QWORD *)v7 )
      v82 = v84;
    v100 = v82;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)((char *)&v89[2] + 1) )
    {
      v43 = v42 - 2;
      v77 = KeGetCurrentThread();
      --v77->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v43[4] + 408LL, 0LL);
      v16 = v92;
      v8 = v90;
      v33 = Src;
      *(_QWORD *)(v43[4] + 416LL) = KeGetCurrentThread();
      v42 = v99;
      v88 = 1;
    }
    else
    {
      v43 = v42;
    }
    v99 = (_QWORD *)*v42;
    if ( !(unsigned __int8)EtwpIsRegEntryAllowed((_DWORD)v43, v16, (unsigned int)&v106, v103, (__int64)v110, v86, v87) )
      goto LABEL_89;
    v94 = v33;
    if ( BYTE2(v107) )
      break;
    if ( v39 == 2 )
      goto LABEL_82;
    v47 = v86;
    if ( v86 )
    {
      if ( *(_DWORD *)((char *)&v89[2] + 1) )
        v48 = *((_BYTE *)v43 + 103);
      else
        v48 = *((_BYTE *)v43 + 102);
    }
    else if ( *(_DWORD *)((char *)&v89[2] + 1) )
    {
      v48 = *((_BYTE *)v43 + 101);
    }
    else
    {
      v48 = *((_BYTE *)v43 + 100);
    }
    LOBYTE(v46) = v87;
    LOBYTE(v45) = v89[0];
    EtwpUpdateRegEntryEnableMask((_DWORD)v43, v16, v45, v46, v86, v39);
    LOBYTE(v49) = v95;
    LOBYTE(v50) = v89[0];
    LOBYTE(v51) = v48;
    v52 = EtwpCalculateUpdateNotification((_DWORD)v43, v50, v51, v49, v87, v47, v39, (__int64)&v90);
    v8 = v90;
    if ( v52 )
    {
      if ( v90 )
      {
        v94 = v90;
        if ( v90 != v93 )
        {
          EtwpUnreferenceDataBlock(v93);
          v93 = v8;
        }
      }
      else
      {
        v8 = v93;
        v90 = v93;
      }
      if ( v39 == 1 )
      {
LABEL_82:
        v53 = *((_WORD *)v43 + 49);
        if ( (v53 & 8) != 0 || (v53 & 0x20) != 0 || (*(_DWORD *)(v16 + 816) & 0x2000000) != 0 )
        {
          if ( (v53 & 1) != 0 )
          {
            v71 = 0LL;
            memset(&v111, 0, sizeof(v111));
            if ( (v53 & 0x10) == 0 )
              goto LABEL_126;
            SessionById = (struct _KPROCESS *)MmGetSessionById(*((unsigned int *)v43 + 14), v44);
            v71 = SessionById;
            if ( !SessionById )
              goto LABEL_85;
            if ( (int)MmAttachSession(SessionById, &v111) >= 0 )
            {
LABEL_126:
              EtwpProviderArrivalCallback(v16, 0LL, v43);
              if ( !v71 )
                goto LABEL_85;
              MmDetachSession((__int64)v71, ($115DCDF994C6370D29323EAB0E0C9502 *)&v111);
            }
            ObfDereferenceObject(v71);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v43[10] + 1112LL)) )
          {
            v61 = v43[10];
            memset(&ApcState, 0, sizeof(ApcState));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v61);
            v63 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KeStackAttachProcess((PRKPROCESS)v43[10], &ApcState);
            LOBYTE(v64) = 1;
            EtwpProviderArrivalCallback(v16, v64, v43);
            KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
            PsDetachSiloFromCurrentThread(v63);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v43[10] + 1112LL));
          }
        }
      }
LABEL_85:
      v54 = v94;
LABEL_86:
      if ( (int)EtwpSendDataBlock(v43, v54) >= 0 && (*((_BYTE *)v43 + 98) & 2) != 0 )
        ++v96;
      goto LABEL_89;
    }
    if ( !v90 )
    {
      v8 = v93;
      v90 = v93;
    }
LABEL_89:
    if ( v88 )
    {
      *(_QWORD *)(v43[4] + 416LL) = 0LL;
      ExReleasePushLockEx((__int64 *)(v43[4] + 408LL), 0LL);
      KeLeaveCriticalRegion();
      v88 = 0;
    }
    v42 = v99;
    if ( v99 == v109 )
    {
      v41 = v102;
      goto LABEL_93;
    }
    v33 = Src;
  }
  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v43[10]);
  if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(v3 + 6) & 0x7FFF, &v91) )
    goto LABEL_89;
  v80 = v91;
  if ( v91 == v8[39] )
  {
LABEL_160:
    v54 = v8;
    goto LABEL_86;
  }
  if ( (int)EtwpAllocDataBlock(*v108, Src, &v90) >= 0 )
  {
    EtwpUnreferenceDataBlock(v93);
    v8 = v90;
    v93 = v90;
    v90[39] = v80 | 0x8000;
    v8[52] = v80;
    goto LABEL_160;
  }
  v8 = v93;
  if ( v88 )
  {
    *(_QWORD *)(v43[4] + 416LL) = 0LL;
    ExReleasePushLockEx((__int64 *)(v43[4] + 408LL), 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_145:
  updated = -1073741801;
LABEL_101:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
  v27 = HIBYTE(v89[0]);
LABEL_104:
  if ( Src )
    EtwpUnreferenceDataBlock(Src);
  if ( v27 )
    goto LABEL_36;
LABEL_37:
  if ( v16 )
    EtwpReleaseLoggerContext(v16, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry(v7);
  EtwpFreeFilterInfo(v110);
  return (unsigned int)updated;
}
