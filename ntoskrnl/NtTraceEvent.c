/*
 * XREFs of NtTraceEvent @ 0x140230D30
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x140205450 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x14045FE22 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FCF28 (EtwTraceRaw.c)
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     EtwpUpdateEnableMask @ 0x140692F88 (EtwpUpdateEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     EtwpSetMark @ 0x1409E3AC0 (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtTraceEvent(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned int v7; // eax
  int v8; // r12d
  NTSTATUS v9; // esi
  unsigned __int8 *v10; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // edx
  int v17; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // edx
  __int64 CurrentServerSiloGlobals; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v25; // r14
  struct _KTHREAD *v26; // rax
  int v27; // r9d
  unsigned __int16 v28; // r10
  __int64 v29; // r14
  __int64 v30; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v32; // rax
  int v33; // r9d
  int v34; // edx
  unsigned __int16 v35; // r10
  __int64 v36; // r11
  unsigned int v37; // r9d
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD *v40; // rax
  int v41; // r9d
  int v42; // edx
  unsigned __int8 v43; // [rsp+80h] [rbp-118h] BYREF
  char v44; // [rsp+81h] [rbp-117h]
  unsigned __int64 v45; // [rsp+88h] [rbp-110h]
  int v46; // [rsp+90h] [rbp-108h]
  int v47; // [rsp+94h] [rbp-104h]
  unsigned __int64 v48; // [rsp+98h] [rbp-100h]
  unsigned __int8 v50; // [rsp+A2h] [rbp-F6h]
  __int16 v51; // [rsp+A4h] [rbp-F4h]
  unsigned int v52; // [rsp+A8h] [rbp-F0h]
  int v53; // [rsp+ACh] [rbp-ECh]
  int v54; // [rsp+B0h] [rbp-E8h]
  __int64 v55; // [rsp+B8h] [rbp-E0h]
  __int64 v56; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-C8h]
  __int64 v59; // [rsp+D8h] [rbp-C0h]
  __int64 v60; // [rsp+E0h] [rbp-B8h]
  int v61; // [rsp+F0h] [rbp-A8h]
  int v62; // [rsp+F4h] [rbp-A4h]
  unsigned __int64 v63; // [rsp+108h] [rbp-90h]
  unsigned __int64 v64; // [rsp+110h] [rbp-88h]
  __int64 v65; // [rsp+118h] [rbp-80h]
  __int64 v66; // [rsp+120h] [rbp-78h]
  PVOID Object[2]; // [rsp+128h] [rbp-70h] BYREF
  __int128 v68; // [rsp+138h] [rbp-60h] BYREF
  __int128 v69; // [rsp+148h] [rbp-50h]

  v5 = (unsigned int)a3;
  v6 = a2;
  v7 = a2 & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v48 = *(_QWORD *)(a4 + 88);
    v64 = v48;
    LODWORD(v45) = *(_DWORD *)(a4 + 84);
    v61 = v45;
    v8 = *(unsigned __int16 *)(a4 + 82);
    v65 = *(unsigned __int16 *)(a4 + 82);
    v47 = *(_DWORD *)(a4 + 112);
    v62 = v47;
    v57 = *(_QWORD *)(a4 + 48);
    v66 = v57;
    v43 = *(_BYTE *)(a4 + 44);
    v50 = v43;
    v55 = 0LL;
    if ( *(_BYTE *)(a4 + 80) )
      v55 = a4 + 96;
    Object[0] = 0LL;
    v9 = ObReferenceObjectByHandle((HANDLE)a1, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
    if ( v9 >= 0 )
    {
      v56 = 0LL;
      v10 = (unsigned __int8 *)Object[0];
      v11 = (_QWORD *)*((_QWORD *)Object[0] + 4);
      Object[0] = v11;
      v12 = *((_QWORD *)v10 + 5);
      CurrentThread = (struct _KTHREAD *)v12;
      v13 = (unsigned int)v6 >> 31;
      v68 = 0LL;
      v69 = 0LL;
      v14 = *((_QWORD *)v10 + 13);
      v15 = v14 + 28;
      if ( !v14 )
        v15 = 0LL;
      v16 = v10[100];
      if ( (_BYTE)v16 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v16,
               (unsigned __int16)v13,
               v8,
               v47,
               a4,
               v55,
               v43,
               v57,
               v45,
               v48,
               (__int64)&v68,
               0LL,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v56);
        v11 = Object[0];
        v12 = (__int64)CurrentThread;
      }
      v17 = v10[101];
      if ( (_BYTE)v17 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v17,
               (unsigned __int16)v13,
               v8,
               v47,
               a4,
               v55,
               v43,
               v57,
               v45,
               v48,
               (__int64)&v68,
               v12,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v56);
        v11 = Object[0];
      }
      if ( v11[50] )
      {
        v68 = 0LL;
        v69 = 0LL;
        v34 = v10[102];
        if ( (_BYTE)v34 )
        {
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v34,
                 (unsigned __int16)v13,
                 0,
                 v47,
                 a4,
                 v55,
                 v43,
                 v57,
                 v45,
                 v48,
                 (__int64)&v68,
                 0LL,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v56);
          v11 = Object[0];
        }
        v42 = v10[103];
        if ( (_BYTE)v42 )
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v42,
                 (unsigned __int16)v13,
                 0,
                 v47,
                 a4,
                 v55,
                 v43,
                 v57,
                 v45,
                 v48,
                 (__int64)&v68,
                 (__int64)CurrentThread->WaitBlock[1].Object,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v56);
      }
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    }
    return (unsigned int)v9;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x600u:
        v43 = 0;
        v29 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2, a3, a4) + 864);
        v30 = v28;
        if ( v28 == 0xFFFF || !v28 )
          v30 = *(unsigned __int8 *)(v29 + 4232);
        if ( (unsigned int)v30 < *(_DWORD *)(v29 + 16)
          && (PreviousMode = KeGetCurrentThread()->PreviousMode,
              (v32 = EtwpOpenLogger(v30, v29, PreviousMode, &v43)) != 0) )
        {
          if ( (*(_DWORD *)(v32 + 12) & 0x2000000) != 0 )
          {
            v39 = 32LL * *(unsigned __int8 *)(v32 + 818) + v29 + 4284;
            if ( v39 && (*(_DWORD *)(v39 + 4) & 0x28) != 0 )
              LOBYTE(v33) = 1;
            else
              v33 = 0;
            v9 = EtwpSetMark(v32, a4, v5, v33, PreviousMode);
            v52 = v9;
          }
          else
          {
            v9 = -1073741811;
            v52 = -1073741811;
          }
          if ( v43 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v29 + 448) + 8 * v30),
              1u);
            KeLeaveCriticalRegionThread(KeGetCurrentThread());
            return v52;
          }
        }
        else
        {
          return (unsigned int)-1073741816;
        }
        return (unsigned int)v9;
      case 0x200u:
        Object[0] = (PVOID)a1;
        v48 = 0LL;
        if ( (_DWORD)a3 == 40 )
        {
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            v45 = a4;
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v45 + 40 > 0x7FFFFFFF0000LL || v45 + 40 < v45 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v46 = *(_DWORD *)(v45 + 24);
            if ( (int)a2 < 0 )
            {
              LODWORD(v48) = *(_DWORD *)(v45 + 32);
              v46 |= 0x80u;
            }
            else
            {
              v48 = *(_QWORD *)(v45 + 32);
            }
            v19 = *(unsigned int *)(v45 + 28);
            v47 = v19;
            if ( (unsigned int)v19 <= 0x10000 )
            {
              if ( (_DWORD)v19 && (v48 + v19 > 0x7FFFFFFF0000LL || v48 + v19 < v48) )
                MEMORY[0x7FFFFFFF0000] = 0;
              HIDWORD(Object[0]) = v19;
              return EtwpTraceMessageVa(
                       (unsigned __int64)Object[0],
                       v46 | 0x40u,
                       (LONG *)(v45 + 8),
                       *(_WORD *)(v45 + 4),
                       v48,
                       1u);
            }
            v9 = -1073741811;
            v52 = -1073741811;
            return (unsigned int)v9;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x100u:
        return (unsigned int)EtwTraceEvent(
                               a1,
                               a4,
                               48LL,
                               (((int)a2 >> 31) & 0xFFF60000) - 1072431104,
                               KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v36 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2, a3, a4) + 864);
        v37 = 0;
        if ( v35 != 0xFFFF )
          v37 = v35;
        if ( v37 < *(_DWORD *)(v36 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return 3221225621LL;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = a4 + v5 + 32;
            if ( v38 > 0x7FFFFFFF0000LL || v38 < a4 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v63 = a4 + 32;
            v51 = *(_WORD *)(a4 + 6);
            Object[0] = (PVOID)(a4 + 32);
            Object[1] = (PVOID)(unsigned int)v5;
            EtwpLogSystemEventUnsafe(
              v36,
              (unsigned int)Object,
              (unsigned int)KeGetCurrentThread(),
              v37,
              1,
              v51,
              v6 & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x500u:
        v21 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, KeGetCurrentThread()[1].CycleTime, a3, a4) + 864);
        if ( *(_DWORD *)(v21 + 4072) == v22 )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v20 + 120) > 0x7FFFFFFF0000LL || v20 + 120 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          return (unsigned int)EtwpWriteUserEvent(
                                 (int)v21 + 24,
                                 *(unsigned __int8 *)(v21 + 4064),
                                 0,
                                 0,
                                 *(_DWORD *)(v20 + 112),
                                 a4,
                                 0LL,
                                 *(_BYTE *)(a4 + 44),
                                 *(_QWORD *)(a4 + 48),
                                 *(_DWORD *)(v20 + 84),
                                 *(_QWORD *)(v20 + 88),
                                 0LL,
                                 0LL,
                                 0,
                                 0LL,
                                 0LL);
        }
        return 3221225506LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return (unsigned int)EtwTraceEvent(
                             a1,
                             a4,
                             72LL,
                             (((int)a2 >> 31) & 0xFFF60000) - 1072365568,
                             KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
    {
      if ( (_DWORD)a2 == 2304 && (_DWORD)a3 && a4 )
        return (unsigned int)EtwTraceRaw(a1, a4, (unsigned int)a3, (unsigned __int8)KeGetCurrentThread()->PreviousMode);
      return 3221225485LL;
    }
    return (unsigned int)-1073741811;
  }
  *(_OWORD *)Object = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v59 = *(_QWORD *)(a4 + 88);
  v53 = *(_DWORD *)(a4 + 84);
  v54 = *(_DWORD *)(a4 + 112);
  v60 = *(_QWORD *)(a4 + 48);
  v44 = *(_BYTE *)(a4 + 44);
  *(_OWORD *)Object = *(_OWORD *)a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, 0x7FFFFFFF0000LL, a3, a4);
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(CurrentServerSiloGlobals + 864), Object, 0LL);
  v25 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      if ( v9 >= 0 )
      {
        v43 = 0;
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v25 + 408, 0LL);
        *(_QWORD *)(v25 + 416) = KeGetCurrentThread();
        LOBYTE(v27) = 1;
        EtwpUpdateEnableMask(v25, 0, 0, v27, (__int64)&v43);
        *(_QWORD *)(v25 + 416) = 0LL;
        ExReleasePushLockEx(v25 + 408, 0LL);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        v9 = EtwpWriteUserEvent(v25, v43, v6 < 0, 0, v54, a4, 0LL, v44, v60, v53, v59, 0LL, 0LL, 0, 0LL, 0LL);
        if ( *(_QWORD *)(v25 + 400) )
        {
          v43 = 0;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v25 + 408, 0LL);
          *(_QWORD *)(v25 + 416) = KeGetCurrentThread();
          LOBYTE(v41) = 1;
          EtwpUpdateEnableMask(*(_QWORD *)(v25 + 400), 0, 1, v41, (__int64)&v43);
          *(_QWORD *)(v25 + 416) = 0LL;
          ExReleasePushLockEx(v25 + 408, 0LL);
          KeLeaveCriticalRegionThread(KeGetCurrentThread());
          v9 = EtwpWriteUserEvent(
                 *(_QWORD *)(v25 + 400),
                 v43,
                 (unsigned int)v6 >> 31,
                 0,
                 v54,
                 a4,
                 0LL,
                 v44,
                 v60,
                 v53,
                 v59,
                 0LL,
                 0LL,
                 0,
                 0LL,
                 0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v25);
      return (unsigned int)v9;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return 3221226242LL;
}
