/*
 * XREFs of EtwpUpdateTrace @ 0x140744D3C
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409E8BFC (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x140696014 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406972D0 (EtwpGetSecurityDescriptorByGuid.c)
 *     SeDeleteClientSecurity @ 0x1406D4FF0 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurity @ 0x1406D61E0 (SeCreateClientSecurity.c)
 *     EtwpValidateLoggerInfo @ 0x1407457C8 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x140745800 (EtwpAcquireLoggerContext.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407458FC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x1407478D0 (EtwpCaptureString.c)
 *     EtwpCheckForStackTracingExtension @ 0x140748504 (EtwpCheckForStackTracingExtension.c)
 *     EtwpValidateFlagExtension @ 0x1407485B0 (EtwpValidateFlagExtension.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140748750 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14080D834 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140858980 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408606D8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0E14 (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E4B6C (EtwpUpdatePerProcessTracing.c)
 *     EtwpSendDbgId @ 0x1409E9094 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409E9524 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int updated; // ebx
  unsigned int *v10; // rdi
  int v11; // r15d
  unsigned int v12; // r14d
  ACCESS_MASK v13; // eax
  unsigned int *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v19; // r10d
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  UNICODE_STRING v23; // xmm0
  __int64 v24; // r9
  int v25; // ecx
  int v26; // ecx
  unsigned int *v27; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+50h] BYREF
  void *v31; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v7);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v30);
      if ( updated < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)updated;
      }
      v10 = v30;
      v11 = *(_DWORD *)(a2 + 64);
      v12 = v30[3];
      v27 = v30 + 3;
      if ( (v12 & 0x40) != 0
        || (v11 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v11 & 2) != 0 && (v12 & 2) == 0
        || (v11 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v13 = ((v12 | v11) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v13 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v13, (__int64)v30);
      if ( updated < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v12 & 8) != 0 || (v11 & 8) != 0 || (v12 & 0x400) != 0 )
          goto LABEL_6;
        updated = EtwpCaptureString(a2 + 128, &UnicodeString);
        if ( updated < 0 )
          goto LABEL_7;
        if ( *((_QWORD *)v10 + 90) )
        {
          SeDeleteClientSecurity((__int64)(v10 + 176));
          *((_QWORD *)v10 + 90) = 0LL;
        }
        v10 = v30;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v30 + 176));
        if ( updated < 0 )
          goto LABEL_7;
        v23 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v10 + 46) = v23;
        EtwpSynchronizeWithLogger(v10, 4LL);
        updated = EtwpSynchronizeWithLogger(v10, 2LL);
        if ( updated < 0 || !v10[80] )
          goto LABEL_7;
      }
      else if ( (v12 & 0x400) != 0 )
      {
        goto LABEL_20;
      }
      if ( (v11 & 0x100) != 0 )
      {
        v12 |= 0x100u;
        if ( !v10[52] )
          v10[52] = (v12 & 0x10) != 0 ? 1000 : 1;
LABEL_20:
        v14 = v10 + 69;
        v15 = *(_QWORD *)(v10 + 69);
        v16 = HeapGuid - v15;
        if ( HeapGuid == v15 )
          v16 = 0x4AA2F2756B3425A8LL - *(_QWORD *)(v10 + 71);
        if ( v16 )
        {
          v17 = CritSecGuid - v15;
          if ( CritSecGuid == v15 )
            v17 = 0x6B81390EF58D1581LL - *(_QWORD *)(v10 + 71);
          if ( v17 )
          {
LABEL_26:
            updated = EtwpCheckForStackTracingExtension(a2, v10);
            if ( updated < 0 )
              goto LABEL_7;
            if ( (*v27 & 0x2000000) != 0 )
            {
              updated = EtwpCheckSystemTraceAccess(v10, 128LL);
              if ( updated < 0 )
                goto LABEL_7;
              if ( a1 == EtwpHostSiloState )
              {
                updated = EtwpCheckForPoolTagFilterExtension(v10, a2, 0LL);
                if ( updated < 0 )
                  goto LABEL_7;
              }
              updated = EtwpUpdateLoggerGroupMasks(v10, a2);
              if ( updated < 0 )
                goto LABEL_7;
            }
            if ( !*(_DWORD *)(a2 + 56) )
              goto LABEL_33;
            if ( v10[1] )
            {
              SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v10);
              if ( v19 <= SystemMaximumBufferCount )
                goto LABEL_31;
            }
            else
            {
              SystemMaximumBufferCount = 0;
            }
            *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
            v19 = SystemMaximumBufferCount;
LABEL_31:
            if ( v19 > v10[59] )
              v10[59] = v19;
LABEL_33:
            if ( (v12 & 0x400) == 0 )
            {
              v20 = *(_DWORD *)(a2 + 68);
              if ( v20 )
              {
                if ( v20 != v10[52] )
                {
                  v10[52] = v20;
                  EtwpSynchronizeWithLogger(v10, 4LL);
                }
              }
            }
            if ( (v11 & 0x80000) == 0 )
            {
              if ( (v12 & 0x80000) != 0 )
                v12 &= ~0x80000u;
              goto LABEL_40;
            }
            if ( v10[75] != 1 )
            {
              _InterlockedOr((volatile signed __int32 *)v10 + 206, 0x800u);
              v12 |= 0x80000u;
              if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
              {
                v10 = v30;
              }
              else
              {
                v10 = v30;
                EtwpSendDbgId(v30);
              }
LABEL_40:
              if ( (v11 & 0x80u) == 0
                || (v31 = 0LL,
                    EtwpGetSecurityDescriptorByGuid(v14, &v31),
                    updated = EtwpUpdateLoggerSecurityDescriptor(v10, v31),
                    EtwpFreeSecurityDescriptor(&v31),
                    updated >= 0) )
              {
                *v27 = v12;
                v21 = *(_DWORD *)(a2 + 76);
                if ( v21 )
                {
                  if ( v10[52] || (v12 & 0x400) != 0 )
                    goto LABEL_86;
                  v25 = v10[59] - EtwpQueryUsedProcessorCount((__int64)v10);
                  v21 = *(_DWORD *)(a2 + 76);
                  v26 = v25 - 1;
                  if ( v21 > v26 )
                  {
                    *(_DWORD *)(a2 + 76) = v26;
                    v21 = v26;
                  }
                  if ( v21 < 0 )
                  {
LABEL_86:
                    *(_DWORD *)(a2 + 76) = 0;
                    v21 = 0;
                  }
                }
                v10[53] = v21;
                updated = EtwpGetLoggerInfoFromContext(a2, v10);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                  EtwpEventWriteTemplateSession(v22, &ETW_EVENT_UPDATE_TRACE, v10);
              }
              goto LABEL_7;
            }
            updated = -1073741637;
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            EtwpReleaseLoggerContext(v10, 1);
            goto LABEL_8;
          }
          v24 = 1LL;
        }
        else
        {
          v24 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v10, v24);
        goto LABEL_26;
      }
      if ( (v12 & 0x100) == 0 )
        goto LABEL_20;
      if ( *((_QWORD *)v10 + 100) )
      {
        v12 &= ~0x100u;
        EtwpSynchronizeWithLogger(v10, 8LL);
        goto LABEL_20;
      }
LABEL_6:
      updated = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
