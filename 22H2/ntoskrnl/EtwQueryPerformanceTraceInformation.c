/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x140937EBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlFindSetBits @ 0x1402D8000 (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x1406A3370 (EtwpMapEnableFlags.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BBBBC (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BBC10 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BD5D0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406DE310 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpCheckSystemTraceAccess @ 0x140793808 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUMGLEnabled @ 0x14093433C (EtwpUMGLEnabled.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140947834 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409485C4 (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, unsigned int *a4)
{
  unsigned int v5; // r14d
  DWORD SetBits; // r15d
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // r13
  void *v19; // rbx
  char v20; // dl
  unsigned int *p_SizeOfBitMap; // rcx
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  unsigned int *v24; // rax
  unsigned int *v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // r14d
  unsigned int v28; // edx
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v37; // rdi
  unsigned int ProcessId; // ecx
  ULONG v39; // ebx
  unsigned int v40; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v42; // rax
  _RTL_BITMAP *v43; // rsi
  unsigned int v44; // eax
  ULONG v45; // ebx
  __int64 i; // r12
  ULONG Length; // [rsp+30h] [rbp-78h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v52; // [rsp+48h] [rbp-60h] BYREF
  __int64 v53; // [rsp+50h] [rbp-58h]
  int v54; // [rsp+58h] [rbp-50h]
  __int64 v55; // [rsp+60h] [rbp-48h]
  __int64 v56; // [rsp+68h] [rbp-40h]
  __int64 v57; // [rsp+70h] [rbp-38h]
  __int64 v58; // [rsp+78h] [rbp-30h]
  ULONG v59; // [rsp+B8h] [rbp+10h]

  v5 = a2;
  SetBits = 0;
  v8 = 0;
  if ( (unsigned int)a2 < 4 )
    return 3221225485LL;
  v54 = *(_DWORD *)a1;
  v10 = v54;
  v14 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
  if ( v54 > 18 )
  {
    if ( v54 != 25 )
      return (unsigned int)-1073741822;
    LOBYTE(v13) = a3;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1, v5, v13, a4);
  }
  if ( v54 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, v5, a4);
  if ( v54 > 5 )
  {
    if ( v54 == 6 )
    {
      v39 = 0;
      v59 = 0;
      v53 = a1 + 16;
      if ( v5 < 0x10 )
        return 3221225476LL;
      v58 = *(_QWORD *)(a1 + 8);
      v40 = (unsigned __int16)v58;
      if ( (unsigned __int16)v58 == 0xFFFF )
        v40 = *(unsigned __int8 *)(v14 + 4208);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v42 = EtwpAcquireLoggerContextByLoggerId(v14, v40, 1);
      v43 = (_RTL_BITMAP *)v42;
      ObjectsSecurityDescriptor = v42;
      if ( v42 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v42);
        if ( (v8 & 0x80000000) == 0 )
        {
          if ( (v43[52].SizeOfBitMap & 0x80u) != 0 )
          {
            v39 = RtlNumberOfSetBits(v43 + 61);
            v59 = v39;
          }
          v44 = 4 * v39 + 16;
          *a4 = v44;
          if ( v44 > v5 )
          {
            v8 = -1073741789;
          }
          else
          {
            v45 = 0;
            for ( i = v53; ; *(_DWORD *)(i + 4LL * v45++) = SetBits )
            {
              Length = v45;
              if ( v45 >= v59 )
                break;
              SetBits = RtlFindSetBits(v43 + 61, 1u, SetBits + 1);
              SecurityInformation = SetBits;
            }
          }
        }
        p_SizeOfBitMap = &v43->SizeOfBitMap;
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( v54 == 7 )
    {
      *a4 = 16;
      if ( v5 != 16 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
      *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
      *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    if ( v54 <= 9 )
    {
      v33 = 0;
      if ( v5 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
      {
        v34 = (v5 - 4) >> 2;
        for ( j = 0LL; ; j = v37 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
          v37 = NextProcess;
          Object = NextProcess;
          if ( !NextProcess )
            break;
          if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x1000) == 0
            && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v37);
            if ( v33 < v34 )
              *(_DWORD *)(a1 + 4LL * v33 + 4) = ProcessId;
            ++v33;
          }
        }
        *a4 = 4 * v33 + 4;
        return v34 < v33 ? 0xC0000023 : 0;
      }
    }
    else
    {
      if ( v54 != 10 )
      {
        if ( v54 == 13 )
        {
          Object = 0LL;
          v52 = 0LL;
          if ( v5 >= 0x28 )
          {
            v27 = v5 - 8;
            result = ExLockUserBuffer(a1 + 8, v27, a3, IoWriteAccess, &v52, (struct _MDL **)&Object);
            if ( (int)result < 0 )
              return result;
            v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C00A68[0])(
                   20LL,
                   v27,
                   v52,
                   a4);
            if ( v52 )
              ExUnlockUserBuffer((struct _MDL *)Object);
            return v8;
          }
          return 3221225476LL;
        }
        return (unsigned int)-1073741822;
      }
      if ( v5 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo(v12, v11) )
      {
        v57 = *(_QWORD *)(a1 + 8);
        v28 = (unsigned __int16)v57;
        if ( (unsigned __int16)v57 == 0xFFFF )
          v28 = *(unsigned __int8 *)(v14 + 4208);
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = EtwpAcquireLoggerContextByLoggerId(v14, v28, 1);
        v25 = v30;
        ObjectsSecurityDescriptor = v30;
        if ( v30 )
        {
          if ( (v30[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v30, 1);
            v8 = -1073741811;
LABEL_80:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return v8;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v30, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v31 = 5LL * *((unsigned __int8 *)v25 + 834);
            v32 = 4 * EtwpPoolTagFilter[10 * *((unsigned __int8 *)v25 + 834)] + 16;
            *a4 = v32;
            if ( v32 > v5 )
              v8 = -1073741789;
            else
              memmove((void *)(a1 + 16), &EtwpPoolTagFilter[2 * v31 + 2], 4LL * EtwpPoolTagFilter[2 * v31]);
          }
          goto LABEL_51;
        }
LABEL_75:
        v8 = -1073741162;
        goto LABEL_80;
      }
    }
    return 3221225506LL;
  }
  switch ( v54 )
  {
    case 5:
      *a4 = 20;
      if ( ((v5 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( v5 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v8;
      }
      return 3221225476LL;
    case 0:
      *a4 = 8;
      if ( v5 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = 80;
      return v8;
    case 1:
      *a4 = 48;
      if ( v5 != 48 )
        return 3221225476LL;
      v56 = *(_QWORD *)(a1 + 8);
      v22 = (unsigned __int16)v56;
      if ( (unsigned __int16)v56 == 0xFFFF )
        v22 = *(unsigned __int8 *)(v14 + 4208);
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = EtwpAcquireLoggerContextByLoggerId(v14, v22, 1);
      v25 = v24;
      ObjectsSecurityDescriptor = v24;
      if ( v24 )
      {
        if ( (v24[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v24, 1);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return 3221225485LL;
        }
        v26 = 32LL * *((unsigned __int8 *)v24 + 834);
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(v26 + v14 + 4260);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(v26 + v14 + 4276);
        EtwpMapEnableFlags(a1 + 16, 0);
LABEL_51:
        p_SizeOfBitMap = v25;
LABEL_78:
        v20 = 1;
        goto LABEL_79;
      }
      goto LABEL_75;
    case 2:
      *a4 = 16;
      if ( v5 != 16 )
        return 3221225476LL;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 108) + 4128LL);
      break;
    case 3:
      *a4 = 8;
      if ( v5 != 8 )
        return 3221225476LL;
      *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
      break;
    case 4:
      *a4 = 24;
      if ( v5 >= 0x18 )
      {
        v55 = *(_QWORD *)(a1 + 8);
        SecurityInformation = *(_DWORD *)(a1 + 4);
        v15 = (unsigned __int16)v55;
        if ( (unsigned __int16)v55 == 0xFFFF )
          v15 = *(unsigned __int8 *)(v14 + 4208);
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        v17 = EtwpAcquireLoggerContextByLoggerId(v14, v15, 0);
        v18 = (__int64)v17;
        if ( v17 )
        {
          v19 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v17);
          ObjectsSecurityDescriptor = v19;
          Length = v5 - 16;
          v8 = SeQuerySecurityDescriptorInfo(
                 &SecurityInformation,
                 (PSECURITY_DESCRIPTOR)(a1 + 16),
                 &Length,
                 &ObjectsSecurityDescriptor);
          *a4 = Length + 16;
          EtwpDereferenceLoggerSecurityDescriptor(v18, (__int64)v19);
          v20 = 0;
          p_SizeOfBitMap = (unsigned int *)v18;
LABEL_79:
          EtwpReleaseLoggerContext(p_SizeOfBitMap, v20);
          goto LABEL_80;
        }
        goto LABEL_75;
      }
      return 3221225476LL;
    default:
      return (unsigned int)-1073741822;
  }
  return v8;
}
