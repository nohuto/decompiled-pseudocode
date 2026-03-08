/*
 * XREFs of NtQueryInformationThread @ 0x1406A7BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryValuesThread @ 0x14022B320 (KeQueryValuesThread.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x14028A290 (PsGetPagePriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsGetEffectiveContainerId @ 0x1402D4BE0 (PsGetEffectiveContainerId.c)
 *     KeQueryBasePriorityThread @ 0x1402DD398 (KeQueryBasePriorityThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402E03D0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     KeQueryUserAffinityThread @ 0x140301774 (KeQueryUserAffinityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsGetWorkOnBehalfThread @ 0x14033E134 (PsGetWorkOnBehalfThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B1960 (xKdEnumerateDebuggingDevices.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403C91E4 (KeSetIdealProcessorThreadByNumber.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14056C830 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x14056C854 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x140572C98 (KeQueryCpuSetsThread.c)
 *     PsQueryThreadStartAddress @ 0x1405A1A94 (PsQueryThreadStartAddress.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x140797F00 (PsGetThreadExitStatus.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     VslGetSecureTebAddress @ 0x14093F5CC (VslGetSecureTebAddress.c)
 *     PspGetThreadPpmPolicy @ 0x1409AB4B8 (PspGetThreadPpmPolicy.c)
 *     PspQueryLastCallThread @ 0x1409AC330 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryInformationThread(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __m128i *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int8 PreviousMode; // dl
  int v12; // r13d
  struct _PROCESSOR_NUMBER v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax
  __int32 v16; // ebx
  char *v17; // rdi
  __m128i v18; // xmm6
  __int64 v19; // rax
  _WORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  int ContextThread; // edi
  PVOID v25; // rcx
  PVOID v26; // r8
  __int32 PagePriorityThread; // eax
  PVOID v28; // rcx
  PVOID WorkOnBehalfThread; // rcx
  PVOID v30; // r9
  __int32 IoPriorityThread; // eax
  void *v32; // rcx
  unsigned int v33; // edi
  unsigned __int16 *v34; // r14
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdi
  int v38; // ebx
  int v39; // ebx
  PVOID v40; // rdi
  ULONG_PTR v41; // r13
  unsigned __int64 v42; // rcx
  __int32 *v43; // r14
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  PVOID v46; // r12
  PVOID v47; // rcx
  PVOID v48; // rbx
  int v49; // r12d
  unsigned int v50; // ebx
  unsigned int v51; // r14d
  unsigned int *v52; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v54; // rcx
  PVOID v55; // rdi
  char v56; // di
  signed __int64 *v57; // r13
  signed __int64 v58; // rax
  const WCHAR *v59; // rdx
  unsigned __int16 v60; // ax
  unsigned int v61; // ecx
  __int16 v62; // ax
  __int64 v63; // rsi
  int v64; // edi
  int ThreadPpmPolicy; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  PVOID Object; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v70; // [rsp+48h] [rbp-3C0h]
  char v71; // [rsp+49h] [rbp-3BFh]
  char v72; // [rsp+4Ah] [rbp-3BEh]
  int v73; // [rsp+4Ch] [rbp-3BCh]
  __int16 v74; // [rsp+54h] [rbp-3B4h]
  struct _PROCESSOR_NUMBER v75[6]; // [rsp+58h] [rbp-3B0h] BYREF
  _WORD *v76; // [rsp+70h] [rbp-398h]
  int v77; // [rsp+78h] [rbp-390h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+80h] [rbp-388h]
  unsigned int *v79; // [rsp+88h] [rbp-380h]
  unsigned __int64 CycleTimeStamp; // [rsp+90h] [rbp-378h] BYREF
  unsigned int v81; // [rsp+98h] [rbp-370h]
  ULONG_PTR v82; // [rsp+A0h] [rbp-368h]
  __m128i v83; // [rsp+A8h] [rbp-360h] BYREF
  __m128i v84; // [rsp+B8h] [rbp-350h] BYREF
  _OWORD v85[2]; // [rsp+C8h] [rbp-340h] BYREF
  __m128i v86; // [rsp+E8h] [rbp-320h]
  unsigned int v87; // [rsp+F8h] [rbp-310h]
  __int64 v88[5]; // [rsp+100h] [rbp-308h] BYREF
  _OWORD v89[2]; // [rsp+130h] [rbp-2D8h] BYREF
  __m128i v90; // [rsp+150h] [rbp-2B8h] BYREF
  int v91; // [rsp+160h] [rbp-2A8h]
  __m128i v92[3]; // [rsp+168h] [rbp-2A0h] BYREF
  _DWORD v93[68]; // [rsp+1A0h] [rbp-268h] BYREF
  _QWORD Src[32]; // [rsp+2B0h] [rbp-158h] BYREF

  v5 = a4;
  v82 = BugCheckParameter1;
  v79 = a5;
  DWORD1(v85[0]) = 0;
  v9 = 0LL;
  v88[0] = 0LL;
  v90 = 0LL;
  v91 = 0;
  v83 = 0LL;
  memset(v92, 0, sizeof(v92));
  memset(&v75[2], 0, 12);
  Object = 0LL;
  memset(&v93[2], 0, 0x100uLL);
  CycleTimeStamp = 0LL;
  memset(v89, 0, sizeof(v89));
  CurrentThread = KeGetCurrentThread();
  v76 = CurrentThread;
  RunRef = (PEX_RUNDOWN_REF)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v70 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = 1;
    if ( a2 == 38 )
    {
      v13 = (struct _PROCESSOR_NUMBER)8;
    }
    else if ( (unsigned int)v5 >= 4 || a2 == 49 )
    {
      v13 = (struct _PROCESSOR_NUMBER)4;
    }
    else
    {
      v13 = (struct _PROCESSOR_NUMBER)1;
    }
    v75[1] = v13;
    if ( (_DWORD)v5 )
    {
      if ( ((*(_DWORD *)&v13 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a3->m128i_u64 + v5 > 0x7FFFFFFF0000LL || &a3->m128i_i8[v5] < (__int8 *)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a5 )
    {
      v14 = (__int64)a5;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    PreviousMode = v70;
  }
  else
  {
    v12 = 1;
  }
  DWORD1(v85[0]) = 0;
  v85[1] = 0LL;
  v86 = 0uLL;
  if ( a2 == 25 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v16;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      }
      return result;
    }
    return 3221225476LL;
  }
  if ( a2 != 23 )
  {
    switch ( a2 )
    {
      case 0:
        if ( (_DWORD)v5 != 48 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v17 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v85[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v85[0]) = 259;
        *((_QWORD *)&v85[0] + 1) = *((_QWORD *)v17 + 30);
        if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v17, (char *)v85 + 8);
        v18 = *(__m128i *)(v17 + 1224);
        v19 = *((unsigned __int16 *)v17 + 280);
        v20 = (_WORD *)*((_QWORD *)v17 + 69);
        if ( (unsigned __int16)v19 < *v20 )
          v9 = *(_QWORD *)&v20[4 * v19 + 4];
        v86.m128i_i64[0] = v9;
        v86.m128i_i32[2] = v17[195];
        v86.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *a3 = (__m128i)v85[0];
        a3[1] = v18;
        a3[2] = v86;
        if ( a5 )
          *a5 = 48;
        return 0LL;
      case 1:
        if ( (_DWORD)v5 != 32 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v21 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v22 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v23 = *((_QWORD *)Object + 144);
        if ( *((_BYTE *)Object + 4) )
          v9 = *((_QWORD *)Object + 145);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i64[0] = v23;
        a3->m128i_i64[1] = v9;
        a3[1].m128i_i64[0] = v21;
        a3[1].m128i_i64[1] = v22;
        if ( a5 )
          *a5 = 32;
        return 0LL;
      case 6:
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v36 = xKdEnumerateDebuggingDevices();
        goto LABEL_124;
      case 9:
        if ( (_DWORD)v5 != 8 )
          return 3221225476LL;
        LODWORD(v9) = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)v9 >= 0 )
        {
          v37 = *((_QWORD *)Object + 164);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          a3->m128i_i64[0] = v37;
          if ( a5 )
            *a5 = 8;
        }
        return (unsigned int)v9;
      case 11:
        if ( (_DWORD)v5 != 8 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( ContextThread >= 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          a3->m128i_i64[0] = 0LL;
          if ( a5 )
            *a5 = 8;
        }
        return (unsigned int)ContextThread;
      case 12:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        if ( LODWORD(CurrentThread->Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
          v12 = 0;
        a3->m128i_i32[0] = v12;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 14:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( ContextThread >= 0 )
        {
          v38 = (*((_DWORD *)Object + 30) >> 3) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          a3->m128i_i32[0] = v38;
          if ( a5 )
            *a5 = 4;
        }
        return (unsigned int)ContextThread;
      case 16:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        LOBYTE(v9) = *((_QWORD *)Object + 160) != (_QWORD)Object + 1280;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v9;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 17:
        if ( (_DWORD)v5 != 1 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v28 = Object;
        a3->m128i_i8[0] = (*((_DWORD *)Object + 344) & 4) != 0;
        if ( a5 )
          *a5 = 1;
        goto LABEL_71;
      case 18:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v39 = (*((_DWORD *)Object + 344) >> 5) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v39;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 20:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 344) & 1) == 0 )
          v12 = 0;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v12;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 21:
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v36 = PspQueryLastCallThread(Object, a3, (unsigned int)v5, a5);
LABEL_124:
        LODWORD(v9) = v36;
        goto LABEL_125;
      case 22:
      case 54:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        v73 = result;
        if ( (int)result < 0 )
          return result;
        v30 = Object;
        if ( a2 == 22 )
          IoPriorityThread = (*((_DWORD *)Object + 344) >> 9) & 7;
        else
          IoPriorityThread = PsGetIoPriorityThread((__int64)Object);
        a3->m128i_i32[0] = IoPriorityThread;
        if ( a5 )
          *a5 = 4;
        ObfDereferenceObjectWithTag(v30, 0x79517350u);
        return (unsigned int)v9;
      case 24:
      case 55:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v26 = Object;
        if ( a2 == 24 )
          PagePriorityThread = (*((_DWORD *)Object + 344) >> 12) & 7;
        else
          PagePriorityThread = PsGetPagePriorityThread((__int64)Object);
        a3->m128i_i32[0] = PagePriorityThread;
        if ( a5 )
          *a5 = 4;
        goto LABEL_70;
      case 26:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( PreviousMode )
        {
          v92[0] = *a3;
          ProbeForWrite((volatile void *)v92[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v92[0], 8).m128i_u64[0]), 1u);
          a3 = v92;
        }
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v73 = result;
        if ( (int)result < 0 )
          return result;
        v40 = Object;
        if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 3221225480LL;
        }
        else
        {
          v41 = *((_QWORD *)Object + 68);
          v42 = 6224LL;
          if ( *(_QWORD *)(v41 + 1408) )
          {
            v42 = 12312LL;
            if ( *(_WORD *)(v41 + 2412) == 0x8664 )
              v42 = 14416LL;
          }
          v43 = &a3->m128i_i32[3];
          CycleTimeStamp = (unsigned __int64)&a3->m128i_u64[1] + 4;
          v44 = a3->m128i_u32[3];
          if ( (_DWORD)v44 && (v45 = a3->m128i_u32[2], v45 < v42) && v44 <= v42 - v45 )
          {
            RunRef = (PEX_RUNDOWN_REF)((char *)Object + 1352);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 169) )
            {
              v46 = Object;
              if ( (_KPROCESS *)v41 == KeGetCurrentThread()->ApcState.Process )
              {
                memmove(
                  (void *)a3->m128i_i64[0],
                  (const void *)(*((_QWORD *)Object + 30) + a3->m128i_u32[2]),
                  (unsigned int)*v43);
                ContextThread = v73;
              }
              else
              {
                ContextThread = MiCopyVirtualMemory(v41, (unsigned int)*v43, v70, (__int64)v88, 0);
              }
              ExReleaseRundownProtection_0(RunRef);
              ObfDereferenceObjectWithTag(v46, 0x79517350u);
              if ( ContextThread >= 0 )
              {
                if ( a5 )
                  *a5 = *v43;
                ContextThread = 0;
                v73 = 0;
              }
              return (unsigned int)ContextThread;
            }
            else
            {
              ObfDereferenceObjectWithTag(v40, 0x79517350u);
              return 3221225547LL;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return 3221225485LL;
          }
        }
      case 29:
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        ContextThread = PspWow64GetContextThread(Object, a3, (unsigned int)v5, v70);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ContextThread >= 0 && a5 )
          *a5 = 716;
        return (unsigned int)ContextThread;
      case 30:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v33 = result;
        if ( (int)result >= 0 )
        {
          v93[0] = 2097153;
          memset(&v93[1], 0, 0x104uLL);
          v34 = (unsigned __int16 *)Object;
          KeQueryUserAffinityThread((__int64)Object, (__int64)v93);
          v35 = v34[280];
          v83.m128i_i16[4] = v35;
          if ( (unsigned __int16)v35 < LOWORD(v93[0]) )
            v9 = *(_QWORD *)&v93[2 * v35 + 2];
          v83.m128i_i64[0] = v9;
          *a3 = v83;
          if ( a5 )
            *a5 = 16;
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return v33;
        }
        return result;
      case 32:
        if ( (_DWORD)v5 != 1 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v47 = Object;
        a3->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
        ObfDereferenceObjectWithTag(v47, 0x79517350u);
        if ( a5 )
          *a5 = 1;
        return (unsigned int)v9;
      case 33:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        v75[0] = (struct _PROCESSOR_NUMBER)0x400000;
        KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, v75, v75);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(struct _PROCESSOR_NUMBER *)a3->m128i_i8 = v75[0];
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 34:
        if ( !(_DWORD)v5 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v73 = result;
        if ( (int)result < 0 )
          return result;
        a3->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
        if ( a5 )
          *a5 = 1;
        LODWORD(v9) = v73;
        goto LABEL_125;
      case 35:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v26 = Object;
        a3->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
        if ( a5 )
          *a5 = 4;
        goto LABEL_70;
      case 36:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( ContextThread < 0 )
          return (unsigned int)ContextThread;
        v48 = Object;
        a3->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
        if ( a5 )
          *a5 = 4;
        v25 = v48;
        goto LABEL_61;
      case 37:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( BugCheckParameter1 != -2LL )
          return 3221225485LL;
        result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v90);
        if ( (int)result >= 0 )
        {
          *a3 = v90;
          if ( a5 )
            *a5 = 16;
        }
        return result;
      case 38:
        v72 = 0;
        v56 = 0;
        v71 = 0;
        v49 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v73 = v49;
        if ( v49 < 0 )
        {
          v57 = (signed __int64 *)Object;
          v63 = (__int64)v76;
        }
        else
        {
          v72 = 1;
          --v76[242];
          v57 = (signed __int64 *)Object;
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
          v56 = 1;
          v71 = 1;
          v58 = v57[204];
          if ( v58 )
          {
            v59 = *(const WCHAR **)(v58 + 8);
            v60 = *(_WORD *)v58;
            v74 = v60;
          }
          else
          {
            v59 = &word_1408834C0;
            v60 = 0;
            v74 = 0;
          }
          v88[2] = (__int64)v59;
          v61 = v60 + 16;
          LODWORD(v79) = v61;
          v87 = v61;
          if ( v61 <= (unsigned int)v5 )
          {
            memmove(&a3[1], v59, v60);
            v62 = v74;
            a3->m128i_i16[0] = v74;
            a3->m128i_i16[1] = v62;
            a3->m128i_i64[1] = (__int64)a3[1].m128i_i64;
            v61 = (unsigned int)v79;
            v56 = v71;
          }
          else
          {
            v49 = -1073741789;
            v73 = -1073741789;
          }
          if ( a5 )
            *a5 = v61;
          v63 = (__int64)v76;
        }
        if ( v56 )
        {
          if ( _InterlockedCompareExchange64(v57 + 170, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v57 + 170);
          KeAbPostRelease((ULONG_PTR)(v57 + 170));
          KeLeaveCriticalRegionThread(v63);
          v49 = v73;
          v57 = (signed __int64 *)Object;
        }
        if ( v72 )
          ObfDereferenceObjectWithTag(v57, 0x79517350u);
        return (unsigned int)v49;
      case 39:
        if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
          return 3221225476LL;
        v49 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v73 = v49;
        if ( v49 >= 0 )
        {
          v50 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v81 = v50;
          if ( a5 )
            *a5 = v50;
          if ( v50 >= (unsigned int)v5 )
            v50 = v5;
          v81 = v50;
          memmove(a3, Src, v50);
        }
        return (unsigned int)v49;
      case 40:
        if ( (_DWORD)v5 != 80 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v51 = result;
        if ( (int)result >= 0 )
        {
          v52 = (unsigned int *)Object;
          KeQueryValuesThread((__int64)Object, (__int64)v89);
          ThreadStartAddress = PsQueryThreadStartAddress((__int64)v52, 1);
          if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
            ThreadStartAddress = 0LL;
          a3[4].m128i_i32[1] = BYTE8(v89[0]);
          a3[4].m128i_i32[2] = BYTE9(v89[0]);
          a3[3].m128i_i32[3] = SBYTE11(v89[0]);
          a3[3].m128i_i32[2] = SBYTE10(v89[0]);
          a3[1].m128i_i32[2] = v89[0];
          v54 = (unsigned int)KeMaximumIncrement;
          a3->m128i_i64[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)v52[163];
          a3->m128i_i64[1] = v54 * v52[183];
          a3[1].m128i_i64[0] = *((_QWORD *)v52 + 144);
          a3[4].m128i_i32[0] = v52[85];
          *(__m128i *)((char *)a3 + 40) = *(__m128i *)(v52 + 306);
          a3[2].m128i_i64[0] = ThreadStartAddress;
          if ( a5 )
            *a5 = 80;
          ObfDereferenceObjectWithTag(v52, 0x79517350u);
          return v51;
        }
        return result;
      case 41:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v55 = Object;
        KeQueryPrimaryGroupAffinityThread((__int64)Object, (__int64)&v83);
        *a3 = v83;
        if ( a5 )
          *a5 = 16;
        v28 = v55;
        goto LABEL_71;
      case 42:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        ContextThread = result;
        if ( (int)result < 0 )
          return result;
        v25 = Object;
        a3->m128i_i32[0] = (*((_DWORD *)Object + 344) & 0x40000) != 0;
        if ( a5 )
          *a5 = 4;
        goto LABEL_61;
      case 43:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        v73 = result;
        if ( (int)result < 0 )
          return result;
        a3->m128i_i32[0] = (*((_DWORD *)Object + 344) >> 19) & 1;
        if ( a5 )
          *a5 = 4;
        LODWORD(v9) = v73;
LABEL_125:
        v28 = Object;
        goto LABEL_71;
      case 44:
        v77 = 0;
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( BugCheckParameter1 != -2LL )
          return 3221225485LL;
        v84 = 0LL;
        WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v77);
        if ( WorkOnBehalfThread )
        {
          PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v84);
          if ( v77 )
            ObfDereferenceObject(v32);
        }
        else
        {
          PsEncodeThreadWorkOnBehalfTicket((__int64)v76, &v84);
          v84.m128i_i32[2] |= 1u;
        }
        *a3 = v84;
        if ( a5 )
          *a5 = 16;
        return 0LL;
      case 45:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        ContextThread = result;
        if ( (int)result < 0 )
          return result;
        v25 = Object;
        if ( *((_QWORD *)Object + 198) )
          LODWORD(v9) = qword_140C37D70;
        a3->m128i_i32[0] = v9;
        if ( a5 )
          *a5 = 4;
LABEL_61:
        ObfDereferenceObjectWithTag(v25, 0x79517350u);
        return (unsigned int)ContextThread;
      case 49:
        if ( (unsigned int)v5 < 4 )
        {
          if ( a5 )
            *a5 = 12;
          return 3221225476LL;
        }
        *(_QWORD *)&v75[2].Group = a3->m128i_i64[0];
        v64 = a3->m128i_i32[2];
        if ( *(_DWORD *)&v75[2] != 1 )
          return 3221225485LL;
        if ( a5 )
          *a5 = 12;
        if ( (_DWORD)v5 != 12 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        ThreadPpmPolicy = PspGetThreadPpmPolicy(Object);
        if ( ThreadPpmPolicy && (v66 = ThreadPpmPolicy - 1) != 0 && (v67 = v66 - 1) != 0 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            if ( v68 == 5 )
            {
              v75[3] = (struct _PROCESSOR_NUMBER)1;
              v64 = 1;
              v75[4] = (struct _PROCESSOR_NUMBER)1;
            }
LABEL_278:
            a3->m128i_i64[0] = *(_QWORD *)&v75[2].Group;
            a3->m128i_i32[2] = v64;
            v73 = 0;
LABEL_70:
            v28 = v26;
            goto LABEL_71;
          }
          *(_QWORD *)&v75[3].Group = 1LL;
        }
        else
        {
          *(_QWORD *)&v75[3].Group = 0LL;
        }
        v64 = 0;
        goto LABEL_278;
      default:
        return 3221225475LL;
    }
  }
  if ( (_DWORD)v5 != 16 )
    return 3221225476LL;
  if ( BugCheckParameter1 == -2LL )
  {
    Object = CurrentThread;
LABEL_25:
    a3->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
    a3->m128i_i64[1] = CycleTimeStamp;
    if ( a5 )
      *a5 = 16;
    if ( BugCheckParameter1 == -2LL )
      return (unsigned int)v9;
    v28 = v76;
LABEL_71:
    ObfDereferenceObjectWithTag(v28, 0x79517350u);
    return (unsigned int)v9;
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  LODWORD(v9) = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = (struct _KTHREAD *)Object;
    v76 = Object;
    goto LABEL_25;
  }
  return result;
}
