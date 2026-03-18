/*
 * XREFs of RtlpWalkFrameChain @ 0x140296110
 * Callers:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpWalkWowStack @ 0x140201780 (RtlpWalkWowStack.c)
 *     RtlpGetEntireXStateAreaLength @ 0x14024ED80 (RtlpGetEntireXStateAreaLength.c)
 *     RtlLocateExtendedFeature2 @ 0x14025CB30 (RtlLocateExtendedFeature2.c)
 *     KeQueryCurrentStackInformation @ 0x140294D90 (KeQueryCurrentStackInformation.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x140297F80 (RtlpValidateContextFlags.c)
 *     KeGetNextKernelStackSegment @ 0x140298AF8 (KeGetNextKernelStackSegment.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     MmIsSessionExecutionValid @ 0x1402DBFAC (MmIsSessionExecutionValid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpCaptureContext2 @ 0x140429AE0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14045F176 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     PsWow64GetProcessMachine @ 0x1407048B0 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140704D58 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v5; // edi
  _KPROCESS *Process; // rdx
  char v7; // al
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // eax
  char v14; // di
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  unsigned int v19; // edi
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // r15d
  _QWORD *v22; // r14
  unsigned __int64 *v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char *v28; // r8
  int v29; // ecx
  _KTHREAD *v30; // rcx
  unsigned int v31; // r9d
  char v32; // r8
  unsigned __int64 *v33; // rax
  char NextKernelStackSegment; // dl
  int v35; // r10d
  unsigned __int64 **v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rbx
  _QWORD *i; // rcx
  unsigned int *v40; // r14
  unsigned __int64 v41; // rcx
  unsigned __int64 *v43; // rdx
  char *ExtendedFeature2; // rax
  char v45; // [rsp+60h] [rbp+0h] BYREF
  bool v46; // [rsp+61h] [rbp+1h]
  unsigned int v47; // [rsp+64h] [rbp+4h] BYREF
  char v48; // [rsp+68h] [rbp+8h] BYREF
  unsigned __int8 v49; // [rsp+69h] [rbp+9h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+10h]
  unsigned int v51; // [rsp+78h] [rbp+18h]
  int v52; // [rsp+7Ch] [rbp+1Ch]
  unsigned __int64 v53; // [rsp+80h] [rbp+20h]
  _QWORD *v54; // [rsp+88h] [rbp+28h]
  unsigned int v55; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 *v57; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v58; // [rsp+A8h] [rbp+48h]
  _QWORD *v59; // [rsp+B0h] [rbp+50h]
  _QWORD *j; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v61; // [rsp+C0h] [rbp+60h]
  int v62; // [rsp+C8h] [rbp+68h] BYREF
  unsigned int v63; // [rsp+CCh] [rbp+6Ch]
  void *Teb; // [rsp+D0h] [rbp+70h]
  _KPROCESS *v65; // [rsp+D8h] [rbp+78h]
  _DWORD *v66; // [rsp+E0h] [rbp+80h] BYREF
  unsigned __int64 v67; // [rsp+E8h] [rbp+88h]
  unsigned __int64 v68; // [rsp+F0h] [rbp+90h]
  unsigned __int64 *v69; // [rsp+F8h] [rbp+98h]
  unsigned __int64 v70; // [rsp+100h] [rbp+A0h] BYREF
  __int64 v71; // [rsp+108h] [rbp+A8h]
  __int64 v72; // [rsp+110h] [rbp+B0h] BYREF
  unsigned __int64 *v73; // [rsp+118h] [rbp+B8h] BYREF
  __int64 v74; // [rsp+120h] [rbp+C0h]
  __int128 v75; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v76; // [rsp+138h] [rbp+D8h]
  __int64 v77; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v78; // [rsp+148h] [rbp+E8h] BYREF
  __int64 v79; // [rsp+150h] [rbp+F0h]
  _QWORD v80[4]; // [rsp+158h] [rbp+F8h] BYREF
  _OWORD v81[3]; // [rsp+178h] [rbp+118h] BYREF
  _QWORD v82[8]; // [rsp+1B0h] [rbp+150h] BYREF

  v51 = a4;
  v58 = a2;
  v71 = a1;
  v75 = 0LL;
  v76 = 0LL;
  v66 = 0LL;
  v5 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v63 = 0;
  v57 = 0LL;
  memset(v82, 0, sizeof(v82));
  v56 = 0LL;
  j = 0LL;
  v59 = 0LL;
  v49 = 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v65 = Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
  {
    Teb = 0LL;
  }
  else
  {
    Teb = CurrentThread->Teb;
    Process = v65;
  }
  v7 = 0;
  v53 = 0LL;
  v61 = 0LL;
  v8 = 0;
  v52 = 0;
  v9 = 0LL;
  v74 = 0LL;
  if ( (a3 & 1) != 0 && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0 )
  {
    v9 = qword_140D071F0;
    v74 = qword_140D071F0;
  }
  v45 = 0;
  if ( v9 )
  {
    v7 = 1;
    v45 = 1;
  }
  v10 = 1048587;
  v11 = 0LL;
  if ( v7 )
  {
    v10 = 1048651;
    v11 = 2048LL;
  }
  v12 = v11;
  v70 = v11;
  v62 = 0;
  LODWORD(v69) = 0;
  LODWORD(v54) = 0;
  if ( (int)RtlpValidateContextFlags(v10, &v62) >= 0 )
  {
    LODWORD(v69) = 16;
    v13 = 1264;
    v14 = v62;
    if ( (v62 & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v70 = v11 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL);
        RtlpRemoveArchDisallowedXStateFeatures(v10, &v70);
        v12 = v70;
      }
      v13 = RtlpGetEntireXStateAreaLength(v12) + 800;
    }
    if ( (v14 & 4) != 0 )
      v13 += 32;
    v5 = v13 - 1 + 16;
    LODWORD(v54) = v5;
  }
  v15 = v5 + 15LL;
  if ( v15 <= v5 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  RtlInitializeExtendedContext2(&v45, v10, &v66, v11);
  RtlpCaptureContext2(&v45);
  v48 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v56, &v57) )
    return 0LL;
  v19 = 0;
  v47 = 0;
  v46 = (a3 & 2) != 0;
  if ( (a3 & 1) == 0 && (dword_140D051B4 & 1) == 0 )
    v63 = 0x80000000;
  v67 = 0LL;
  v68 = 0LL;
  v20 = CurrentThread;
  if ( (a3 & 1) != 0 )
  {
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v40 = (unsigned int *)(i - 50);
    v53 = (unsigned __int64)(i - 50);
    v61 = (unsigned __int64)(i - 50);
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v65) != 332 || *((_BYTE *)v40 + 43) == 2 )
    {
      v21 = v51;
    }
    else
    {
      v21 = v51;
      if ( *((_WORD *)v40 + 184) == 35 )
      {
        v47 = 1;
        if ( RtlpWalkWowStack(v71, v40 + 90, (__int64)Teb, &v47, v58, v51, v40[86], v40[96]) )
        {
          v19 = v47;
          goto LABEL_148;
        }
        v19 = v47;
      }
    }
    v67 = *((_QWORD *)v40 + 48);
    v41 = *((_QWORD *)Teb + 1);
    v68 = v41;
    if ( v41 <= v67 )
      return 0LL;
    if ( v41 > 0x7FFFFFFF0000LL )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( j = v20->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
      ;
    v54 = (_QWORD *)j[4];
    v59 = v54;
    v49 = _bittestandset((signed __int32 *)&v20->116, 5u);
  }
  else
  {
    v54 = v59;
    v21 = v51;
  }
  memset(v82, 0, sizeof(v82));
  v75 = xmmword_140E00030;
  v76 = qword_140E00040;
  while ( 1 )
  {
    v22 = j;
    if ( v8 != 1
      && (unsigned __int64)(v80[0] - qword_140C50630) < 0x8000000000LL
      && !(unsigned int)MmIsSessionExecutionValid(v20, v65) )
    {
      goto LABEL_148;
    }
    v23 = v69;
    v73 = 0LL;
    v72 = 0LL;
    v55 = 0;
    if ( ((unsigned __int8)v69 & 7) != 0 )
      goto LABEL_147;
    if ( (unsigned __int64)v69 < v56 || v69 >= v57 )
      break;
LABEL_28:
    v24 = RtlpLookupFunctionEntryForStackWalks(v80[0], &v75);
    if ( v24 )
    {
      v25 = v80[0];
      v80[2] = 0LL;
      v80[0] = &v56;
      v80[1] = &v57;
      if ( (int)RtlpxVirtualUnwind(
                  v63,
                  DWORD2(v75),
                  v25,
                  v24,
                  (__int64)&v45,
                  (__int64)&v48,
                  (__int64)&v78,
                  (__int64)&v77,
                  0LL,
                  (__int64)v80) < 0 )
      {
        v20 = CurrentThread;
        goto LABEL_148;
      }
      if ( v48 )
        v46 = 0;
      v26 = v80[0];
    }
    else
    {
      if ( !*((_QWORD *)&v75 + 1) )
      {
        v20 = CurrentThread;
        goto LABEL_148;
      }
      if ( v80[0] <= 0x7FFFFFFEFFFFuLL )
      {
        if ( ((unsigned __int8)v69 & 3) != 0 )
          goto LABEL_138;
        v19 = v47;
        v54 = v59;
        v53 = v61;
        v8 = v52;
      }
      v26 = *v69;
      v80[0] = *v69++;
    }
    v27 = v26;
    if ( v8 == 1 && v19 && v74 && v26 == v74 )
    {
      v27 = *(_QWORD *)(*((_QWORD *)RtlLocateExtendedFeature2(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL) + 1) - 8LL);
      v80[0] = v27;
    }
    if ( !v27 )
    {
      if ( (a3 & 1) != 0 && (unsigned __int16)PsWow64GetProcessMachine(v65) == 332 && *(_BYTE *)(v53 + 43) == 2 )
      {
        memset(v81, 0, sizeof(v81));
        v38 = (__int64)Teb;
        if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v37, v81) >= 0 )
        {
          if ( (v81[0] & 3) != 0 )
LABEL_138:
            ExRaiseDatatypeMisalignment();
          if ( RtlpWalkWowStack(
                 v71,
                 0LL,
                 v38,
                 &v47,
                 v58,
                 v21,
                 *(_DWORD *)(*(_QWORD *)&v81[0] + 180LL),
                 *(_DWORD *)(*(_QWORD *)&v81[0] + 196LL) - 4) )
          {
            v19 = v47;
            v20 = CurrentThread;
            goto LABEL_148;
          }
          v19 = v47;
        }
      }
      v20 = CurrentThread;
      goto LABEL_148;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( v27 > 0x7FFFFFFEFFFFLL )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v54 && v27 == *(_QWORD *)(v53 + 360) )
        {
          v8 = 2;
          v52 = 2;
          v80[0] = v54[39];
          v69 = v54 + 40;
          v70 = v54[31];
          v68 = v54[32];
          v72 = v54[33];
          v71 = v54[34];
          v76 = v54[35];
          v77 = v54[36];
          v78 = v54[37];
          v79 = v54[38];
          if ( v45 )
            *(_QWORD *)RtlLocateExtendedFeature2(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL) = 0LL;
          v54 = (_QWORD *)v22[4];
          v59 = v54;
          v36 = (unsigned __int64 **)v22[5];
          if ( !v36 )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
          j = (_QWORD *)v22[5];
          v56 = (unsigned __int64)v69;
          v57 = *v36;
        }
      }
      else
      {
        if ( v8 != 2 )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v27 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v27 != *(_QWORD *)(v53 + 360) )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
          v79 = *(_QWORD *)(v53 + 384);
          if ( (v79 & 3) != 0 )
            goto LABEL_138;
          v8 = 1;
          v52 = 1;
          v69 = *(unsigned __int64 **)(v79 + 72);
          v56 = v67;
          v57 = (unsigned __int64 *)v68;
          v54 = v59;
          if ( v59 )
          {
            v53 = v59[26];
            v61 = v53;
            v19 = v47;
          }
          else
          {
            v19 = v47;
            v53 = v61;
          }
        }
      }
      goto LABEL_40;
    }
    if ( (a3 & 1) == 0 && v27 < 0xFFFF800000000000uLL )
    {
      v20 = CurrentThread;
      goto LABEL_148;
    }
    if ( (a3 & 1) != 0 )
    {
      if ( v27 < 0xFFFF800000000000uLL )
      {
        if ( v27 > 0x7FFFFFFEFFFFLL )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        if ( v27 != *(_QWORD *)(v53 + 360) )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        v8 = 1;
        v52 = 1;
        if ( v54 )
        {
          v53 = v54[26];
          v61 = v53;
          if ( v53 < 0xFFFF800000000000uLL )
          {
            v20 = CurrentThread;
            goto LABEL_148;
          }
        }
        if ( v45 )
        {
          v55 |= 0x100040u;
          ExtendedFeature2 = RtlLocateExtendedFeature2(v66, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          *(_QWORD *)ExtendedFeature2 = 1LL;
          *((_QWORD *)ExtendedFeature2 + 1) = __readmsr(0x6A7u);
        }
        v56 = v67;
        v57 = (unsigned __int64 *)v68;
LABEL_40:
        if ( v19 >= v51 )
          *(_QWORD *)(v71 + 8LL * (v19 - v51)) = v80[0];
        v47 = ++v19;
        if ( v19 >= v58 )
        {
          v20 = CurrentThread;
          goto LABEL_148;
        }
        v21 = v51;
        v20 = CurrentThread;
      }
      else
      {
        if ( !v19 )
          goto LABEL_40;
        v20 = CurrentThread;
      }
    }
    else
    {
      if ( !v46 )
        goto LABEL_40;
      v20 = CurrentThread;
    }
  }
  if ( v56 < 0xFFFF800000000000uLL )
    goto LABEL_147;
  KeQueryCurrentStackInformation((__int64)&v55, (__int64)&v72, (__int64)&v73);
  if ( v55 <= 9 )
  {
    v29 = 929;
    if ( _bittest(&v29, v55) )
      goto LABEL_147;
  }
  v30 = KeGetCurrentThread();
  v31 = v55;
  if ( v55 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v30 != KeGetCurrentPrcb()->IdleThread )
    {
      v43 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.DpcStack + 80);
      v28 = (char *)v43 - (unsigned int)KeKernelStackSize;
      if ( v28 <= (char *)v23 && v23 < v43 )
      {
        v57 = v43;
        v56 = (unsigned __int64)v43 - (unsigned int)KeKernelStackSize;
        goto LABEL_60;
      }
    }
    v31 = v55;
  }
  v32 = 0;
  v33 = (unsigned __int64 *)v82[0];
  if ( !v82[0] )
  {
    LOBYTE(v28) = 1;
    KeGetNextKernelStackSegment(v30, v82, v28);
    v33 = (unsigned __int64 *)v82[0];
  }
  NextKernelStackSegment = 1;
  if ( v31 > 0xA || (v35 = 1090, !_bittest(&v35, v31)) || !v32 )
  {
    NextKernelStackSegment = KeGetNextKernelStackSegment(v30, v82, 0LL);
    v33 = (unsigned __int64 *)v82[0];
  }
  if ( NextKernelStackSegment )
  {
    v72 = v82[1];
    v73 = v33;
    if ( (unsigned __int64)v23 >= v82[1] && v23 < v33 )
    {
      v56 = v82[1];
      v57 = v33;
LABEL_60:
      v54 = v59;
      v8 = v52;
      v53 = v61;
      v19 = v47;
      goto LABEL_28;
    }
  }
  v19 = v47;
LABEL_147:
  v20 = CurrentThread;
LABEL_148:
  if ( (a3 & 1) != 0 && !v49 )
    v20->MiscFlags &= ~0x20u;
  return v19;
}
