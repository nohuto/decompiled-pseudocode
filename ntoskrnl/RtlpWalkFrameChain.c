/*
 * XREFs of RtlpWalkFrameChain @ 0x14027FF40
 * Callers:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140281490 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     RtlpIsFrameInBoundsEx @ 0x140282250 (RtlpIsFrameInBoundsEx.c)
 *     MmIsSessionExecutionValid @ 0x140282320 (MmIsSessionExecutionValid.c)
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 *     MmIsExecutivePagingDisabled @ 0x14032D3D0 (MmIsExecutivePagingDisabled.c)
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpCaptureContext2 @ 0x1404206C0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpWalkWowStack @ 0x14045BA38 (RtlpWalkWowStack.c)
 *     RtlLocateExtendedFeature2 @ 0x14045BC40 (RtlLocateExtendedFeature2.c)
 *     RtlWow64GetCpuAreaInfo @ 0x14077C93C (RtlWow64GetCpuAreaInfo.c)
 *     PsWow64GetProcessMachine @ 0x1407EE9F0 (PsWow64GetProcessMachine.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  _KPROCESS *Process; // rdx
  int v7; // r15d
  __int64 v8; // rcx
  int v9; // r12d
  char v10; // al
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  struct _KTHREAD *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  _QWORD *v23; // rcx
  int v24; // edi
  _QWORD *i; // rcx
  char *v26; // rsi
  unsigned __int64 v27; // rdx
  _QWORD *InitialStack; // rdx
  int v29; // edx
  _QWORD *ExtendedFeature2; // rax
  int v32; // [rsp+30h] [rbp-30h]
  int v33; // [rsp+38h] [rbp-28h]
  char v34; // [rsp+60h] [rbp+0h] BYREF
  bool v35; // [rsp+61h] [rbp+1h]
  char v36; // [rsp+62h] [rbp+2h] BYREF
  unsigned __int8 v37; // [rsp+63h] [rbp+3h]
  int v38; // [rsp+64h] [rbp+4h] BYREF
  unsigned int v39; // [rsp+68h] [rbp+8h]
  _QWORD *v40; // [rsp+70h] [rbp+10h]
  unsigned __int64 v41; // [rsp+78h] [rbp+18h]
  __int64 v42; // [rsp+80h] [rbp+20h] BYREF
  int v43; // [rsp+88h] [rbp+28h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+30h]
  _QWORD *v45; // [rsp+98h] [rbp+38h]
  __int64 v46; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp+48h] BYREF
  void *Teb; // [rsp+B0h] [rbp+50h]
  __int64 v49; // [rsp+B8h] [rbp+58h] BYREF
  __int64 v50; // [rsp+C0h] [rbp+60h]
  unsigned __int64 v51; // [rsp+C8h] [rbp+68h]
  int v52; // [rsp+D0h] [rbp+70h]
  _KPROCESS *v53; // [rsp+D8h] [rbp+78h]
  unsigned __int64 v54; // [rsp+E0h] [rbp+80h]
  unsigned __int64 v55; // [rsp+E8h] [rbp+88h]
  __int64 v56; // [rsp+F0h] [rbp+90h]
  __int64 v57; // [rsp+F8h] [rbp+98h]
  unsigned __int64 v58; // [rsp+100h] [rbp+A0h]
  unsigned __int64 v59; // [rsp+108h] [rbp+A8h]
  __int128 v60; // [rsp+110h] [rbp+B0h] BYREF
  __int64 v61; // [rsp+120h] [rbp+C0h]
  __int64 v62; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v63; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v64; // [rsp+138h] [rbp+D8h]
  __int128 v65; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v66; // [rsp+150h] [rbp+F0h]
  unsigned __int64 v67; // [rsp+158h] [rbp+F8h]
  _OWORD v68[3]; // [rsp+160h] [rbp+100h] BYREF
  _BYTE v69[64]; // [rsp+190h] [rbp+130h] BYREF

  v39 = a2;
  v56 = a1;
  v60 = 0LL;
  v61 = 0LL;
  v49 = 0LL;
  LODWORD(v42) = 0;
  v62 = 0LL;
  v63 = 0LL;
  v47 = 0LL;
  memset(v69, 0, sizeof(v69));
  v46 = 0LL;
  v45 = 0LL;
  v50 = 0LL;
  v37 = 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v53 = Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v41 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v43 = 0;
  v8 = 0LL;
  v57 = 0LL;
  v9 = a3 & 1;
  v52 = v9;
  if ( (a3 & 1) != 0 && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0 )
  {
    v8 = qword_140D1F3B0;
    v57 = qword_140D1F3B0;
  }
  v10 = 0;
  v34 = 0;
  if ( v8 )
  {
    v10 = 1;
    v34 = 1;
  }
  v11 = 1048587;
  v12 = 0LL;
  if ( v10 )
  {
    v11 = 1048651;
    v12 = 2048LL;
  }
  RtlGetExtendedContextLength2(v11, &v42, v12);
  v13 = (unsigned int)v42 + 15LL;
  if ( v13 <= (unsigned int)v42 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = alloca(v14);
  v16 = alloca(v14);
  RtlInitializeExtendedContext2(&v34, v11, &v49, v12);
  RtlpCaptureContext2(&v34);
  v36 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v46, &v47) )
    return 0LL;
  v17 = 0;
  v38 = 0;
  v35 = (a3 & 2) != 0;
  if ( (a3 & 1) != 0 || (unsigned int)MmIsExecutivePagingDisabled() )
    v18 = 0;
  else
    v18 = 0x80000000;
  v54 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  v19 = CurrentThread;
  if ( (a3 & 1) == 0 )
  {
    v40 = v45;
    v20 = v50;
    v21 = v39;
LABEL_17:
    v42 = v20;
    v60 = xmmword_140E00030;
    v61 = qword_140E00040;
    while ( 1 )
    {
      if ( v7 != 1 && v67 - qword_140C65668 < 0x8000000000LL && !(unsigned int)MmIsSessionExecutionValid(v19, v53) )
        goto LABEL_107;
      if ( !(unsigned __int8)RtlpIsFrameInBoundsEx(&v46, v57, &v47, v69) )
        goto LABEL_107;
      v22 = RtlpLookupFunctionEntryForStackWalks(v67, &v60);
      if ( !v22 && !*((_QWORD *)&v60 + 1) )
        goto LABEL_107;
      v66 = 0LL;
      *(_QWORD *)&v65 = &v46;
      *((_QWORD *)&v65 + 1) = &v47;
      if ( (int)RtlpxVirtualUnwind(
                  v18,
                  DWORD2(v60),
                  v67,
                  v22,
                  (__int64)&v34,
                  (__int64)&v36,
                  (__int64)&v63,
                  (__int64)&v62,
                  0LL,
                  (__int64)&v65) < 0 )
        goto LABEL_107;
      if ( v36 )
        v35 = 0;
      if ( v7 == 1 && v17 && v57 && v67 == v57 )
        v67 = *(_QWORD *)(*(_QWORD *)(RtlLocateExtendedFeature2(v49, 11LL, 0xFFFFF780000003D8uLL, 0LL) + 8) - 8LL);
      if ( !v67 )
      {
        if ( v9 )
        {
          if ( (unsigned __int16)PsWow64GetProcessMachine(v53) == 332 && *(_BYTE *)(v41 + 43) == 2 )
          {
            memset(v68, 0, sizeof(v68));
            v24 = (int)Teb;
            if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), 332LL, v68) >= 0 )
            {
              if ( (v68[0] & 3) != 0 )
LABEL_99:
                ExRaiseDatatypeMisalignment();
              RtlpWalkWowStack(
                v56,
                0,
                v24,
                (unsigned int)&v38,
                v21,
                a4,
                *(_DWORD *)(*(_QWORD *)&v68[0] + 180LL),
                *(_DWORD *)(*(_QWORD *)&v68[0] + 196LL) - 4);
              v17 = v38;
            }
          }
        }
        goto LABEL_107;
      }
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( v67 > 0x7FFFFFFEFFFFLL )
            goto LABEL_107;
          if ( v42 && v67 == *(_QWORD *)(v41 + 360) )
          {
            v7 = 2;
            v43 = 2;
            v67 = *(_QWORD *)(v42 + 312);
            v57 = v42 + 320;
            v58 = *(_QWORD *)(v42 + 248);
            v56 = *(_QWORD *)(v42 + 256);
            *(_QWORD *)&v60 = *(_QWORD *)(v42 + 264);
            v59 = *(_QWORD *)(v42 + 272);
            v64 = *(_QWORD *)(v42 + 280);
            v65 = *(_OWORD *)(v42 + 288);
            v66 = *(_QWORD *)(v42 + 304);
            if ( v34 )
              *(_QWORD *)RtlLocateExtendedFeature2(v49, 11LL, 0xFFFFF780000003D8uLL, 0LL) = 0LL;
            v42 = v40[4];
            v50 = v42;
            v23 = (_QWORD *)v40[5];
            v40 = v23;
            if ( !v23 )
              goto LABEL_107;
            v45 = v23;
            v46 = v57;
            v47 = *v23;
          }
        }
        else if ( v67 < 0x7FFFFFFF0000LL )
        {
          if ( v67 != *(_QWORD *)(v41 + 360) )
            goto LABEL_107;
          v64 = *(_QWORD *)(v41 + 384);
          if ( (v64 & 3) != 0 )
            goto LABEL_99;
          v7 = 1;
          v43 = 1;
          v57 = *(_QWORD *)(v64 + 72);
          v54 = v58;
          v46 = v58;
          v55 = v59;
          v47 = v59;
          v42 = v50;
          if ( v50 )
          {
            v41 = *(_QWORD *)(v50 + 208);
            v51 = v41;
            v17 = v38;
            v40 = v45;
          }
          else
          {
            v17 = v38;
            v40 = v45;
            v41 = v51;
          }
        }
        goto LABEL_31;
      }
      if ( v9 )
      {
        if ( v67 < 0xFFFF800000000000uLL )
        {
          if ( v67 > 0x7FFFFFFEFFFFLL )
            goto LABEL_107;
          if ( v67 != *(_QWORD *)(v41 + 360) )
            goto LABEL_107;
          v7 = 1;
          v43 = 1;
          if ( v42 )
          {
            v41 = *(_QWORD *)(v42 + 208);
            v51 = v41;
            if ( v41 < 0xFFFF800000000000uLL )
              goto LABEL_107;
          }
          if ( v34 )
          {
            LODWORD(CurrentThread) = (unsigned int)CurrentThread | 0x100040;
            ExtendedFeature2 = (_QWORD *)RtlLocateExtendedFeature2(v49, 11LL, 0xFFFFF780000003D8uLL, 0LL);
            *ExtendedFeature2 = 1LL;
            ExtendedFeature2[1] = __readmsr(0x6A7u);
          }
          v46 = v54;
          v47 = v55;
        }
        else if ( v17 )
        {
          goto LABEL_34;
        }
LABEL_31:
        if ( v17 >= a4 )
          *(_QWORD *)(v56 + 8LL * (v17 - a4)) = v67;
        v38 = ++v17;
        if ( v17 >= v21 )
          goto LABEL_107;
LABEL_34:
        v19 = CurrentThread;
      }
      else
      {
        if ( v67 < 0xFFFF800000000000uLL )
          goto LABEL_107;
        if ( !v35 )
          goto LABEL_31;
        v19 = CurrentThread;
      }
    }
  }
  for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  v26 = (char *)(i - 50);
  v41 = (unsigned __int64)(i - 50);
  v51 = (unsigned __int64)(i - 50);
  if ( !Teb || _bittest16((const signed __int16 *)Teb + 3063, 8u) )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v53) == 332 && v26[43] != 2 && *((_WORD *)v26 + 184) == 35 )
  {
    v38 = 1;
    v29 = (_DWORD)v26 + 360;
    v33 = *((_DWORD *)v26 + 96);
    v32 = *((_DWORD *)v26 + 86);
    v21 = v39;
    if ( (unsigned __int8)RtlpWalkWowStack(v56, v29, (_DWORD)Teb, (unsigned int)&v38, v39, a4, v32, v33) )
    {
      v17 = v38;
LABEL_107:
      if ( v9 )
      {
        if ( !v37 )
          CurrentThread->MiscFlags &= ~0x20u;
      }
      return v17;
    }
    v17 = v38;
  }
  else
  {
    v21 = v39;
  }
  v54 = *(_QWORD *)(v41 + 384);
  v58 = v54;
  v27 = *((_QWORD *)Teb + 1);
  v55 = v27;
  v59 = v27;
  if ( v27 > v54 )
  {
    if ( v27 > 0x7FFFFFFF0000LL )
      MEMORY[0x7FFFFFFF0000] = 0;
    v19 = CurrentThread;
    InitialStack = CurrentThread->InitialStack;
    v40 = InitialStack;
    v45 = InitialStack;
    while ( (InitialStack[1] & 1) != 0 )
    {
      InitialStack = (_QWORD *)InitialStack[5];
      v40 = InitialStack;
      v45 = InitialStack;
    }
    v20 = InitialStack[4];
    v50 = v20;
    v37 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    goto LABEL_17;
  }
  return 0LL;
}
