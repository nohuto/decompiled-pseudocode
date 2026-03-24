/*
 * XREFs of NtTraceEvent @ 0x14025C4C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwpTraceMessageVa @ 0x14025CDC0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x14025D3F8 (EtwpOpenLogger.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x1403799A8 (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A993C (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x1405A5FE0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6488 (EtwTraceRaw.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405EB9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     EtwpUpdateEnableMask @ 0x1406BBD78 (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x1406BC938 (EtwpAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     EtwpSetMark @ 0x14093742C (EtwpSetMark.c)
 */

__int64 __fastcall NtTraceEvent(unsigned __int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // r15
  unsigned __int16 v7; // r14
  unsigned int v8; // eax
  int v9; // r13d
  NTSTATUS v10; // r15d
  unsigned __int8 *v11; // r14
  unsigned __int64 v12; // rcx
  PVOID v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // edx
  int v18; // edx
  __int64 v20; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  __int64 v22; // r10
  __int64 v23; // rsi
  unsigned int v24; // edi
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rax
  int v32; // r9d
  unsigned int v33; // edi
  int v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  unsigned __int64 v38; // rax
  unsigned int v39; // ebx
  __int64 CurrentServerSiloGlobals; // rax
  __int64 v41; // rdx
  struct _KTHREAD *v42; // rax
  int v43; // r9d
  int v44; // edx
  unsigned __int8 v45; // [rsp+80h] [rbp-138h] BYREF
  unsigned __int8 v46; // [rsp+81h] [rbp-137h] BYREF
  char v47; // [rsp+82h] [rbp-136h]
  unsigned __int64 v48; // [rsp+88h] [rbp-130h]
  int v49; // [rsp+90h] [rbp-128h]
  int v50; // [rsp+94h] [rbp-124h]
  unsigned __int64 v51; // [rsp+98h] [rbp-120h]
  unsigned __int8 v53; // [rsp+A2h] [rbp-116h]
  __int16 v54; // [rsp+A4h] [rbp-114h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-110h]
  int v56; // [rsp+B0h] [rbp-108h]
  int v57; // [rsp+B4h] [rbp-104h]
  __int64 v58; // [rsp+B8h] [rbp-100h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-F8h]
  PVOID Object; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-E0h]
  __int64 v63; // [rsp+E0h] [rbp-D8h]
  int v64; // [rsp+F0h] [rbp-C8h]
  int v65; // [rsp+F4h] [rbp-C4h]
  int v66; // [rsp+F8h] [rbp-C0h]
  unsigned __int64 v67; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+118h] [rbp-A0h]
  __int64 v69; // [rsp+120h] [rbp-98h]
  struct _KTHREAD *v70; // [rsp+128h] [rbp-90h]
  unsigned __int64 v71; // [rsp+130h] [rbp-88h] BYREF
  int v72; // [rsp+138h] [rbp-80h]
  int v73; // [rsp+13Ch] [rbp-7Ch]
  __int128 v74; // [rsp+140h] [rbp-78h] BYREF
  __int128 v75; // [rsp+150h] [rbp-68h] BYREF
  __int128 v76; // [rsp+160h] [rbp-58h]

  v5 = a3;
  v7 = a1;
  v8 = a2 & 0xFF00;
  switch ( v8 )
  {
    case 0x300u:
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v51 = *(_QWORD *)(a4 + 88);
      v68 = v51;
      LODWORD(v48) = *(_DWORD *)(a4 + 84);
      v66 = v48;
      v9 = *(unsigned __int16 *)(a4 + 82);
      v69 = *(unsigned __int16 *)(a4 + 82);
      v50 = *(_DWORD *)(a4 + 112);
      v65 = v50;
      CurrentThread = *(struct _KTHREAD **)(a4 + 48);
      v70 = CurrentThread;
      v45 = *(_BYTE *)(a4 + 44);
      v53 = v45;
      v58 = 0LL;
      if ( *(_BYTE *)(a4 + 80) )
        v58 = a4 + 96;
      Object = 0LL;
      v10 = ObReferenceObjectByHandle((HANDLE)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v10 >= 0 )
      {
        v61 = 0LL;
        v11 = (unsigned __int8 *)Object;
        v12 = *((_QWORD *)Object + 4);
        v55 = v12;
        v13 = (PVOID)*((_QWORD *)Object + 5);
        Object = v13;
        v14 = (unsigned int)a2 >> 31;
        v75 = 0LL;
        v76 = 0LL;
        v15 = *((_QWORD *)v11 + 13);
        v16 = v15 + 28;
        if ( !v15 )
          v16 = 0LL;
        v17 = v11[100];
        if ( (_BYTE)v17 )
        {
          v10 = EtwpWriteUserEvent(
                  v12,
                  v17,
                  (unsigned __int16)v14,
                  v9,
                  v50,
                  a4,
                  v58,
                  v45,
                  (__int64)CurrentThread,
                  v48,
                  v51,
                  (__int64)&v75,
                  0LL,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v61);
          v12 = v55;
          v13 = Object;
        }
        v18 = v11[101];
        if ( (_BYTE)v18 )
        {
          v10 = EtwpWriteUserEvent(
                  v12,
                  v18,
                  (unsigned __int16)v14,
                  v9,
                  v50,
                  a4,
                  v58,
                  v45,
                  (__int64)CurrentThread,
                  v48,
                  v51,
                  (__int64)&v75,
                  (__int64)v13,
                  *((_WORD *)v11 + 49),
                  v16,
                  (__int64)&v61);
          v12 = v55;
        }
        if ( *(_QWORD *)(v12 + 400) )
        {
          v75 = 0LL;
          v76 = 0LL;
          v34 = v11[102];
          if ( (_BYTE)v34 )
          {
            v10 = EtwpWriteUserEvent(
                    *(_QWORD *)(v12 + 400),
                    v34,
                    (unsigned __int16)v14,
                    0,
                    v50,
                    a4,
                    v58,
                    v45,
                    (__int64)CurrentThread,
                    v48,
                    v51,
                    (__int64)&v75,
                    0LL,
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v61);
            v12 = v55;
          }
          v44 = v11[103];
          if ( (_BYTE)v44 )
            v10 = EtwpWriteUserEvent(
                    *(_QWORD *)(v12 + 400),
                    v44,
                    (unsigned __int16)v14,
                    0,
                    v50,
                    a4,
                    v58,
                    v45,
                    (__int64)CurrentThread,
                    v48,
                    v51,
                    (__int64)&v75,
                    *((_QWORD *)Object + 50),
                    *((_WORD *)v11 + 49),
                    v16,
                    (__int64)&v61);
        }
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      }
      return (unsigned int)v10;
    case 0x200u:
      v55 = a1;
      v51 = 0LL;
      if ( a3 == 40 )
      {
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          v48 = a4;
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v48 + 40 > 0x7FFFFFFF0000LL || v48 + 40 < v48 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v49 = *(_DWORD *)(v48 + 24);
          if ( a2 < 0 )
          {
            LODWORD(v51) = *(_DWORD *)(v48 + 32);
            v49 |= 0x80u;
          }
          else
          {
            v51 = *(_QWORD *)(v48 + 32);
          }
          v20 = *(unsigned int *)(v48 + 28);
          v50 = v20;
          if ( (unsigned int)v20 <= 0x10000 )
          {
            if ( (_DWORD)v20 && (v51 + v20 > 0x7FFFFFFF0000LL || v51 + v20 < v51) )
              MEMORY[0x7FFFFFFF0000] = 0;
            HIDWORD(v55) = v20;
            return EtwpTraceMessageVa(v55, v49 | 0x40u, (int)v48 + 8, *(unsigned __int16 *)(v48 + 4), v51, 1);
          }
          v10 = -1073741811;
          v64 = -1073741811;
          return (unsigned int)v10;
        }
        return 3221225659LL;
      }
      return 3221225485LL;
    case 0x600u:
      v46 = 0;
      v23 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
      v24 = v7;
      if ( v7 == 0xFFFF || !v7 )
        v24 = *(unsigned __int8 *)(v23 + 4208);
      if ( v24 < *(_DWORD *)(v23 + 16)
        && (v25 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10],
            (v26 = EtwpOpenLogger(v24, v23, v25, &v46)) != 0) )
      {
        if ( (*(_DWORD *)(v26 + 12) & 0x2000000) != 0 )
        {
          v41 = 32LL * *(unsigned __int8 *)(v26 + 834) + v23 + 4260;
          if ( v41 && (*(_DWORD *)(v41 + 4) & 0x28) != 0 )
            LOBYTE(v27) = 1;
          else
            v27 = 0;
          v10 = EtwpSetMark(v26, a4, v5, v27, v25);
        }
        else
        {
          v10 = -1073741811;
        }
        EtwpCloseLogger(v24, v23, v46);
      }
      else
      {
        return (unsigned int)-1073741816;
      }
      return (unsigned int)v10;
  }
  if ( v8 <= 0x600 )
  {
    switch ( v8 )
    {
      case 0x100u:
        return (unsigned int)EtwTraceEvent(
                               a1,
                               a4,
                               48LL,
                               ((a2 >> 31) & 0xFFF60000) - 1072431104,
                               KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v35 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v36 = v7;
        v37 = 0;
        if ( (_WORD)v36 != 0xFFFF )
          v37 = v36;
        if ( v37 < *(_DWORD *)(v35 + 16) )
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
            v67 = a4 + 32;
            v54 = *(_WORD *)(a4 + 6);
            v71 = a4 + 32;
            v72 = v5;
            v73 = 0;
            v39 = (unsigned int)KeGetCurrentThread();
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            EtwpLogSystemEventUnsafe(
              *(_QWORD *)(CurrentServerSiloGlobals + 864),
              (unsigned int)&v71,
              v39,
              v37,
              1,
              v54,
              a2 & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x500u:
        CycleTime = KeGetCurrentThread()[1].CycleTime;
        v22 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        if ( *(_DWORD *)(v22 + 4072) == (_DWORD)CycleTime )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 120 > 0x7FFFFFFF0000LL || a4 + 120 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          return (unsigned int)EtwpWriteUserEvent(
                                 (int)v22 + 24,
                                 *(unsigned __int8 *)(v22 + 4064),
                                 0,
                                 0,
                                 *(_DWORD *)(a4 + 112),
                                 a4,
                                 0LL,
                                 *(_BYTE *)(a4 + 44),
                                 *(_QWORD *)(a4 + 48),
                                 *(_DWORD *)(a4 + 84),
                                 *(_QWORD *)(a4 + 88),
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
  if ( v8 != 1792 )
  {
    if ( v8 == 2048 )
      return (unsigned int)EtwTraceEvent(
                             a1,
                             a4,
                             72LL,
                             ((a2 >> 31) & 0xFFF60000) - 1072365568,
                             KeGetCurrentThread()->PreviousMode);
    if ( v8 == 2304 )
    {
      if ( a2 == 2304 && a3 && a4 )
        return (unsigned int)EtwTraceRaw(
                               a1,
                               a4,
                               a3,
                               (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10]);
      return 3221225485LL;
    }
    return (unsigned int)-1073741811;
  }
  v74 = 0LL;
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
  v62 = *(_QWORD *)(a4 + 88);
  v56 = *(_DWORD *)(a4 + 84);
  v57 = *(_DWORD *)(a4 + 112);
  v63 = *(_QWORD *)(a4 + 48);
  v47 = *(_BYTE *)(a4 + 44);
  v74 = *(_OWORD *)a1;
  v28 = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v28 + 864), &v74, 0LL);
  v30 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u, 0LL);
      if ( v10 >= 0 )
      {
        v45 = 0;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
        *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
        LOBYTE(v32) = 1;
        EtwpUpdateEnableMask(v30, 0, 0, v32, (__int64)&v45);
        *(_QWORD *)(v30 + 416) = 0LL;
        ExReleasePushLockEx(v30 + 408, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v33 = (unsigned int)a2 >> 31;
        v10 = EtwpWriteUserEvent(
                v30,
                v45,
                (unsigned __int16)v33,
                0,
                v57,
                a4,
                0LL,
                v47,
                v63,
                v56,
                v62,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        if ( *(_QWORD *)(v30 + 400) )
        {
          v45 = 0;
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v30 + 408, 0LL);
          *(_QWORD *)(v30 + 416) = KeGetCurrentThread();
          LOBYTE(v43) = 1;
          EtwpUpdateEnableMask(*(_QWORD *)(v30 + 400), 0, 1, v43, (__int64)&v45);
          *(_QWORD *)(v30 + 416) = 0LL;
          ExReleasePushLockEx(v30 + 408, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v10 = EtwpWriteUserEvent(
                  *(_QWORD *)(v30 + 400),
                  v45,
                  (unsigned __int16)v33,
                  0,
                  v57,
                  a4,
                  0LL,
                  v47,
                  v63,
                  v56,
                  v62,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v30);
      return (unsigned int)v10;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return 3221226242LL;
}
