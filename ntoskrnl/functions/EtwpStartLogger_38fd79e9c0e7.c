__int64 __fastcall EtwpStartLogger(ULONGLONG a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // r15d
  unsigned int v7; // ecx
  int v8; // eax
  int FileName; // edi
  ACCESS_MASK v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  ULONGLONG v19; // rax
  unsigned int v20; // r13d
  unsigned int *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r13
  signed __int64 v26; // rdx
  ULONGLONG Ptr; // r13
  __int64 v28; // rax
  unsigned int *inited; // rsi
  __int64 FlagExtension; // rax
  __int64 v31; // r8
  unsigned int v32; // eax
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // eax
  _WORD *v36; // rbx
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // ecx
  unsigned int v43; // ecx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  char v52; // al
  __int64 v53; // rcx
  unsigned int v54; // ebx
  __int16 v55; // ax
  bool v56; // zf
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned int v60; // ebx
  const WCHAR *v61; // rdx
  __int64 Pool2; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  void *v65; // rcx
  __int64 v66; // rbx
  int v67; // ecx
  int v68; // r8d
  unsigned int v69; // ecx
  int v70; // edx
  __int64 v71; // rdx
  unsigned int v72; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int8 v73; // [rsp+44h] [rbp-55h]
  unsigned int v74; // [rsp+48h] [rbp-51h]
  int v75; // [rsp+4Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-31h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+78h] [rbp-21h]
  __int64 v80; // [rsp+80h] [rbp-19h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+88h] [rbp-11h] BYREF
  UUID Buf2; // [rsp+98h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+Fh] BYREF

  UserData.Ptr = a1;
  v72 = 0;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  v75 = 0;
  v74 = 8;
  Buf2 = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v6 = v5 | 0x80;
  if ( (v5 & 0x40000) == 0 )
    v6 = v5;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v6 &= ~0x1000000u;
  v7 = v6;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0xF) != 0 )
      goto LABEL_143;
    v55 = v6;
    v6 &= ~0x100u;
    if ( (v55 & 0x100) == 0 )
      v6 = v7;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v6 & 3) == 3
    || (v6 & 0xC000) == 0xC000
    || (v6 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v6 & 6) == 6
    || (v6 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v6 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v6 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v6 & 0x402) == 0 && ((v6 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v6 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_143;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_143;
    }
    v57 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
    if ( !v57 )
      v57 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v57 )
      goto LABEL_143;
    v58 = *(_QWORD *)(a2 + 24) - CKCLGuid;
    if ( !v58 )
      v58 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v58 || (v6 & 4) != 0 )
      goto LABEL_143;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x106) != 0 || (v4 & 0x10000) != 0 )
    goto LABEL_143;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !EtwpKsrCallbackObject )
    {
      FileName = -1073741637;
      goto LABEL_270;
    }
    if ( (v4 & 0x400) == 0 || (v4 & 0x1000000) != 0 )
      goto LABEL_143;
  }
  v8 = *(_DWORD *)(a2 + 112);
  if ( v8 < 0 )
  {
    if ( EtwpBootPhase || (v8 & 2) == 0 || (v4 & 0x2000000) == 0 || ((*(_DWORD *)(a2 + 40) - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_143;
    v63 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
    if ( !v63 )
      v63 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
    if ( !v63 )
      goto LABEL_143;
  }
  FileName = EtwpValidateFlagExtension(a2);
  if ( FileName < 0 )
    goto LABEL_270;
  v10 = ((v6 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v10 = (v6 & 0x100 | 0x400) >> 3;
  DesiredAccess = v10;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
  {
LABEL_143:
    FileName = -1073741811;
    goto LABEL_270;
  }
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
    goto LABEL_270;
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v72) )
    goto LABEL_240;
  v11 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v11 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_270;
  }
  if ( (v6 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)MmGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v6 |= 0x400000u;
    }
    else
    {
      v6 |= 0x800000u;
    }
  }
  v12 = *(_QWORD *)&Buf2.Data1;
  v13 = *(_QWORD *)(a1 + 456);
  v14 = *(_QWORD *)&Buf2.Data1 - SystemTraceControlGuid;
  v15 = *(_QWORD *)Buf2.Data4;
  v80 = v13;
  if ( *(_QWORD *)&Buf2.Data1 == SystemTraceControlGuid )
    v14 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
  if ( !v14 )
    goto LABEL_212;
  v16 = *(_QWORD *)&Buf2.Data1 - CKCLGuid;
  if ( *(_QWORD *)&Buf2.Data1 == CKCLGuid )
    v16 = *(_QWORD *)Buf2.Data4 - 0x74F156D0633E71AFLL;
  if ( !v16 )
  {
LABEL_212:
    RtlFreeUnicodeString(&DestinationString);
    v59 = v12 - SystemTraceControlGuid;
    if ( !v59 )
      v59 = v15 - 0x3969A8086000829ALL;
    if ( v59 )
    {
      v60 = 2;
      v74 = 1;
      v61 = L"Circular Kernel Context Logger";
    }
    else
    {
      v60 = 0;
      v74 = 0;
      v61 = L"NT Kernel Logger";
    }
    v72 = v60;
    if ( !RtlCreateUnicodeString(&DestinationString, v61) )
      goto LABEL_255;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) != 0 )
      goto LABEL_143;
    v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8LL * v60), v13 | 1, 1LL) == 1;
LABEL_195:
    if ( !v56 )
      goto LABEL_240;
    v15 = *(_QWORD *)Buf2.Data4;
    v12 = *(_QWORD *)&Buf2.Data1;
LABEL_65:
    Ptr = UserData.Ptr;
    ExAcquireRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(UserData.Ptr + 448) + 8LL * v72),
      1u);
    if ( *(int *)(a2 + 112) >= 0 )
    {
      EtwpGetSecurityDescriptorByGuid(&Buf2, &SecurityDescriptor);
      FileName = EtwpAccessCheck(SecurityDescriptor, v10);
      if ( FileName < 0 )
        goto LABEL_269;
      v15 = *(_QWORD *)Buf2.Data4;
      v12 = *(_QWORD *)&Buf2.Data1;
    }
    v28 = HeapGuid - v12;
    if ( HeapGuid == v12 )
      v28 = 0x4AA2F2756B3425A8LL - v15;
    if ( v28 )
      v73 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
    else
      v73 = 0;
    if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v74 == 8 )
    {
      if ( *(int *)(a2 + 112) >= 0 )
      {
        FileName = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
        if ( FileName < 0 )
          goto LABEL_269;
      }
      v54 = 2;
      v74 = 2;
      while ( _bittest((const signed __int32 *)(Ptr + 4248), v54) )
      {
        v74 = ++v54;
        if ( v54 >= 8 )
        {
          v74 = v54;
          if ( v54 != 8 )
            break;
          FileName = -1073741670;
          goto LABEL_269;
        }
      }
    }
    inited = (unsigned int *)EtwpInitLoggerContext(&DestinationString, v6, *(unsigned int *)(a2 + 112));
    FlagExtension = EtwpGetFlagExtension(a2, 6LL);
    if ( FlagExtension )
    {
      if ( 4 * *(_WORD *)FlagExtension == 12 )
      {
        FileName = EtwpSetPartitionContext((__int64 *)inited + 165, *(_QWORD *)(FlagExtension + 4), v31);
        if ( FileName < 0 )
          goto LABEL_260;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( inited )
    {
      *(UUID *)(inited + 69) = Buf2;
      inited[73] = *(_DWORD *)(a2 + 60);
      if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
      inited[50] = *(_DWORD *)(a2 + 40);
      if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
      {
        FileName = EtwpSetQpcDeltaTracking((__int64)inited);
        if ( FileName < 0 )
          goto LABEL_260;
      }
      if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
        inited[204] |= 0x40000000u;
      v32 = *(_DWORD *)(a2 + 68);
      if ( v32 )
      {
        inited[52] = v32;
      }
      else if ( (v6 & 0x100) != 0 )
      {
        if ( (v6 & 0x10) != 0 )
          inited[52] = 1000;
        else
          inited[52] = 1;
      }
      v33 = *(_DWORD *)(a2 + 76);
      v34 = v33;
      if ( v33 && (inited[52] || v33 < 0) )
      {
        *(_DWORD *)(a2 + 76) = 0;
        v34 = 0;
      }
      v35 = v72;
      FileName = 0;
      inited[53] = v34;
      *inited = v35;
      *((_QWORD *)inited + 137) = Ptr;
      if ( *(_WORD *)(a2 + 128) )
      {
        if ( *(_QWORD *)(a2 + 136) )
        {
          FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
          if ( FileName < 0 )
            goto LABEL_260;
        }
      }
      if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
      {
        inited[74] = *(_DWORD *)(a2 + 96);
        *(_DWORD *)(a2 + 96) = 0;
      }
      if ( (inited[3] & 8) != 0 )
      {
        *(UNICODE_STRING *)(inited + 42) = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
        FileName = EtwpGenerateFileName(inited + 42, inited + 74, inited + 38);
        if ( FileName < 0 )
          goto LABEL_226;
        v36 = inited + 38;
      }
      else
      {
        v36 = inited + 38;
        *(UNICODE_STRING *)(inited + 38) = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
      }
      if ( *(int *)(a2 + 112) >= 0 )
      {
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        FileName = SeCreateClientSecurity(
                     KeGetCurrentThread(),
                     &ClientSecurityQos,
                     0,
                     (PSECURITY_CLIENT_CONTEXT)(inited + 176));
      }
      if ( FileName >= 0 )
      {
        if ( (inited[3] & 0x100) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
        else
          _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
        if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
        if ( *(int *)(a2 + 112) < 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x80000000);
        if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
        if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
        EtwpInitializeTimeStamp(inited);
        v37 = v74;
        if ( v74 < 8 )
        {
          inited[3] |= 0x2000000u;
          *((_BYTE *)inited + 818) = v37;
          if ( (unsigned int)v37 <= 1 )
            _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
          Ptr = UserData.Ptr;
          *(_BYTE *)(UserData.Ptr + 2 * v37 + 4232) = v72;
          if ( inited[50] - 1 >= 4 )
            v52 = 1;
          else
            v52 = *((_BYTE *)inited + 200);
          *(_BYTE *)(Ptr + 2 * v37 + 4233) = v52;
          _interlockedbittestandset((volatile signed __int32 *)(Ptr + 4248), v37);
        }
        else
        {
          Ptr = UserData.Ptr;
        }
        FileName = EtwpCheckForStackTracingExtension(a2, inited);
        if ( FileName < 0 )
          goto LABEL_260;
        v38 = *(_DWORD *)(a2 + 52);
        if ( v38 )
          inited[56] = v38;
        v39 = *(_DWORD *)(a2 + 56);
        if ( v39 )
          inited[59] = v39;
        v40 = *(_DWORD *)(a2 + 48);
        if ( v40 )
        {
          if ( v40 > 0x4000 )
          {
            *(_DWORD *)(a2 + 48) = 0x4000;
            v40 = 0x4000;
          }
          inited[1] = v40 << 10;
        }
        if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
        {
          inited[1] = (inited[1] + 0x1FFFFF) & 0xFFE00000;
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20000000u);
        }
        if ( *v36 )
        {
          *((_QWORD *)inited + 4) = KeGetCurrentThread();
          while ( 1 )
          {
            _InterlockedOr((volatile signed __int32 *)inited + 206, 1u);
            FileName = EtwpCreateLogFile(inited, 0LL, &v75);
            if ( FileName >= 0 )
              break;
            if ( FileName != -1073741306 )
              goto LABEL_260;
            v69 = inited[1];
            v70 = ~(v75 - 1) & (v69 + v75 - 1);
            if ( v69 == v70 )
              goto LABEL_260;
            inited[1] = v70;
          }
        }
        if ( inited[1] < 0x1000 && (*v36 || (inited[3] & 0x400) != 0) )
          _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
        v41 = inited[1];
        v42 = 0xFFFF;
        if ( (unsigned __int64)(v41 - 72) < 0xFFFF )
          v42 = v41 - 72;
        inited[2] = v42 & 0xFFFFFFF8;
        FileName = EtwpAllocateTraceBufferPool(inited);
        if ( FileName < 0 )
          goto LABEL_284;
        if ( (v6 & 0x4000000) != 0 && (v6 & 0x400) == 0 )
        {
          Pool2 = ExAllocatePool2(64LL, inited[1], 1517777989LL);
          *((_QWORD *)inited + 144) = Pool2;
          if ( !Pool2 )
          {
            FileName = -1073741801;
LABEL_260:
            if ( (inited[3] & 0x2000000) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)(Ptr + 4248), v74);
            if ( (inited[204] & 0x80u) != 0 )
              ExFreePoolWithTag(*((PVOID *)inited + 125), 0);
            if ( (inited[204] & 0x2000) != 0 )
              _InterlockedDecrement(&dword_140C6B070);
            RtlFreeUnicodeString((PUNICODE_STRING)(inited + 38));
            RtlFreeUnicodeString((PUNICODE_STRING)(inited + 42));
            v65 = (void *)*((_QWORD *)inited + 100);
            if ( v65 )
              ZwClose(v65);
            ExFreePoolWithTag(inited, 0);
            goto LABEL_269;
          }
        }
        v43 = inited[73];
        if ( !v43 || (inited[3] & 0x2000) != 0 )
          v44 = 10485760LL;
        else
          v44 = (unsigned __int64)v43 << 20;
        v45 = inited[1] * inited[59];
        if ( v44 <= (unsigned int)(2 * v45) )
          v44 = (unsigned int)(2 * v45);
        *((_QWORD *)inited + 52) = v44;
        if ( *(int *)(a2 + 112) >= 0 )
        {
          FileName = EtwpInitializeLoggerSecurityDescriptor(inited, SecurityDescriptor);
          EtwpFreeSecurityDescriptor(&SecurityDescriptor);
          if ( FileName < 0 )
          {
LABEL_284:
            EtwpFreeTraceBufferPool(inited);
            goto LABEL_260;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)(Ptr + 4132), 1u);
        v46 = v72;
        ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v72), 1u);
        if ( (inited[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          FileName = EtwpStartLoggerThread(CurrentServerSilo, (__int64)inited);
          if ( FileName < 0 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8 * v46),
              1u);
LABEL_286:
            EtwpFreeLoggerContext(inited);
            return (unsigned int)FileName;
          }
        }
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
          EtwpEventWriteTemplateSession(v48, &ETW_EVENT_START_TRACE, inited);
        KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
        _InterlockedExchange64((volatile __int64 *)(v80 + 8 * v46), (__int64)inited);
        EtwpSendSessionNotification(inited, 5LL, 0LL);
        if ( (inited[3] & 0x2000000) == 0 )
          goto LABEL_137;
        if ( Ptr == EtwpHostSiloState )
        {
          LOBYTE(v49) = 1;
          FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v49);
          if ( FileName < 0 )
          {
LABEL_287:
            inited[10] = FileName;
            EtwpStopLoggerInstance(inited);
            if ( (inited[3] & 0x400) != 0 )
            {
              EtwpGetLoggerInfoFromContext(a2, inited);
              LOBYTE(v71) = 1;
              EtwpReleaseLoggerContext(inited, v71);
              goto LABEL_286;
            }
LABEL_137:
            if ( v73 != 9 )
              EtwpUpdatePerProcessTracing(a2, Ptr, *inited, v73);
            EtwpGetLoggerInfoFromContext(a2, inited);
            LOBYTE(v50) = 1;
            EtwpReleaseLoggerContext(inited, v50);
            return (unsigned int)FileName;
          }
          v53 = 5LL * v74;
          *((_WORD *)&EtwpObjectTypeFilter + 2 * v53) = 1;
          *((_DWORD *)&EtwpObjectTypeFilter + v53 + 1) = 42;
        }
        FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
        if ( FileName >= 0 )
          goto LABEL_137;
        goto LABEL_287;
      }
LABEL_226:
      Ptr = UserData.Ptr;
      goto LABEL_260;
    }
    FileName = -1073741801;
LABEL_269:
    v66 = v72;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v72), 1u);
    _InterlockedExchange64((volatile __int64 *)(v80 + 8 * v66), 1LL);
    goto LABEL_270;
  }
  v17 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v17 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v17 )
  {
    v72 = 1;
    if ( EtwpGetFlagExtension(a2, 1LL) )
    {
      if ( (v6 & 0x1000000) != 0 )
        goto LABEL_143;
      RtlFreeUnicodeString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_255;
      v74 = 0;
    }
    v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v13 | 1, 1LL) == 1;
    goto LABEL_195;
  }
  v18 = *(_QWORD *)&Buf2.Data1 - AuditLoggerGuid;
  if ( *(_QWORD *)&Buf2.Data1 == AuditLoggerGuid )
    v18 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
  if ( !v18 )
  {
    v72 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v13 | 1, 1LL) == 1;
        goto LABEL_195;
      }
LABEL_255:
      FileName = -1073741801;
      goto LABEL_270;
    }
    goto LABEL_143;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v64 = v12 - AuditLoggerGuid;
    if ( v12 == AuditLoggerGuid )
      v64 = v15 + 0x6A2DF162E6CE8D6ELL;
    if ( v64 )
      goto LABEL_240;
  }
  v19 = UserData.Ptr;
  v20 = 4;
  v21 = (unsigned int *)(UserData.Ptr + 16);
  if ( *(_DWORD *)(UserData.Ptr + 16) <= 4u )
    goto LABEL_57;
  while ( 1 )
  {
    v22 = EtwpAcquireLoggerContextByLoggerId(v19, v20, 0LL);
    if ( !v22 )
      goto LABEL_51;
    v23 = *(_QWORD *)(v22 + 276) - v12;
    if ( !v23 )
      v23 = *(_QWORD *)(v22 + 284) - v15;
    if ( !v23 )
      break;
    EtwpReleaseLoggerContext(v22, 0LL);
LABEL_51:
    if ( ++v20 >= *v21 )
      goto LABEL_57;
    v19 = UserData.Ptr;
  }
  EtwpReleaseLoggerContext(v22, 0LL);
LABEL_57:
  v24 = *v21;
  if ( v20 < *v21 )
  {
LABEL_240:
    FileName = -1073741771;
    goto LABEL_270;
  }
  v72 = 4;
  if ( v24 > 4 )
  {
    v25 = v80;
    v26 = v80 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8LL * v72), v26, 1LL) == 1 )
        break;
      ++v72;
    }
    while ( v72 < *v21 );
    v15 = *(_QWORD *)Buf2.Data4;
    v12 = *(_QWORD *)&Buf2.Data1;
  }
  if ( v72 < *v21 )
  {
    v10 = DesiredAccess;
    goto LABEL_65;
  }
  if ( !byte_140D18D80 )
  {
    byte_140D18D80 = 1;
    UserData.Ptr = (ULONGLONG)v21;
    *(_QWORD *)&UserData.Size = 4LL;
    EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_OUT_OF_LOGGER_SLOTS, 0LL, 1u, &UserData);
  }
  FileName = -1073741670;
LABEL_270:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
    EtwpEventWriteTemplateAdmin(
      v67,
      (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
      v68,
      (unsigned int)&DestinationString,
      (__int64)&UnicodeString,
      FileName,
      v6);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)FileName;
}
