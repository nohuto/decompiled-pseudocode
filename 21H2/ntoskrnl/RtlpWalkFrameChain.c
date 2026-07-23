/*
 * XREFs of RtlpWalkFrameChain @ 0x1402C1B50
 * Callers:
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1402445D0 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpWalkWowStack @ 0x14024B4C4 (RtlpWalkWowStack.c)
 *     MmIsSessionExecutionValid @ 0x14024D940 (MmIsSessionExecutionValid.c)
 *     KeQueryCurrentStackInformation @ 0x1402651D0 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x140295E78 (KeGetNextKernelStackSegment.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402C2860 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x1402C2A70 (RtlpxVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     RtlLocateExtendedFeature2 @ 0x140381150 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpCaptureContext2 @ 0x140407D70 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1405F6134 (RtlWow64GetCpuAreaInfo.c)
 *     PsWow64GetProcessMachine @ 0x14063D4F0 (PsWow64GetProcessMachine.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned __int64 Process; // rbx
  unsigned int v6; // r13d
  __int64 v7; // rcx
  int v8; // r14d
  char v9; // al
  int v10; // ebx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // edx
  char *v21; // r8
  unsigned int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned __int64 v26; // r9
  __int64 v27; // r14
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 *v32; // rcx
  int v33; // ecx
  _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rax
  char NextKernelStackSegment; // dl
  int v37; // r10d
  __int64 v38; // rdx
  __int64 v39; // rbx
  _QWORD *i; // rcx
  unsigned int *v41; // r14
  unsigned __int64 v42; // rcx
  char *v44; // rdx
  unsigned int v45; // r12d
  unsigned int v46; // r13d
  unsigned int v47; // [rsp+50h] [rbp+0h] BYREF
  char v48; // [rsp+54h] [rbp+4h]
  bool v49; // [rsp+55h] [rbp+5h]
  char v50; // [rsp+56h] [rbp+6h] BYREF
  unsigned __int8 v51; // [rsp+57h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp+8h]
  unsigned int v53; // [rsp+60h] [rbp+10h]
  int v54; // [rsp+64h] [rbp+14h]
  unsigned __int64 v55; // [rsp+68h] [rbp+18h]
  unsigned int v56; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp+28h] BYREF
  __int64 v58; // [rsp+80h] [rbp+30h]
  unsigned __int64 v59; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v60; // [rsp+90h] [rbp+40h]
  __int64 j; // [rsp+98h] [rbp+48h]
  unsigned __int64 v62; // [rsp+A0h] [rbp+50h]
  __int64 v63; // [rsp+A8h] [rbp+58h]
  unsigned int v64; // [rsp+B0h] [rbp+60h]
  unsigned int v65; // [rsp+B4h] [rbp+64h]
  void *Teb; // [rsp+B8h] [rbp+68h]
  unsigned __int64 *v67; // [rsp+C0h] [rbp+70h]
  unsigned __int64 v68; // [rsp+C8h] [rbp+78h]
  unsigned __int64 v69; // [rsp+D0h] [rbp+80h]
  int v70; // [rsp+D8h] [rbp+88h]
  int v71; // [rsp+DCh] [rbp+8Ch]
  __int64 v72; // [rsp+E0h] [rbp+90h]
  unsigned __int64 v73; // [rsp+E8h] [rbp+98h]
  __int64 v74; // [rsp+F0h] [rbp+A0h]
  __int64 v75; // [rsp+F8h] [rbp+A8h] BYREF
  unsigned __int64 v76; // [rsp+100h] [rbp+B0h] BYREF
  __int64 v77; // [rsp+108h] [rbp+B8h]
  char *ExtendedFeature2; // [rsp+110h] [rbp+C0h]
  __int128 v79; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v80; // [rsp+128h] [rbp+D8h]
  __int128 v81; // [rsp+138h] [rbp+E8h] BYREF
  unsigned __int64 v82; // [rsp+148h] [rbp+F8h]
  int v83; // [rsp+150h] [rbp+100h]
  __int64 v84; // [rsp+158h] [rbp+108h] BYREF
  __int64 v85; // [rsp+160h] [rbp+110h] BYREF
  __int64 v86; // [rsp+168h] [rbp+118h]
  _QWORD v87[4]; // [rsp+170h] [rbp+120h] BYREF
  _OWORD v88[3]; // [rsp+1A0h] [rbp+150h] BYREF

  v53 = a4;
  v60 = a2;
  v74 = a1;
  v81 = 0LL;
  v82 = 0LL;
  v67 = 0LL;
  v64 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v59 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v57 = 0LL;
  v65 = 0;
  j = 0LL;
  v63 = 0LL;
  v51 = 1;
  CurrentThread = KeGetCurrentThread();
  Process = (unsigned __int64)CurrentThread->ApcState.Process;
  v73 = Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v55 = 0LL;
  v62 = 0LL;
  v6 = 0;
  v47 = 0;
  v54 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v57, &v59) )
    return 0LL;
  v7 = 0LL;
  v77 = 0LL;
  v8 = a3 & 1;
  if ( v8 && (*(_DWORD *)(Process + 2516) & 0x4000) != 0 )
  {
    v7 = KeRaiseExceptionForReturnAddressHijack;
    v77 = KeRaiseExceptionForReturnAddressHijack;
  }
  v9 = 0;
  v48 = 0;
  if ( v7 )
  {
    v9 = 1;
    v48 = 1;
  }
  v10 = 1048587;
  v11 = 0LL;
  if ( v9 )
  {
    v10 = 1048651;
    v11 = 2048LL;
  }
  v12 = v11;
  v70 = 0;
  v71 = 0;
  LODWORD(v72) = 0;
  v13 = 1;
  if ( (v10 & 0x100040) == 0x100040 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
    {
      v15 = v64;
      goto LABEL_12;
    }
    v13 = 3;
  }
  v70 = v13;
  v71 = 16;
  v14 = 1256;
  if ( (v13 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v12 = v11 & (MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL);
    v14 = RtlpGetEntireXStateAreaLength(v12) + 800;
  }
  v15 = (unsigned int)(v14 - 1 + 16);
  LODWORD(v72) = v15;
  v64 = v15;
LABEL_12:
  v16 = v15 + 15;
  if ( v15 + 15 < v15 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  v18 = alloca(v17);
  v19 = alloca(v17);
  HIDWORD(v72) = 0;
  v20 = 1;
  if ( (v10 & 0x100040) != 0x100040 )
    goto LABEL_15;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v20 = 3;
LABEL_15:
    HIDWORD(v72) = v20;
    LODWORD(v58) = v10;
    LODWORD(STACK[0x52C]) = 1232;
    LODWORD(STACK[0x528]) = -1232;
    LODWORD(STACK[0x520]) = -1232;
    LODWORD(STACK[0x524]) = 1256;
    if ( (v20 & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v11 &= MEMORY[0xFFFFF78000000708] | MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
      v45 = RtlpGetEntireXStateAreaLength(v11) - 512;
      memset((void *)((unsigned __int64)&STACK[0x577] & 0xFFFFFFFFFFFFFFC0uLL), 0, v45);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)(((unsigned __int64)&STACK[0x577] & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v11 | 0x8000000000000000uLL;
      v46 = (((unsigned int)&STACK[0x520] + 87) & 0xFFFFFFC0) - (unsigned int)&STACK[0x520];
      LODWORD(STACK[0x530]) = v46;
      LODWORD(STACK[0x534]) = v45;
      LODWORD(STACK[0x524]) = v45 + v46 - LODWORD(STACK[0x520]);
      v6 = v47;
    }
    else
    {
      STACK[0x530] = 25LL;
    }
    v67 = &STACK[0x520];
  }
  RtlpCaptureContext2(&v47);
  v50 = 0;
  v22 = 0;
  v47 = 0;
  v49 = (a3 & 2) != 0;
  if ( !v8 && (dword_140CFB174 & 1) == 0 )
    v65 = 0x80000000;
  v68 = 0LL;
  v69 = 0LL;
  v23 = (__int64)CurrentThread;
  if ( v8 )
  {
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v41 = (unsigned int *)(i - 50);
    v55 = (unsigned __int64)(i - 50);
    v62 = (unsigned __int64)(i - 50);
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(v73) != 332 || *((_BYTE *)v41 + 43) == 2 )
    {
      v25 = v53;
    }
    else
    {
      v25 = v53;
      if ( *((_WORD *)v41 + 184) == 35 )
      {
        v47 = 1;
        if ( RtlpWalkWowStack(v74, v41 + 90, (__int64)Teb, &v47, v60, v53, v41[86], v41[96]) )
        {
          v22 = v47;
          goto LABEL_155;
        }
        v22 = v47;
      }
    }
    v68 = *((_QWORD *)v41 + 48);
    v42 = *((_QWORD *)Teb + 1);
    v69 = v42;
    if ( v42 <= v68 )
      return 0LL;
    if ( v42 > 0x7FFFFFFF0000LL )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( j = *(_QWORD *)(v23 + 40); (*(_BYTE *)(j + 8) & 1) != 0; j = *(_QWORD *)(j + 40) )
      ;
    v24 = *(_QWORD *)(j + 32);
    v63 = v24;
    v51 = _bittestandset((signed __int32 *)(v23 + 116), 5u);
  }
  else
  {
    v24 = v63;
    v25 = v53;
  }
  v58 = v24;
  v79 = 0LL;
  v80 = 0LL;
  v81 = *(_OWORD *)&xmmword_140E00020;
  v82 = qword_140E00030;
LABEL_24:
  v26 = 0xFFFF800000000000uLL;
  while ( 1 )
  {
    v27 = j;
    if ( v6 != 1 )
    {
      v21 = (char *)v82;
      if ( v82 >= 0xFFFF800000000000uLL && byte_140C4FA08[((v82 >> 39) & 0x1FF) - 256] == 1 )
      {
        if ( !(unsigned int)MmIsSessionExecutionValid(v23, v73, v82) )
          goto LABEL_155;
        v26 = 0xFFFF800000000000uLL;
      }
    }
    v28 = v73;
    v76 = 0LL;
    v75 = 0LL;
    v56 = 0;
    if ( (v73 & 7) != 0 )
      goto LABEL_154;
    if ( v73 < v57 || v73 >= v59 )
      break;
LABEL_31:
    v29 = RtlpLookupFunctionEntryForStackWalks(v82, &v81, v21, v26);
    v87[3] = v29;
    if ( v29 )
    {
      v87[2] = 0LL;
      v87[0] = &v57;
      v87[1] = &v59;
      v83 = RtlpxVirtualUnwind(
              v65,
              DWORD2(v81),
              v82,
              v29,
              (__int64)&v47,
              (__int64)&v50,
              (__int64)&v85,
              (__int64)&v84,
              0LL,
              (__int64)v87);
      if ( v83 < 0 )
      {
        v23 = (__int64)CurrentThread;
        goto LABEL_155;
      }
      if ( v50 )
        v49 = 0;
      v30 = v82;
    }
    else
    {
      if ( !*((_QWORD *)&v81 + 1) )
      {
        v23 = (__int64)CurrentThread;
        goto LABEL_155;
      }
      if ( v82 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v73 & 3) != 0 )
          goto LABEL_145;
        v22 = v47;
        v58 = v63;
        v55 = v62;
        v6 = v54;
      }
      v30 = *(_QWORD *)v73;
      v82 = *(_QWORD *)v73;
      v73 += 8LL;
    }
    v31 = v30;
    if ( v6 == 1 && v22 && v77 && v30 == v77 )
    {
      ExtendedFeature2 = (char *)RtlLocateExtendedFeature2(v67, 11LL, 0xFFFFF780000003D8uLL);
      v31 = *(_QWORD *)(*((_QWORD *)ExtendedFeature2 + 1) - 8LL);
      v82 = v31;
    }
    if ( !v31 )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_91;
      if ( (unsigned __int16)PsWow64GetProcessMachine(v73) != 332 )
        goto LABEL_91;
      if ( *(_BYTE *)(v55 + 43) != 2 )
        goto LABEL_91;
      memset(v88, 0, sizeof(v88));
      v39 = (__int64)Teb;
      if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v38, v88) < 0 )
        goto LABEL_91;
      if ( (v88[0] & 3) == 0 )
      {
        if ( RtlpWalkWowStack(
               v74,
               0LL,
               v39,
               &v47,
               v60,
               v25,
               *(_DWORD *)(*(_QWORD *)&v88[0] + 180LL),
               *(_DWORD *)(*(_QWORD *)&v88[0] + 196LL) - 4) )
        {
          v22 = v47;
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        v22 = v47;
LABEL_91:
        v23 = (__int64)CurrentThread;
        goto LABEL_155;
      }
LABEL_145:
      ExRaiseDatatypeMisalignment();
    }
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( v31 > 0x7FFFFFFEFFFFLL )
        {
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        if ( v58 && v31 == *(_QWORD *)(v55 + 360) )
        {
          v6 = 2;
          v54 = 2;
          v82 = *(_QWORD *)(v58 + 312);
          v73 = v58 + 320;
          v74 = *(_QWORD *)(v58 + 248);
          v72 = *(_QWORD *)(v58 + 256);
          v76 = *(_QWORD *)(v58 + 264);
          v75 = *(_QWORD *)(v58 + 272);
          v80 = *(_OWORD *)(v58 + 280);
          v81 = *(_OWORD *)(v58 + 296);
          if ( v48 )
          {
            ExtendedFeature2 = (char *)RtlLocateExtendedFeature2(v67, 11LL, 0xFFFFF780000003D8uLL);
            *(_QWORD *)ExtendedFeature2 = 0LL;
          }
          v58 = *(_QWORD *)(v27 + 32);
          v63 = v58;
          v32 = *(unsigned __int64 **)(v27 + 40);
          if ( !v32 )
          {
            v23 = (__int64)CurrentThread;
            goto LABEL_155;
          }
          j = *(_QWORD *)(v27 + 40);
          v57 = v73;
          v59 = *v32;
        }
      }
      else
      {
        if ( v6 != 2 )
        {
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        if ( v31 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v31 != *(_QWORD *)(v55 + 360) )
          {
            v23 = (__int64)CurrentThread;
            goto LABEL_155;
          }
          v86 = *(_QWORD *)(v55 + 384);
          if ( (v86 & 3) != 0 )
            goto LABEL_145;
          v6 = 1;
          v54 = 1;
          v73 = *(_QWORD *)(v86 + 72);
          v57 = v68;
          v59 = v69;
          v58 = v63;
          if ( v63 )
          {
            v55 = *(_QWORD *)(v63 + 208);
            v62 = v55;
            v22 = v47;
          }
          else
          {
            v22 = v47;
            v55 = v62;
          }
        }
      }
      goto LABEL_43;
    }
    v26 = 0xFFFF800000000000uLL;
    if ( (a3 & 1) == 0 && v31 < 0xFFFF800000000000uLL )
    {
      v23 = (__int64)CurrentThread;
      goto LABEL_155;
    }
    if ( (a3 & 1) != 0 )
    {
      if ( v31 < 0xFFFF800000000000uLL )
      {
        if ( v31 > 0x7FFFFFFEFFFFLL )
        {
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        if ( v31 != *(_QWORD *)(v55 + 360) )
        {
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        v6 = 1;
        v54 = 1;
        if ( v58 )
        {
          v55 = *(_QWORD *)(v58 + 208);
          v62 = v55;
          if ( v55 < 0xFFFF800000000000uLL )
          {
            v23 = (__int64)CurrentThread;
            goto LABEL_155;
          }
        }
        if ( v48 )
        {
          LODWORD(v58) = v58 | 0x100040;
          v21 = (char *)RtlLocateExtendedFeature2(v67, 11LL, 0xFFFFF780000003D8uLL);
          ExtendedFeature2 = v21;
          *(_QWORD *)v21 = 1LL;
          *((_QWORD *)v21 + 1) = __readmsr(0x6A7u);
        }
        v57 = v68;
        v59 = v69;
LABEL_43:
        if ( v22 >= v53 )
          *(_QWORD *)(v74 + 8LL * (v22 - v53)) = v82;
        v47 = ++v22;
        if ( v22 >= v60 )
        {
          v23 = (__int64)CurrentThread;
          goto LABEL_155;
        }
        v25 = v53;
        v23 = (__int64)CurrentThread;
        goto LABEL_24;
      }
      if ( !v22 )
        goto LABEL_43;
      v23 = (__int64)CurrentThread;
    }
    else
    {
      if ( !v49 )
        goto LABEL_43;
      v23 = (__int64)CurrentThread;
    }
  }
  if ( v57 < 0xFFFF800000000000uLL )
    goto LABEL_154;
  KeQueryCurrentStackInformation((__int64)&v56, (__int64)&v75, (__int64)&v76);
  if ( v56 <= 9 )
  {
    v33 = 929;
    if ( _bittest(&v33, v56) )
      goto LABEL_154;
  }
  v34 = KeGetCurrentThread();
  v26 = v56;
  if ( v56 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v34 != KeGetCurrentPrcb()->IdleThread )
    {
      v44 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v21 = &v44[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v21 <= v28 && v28 < (unsigned __int64)v44 )
      {
        v59 = (unsigned __int64)v44;
        v57 = (unsigned __int64)&v44[-(unsigned int)KeKernelStackSize];
        goto LABEL_88;
      }
    }
    v26 = v56;
  }
  LOBYTE(v21) = 0;
  v35 = v79;
  if ( !(_QWORD)v79 )
  {
    KeGetNextKernelStackSegment(v34, &v79, 1);
    v35 = v79;
  }
  NextKernelStackSegment = 1;
  if ( (unsigned int)v26 > 0xA || (v37 = 1090, !_bittest(&v37, v26)) || !(_BYTE)v21 )
  {
    NextKernelStackSegment = KeGetNextKernelStackSegment(v34, &v79, 0);
    v35 = v79;
  }
  if ( NextKernelStackSegment )
  {
    v75 = *((_QWORD *)&v79 + 1);
    v76 = v35;
    if ( v28 >= *((_QWORD *)&v79 + 1) && v28 < v35 )
    {
      v57 = *((_QWORD *)&v79 + 1);
      v59 = v35;
LABEL_88:
      v58 = v63;
      v6 = v54;
      v55 = v62;
      v22 = v47;
      goto LABEL_31;
    }
  }
  v22 = v47;
LABEL_154:
  v23 = (__int64)CurrentThread;
LABEL_155:
  if ( (a3 & 1) != 0 && !v51 )
    *(_DWORD *)(v23 + 116) &= ~0x20u;
  return v22;
}
