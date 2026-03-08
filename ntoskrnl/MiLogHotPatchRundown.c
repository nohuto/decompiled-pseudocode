/*
 * XREFs of MiLogHotPatchRundown @ 0x140A36A34
 * Callers:
 *     MiTracingEnabledCallback @ 0x140861B50 (MiTracingEnabledCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiFillLogProcessInfo @ 0x140224D68 (MiFillLogProcessInfo.c)
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x140A345D0 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x140A35270 (MiIsActiveSystemHotPatch.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v2; // rbx
  _QWORD *v3; // rax
  unsigned __int64 i; // rbx
  __int64 v5; // r8
  __int64 v6; // r10
  _QWORD **v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 k; // rdi
  _QWORD *v12; // rax
  unsigned __int64 j; // rbx
  __int64 v14; // r8
  __int64 v15; // r10
  int v16; // eax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  _QWORD **v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  unsigned __int64 m; // rbx
  __int64 v26; // r8
  __int64 v27; // r10
  _QWORD **v28; // rax
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rcx
  PVOID *n; // rbx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  _QWORD *ii; // rcx
  __int64 *ProcessHotPatchContext; // r14
  __int64 v38; // rsi
  __int64 *jj; // rsi
  __int64 v40; // r12
  int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // rbx
  int v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+30h] [rbp-D8h]
  int v46; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  int v48; // [rsp+50h] [rbp-B8h] BYREF
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  int v51; // [rsp+5Ch] [rbp-ACh] BYREF
  int v52; // [rsp+60h] [rbp-A8h] BYREF
  int v53; // [rsp+64h] [rbp-A4h] BYREF
  int v54; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v56; // [rsp+70h] [rbp-98h] BYREF
  int v57; // [rsp+74h] [rbp-94h] BYREF
  int v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int ProcessId; // [rsp+80h] [rbp-88h] BYREF
  int v61; // [rsp+84h] [rbp-84h] BYREF
  int v62; // [rsp+88h] [rbp-80h] BYREF
  int v63; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v64; // [rsp+90h] [rbp-78h] BYREF
  int v65; // [rsp+94h] [rbp-74h] BYREF
  int v66; // [rsp+98h] [rbp-70h] BYREF
  const CHAR *v67; // [rsp+A8h] [rbp-60h] BYREF
  int v68; // [rsp+B0h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v69; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+E8h] [rbp-20h] BYREF
  int *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  int *v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  int *v75; // [rsp+128h] [rbp+20h]
  __int64 v76; // [rsp+130h] [rbp+28h]
  int *v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+38h]
  int *v79; // [rsp+148h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+48h]
  _DWORD *v81; // [rsp+158h] [rbp+50h]
  __int64 v82; // [rsp+160h] [rbp+58h]
  __int64 v83; // [rsp+168h] [rbp+60h]
  _DWORD v84[2]; // [rsp+170h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+178h] [rbp+70h] BYREF
  int *v86; // [rsp+198h] [rbp+90h]
  __int64 v87; // [rsp+1A0h] [rbp+98h]
  int *v88; // [rsp+1A8h] [rbp+A0h]
  __int64 v89; // [rsp+1B0h] [rbp+A8h]
  int *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  int *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  int *v94; // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  PVOID v98; // [rsp+1F8h] [rbp+F0h]
  _DWORD v99[2]; // [rsp+200h] [rbp+F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+208h] [rbp+100h] BYREF
  unsigned int *p_ProcessId; // [rsp+228h] [rbp+120h]
  __int64 v102; // [rsp+230h] [rbp+128h]
  char v103[16]; // [rsp+238h] [rbp+130h] BYREF
  int *v104; // [rsp+248h] [rbp+140h]
  __int64 v105; // [rsp+250h] [rbp+148h]
  int *v106; // [rsp+258h] [rbp+150h]
  __int64 v107; // [rsp+260h] [rbp+158h]
  int *v108; // [rsp+268h] [rbp+160h]
  __int64 v109; // [rsp+270h] [rbp+168h]
  int *v110; // [rsp+278h] [rbp+170h]
  __int64 v111; // [rsp+280h] [rbp+178h]
  int *v112; // [rsp+288h] [rbp+180h]
  __int64 v113; // [rsp+290h] [rbp+188h]
  _DWORD *v114; // [rsp+298h] [rbp+190h]
  __int64 v115; // [rsp+2A0h] [rbp+198h]
  __int64 v116; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v117[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  int *v118; // [rsp+2B8h] [rbp+1B0h]
  __int64 v119; // [rsp+2C0h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v121; // [rsp+2E8h] [rbp+1E0h]
  __int64 v122; // [rsp+2F0h] [rbp+1E8h]
  int *v123; // [rsp+2F8h] [rbp+1F0h]
  __int64 v124; // [rsp+300h] [rbp+1F8h]
  _DWORD *v125; // [rsp+308h] [rbp+200h]
  __int64 v126; // [rsp+310h] [rbp+208h]
  __int64 v127; // [rsp+318h] [rbp+210h]
  _DWORD v128[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned __int64 v129; // [rsp+328h] [rbp+220h]
  int v130; // [rsp+330h] [rbp+228h]
  int v131; // [rsp+334h] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+338h] [rbp+230h] BYREF
  int *v133; // [rsp+358h] [rbp+250h]
  __int64 v134; // [rsp+360h] [rbp+258h]
  int *v135; // [rsp+368h] [rbp+260h]
  __int64 v136; // [rsp+370h] [rbp+268h]
  _DWORD *v137; // [rsp+378h] [rbp+270h]
  __int64 v138; // [rsp+380h] [rbp+278h]
  __int64 v139; // [rsp+388h] [rbp+280h]
  _DWORD v140[2]; // [rsp+390h] [rbp+288h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(&v69, 0, sizeof(v69));
  v67 = 0LL;
  if ( *(_QWORD *)&qword_140C69568 && dword_140C694FC )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C694C8, 0, v2, (__int64)&xmmword_140C694C8);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    v3 = *(_QWORD **)&xmmword_140C694B0;
    i = 0LL;
    while ( v3 )
    {
      i = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL) )
      {
        v46 = *(_DWORD *)(i + 24);
        v134 = 4LL;
        v133 = &v46;
        v47 = *(_DWORD *)(i + 28);
        v135 = &v47;
        v137 = v140;
        v139 = *(_QWORD *)(i + 40);
        v140[0] = *(unsigned __int16 *)(i + 32);
        v136 = 4LL;
        v138 = 2LL;
        v140[1] = 0;
        tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&byte_140038D41, v5, 1u, v44, v45, 6u, &v132);
      }
      v7 = *(_QWORD ***)(i + 8);
      v8 = i;
      if ( v7 )
      {
        v9 = *v7;
        for ( i = *(_QWORD *)(i + 8); v9; v9 = (_QWORD *)*v9 )
          i = (unsigned __int64)v9;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v8 )
            break;
          v8 = i;
        }
      }
    }
    v10 = (_QWORD *)qword_140C694A8;
    k = 0LL;
    while ( v10 )
    {
      k = (unsigned __int64)v10;
      v10 = (_QWORD *)*v10;
    }
    while ( k )
    {
      v12 = *(_QWORD **)(k + 24);
      j = 0LL;
      while ( v12 )
      {
        j = (unsigned __int64)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( j )
      {
        if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL) )
        {
          v48 = *(_DWORD *)(j + 24);
          v122 = 4LL;
          v121 = &v48;
          v49 = *(_DWORD *)(j + 28);
          v123 = &v49;
          v125 = v128;
          v127 = *(_QWORD *)(j + 40);
          v128[0] = *(unsigned __int16 *)(j + 32);
          v129 = k + 40;
          v16 = *(unsigned __int8 *)(k + 41);
          v124 = 4LL;
          v126 = 2LL;
          v128[1] = 0;
          v131 = 0;
          v130 = 4 * v16 + 8;
          tlgWriteEx_EtwWriteEx(v15, (unsigned __int8 *)&dword_140038D94, v14, 1u, v44, v45, 7u, &v120);
        }
        v17 = *(_QWORD ***)(j + 8);
        v18 = j;
        if ( v17 )
        {
          v19 = *v17;
          for ( j = *(_QWORD *)(j + 8); v19; v19 = (_QWORD *)*v19 )
            j = (unsigned __int64)v19;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v18 )
              break;
            v18 = j;
          }
        }
      }
      v20 = *(_QWORD ***)(k + 8);
      v21 = k;
      if ( v20 )
      {
        v22 = *v20;
        for ( k = *(_QWORD *)(k + 8); v22; v22 = (_QWORD *)*v22 )
          k = (unsigned __int64)v22;
      }
      else
      {
        while ( 1 )
        {
          k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !k || *(_QWORD *)k == v21 )
            break;
          v21 = k;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&xmmword_140C694C8);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MmAcquireLoadLock();
    v24 = (_QWORD *)qword_140C694C0;
    m = 0LL;
    while ( v24 )
    {
      m = (unsigned __int64)v24;
      v24 = (_QWORD *)*v24;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL) )
      {
        v50 = *(_DWORD *)(m + 24);
        v72 = 4LL;
        v71 = &v50;
        v51 = *(_DWORD *)(m + 28);
        v73 = &v51;
        v52 = *(_DWORD *)(m + 32);
        v75 = &v52;
        v53 = *(_DWORD *)(m + 36);
        v77 = &v53;
        v54 = *(_DWORD *)(m + 40);
        v79 = &v54;
        v81 = v84;
        v83 = *(_QWORD *)(m + 56);
        v84[0] = *(unsigned __int16 *)(m + 48);
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 2LL;
        v84[1] = 0;
        tlgWriteEx_EtwWriteEx(v27, (unsigned __int8 *)&byte_140038DF7, v26, 1u, v44, v45, 9u, &v70);
      }
      v28 = *(_QWORD ***)(m + 8);
      v29 = m;
      if ( v28 )
      {
        v30 = *v28;
        for ( m = *(_QWORD *)(m + 8); v30; v30 = (_QWORD *)*v30 )
          m = (unsigned __int64)v30;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v29 )
            break;
          v29 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      LOBYTE(v32) = MiIsActiveSystemHotPatch((__int64)n);
      if ( v32 && **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL) )
      {
        v55 = *(_DWORD *)(v34 + 120);
        v87 = 4LL;
        v86 = &v55;
        v56 = *(_DWORD *)(v34 + 156);
        v88 = &v56;
        v57 = *((_DWORD *)n + 30);
        v90 = &v57;
        v58 = *((_DWORD *)n + 39);
        v92 = &v58;
        v59 = *((_DWORD *)n + 78);
        v94 = &v59;
        v96 = v99;
        v98 = n[10];
        v99[0] = *((unsigned __int16 *)n + 36);
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 2LL;
        v99[1] = 0;
        tlgWriteEx_EtwWriteEx(v35, (unsigned __int8 *)&qword_1400386E0, v33, 1u, v44, v45, 9u, &v85);
      }
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    for ( ii = 0LL; ; ii = (_QWORD *)v43 )
    {
      result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(ii);
      v43 = (__int64)result;
      if ( !result )
        break;
      if ( ExAcquireRundownProtection_0(result + 139) )
      {
        KiStackAttachProcess((_KPROCESS *)v43, 0, (__int64)&v69);
        ProcessHotPatchContext = MiGetProcessHotPatchContext(v43, 0);
        if ( ProcessHotPatchContext )
        {
          MiFillLogProcessInfo(v43 + 1664, &v68, &v67);
          --CurrentThread->SpecialApcDisable;
          v38 = KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
          if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(ProcessHotPatchContext + 2, 0, v38, (__int64)(ProcessHotPatchContext + 2));
          if ( v38 )
            *(_BYTE *)(v38 + 18) = 1;
          for ( jj = (__int64 *)*ProcessHotPatchContext; jj != ProcessHotPatchContext; jj = (__int64 *)*jj )
          {
            v40 = *(_QWORD *)&qword_140C69568;
            if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL) )
            {
              ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v43);
              v102 = 4LL;
              p_ProcessId = &ProcessId;
              tlgCreate1Sz_char((__int64)v103, v67);
              v41 = *((_DWORD *)jj + 8);
              v104 = &v61;
              v62 = *((_DWORD *)jj + 9);
              v106 = &v62;
              v63 = *((_DWORD *)jj + 14);
              v108 = &v63;
              v64 = *((_DWORD *)jj + 15);
              v110 = &v64;
              v65 = *((_DWORD *)jj + 16);
              v112 = &v65;
              v114 = v117;
              v116 = jj[6];
              v117[0] = *((unsigned __int16 *)jj + 20);
              v66 = *((_DWORD *)jj + 4);
              v118 = &v66;
              v61 = v41;
              v105 = 4LL;
              v107 = 4LL;
              v109 = 4LL;
              v111 = 4LL;
              v113 = 4LL;
              v115 = 2LL;
              v117[1] = v42;
              v119 = 4LL;
              tlgWriteEx_EtwWriteEx(v40, (unsigned __int8 *)&byte_14003876D, v42, v42 + 1, v44, v45, 0xCu, &v100);
            }
          }
          if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(ProcessHotPatchContext + 2);
          KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        KiUnstackDetachProcess(&v69);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v43 + 1112));
      }
    }
  }
  return result;
}
