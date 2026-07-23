/*
 * XREFs of ExpGetProcessInformation @ 0x14063E980
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     SeSecurityAttributePresent @ 0x14024E430 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x14024EE40 (RtlQueryPackageIdentity.c)
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     KeQueryValuesThread @ 0x140253930 (KeQueryValuesThread.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     SmIsCompressionProcess @ 0x140304AD0 (SmIsCompressionProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     ExpCopyProcessInfo @ 0x140618E80 (ExpCopyProcessInfo.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406544B4 (SeQueryUserSidToken.c)
 *     ExIsRestrictedCaller @ 0x140686630 (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14068C184 (KeSynchronizeWithDynamicProcessors.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069DFCC (ExCheckFullProcessInformationAccess.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v6; // r13d
  bool v7; // cf
  unsigned int v8; // ebx
  unsigned __int8 v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  PEPROCESS v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r14
  char *v15; // r13
  signed __int64 *v16; // rsi
  struct _DMA_ADAPTER *v17; // rdi
  _QWORD *v18; // r15
  __int64 v19; // rdi
  PEPROCESS v20; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  bool v22; // cl
  int v23; // eax
  unsigned int v24; // eax
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  char v29; // cl
  int v30; // r12d
  unsigned __int64 *p_Blink; // rdi
  unsigned int v32; // r15d
  __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // rsi
  char *PoolWithTag; // rax
  void *v37; // rbx
  __int64 *v38; // rcx
  unsigned int v39; // r8d
  char *v40; // r14
  _WORD *v41; // r9
  _WORD *v42; // rdx
  unsigned __int64 v43; // rsi
  unsigned int v44; // ebx
  unsigned int v45; // eax
  int *v46; // rcx
  _QWORD *v47; // rbx
  struct _KTHREAD *v48; // rdi
  int v49; // r14d
  __int64 *k; // rsi
  __int64 v51; // rcx
  bool v52; // zf
  int SessionId; // ebx
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // r8
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r13
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v63; // r14
  unsigned __int64 *v64; // r15
  int v65; // r12d
  unsigned __int64 *i; // rbx
  unsigned int v67; // eax
  unsigned int v68; // ebx
  unsigned int v69; // r15d
  unsigned __int64 v70; // rax
  struct _KTHREAD *v71; // rsi
  PEPROCESS v72; // r14
  unsigned __int64 *v73; // r15
  int v74; // r12d
  unsigned __int64 *j; // rbx
  _LIST_ENTRY *v76; // rdi
  struct _DMA_ADAPTER *v77; // rsi
  ULONG_PTR v78; // r14
  ULONG_PTR v79; // r15
  size_t v80; // rcx
  unsigned int v81; // esi
  unsigned int v82; // eax
  unsigned int v83; // edx
  unsigned int v84; // ecx
  int v85; // eax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v87; // edx
  signed __int64 *p_Lock; // rbx
  __int64 result; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-658h] BYREF
  int v91; // [rsp+40h] [rbp-618h]
  unsigned int v92; // [rsp+44h] [rbp-614h]
  unsigned int v93; // [rsp+48h] [rbp-610h]
  NTSTATUS v94; // [rsp+4Ch] [rbp-60Ch]
  char v95; // [rsp+50h] [rbp-608h]
  PVOID Object; // [rsp+58h] [rbp-600h]
  int v97; // [rsp+60h] [rbp-5F8h]
  PEPROCESS Process; // [rsp+68h] [rbp-5F0h]
  bool v99; // [rsp+70h] [rbp-5E8h]
  bool v100; // [rsp+71h] [rbp-5E7h]
  int v101; // [rsp+74h] [rbp-5E4h]
  PVOID v102; // [rsp+78h] [rbp-5E0h]
  int v103; // [rsp+80h] [rbp-5D8h]
  int *v104; // [rsp+88h] [rbp-5D0h]
  char v105; // [rsp+90h] [rbp-5C8h]
  int v106; // [rsp+9Ch] [rbp-5BCh]
  char *v107; // [rsp+A0h] [rbp-5B8h]
  int *v108; // [rsp+B0h] [rbp-5A8h]
  size_t Size; // [rsp+B8h] [rbp-5A0h]
  unsigned int *v110; // [rsp+C0h] [rbp-598h]
  PVOID P; // [rsp+C8h] [rbp-590h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-588h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-580h] BYREF
  int v114; // [rsp+E0h] [rbp-578h]
  __int64 v115; // [rsp+E8h] [rbp-570h]
  __int64 *v116; // [rsp+F0h] [rbp-568h]
  _WORD *v117; // [rsp+F8h] [rbp-560h]
  char *v118; // [rsp+100h] [rbp-558h]
  __int64 *v119; // [rsp+108h] [rbp-550h]
  unsigned __int64 *v120; // [rsp+110h] [rbp-548h]
  unsigned __int64 *v121; // [rsp+118h] [rbp-540h]
  unsigned __int64 v122; // [rsp+120h] [rbp-538h]
  HANDLE Handle; // [rsp+128h] [rbp-530h] BYREF
  int *v124; // [rsp+130h] [rbp-528h]
  int v125; // [rsp+138h] [rbp-520h]
  int v126; // [rsp+140h] [rbp-518h]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4F0h]
  struct _KTHREAD *v128; // [rsp+180h] [rbp-4D8h]
  PEPROCESS v129; // [rsp+1C0h] [rbp-498h]
  _OWORD v130[2]; // [rsp+1D0h] [rbp-488h] BYREF
  struct _KTHREAD *v131; // [rsp+1F0h] [rbp-468h]
  struct _DMA_ADAPTER *v132; // [rsp+1F8h] [rbp-460h]
  struct _KTHREAD *v133; // [rsp+200h] [rbp-458h]
  struct _KTHREAD *v134; // [rsp+208h] [rbp-450h]
  _QWORD v135[14]; // [rsp+210h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+280h] [rbp-3D8h] BYREF
  _OWORD v137[27]; // [rsp+2D0h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+480h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+510h] [rbp-148h] BYREF

  v114 = a5;
  v124 = a1;
  v110 = a3;
  AppIdSize = 130LL;
  memset(v137, 0, sizeof(v137));
  v106 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  Process = 0LL;
  memset(v135, 0, 0x68uLL);
  v99 = 0;
  v102 = 0LL;
  memset(v130, 0, sizeof(v130));
  v93 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v105 = v114 != 5;
  v6 = 136;
  if ( v114 == 5 )
    v6 = 80;
  v101 = v6;
  v103 = v6;
  v108 = v124;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v95 = 0;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v9), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v9) )
      v95 = 1;
    v94 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo(v11, v10);
    v12 = (PEPROCESS)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v91 = v8;
    while ( 1 )
    {
LABEL_103:
      if ( !v12 )
      {
        if ( v91 >= 0 && v108 && (*v108 = 0, v94 < 0) )
        {
          v91 = v94;
        }
        else if ( v110 )
        {
          *v110 = v93;
        }
        goto LABEL_206;
      }
      if ( (v12[1].DirectoryTableBase & 0x400000000LL) != 0 )
      {
        if ( v12->Header.SignalState )
        {
          v85 = v12[1].ActiveProcessors.Bitmap[8];
          v12 = Process;
          Object = Process;
          if ( !v85 && Process->ThreadListHead.Flink == &Process->ThreadListHead )
            goto LABEL_82;
        }
      }
      if ( a4 && v12 == PsIdleProcess )
        goto LABEL_82;
      SessionId = MmGetSessionId((__int64)v12);
      v125 = SessionId;
      if ( a4 )
      {
        if ( SessionId != *a4 )
          goto LABEL_82;
      }
      if ( !PsIsProcessInSilo(v12, CurrentServerSilo) )
        goto LABEL_82;
      v54 = (__int64)v124 + v93;
      v104 = (int *)v54;
      v108 = (int *)v54;
      v97 = 624;
      v32 = v93 + 624;
      v92 = v93 + 624;
      if ( v93 + 624 < v93 )
      {
        v32 = -1;
        v92 = -1;
        v93 = -1;
        v30 = -1073741675;
      }
      else
      {
        v93 += 624;
        v30 = 0;
      }
      v94 = v30;
      if ( v30 < 0 )
      {
        v91 = v30;
LABEL_206:
        p_Blink = (unsigned __int64 *)v102;
        goto LABEL_269;
      }
      memset(v135, 0, 0x68uLL);
      if ( v32 > a2 )
      {
        v91 = -1073741820;
        if ( !v110 )
          goto LABEL_206;
        v59 = 0LL;
      }
      else
      {
        v58 = ExpCopyProcessInfo(v54, (__int64)v12, v105, v135);
        v30 = v58;
        v94 = v58;
        if ( v58 < 0 )
        {
          v91 = v58;
          goto LABEL_206;
        }
        v59 = 0LL;
        *(_QWORD *)v54 = 0LL;
        *(_DWORD *)(v54 + 100) = SessionId;
        *(_QWORD *)(v54 + 64) = 0LL;
        *(_DWORD *)(v54 + 56) = 0;
        if ( v12 == PsIdleProcess )
          *(_QWORD *)(v54 + 96) = 0LL;
        if ( v12 == (PEPROCESS)PsSecureSystemProcess )
        {
          v60 = qword_140C4E000 << 12;
          *(_QWORD *)(v54 + 144) = qword_140C4E000 << 12;
          *(_QWORD *)(v54 + 8) = v60;
        }
        if ( v30 < 0 )
        {
          v91 = v30;
          goto LABEL_206;
        }
      }
      v61 = v54 + 256;
      v107 = (char *)(v54 + 256);
      if ( v12 == PsIdleProcess )
      {
        Flink = v12->ThreadListHead.Flink;
        if ( Flink == &v12->ThreadListHead )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
          ((void (*)(void))KeSynchronizeWithDynamicProcessors)();
          v59 = 0LL;
        }
      }
      else
      {
        p_Blink = 0LL;
        v121 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v134 = CurrentThread;
        v63 = Process;
        v64 = &Process[1].ActiveProcessors.Bitmap[6];
        v65 = 0;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v63[1], 0LL);
        for ( i = (unsigned __int64 *)*v64; i != v64; i = (unsigned __int64 *)*i )
        {
          p_Blink = i - 157;
          v121 = i - 157;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 157)) )
          {
            v65 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v63[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v63[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v63[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v59 = 0LL;
        if ( !v65 )
        {
          p_Blink = 0LL;
          v121 = 0LL;
        }
        v12 = Process;
        Object = Process;
        v30 = v94;
        v32 = v93;
        v92 = v93;
        v54 = (__int64)v108;
        v104 = v108;
        v61 = (__int64)v107;
      }
      v102 = p_Blink;
      while ( p_Blink )
      {
        v126 = *((_DWORD *)p_Blink + 1);
        if ( (_BYTE)v126 )
        {
          v56 = 0LL;
        }
        else
        {
          v67 = v32 + v101;
          if ( v32 + v101 < v32 )
          {
            v67 = -1;
            v30 = -1073741675;
          }
          else
          {
            v30 = 0;
          }
          v93 = v67;
          v92 = v67;
          v68 = v67;
          v94 = v30;
          if ( v30 < 0 )
          {
            v91 = v30;
            goto LABEL_269;
          }
          v69 = v101;
          v97 += v101;
          if ( v67 > a2 )
          {
            v91 = -1073741820;
            if ( !v110 )
              goto LABEL_269;
            v56 = 0LL;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, v130, v56, v57);
            v59 = BYTE8(v130[0]);
            if ( BYTE8(v130[0]) == 4 )
            {
              v97 -= v69;
              v92 = v68 - v69;
              v93 = v68 - v69;
              v56 = 0LL;
            }
            else
            {
              *(_DWORD *)(v61 + 24) = v130[0];
              *(_DWORD *)(v61 + 68) = v59;
              *(_DWORD *)(v61 + 72) = BYTE9(v130[0]);
              *(_DWORD *)(v61 + 56) = SBYTE10(v130[0]);
              *(_DWORD *)(v61 + 60) = SBYTE11(v130[0]);
              *(_QWORD *)v61 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              *(_QWORD *)(v61 + 8) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              *(_QWORD *)(v61 + 16) = p_Blink[134];
              *(_DWORD *)(v61 + 64) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v61 + 40) = *(_OWORD *)(p_Blink + 143);
              v56 = 0LL;
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v59 = p_Blink[154];
              }
              else
              {
                if ( (p_Blink[163] & 8) != 0
                  || (v59 = *((_QWORD *)v102 + 138), _InterlockedOr(v90, 0), (p_Blink[163] & 8) != 0) )
                {
                  v59 = 0LL;
                }
                v12 = Process;
                Object = Process;
                v30 = v94;
                p_Blink = (unsigned __int64 *)v102;
                v92 = v93;
                v54 = (__int64)v108;
                v104 = v108;
                v61 = (__int64)v107;
              }
              v122 = v59;
              if ( v95 && v59 > 0x7FFFFFFEFFFFLL )
                *(_QWORD *)(v61 + 32) = 0LL;
              else
                *(_QWORD *)(v61 + 32) = v59;
              if ( v114 != 5 )
              {
                v59 = 0LL;
                if ( v95 )
                {
                  *(_QWORD *)(v61 + 80) = 0LL;
                  *(_QWORD *)(v61 + 88) = 0LL;
                }
                else
                {
                  *(_QWORD *)(v61 + 80) = p_Blink[7];
                  *(_QWORD *)(v61 + 88) = p_Blink[6];
                  v12 = Process;
                  Object = Process;
                  v30 = v94;
                  p_Blink = (unsigned __int64 *)v102;
                  v92 = v93;
                  v54 = (__int64)v108;
                  v104 = v108;
                  v61 = (__int64)v107;
                }
                v70 = p_Blink[154];
                v122 = v70;
                if ( v95 && (v55 = 0x7FFFFFFEFFFFLL, v70 > 0x7FFFFFFEFFFFLL) )
                  *(_QWORD *)(v61 + 96) = 0LL;
                else
                  *(_QWORD *)(v61 + 96) = v70;
                *(_QWORD *)(v61 + 104) = p_Blink[30];
                *(_QWORD *)(v61 + 112) = 0LL;
                *(_QWORD *)(v61 + 120) = 0LL;
                *(_QWORD *)(v61 + 128) = 0LL;
                v56 = 0LL;
              }
              ++*(_DWORD *)(v54 + 4);
              if ( v30 < 0 )
              {
                v91 = v30;
                goto LABEL_269;
              }
              v61 += v69;
              v107 = (char *)v61;
            }
          }
        }
        if ( v12 == PsIdleProcess )
        {
          v76 = (_LIST_ENTRY *)p_Blink[95];
          if ( v76 != &v12->ThreadListHead )
          {
            p_Blink = (unsigned __int64 *)&v76[-48].Blink;
            KeSynchronizeWithDynamicProcessors(v59, v55, 0LL);
            goto LABEL_167;
          }
          p_Blink = 0LL;
          v102 = 0LL;
          v32 = v92;
          v59 = 0LL;
        }
        else
        {
          p_Blink = 0LL;
          v120 = 0LL;
          v71 = KeGetCurrentThread();
          v131 = v71;
          v72 = Process;
          v73 = &Process[1].ActiveProcessors.Bitmap[6];
          v74 = 0;
          --v71->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v72[1], 0LL);
          for ( j = (unsigned __int64 *)*((_QWORD *)v102 + 157); j != v73; j = (unsigned __int64 *)*j )
          {
            p_Blink = j - 157;
            v120 = j - 157;
            if ( ObReferenceObjectSafeWithTag((__int64)(j - 157)) )
            {
              v74 = 1;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v72[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v72[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&v72[1]);
          KeLeaveCriticalRegionThread((__int64)v71);
          ObfDereferenceObjectWithTag(v102, 0x6E457350u);
          if ( !v74 )
            p_Blink = 0LL;
          v120 = p_Blink;
          v12 = Process;
          Object = Process;
          v30 = v94;
          v92 = v93;
          v54 = (__int64)v108;
          v104 = v108;
          v61 = (__int64)v107;
LABEL_167:
          v102 = p_Blink;
          v32 = v92;
          v59 = 0LL;
        }
      }
      v13 = v61;
      v115 = v61;
      v14 = v61;
      v15 = (char *)(v61 + 368);
      v107 = v15;
      if ( v91 < 0 )
        goto LABEL_48;
      v16 = (signed __int64 *)&v12[1].Affinity.Bitmap[5];
      v17 = (struct _DMA_ADAPTER *)ObFastReferenceObject(v16);
      if ( v17 )
      {
        v18 = Object;
      }
      else
      {
        v128 = KeGetCurrentThread();
        --v128->KernelApcDisable;
        p_Lock = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v17 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v16);
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)v128);
        v18 = &Process->Header.Lock;
        v13 = v115;
      }
      v99 = SeSecurityAttributePresent((__int64)v17, (__int64)&PspSysAppIdClaim);
      ObFastDereferenceObject(v16, v17);
      *(_QWORD *)(v13 + 52) = 0LL;
      *(_DWORD *)(v13 + 336) = 0;
      v19 = v115;
      *(_QWORD *)(v115 + 344) = v18[293] << 12;
      *(_QWORD *)(v19 + 40) = v135[4];
      *(_DWORD *)(v19 + 48) = 0;
      if ( v99 )
        *(_DWORD *)(v19 + 48) = 1;
      v20 = Process;
      DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        *(_OWORD *)v19 = *(_OWORD *)DeepFreezeStartTime;
        *(_OWORD *)(v19 + 16) = *(_OWORD *)(DeepFreezeStartTime + 16);
        *(_QWORD *)(v19 + 32) = *(_QWORD *)(DeepFreezeStartTime + 32);
      }
      else
      {
        *(_OWORD *)v19 = 0LL;
        *(_OWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)(v19 + 32) = 0LL;
      }
      if ( (HIDWORD(v20[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v24 = *(_DWORD *)(v19 + 48) & 0xFFFFFFE1 | 2;
      }
      else if ( v20 == (PEPROCESS)PsSecureSystemProcess )
      {
        v24 = *(_DWORD *)(v19 + 48) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v20) )
      {
        v24 = *(_DWORD *)(v19 + 48) & 0xFFFFFFE1 | 6;
      }
      else
      {
        v22 = *((_QWORD *)&CmpRegistryProcess + 1) && v20 == *((PEPROCESS *)&CmpRegistryProcess + 1);
        v100 = v22;
        v23 = *(_DWORD *)(v19 + 48);
        if ( v22 )
          v24 = v23 & 0xFFFFFFE1 | 8;
        else
          v24 = v23 & 0xFFFFFFE1;
      }
      *(_DWORD *)(v19 + 48) = v24;
      *(_QWORD *)(v19 + 360) = v20[2].Affinity.Bitmap[6];
      PsQueryProcessEnergyValues(v20, v137);
      v25 = (_OWORD *)(v19 + 64);
      v26 = v137;
      v27 = 2LL;
      do
      {
        *v25 = *v26;
        v25[1] = v26[1];
        v25[2] = v26[2];
        v25[3] = v26[3];
        v25[4] = v26[4];
        v25[5] = v26[5];
        v25[6] = v26[6];
        v25 += 8;
        *(v25 - 1) = v26[7];
        v26 += 8;
        --v27;
      }
      while ( v27 );
      *v25 = *v26;
      if ( v20[1].Affinity.Bitmap[16] )
        *(_DWORD *)(v14 + 352) = *(_DWORD *)(v20[1].Affinity.Bitmap[16] + 1236);
      else
        *(_DWORD *)(v14 + 352) = 0;
      v12 = Process;
      Object = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem
        && ((v28 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 7) & 7], v28 != 5)
         || HIBYTE(Process[1].ActiveProcessors.Bitmap[0]) != 1
          ? (v29 = 0)
          : (v29 = 1),
            PpmPerfQosEnabled && (v28 - 1 <= 1 || v29)) )
      {
        *(_DWORD *)(v19 + 48) |= 0x20u;
      }
      v30 = v94;
      if ( v94 < 0 )
      {
        v91 = v94;
        goto LABEL_206;
      }
      v13 = v115;
      p_Blink = (unsigned __int64 *)v102;
      v32 = v93;
      v92 = v93;
      v104 = v108;
      v15 = v107;
LABEL_48:
      if ( a5 == 148 )
      {
        v77 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v12);
        v132 = v77;
        SeQueryUserSidToken(v77, Src, 68LL);
        PackageSize = 254LL;
        AppIdSize = 130LL;
        v30 = 0;
        v94 = RtlQueryPackageIdentity(v77, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
        if ( v94 >= 0 )
        {
          v79 = AppIdSize;
          v78 = PackageSize;
        }
        else
        {
          v78 = 0LL;
          PackageSize = 0LL;
          v79 = 0LL;
          AppIdSize = 0LL;
        }
        ObFastDereferenceObject((signed __int64 *)Object + 151, v77);
        v80 = (unsigned int)Size;
        v81 = (Size + 7) & 0xFFFFFFF8;
        v106 = v81;
        v82 = v81 + v92;
        if ( v81 + v92 < v92 )
        {
          v82 = -1;
          v30 = -1073741675;
        }
        v93 = v82;
        v92 = v82;
        v83 = v82;
        v94 = v30;
        if ( v30 < 0 )
        {
          v91 = v30;
        }
        else
        {
          v97 += v81;
          if ( v82 > a2 )
          {
            v91 = -1073741820;
            if ( !v110 )
              goto LABEL_269;
          }
          else
          {
            *(_DWORD *)(v13 + 52) = 368;
            memmove(v15, Src, v80);
            v83 = v92;
            v15 += v81;
            v107 = v15;
          }
          if ( v78 )
          {
            if ( v78 > 0xFFFFFFFF )
            {
              v91 = -1073741820;
            }
            else
            {
              v106 = v78;
              if ( (unsigned int)v78 + v83 < v83 )
              {
                v84 = -1;
                v92 = -1;
                v93 = -1;
                v30 = -1073741675;
              }
              else
              {
                v84 = v78 + v83;
                v92 = v78 + v83;
                v93 = v78 + v83;
                v30 = 0;
              }
              v94 = v30;
              if ( v30 >= 0 )
              {
                v97 += v78;
                if ( v84 > a2 )
                {
                  v91 = -1073741820;
                  if ( !v110 )
                    goto LABEL_269;
                }
                else
                {
                  *(_DWORD *)(v13 + 56) = (_DWORD)v15 - v13;
                  memmove(v15, PackageFullName, (unsigned int)v78);
                  v84 = v92;
                  v15 += (unsigned int)v78;
                  v107 = v15;
                }
                goto LABEL_188;
              }
              v91 = v30;
            }
          }
          else
          {
            v84 = v92;
LABEL_188:
            if ( !v79 )
            {
              v32 = v92;
              v12 = (PEPROCESS)Object;
              goto LABEL_49;
            }
            v87 = -1;
            if ( v79 > 0xFFFFFFFF )
            {
              v91 = -1073741820;
            }
            else
            {
              v106 = v79;
              if ( (unsigned int)v79 + v84 < v84 )
              {
                v92 = -1;
                v93 = -1;
                v30 = -1073741675;
              }
              else
              {
                v87 = v79 + v84;
                v92 = v79 + v84;
                v93 = v79 + v84;
                v30 = 0;
              }
              v94 = v30;
              if ( v30 >= 0 )
              {
                v97 += v79;
                if ( v87 > a2 )
                {
                  v91 = -1073741820;
                  if ( !v110 )
                    goto LABEL_269;
                  v32 = v92;
                  v12 = (PEPROCESS)Object;
                }
                else
                {
                  *(_DWORD *)(v13 + 336) = (_DWORD)v15 - v13;
                  memmove(v15, AppId, (unsigned int)v79);
                  v12 = (PEPROCESS)Object;
                  v15 += (unsigned int)v79;
                  v107 = v15;
                  v32 = v92;
                }
                goto LABEL_49;
              }
              v91 = v30;
            }
          }
        }
LABEL_269:
        if ( Object && Object != PsIdleProcess )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( p_Blink && (PVOID)p_Blink[68] != PsIdleProcess )
          ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
        if ( P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v91;
      }
LABEL_49:
      if ( v12 == PsIdleProcess )
        goto LABEL_174;
      if ( v12 == PsInitialSystemProcess )
      {
        v38 = &ExpSystemProcessName;
      }
      else if ( v12 == (PEPROCESS)PsSecureSystemProcess )
      {
        v38 = &ExpSecureSystemProcessName;
      }
      else if ( SmIsCompressionProcess(v12) )
      {
        v38 = (__int64 *)L"$&";
      }
      else
      {
        v34 = -1073741275;
        if ( *(_QWORD *)&v12[2].Affinity.Count && (_QWORD)xmmword_140C1E080 )
        {
          v34 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140C1E080)(v33, &P);
        }
        else
        {
          v35 = v12[1].ActiveProcessors.Bitmap[2];
          if ( v35 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    *(unsigned __int16 *)(v35 + 2) + 16LL,
                                    0x6E497350u);
            v37 = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_OWORD *)PoolWithTag = *(_OWORD *)v35;
              if ( *((_QWORD *)PoolWithTag + 1) )
              {
                *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                memmove(PoolWithTag + 16, *(const void **)(v35 + 8), *(unsigned __int16 *)(v35 + 2));
              }
              P = v37;
              v34 = 0;
            }
            else
            {
              v34 = -1073741801;
            }
          }
          v12 = (PEPROCESS)Object;
        }
        v94 = v34;
        if ( v34 < 0 )
          v38 = (__int64 *)v12[1].ActiveProcessors.Bitmap[2];
        else
          v38 = (__int64 *)P;
      }
      v116 = v38;
      v39 = *(unsigned __int16 *)v38;
      v106 = v39;
      v40 = v15;
      v118 = v15;
      LODWORD(Size) = v39;
      v41 = (_WORD *)v38[1];
      v42 = v41;
      v117 = v41;
      if ( a5 != 148 && v39 )
      {
        v42 = &v41[(unsigned __int64)v39 >> 1];
        v117 = v42;
        while ( v42 != v41 )
        {
          v117 = --v42;
          if ( *v42 == 92 )
          {
            v117 = ++v42;
            break;
          }
        }
        v39 -= 2 * (v42 - v41);
        LODWORD(Size) = v39;
      }
      v43 = v39;
      v44 = (v39 + 9) & 0xFFFFFFF8;
      v106 = v44;
      v45 = v44 + v32;
      if ( v44 + v32 < v32 )
      {
        v45 = -1;
        v30 = -1073741675;
      }
      else
      {
        v30 = 0;
      }
      v93 = v45;
      v94 = v30;
      if ( v30 < 0 )
      {
        v91 = v30;
        goto LABEL_269;
      }
      v97 += v44;
      if ( v45 > a2 )
      {
        v91 = -1073741820;
        if ( !v110 )
          goto LABEL_269;
      }
      else
      {
        if ( v39 )
        {
          memmove(v15, v42, v39);
          v40 = &v15[2 * (v43 >> 1)];
          v118 = v40;
        }
        *(_WORD *)v40 = 0;
        v40 += 2;
        v118 = v40;
      }
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      if ( v91 < 0 )
      {
        v12 = (PEPROCESS)Object;
LABEL_174:
        v46 = v104;
        goto LABEL_80;
      }
      v46 = v104;
      *((_WORD *)v104 + 28) = (_WORD)v40 - (_WORD)v15 - 2;
      *((_WORD *)v46 + 29) = v44;
      *((_QWORD *)v46 + 8) = v15;
      v12 = (PEPROCESS)Object;
LABEL_80:
      if ( v91 >= 0 )
      {
        *v46 = v97;
        if ( v30 < 0 )
        {
          v91 = v30;
          goto LABEL_269;
        }
      }
LABEL_82:
      if ( v12 == PsIdleProcess )
        v12 = 0LL;
      v47 = &v12->Header.Lock;
      v129 = v12;
      Handle = 0LL;
      while ( 1 )
      {
        Object = 0LL;
        v119 = 0LL;
        v48 = KeGetCurrentThread();
        v133 = v48;
        v49 = 0;
        --v48->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( k = (__int64 *)(v47 ? v47[137] : PsActiveProcessHead); k != &PsActiveProcessHead; k = (__int64 *)*k )
        {
          Object = k - 137;
          v119 = k - 137;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 137)) )
          {
            v49 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v52 = v48->SpecialApcDisable++ == -1;
        if ( v52 && ($C459BD0D405E8E46662177FB3D0A143F *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
          KiCheckForKernelApcDelivery(v51);
        if ( v47 )
          ObfDereferenceObjectWithTag(v47, 0x6E457350u);
        if ( v49 )
        {
          v12 = (PEPROCESS)Object;
        }
        else
        {
          v12 = 0LL;
          Object = 0LL;
          v119 = 0LL;
        }
        v47 = &v12->Header.Lock;
        v129 = v12;
        if ( !v12 )
          break;
        if ( (v12[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v95 )
            goto LABEL_102;
          if ( ObOpenObjectByPointer(v12, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
          {
            ObCloseHandle(Handle, 0);
LABEL_102:
            Process = v12;
            goto LABEL_103;
          }
        }
      }
      v12 = 0LL;
      Object = 0LL;
      Process = 0LL;
    }
  }
  return result;
}
