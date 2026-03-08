/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14085C154
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     RtlFindSetBits @ 0x14030D990 (RtlFindSetBits.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140692DB8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140692E54 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     EtwpMapEnableFlags @ 0x1407487E8 (EtwpMapEnableFlags.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407AD8A0 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408606D8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpGetPmcProfileSource @ 0x1409E31B0 (EtwpGetPmcProfileSource.c)
 *     EtwpUMGLEnabled @ 0x1409E4A14 (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EA544 (EtwpGetSoftRestartInformation.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F0CA4 (EtwpQueryCoverageSamplerInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  ULONG SetBits; // r15d
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  KPROCESSOR_MODE v11; // r8
  _DWORD *v12; // r9
  struct _LIST_ENTRY *v13; // r13
  unsigned int v14; // edx
  struct _KTHREAD *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rax
  unsigned int *p_SizeOfBitMap; // rcx
  char v20; // dl
  __int64 result; // rax
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  unsigned int *v24; // rax
  __int64 v25; // r13
  void *v26; // rbx
  ULONG v27; // ebx
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v30; // rax
  RTL_BITMAP *v31; // rsi
  unsigned int v32; // eax
  ULONG v33; // ebx
  ULONG v34; // r14d
  _DWORD *i; // r12
  __int64 v36; // rcx
  unsigned int v37; // r14d
  unsigned int v39; // edx
  struct _KTHREAD *v40; // rax
  unsigned int *v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // r13d
  unsigned int v45; // r14d
  struct _KPROCESS *j; // rcx
  __int64 *NextProcess; // rax
  struct _KPROCESS *v48; // rdi
  unsigned int ProcessId; // eax
  ULONG SecurityInformation; // [rsp+30h] [rbp-58h] BYREF
  __int64 v51; // [rsp+38h] [rbp-50h] BYREF
  int Flink; // [rsp+40h] [rbp-48h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor[2]; // [rsp+48h] [rbp-40h] BYREF
  RTL_BITMAP *Blink; // [rsp+58h] [rbp-30h]
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  Flink = (int)a1->Flink;
  v9 = Flink;
  v13 = PsGetCurrentServerSiloGlobals()[54].Flink;
  if ( Flink > 18 )
  {
    if ( Flink != 25 )
      return (unsigned int)-1073741822;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1);
  }
  if ( Flink == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, v10, a4);
  if ( Flink <= 6 )
  {
    switch ( Flink )
    {
      case 6:
        v27 = 0;
        Length = 0;
        ObjectsSecurityDescriptor[0] = &a1[1];
        if ( a2 >= 0x10 )
        {
          Blink = (RTL_BITMAP *)a1->Blink;
          Blink_low = (unsigned __int16)Blink;
          if ( (unsigned __int16)Blink == 0xFFFF )
            Blink_low = LOBYTE(v13[264].Blink);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = EtwpAcquireLoggerContextByLoggerId((__int64)v13, Blink_low, 1);
          v31 = (RTL_BITMAP *)v30;
          ObjectsSecurityDescriptor[1] = v30;
          if ( v30 )
          {
            v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v30);
            if ( (v8 & 0x80000000) == 0 )
            {
              if ( (v31[51].SizeOfBitMap & 0x80u) != 0 )
              {
                v27 = RtlNumberOfSetBits(v31 + 62);
                Length = v27;
              }
              Blink = v31 + 62;
              v32 = 4 * v27 + 16;
              *a4 = v32;
              if ( v32 > a2 )
              {
                v8 = -1073741789;
              }
              else
              {
                v33 = 0;
                v34 = Length;
                for ( i = ObjectsSecurityDescriptor[0]; ; i[v33++] = SetBits )
                {
                  SecurityInformation = v33;
                  if ( v33 >= v34 )
                    break;
                  SetBits = RtlFindSetBits(v31 + 62, 1u, SetBits + 1);
                  LODWORD(v51) = SetBits;
                }
              }
            }
            p_SizeOfBitMap = &v31->SizeOfBitMap;
            goto LABEL_15;
          }
          goto LABEL_48;
        }
        return 3221225476LL;
      case 0:
        *v12 = 8;
        if ( a2 == 8 )
        {
          HIDWORD(a1->Flink) = 85;
          return v8;
        }
        return 3221225476LL;
      case 1:
        *v12 = 48;
        if ( a2 == 48 )
        {
          Blink = (RTL_BITMAP *)a1->Blink;
          v14 = (unsigned __int16)Blink;
          if ( (unsigned __int16)Blink == 0xFFFF )
            v14 = LOBYTE(v13[264].Blink);
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          v16 = EtwpAcquireLoggerContextByLoggerId((__int64)v13, v14, 1);
          v17 = v16;
          ObjectsSecurityDescriptor[0] = v16;
          if ( v16 )
          {
            if ( (v16[3] & 0x2000000) != 0 )
            {
              v18 = 2LL * *((unsigned __int8 *)v16 + 818);
              a1[1] = *(struct _LIST_ENTRY *)((char *)&v13[v18 + 267].Blink + 4);
              a1[2] = *(struct _LIST_ENTRY *)((char *)&v13[v18 + 268].Blink + 4);
              EtwpMapEnableFlags((__int64)&a1[1], 0);
LABEL_14:
              p_SizeOfBitMap = v17;
LABEL_15:
              v20 = 1;
LABEL_16:
              EtwpReleaseLoggerContext(p_SizeOfBitMap, v20);
LABEL_17:
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              return v8;
            }
            EtwpReleaseLoggerContext(v16, 1);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return 3221225485LL;
          }
LABEL_48:
          v8 = -1073741162;
          goto LABEL_17;
        }
        return 3221225476LL;
      case 2:
        *v12 = 16;
        if ( a2 == 16 )
        {
          a1->Blink = PsGetCurrentServerSiloGlobals()[54].Flink[258].Blink;
          return v8;
        }
        return 3221225476LL;
      case 3:
        *v12 = 8;
        if ( a2 == 8 )
        {
          HIDWORD(a1->Flink) = EtwpProfileInterval;
          return v8;
        }
        return 3221225476LL;
      case 4:
        *v12 = 24;
        if ( a2 >= 0x18 )
        {
          Blink = (RTL_BITMAP *)a1->Blink;
          SecurityInformation = HIDWORD(a1->Flink);
          v22 = (unsigned __int16)Blink;
          if ( (unsigned __int16)Blink == 0xFFFF )
            v22 = LOBYTE(v13[264].Blink);
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          v24 = EtwpAcquireLoggerContextByLoggerId((__int64)v13, v22, 0);
          v25 = (__int64)v24;
          if ( v24 )
          {
            v26 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v24);
            ObjectsSecurityDescriptor[0] = v26;
            Length = a2 - 16;
            v8 = SeQuerySecurityDescriptorInfo(&SecurityInformation, &a1[1], &Length, ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            EtwpDereferenceLoggerSecurityDescriptor(v25, (__int64)v26);
            v20 = 0;
            p_SizeOfBitMap = (unsigned int *)v25;
            goto LABEL_16;
          }
          goto LABEL_48;
        }
        return 3221225476LL;
      case 5:
        *v12 = 20;
        if ( (((_DWORD)v10 - 16) & 0xFFFFFFFB) == 0 )
        {
          HIDWORD(a1->Flink) = EtwpSpinLockSpinThreshold;
          LODWORD(a1->Blink) = EtwpSpinLockAcquireSampleRate;
          HIDWORD(a1->Blink) = EtwpSpinLockContentionSampleRate;
          if ( a2 == 20 )
            LODWORD(a1[1].Flink) = EtwpSpinLockHoldThreshold;
          return v8;
        }
        return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
  if ( Flink == 7 )
  {
    *v12 = 16;
    if ( a2 == 16 )
    {
      HIDWORD(a1->Flink) = EtwpExecutiveResourceReleaseSampleRate;
      LODWORD(a1->Blink) = EtwpExecutiveResourceContentionSampleRate;
      HIDWORD(a1->Blink) = EtwpExecutiveResourceTimeout;
      return v8;
    }
    return 3221225476LL;
  }
  v36 = (unsigned int)(Flink - 8);
  if ( Flink == 8 || (v36 = (unsigned int)(Flink - 9), Flink == 9) )
  {
    v44 = 0;
    if ( a2 < 8 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo(v36, v10) )
    {
      v45 = (a2 - 4) >> 2;
      for ( j = 0LL; ; j = v48 )
      {
        NextProcess = PsGetNextProcess(j);
        v48 = (struct _KPROCESS *)NextProcess;
        ObjectsSecurityDescriptor[0] = NextProcess;
        if ( !NextProcess )
          break;
        if ( (*((_DWORD *)NextProcess + 543) & 0x1000) == 0
          && (v9 == 9 || (unsigned __int8)EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
        {
          ProcessId = (unsigned int)PsGetProcessId(v48);
          if ( v44 < v45 )
            *((_DWORD *)&a1->Flink + v44 + 1) = ProcessId;
          ++v44;
        }
      }
      *a4 = 4 * v44 + 4;
      return v45 < v44 ? 0xC0000023 : 0;
    }
    return 3221225506LL;
  }
  if ( Flink == 10 )
  {
    if ( a2 < 0x10 )
      return 3221225476LL;
    if ( !PsIsCurrentThreadInServerSilo((unsigned int)(Flink - 10), v10) )
    {
      Blink = (RTL_BITMAP *)a1->Blink;
      v39 = (unsigned __int16)Blink;
      if ( (unsigned __int16)Blink == 0xFFFF )
        v39 = LOBYTE(v13[264].Blink);
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      v41 = EtwpAcquireLoggerContextByLoggerId((__int64)v13, v39, 1);
      v17 = v41;
      Blink = (RTL_BITMAP *)v41;
      if ( v41 )
      {
        if ( (v41[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v41, 1);
          v8 = -1073741811;
          goto LABEL_17;
        }
        v8 = EtwpCheckSystemTraceAccess(v41, 1LL);
        if ( (v8 & 0x80000000) == 0 )
        {
          v42 = 5LL * *((unsigned __int8 *)v17 + 818);
          v43 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v17 + 818)] + 16;
          *a4 = v43;
          if ( v43 > a2 )
            v8 = -1073741789;
          else
            memmove(&a1[1], &EtwpPoolTagFilter[2 * v42 + 2], 4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v42]);
        }
        goto LABEL_14;
      }
      goto LABEL_48;
    }
    return 3221225506LL;
  }
  if ( Flink == 12 )
    return (unsigned int)EtwpGetPmcProfileSource(a1, v10, a4);
  if ( Flink != 13 )
    return (unsigned int)-1073741822;
  ObjectsSecurityDescriptor[0] = 0LL;
  v51 = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  v37 = a2 - 8;
  result = ExLockUserBuffer(
             (unsigned __int64)&a1->Blink,
             v37,
             v11,
             IoWriteAccess,
             &v51,
             (struct _MDL **)ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C020E8[0])(20LL, v37, v51, a4);
    if ( v51 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor[0]);
    return v8;
  }
  return result;
}
