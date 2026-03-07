__int64 __fastcall ExpGetProcessInformation(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 v6; // r13
  int v7; // edx
  bool v8; // cf
  unsigned int v9; // ebx
  unsigned __int8 PreviousMode; // di
  int v11; // esi
  __int64 v12; // rdx
  PEPROCESS NextProcess; // r12
  unsigned int *NextProcessThread; // rbx
  unsigned int v15; // edi
  __int64 v16; // rcx
  int SessionId; // r14d
  unsigned int v18; // r8d
  __int64 v19; // r15
  int v20; // eax
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rax
  char *v24; // r15
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  bool v29; // zf
  unsigned __int64 v30; // rax
  struct _KTHREAD *CurrentThread; // r14
  struct _KPROCESS *v32; // rcx
  unsigned __int64 *v33; // r12
  int v34; // r15d
  signed __int64 *p_Lock; // rdi
  unsigned __int64 *i; // rsi
  _DWORD *v37; // r14
  char *v38; // rdi
  struct _KPROCESS *v39; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  int Flink_high; // eax
  bool v42; // cl
  int v43; // eax
  unsigned int v44; // eax
  _OWORD *v45; // rax
  _OWORD *v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  char v49; // cl
  char *v50; // r13
  __int64 *v51; // rax
  unsigned int v52; // r9d
  char *v53; // r12
  _WORD *v54; // r8
  _WORD *v55; // rdx
  unsigned int v56; // eax
  unsigned int v57; // ecx
  size_t v58; // r15
  unsigned int v59; // r14d
  int v60; // ecx
  __int64 v61; // rax
  ULONG_PTR v62; // rsi
  unsigned __int64 v63; // r12
  size_t v64; // rdx
  unsigned int v65; // r15d
  int v66; // ecx
  char *v67; // rcx
  _LIST_ENTRY *v68; // rbx
  int v69; // eax
  int v70; // eax
  __int64 result; // rax
  signed __int32 v72[8]; // [rsp+0h] [rbp-608h] BYREF
  int v73; // [rsp+30h] [rbp-5D8h]
  int v74; // [rsp+34h] [rbp-5D4h]
  char v75; // [rsp+38h] [rbp-5D0h]
  int PackageIdentity; // [rsp+3Ch] [rbp-5CCh]
  int v77; // [rsp+40h] [rbp-5C8h]
  unsigned int v78; // [rsp+44h] [rbp-5C4h]
  _BYTE v79[8]; // [rsp+48h] [rbp-5C0h] BYREF
  PVOID v80; // [rsp+50h] [rbp-5B8h]
  PVOID Object; // [rsp+58h] [rbp-5B0h]
  struct _KPROCESS *v82; // [rsp+60h] [rbp-5A8h]
  int v83; // [rsp+68h] [rbp-5A0h]
  __int64 v84; // [rsp+70h] [rbp-598h]
  bool v85; // [rsp+78h] [rbp-590h]
  int v86; // [rsp+84h] [rbp-584h]
  char *v87; // [rsp+88h] [rbp-580h]
  __int64 v88; // [rsp+90h] [rbp-578h]
  void *v89; // [rsp+98h] [rbp-570h]
  size_t Size; // [rsp+A0h] [rbp-568h] BYREF
  unsigned int *v91; // [rsp+A8h] [rbp-560h]
  __int64 v92; // [rsp+B0h] [rbp-558h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-550h] BYREF
  PVOID P; // [rsp+C0h] [rbp-548h] BYREF
  int v95; // [rsp+C8h] [rbp-540h]
  char *v96; // [rsp+D0h] [rbp-538h]
  __int64 *v97; // [rsp+D8h] [rbp-530h]
  _WORD *v98; // [rsp+E0h] [rbp-528h]
  char *v99; // [rsp+E8h] [rbp-520h]
  unsigned __int64 *v100; // [rsp+F0h] [rbp-518h]
  __int64 v101; // [rsp+F8h] [rbp-510h]
  unsigned __int64 v102; // [rsp+100h] [rbp-508h]
  int v103; // [rsp+108h] [rbp-500h]
  unsigned int v104; // [rsp+110h] [rbp-4F8h]
  __int64 CurrentServerSilo; // [rsp+138h] [rbp-4D0h]
  _OWORD v106[2]; // [rsp+190h] [rbp-478h] BYREF
  ULONG_PTR v107; // [rsp+1B0h] [rbp-458h]
  struct _KTHREAD *v108; // [rsp+1B8h] [rbp-450h]
  _QWORD v109[14]; // [rsp+1C0h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-3D8h] BYREF
  _BYTE v111[432]; // [rsp+280h] [rbp-388h] BYREF
  _BYTE v112[144]; // [rsp+430h] [rbp-1D8h] BYREF
  _BYTE v113[256]; // [rsp+4C0h] [rbp-148h] BYREF

  v95 = a5;
  v101 = a1;
  v91 = a3;
  v92 = 130LL;
  memset(v111, 0, sizeof(v111));
  v6 = 0LL;
  v86 = 0;
  LODWORD(Size) = 0;
  v93 = 254LL;
  v82 = 0LL;
  memset(v109, 0, 0x68uLL);
  v79[0] = 0;
  Object = 0LL;
  memset(v106, 0, sizeof(v106));
  v74 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v85 = v95 != 5;
  v7 = 136;
  if ( v95 == 5 )
    v7 = 80;
  v78 = v7;
  v83 = v7;
  v88 = v101;
  v8 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v8 = a2 < 0x270;
  }
  v9 = v8 ? 0xC0000004 : 0;
  v75 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
      v75 = 1;
    v11 = 0;
    PackageIdentity = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (PEPROCESS)PsIdleProcess;
    v80 = PsIdleProcess;
    v82 = (struct _KPROCESS *)PsIdleProcess;
    v73 = v9;
    NextProcessThread = (unsigned int *)Object;
    v15 = v74;
    v84 = v88;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        if ( v73 >= 0 && v84 && (*(_DWORD *)v84 = 0, v11 < 0) )
        {
          v73 = v11;
        }
        else if ( v91 )
        {
          *v91 = v15;
        }
        goto LABEL_212;
      }
      if ( !(unsigned __int8)ExpSysInfoShouldSkipProcess(NextProcess, v12, 0xFFFFFFFFLL)
        && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = MmGetSessionId(v16);
        v103 = SessionId;
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_135:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (PEPROCESS)ExGetNextProcess(NextProcess, v75);
      v80 = NextProcess;
      v82 = NextProcess;
    }
    v19 = v101 + v15;
    v84 = v19;
    v88 = v19;
    v77 = 624;
    v20 = v15 + 624;
    if ( v15 + 624 < v15 )
    {
      v15 = v18;
      v74 = v18;
      v11 = -1073741675;
    }
    else
    {
      v15 += 624;
      v74 = v20;
      v11 = 0;
    }
    PackageIdentity = v11;
    if ( v11 < 0 )
    {
      v73 = v11;
      goto LABEL_212;
    }
    memset(v109, 0, 0x68uLL);
    if ( v15 > a2 )
    {
      v73 = -1073741820;
      if ( !v91 )
        goto LABEL_212;
      v22 = v84;
    }
    else
    {
      v21 = ExpCopyProcessInfo(v19, NextProcess, v85, v109);
      v11 = v21;
      PackageIdentity = v21;
      if ( v21 < 0 )
      {
        v73 = v21;
        goto LABEL_212;
      }
      *(_QWORD *)v19 = 0LL;
      *(_DWORD *)(v19 + 100) = SessionId;
      v22 = v84;
      *(_QWORD *)(v84 + 64) = 0LL;
      *(_DWORD *)(v22 + 56) = 0;
      if ( NextProcess == PsIdleProcess )
        *(_QWORD *)(v22 + 96) = 0LL;
      if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
      {
        v23 = qword_140C65828 << 12;
        *(_QWORD *)(v22 + 144) = qword_140C65828 << 12;
        *(_QWORD *)(v22 + 8) = v23;
      }
      if ( v11 < 0 )
      {
        v73 = v11;
        goto LABEL_212;
      }
    }
    v24 = (char *)(v22 + 256);
    v87 = (char *)(v22 + 256);
    NextProcessThread = (unsigned int *)ExpGetNextProcessThread(NextProcess, 0LL);
    for ( Object = NextProcessThread; ; Object = 0LL )
    {
      while ( 1 )
      {
        if ( !NextProcessThread )
        {
          v37 = v24;
          v96 = v24;
          v89 = v24 + 368;
          v87 = v24 + 368;
          if ( v73 < 0 )
            goto LABEL_105;
          PsQueryProcessAttributes(NextProcess, v79, 0LL);
          *(_QWORD *)(v24 + 52) = 0LL;
          *((_DWORD *)v24 + 84) = 0;
          v38 = v96;
          *((_QWORD *)v96 + 43) = NextProcess[2].Affinity.StaticBitmap[12] << 12;
          *((_QWORD *)v38 + 5) = v109[4];
          *((_DWORD *)v38 + 12) = 0;
          if ( v79[0] )
            *((_DWORD *)v38 + 12) = 1;
          v39 = v82;
          DeepFreezeStartTime = v82[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            *(_OWORD *)v38 = *(_OWORD *)DeepFreezeStartTime;
            *((_OWORD *)v38 + 1) = *(_OWORD *)(DeepFreezeStartTime + 16);
            *((_QWORD *)v38 + 4) = *(_QWORD *)(DeepFreezeStartTime + 32);
          }
          else
          {
            *(_OWORD *)v38 = 0LL;
            *((_OWORD *)v38 + 1) = 0LL;
            *((_QWORD *)v38 + 4) = 0LL;
          }
          Flink_high = HIDWORD(v39[2].Header.WaitListHead.Flink);
          if ( (Flink_high & 0x1000) != 0 )
          {
            *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 2;
          }
          else if ( v39 == (struct _KPROCESS *)PsSecureSystemProcess )
          {
            *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 4;
          }
          else if ( (Flink_high & 0x40000000) != 0 )
          {
            *((_DWORD *)v38 + 12) = *((_DWORD *)v38 + 12) & 0xFFFFFFE1 | 6;
          }
          else
          {
            v42 = *((_QWORD *)&CmpRegistryProcess + 1) && v39 == *((struct _KPROCESS **)&CmpRegistryProcess + 1);
            v79[1] = v42;
            v43 = *((_DWORD *)v24 + 12);
            if ( v42 )
              v44 = v43 & 0xFFFFFFE1 | 8;
            else
              v44 = v43 & 0xFFFFFFE1;
            *((_DWORD *)v24 + 12) = v44;
          }
          *((_QWORD *)v38 + 45) = v39[2].Affinity.StaticBitmap[6];
          PsQueryProcessEnergyValues(v39, v111);
          v45 = v38 + 64;
          v46 = v111;
          v47 = 2LL;
          do
          {
            *v45 = *v46;
            v45[1] = v46[1];
            v45[2] = v46[2];
            v45[3] = v46[3];
            v45[4] = v46[4];
            v45[5] = v46[5];
            v45[6] = v46[6];
            v45 += 8;
            *(v45 - 1) = v46[7];
            v46 += 8;
            --v47;
          }
          while ( v47 );
          *v45 = *v46;
          if ( v39[1].Affinity.StaticBitmap[16] )
            *((_DWORD *)v24 + 88) = *(_DWORD *)(v82[1].Affinity.StaticBitmap[16] + 1452);
          else
            *((_DWORD *)v24 + 88) = 0;
          NextProcess = v82;
          v80 = v82;
          if ( v82->ProcessTimerDelay
            || KeHeteroSystem
            && ((v48 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&v82->0 >> 7) & 0xF], v48 != 7)
             || HIBYTE(v82[1].ActiveProcessors.StaticBitmap[0]) != 1
              ? (v49 = 0)
              : (v49 = 1),
                PpmPerfQosEnabled && (((v48 - 1) & 0xFFFFFFFA) == 0 || v49)) )
          {
            *((_DWORD *)v38 + 12) |= 0x20u;
          }
          v11 = PackageIdentity;
          if ( PackageIdentity < 0 )
          {
            v73 = PackageIdentity;
            NextProcessThread = (unsigned int *)Object;
          }
          else
          {
            v37 = v96;
            NextProcessThread = (unsigned int *)Object;
            v15 = v74;
            v84 = v88;
            v89 = v87;
LABEL_105:
            if ( a5 != 148 )
            {
LABEL_106:
              v50 = (char *)v89;
              goto LABEL_107;
            }
            v62 = PsReferencePrimaryTokenWithTag((__int64)NextProcess, 0x746C6644u);
            v107 = v62;
            SeQueryUserSidToken(v62, Src, 68LL, &Size);
            v93 = 254LL;
            v92 = 130LL;
            PackageIdentity = RtlQueryPackageIdentity(v62, (int)v113, (int)&v93, (int)v112, (__int64)&v92, 0LL);
            if ( PackageIdentity >= 0 )
            {
              v6 = v92;
              v63 = v93;
            }
            else
            {
              v63 = 0LL;
              v93 = 0LL;
              v92 = 0LL;
            }
            ObFastDereferenceObject((signed __int64 *)v80 + 151, v62, 0x746C6644u);
            v64 = (unsigned int)Size;
            v65 = (Size + 7) & 0xFFFFFFF8;
            v86 = v65;
            v66 = v15 + v65;
            if ( v65 + v15 < v15 )
            {
              v15 = -1;
              v74 = -1;
              v11 = -1073741675;
            }
            else
            {
              v15 += v65;
              v74 = v66;
              v11 = 0;
            }
            PackageIdentity = v11;
            if ( v11 < 0 )
            {
              v73 = v11;
            }
            else
            {
              v77 += v65;
              if ( v15 > a2 )
              {
                v73 = -1073741820;
                if ( !v91 )
                  goto LABEL_212;
                v67 = (char *)v89;
              }
              else
              {
                v37[13] = 368;
                memmove(v89, Src, v64);
                v67 = (char *)v89 + v65;
                v89 = v67;
                v87 = v67;
              }
              if ( !v63 )
                goto LABEL_151;
              if ( v63 > 0xFFFFFFFF )
              {
                v73 = -1073741820;
              }
              else
              {
                v86 = v63;
                v69 = v63 + v15;
                if ( (unsigned int)v63 + v15 < v15 )
                {
                  v15 = -1;
                  v74 = -1;
                  v11 = -1073741675;
                }
                else
                {
                  v15 += v63;
                  v74 = v69;
                  v11 = 0;
                }
                PackageIdentity = v11;
                if ( v11 < 0 )
                {
                  v73 = v11;
                }
                else
                {
                  v77 += v63;
                  if ( v15 > a2 )
                  {
                    v73 = -1073741820;
                    if ( !v91 )
                      goto LABEL_212;
                  }
                  else
                  {
                    v37[14] = (_DWORD)v67 - (_DWORD)v37;
                    memmove(v67, v113, (unsigned int)v63);
                    v67 = (char *)v89 + (unsigned int)v63;
                    v89 = v67;
                    v87 = v67;
                  }
LABEL_151:
                  if ( !v6 )
                  {
LABEL_152:
                    NextProcess = (PEPROCESS)v80;
                    goto LABEL_106;
                  }
                  if ( v6 > 0xFFFFFFFF )
                  {
                    v73 = -1073741820;
                  }
                  else
                  {
                    v86 = v6;
                    v70 = v15 + v6;
                    if ( v15 + (unsigned int)v6 < v15 )
                    {
                      v15 = -1;
                      v74 = -1;
                      v11 = -1073741675;
                    }
                    else
                    {
                      v15 += v6;
                      v74 = v70;
                      v11 = 0;
                    }
                    PackageIdentity = v11;
                    if ( v11 < 0 )
                    {
                      v73 = v11;
                    }
                    else
                    {
                      v77 += v6;
                      if ( v15 > a2 )
                      {
                        v73 = -1073741820;
                        if ( !v91 )
                          goto LABEL_212;
                        goto LABEL_152;
                      }
                      v37[84] = (_DWORD)v67 - (_DWORD)v37;
                      memmove(v67, v112, (unsigned int)v6);
                      NextProcess = (PEPROCESS)v80;
                      v50 = (char *)v89 + (unsigned int)v6;
                      v87 = v50;
LABEL_107:
                      if ( NextProcess == PsIdleProcess )
                      {
LABEL_132:
                        if ( v73 < 0 || (*(_DWORD *)v84 = v77, v11 >= 0) )
                        {
                          v6 = 0LL;
                          goto LABEL_135;
                        }
                        v73 = v11;
                      }
                      else
                      {
                        if ( NextProcess == PsInitialSystemProcess )
                        {
                          v51 = &ExpSystemProcessName;
                        }
                        else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
                        {
                          v51 = &ExpSecureSystemProcessName;
                        }
                        else if ( (HIDWORD(NextProcess[2].Header.WaitListHead.Flink) & 0x40000000) != 0 )
                        {
                          v51 = (__int64 *)L"$&";
                        }
                        else
                        {
                          PackageIdentity = PsGetAllocatedFullProcessImageNameEx(NextProcess, &P);
                          if ( PackageIdentity < 0 )
                            v51 = (__int64 *)NextProcess[1].ActiveProcessors.StaticBitmap[2];
                          else
                            v51 = (__int64 *)P;
                        }
                        v97 = v51;
                        v52 = *(unsigned __int16 *)v51;
                        v86 = v52;
                        v53 = v50;
                        v99 = v50;
                        LODWORD(Size) = v52;
                        v54 = (_WORD *)v51[1];
                        v55 = v54;
                        v98 = v54;
                        v56 = v52;
                        v57 = v52;
                        if ( a5 != 148 && v52 )
                        {
                          v55 = &v54[(unsigned __int64)v52 >> 1];
                          v98 = v55;
                          while ( v55 != v54 )
                          {
                            v98 = --v55;
                            if ( *v55 == 92 )
                            {
                              v98 = ++v55;
                              break;
                            }
                          }
                          v52 -= 2 * (v55 - v54);
                          v57 = v52;
                          LODWORD(Size) = v52;
                          v56 = v52;
                        }
                        v58 = v57;
                        v59 = (v56 + 9) & 0xFFFFFFF8;
                        v86 = v59;
                        v60 = v15 + v59;
                        if ( v59 + v15 < v15 )
                        {
                          v15 = -1;
                          v74 = -1;
                          v11 = -1073741675;
                        }
                        else
                        {
                          v15 += v59;
                          v74 = v60;
                          v11 = 0;
                        }
                        PackageIdentity = v11;
                        if ( v11 >= 0 )
                        {
                          v77 += v59;
                          if ( v15 > a2 )
                          {
                            v73 = -1073741820;
                            if ( !v91 )
                              goto LABEL_212;
                          }
                          else
                          {
                            if ( v52 )
                            {
                              memmove(v50, v55, v58);
                              v53 = &v50[2 * (v58 >> 1)];
                              v99 = v53;
                            }
                            *(_WORD *)v53 = 0;
                            v53 += 2;
                            v99 = v53;
                          }
                          if ( P )
                          {
                            ExFreePoolWithTag(P, 0);
                            P = 0LL;
                          }
                          if ( v73 >= 0 )
                          {
                            v61 = v84;
                            *(_WORD *)(v84 + 56) = (_WORD)v53 - (_WORD)v50 - 2;
                            *(_WORD *)(v61 + 58) = v59;
                            *(_QWORD *)(v61 + 64) = v50;
                          }
                          NextProcess = (PEPROCESS)v80;
                          goto LABEL_132;
                        }
                        v73 = v11;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_212:
          if ( v80 && v80 != PsIdleProcess )
            ObfDereferenceObjectWithTag(v80, 0x6E457350u);
          if ( NextProcessThread && *((PVOID *)NextProcessThread + 68) != PsIdleProcess )
            ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v73;
        }
        v104 = NextProcessThread[1];
        if ( !(_BYTE)v104 )
        {
          v25 = v78 + v15;
          if ( v78 + v15 < v15 )
          {
            v25 = -1;
            v11 = -1073741675;
          }
          else
          {
            v11 = 0;
          }
          v74 = v25;
          v15 = v25;
          PackageIdentity = v11;
          if ( v11 < 0 )
          {
            v73 = v11;
            goto LABEL_212;
          }
          v77 += v78;
          if ( v25 > a2 )
          {
            v73 = -1073741820;
            if ( !v91 )
              goto LABEL_212;
          }
          else
          {
            KeQueryValuesThread((__int64)NextProcessThread, (__int64)v106);
            v26 = BYTE8(v106[0]);
            if ( BYTE8(v106[0]) == 4 )
            {
              v77 -= v78;
              v15 -= v78;
              v74 = v15;
            }
            else
            {
              *((_DWORD *)v24 + 6) = v106[0];
              *((_DWORD *)v24 + 17) = v26;
              *((_DWORD *)v24 + 18) = BYTE9(v106[0]);
              *((_DWORD *)v24 + 14) = SBYTE10(v106[0]);
              *((_DWORD *)v24 + 15) = SBYTE11(v106[0]);
              v27 = (unsigned int)KeMaximumIncrement;
              *(_QWORD *)v24 = (unsigned int)KeMaximumIncrement * (unsigned __int64)NextProcessThread[163];
              *((_QWORD *)v24 + 1) = v27 * NextProcessThread[183];
              *((_QWORD *)v24 + 2) = *((_QWORD *)NextProcessThread + 144);
              *((_DWORD *)v24 + 16) = NextProcessThread[85];
              *(_OWORD *)(v24 + 40) = *(_OWORD *)(NextProcessThread + 306);
              if ( (NextProcessThread[29] & 0x400) != 0 )
              {
                v28 = *((_QWORD *)NextProcessThread + 164);
              }
              else
              {
                if ( (NextProcessThread[346] & 8) != 0
                  || (v28 = *((_QWORD *)Object + 148), _InterlockedOr(v72, 0), (NextProcessThread[346] & 8) != 0) )
                {
                  v28 = 0LL;
                }
                NextProcess = v82;
                v80 = v82;
                v11 = PackageIdentity;
                NextProcessThread = (unsigned int *)Object;
                v15 = v74;
                v22 = v88;
                v84 = v88;
                v24 = v87;
              }
              v102 = v28;
              if ( v75 && v28 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v24 + 4) = 0LL;
              else
                *((_QWORD *)v24 + 4) = v28;
              if ( v95 != 5 )
              {
                v29 = v75 == 0;
                if ( v75 )
                {
                  *((_QWORD *)v24 + 10) = 0LL;
                  *((_QWORD *)v24 + 11) = 0LL;
                }
                else
                {
                  *((_QWORD *)v24 + 10) = *((_QWORD *)NextProcessThread + 7);
                  *((_QWORD *)v24 + 11) = *((_QWORD *)NextProcessThread + 6);
                  NextProcess = v82;
                  v80 = v82;
                  v11 = PackageIdentity;
                  NextProcessThread = (unsigned int *)Object;
                  v15 = v74;
                  v22 = v88;
                  v84 = v88;
                  v24 = v87;
                }
                v30 = *((_QWORD *)NextProcessThread + 164);
                v102 = v30;
                if ( v29 || v30 <= 0x7FFFFFFEFFFFLL )
                  *((_QWORD *)v24 + 12) = v30;
                else
                  *((_QWORD *)v24 + 12) = 0LL;
                *((_QWORD *)v24 + 13) = *((_QWORD *)NextProcessThread + 30);
                *((_QWORD *)v24 + 14) = 0LL;
                *((_QWORD *)v24 + 15) = 0LL;
                *((_QWORD *)v24 + 16) = 0LL;
              }
              ++*(_DWORD *)(v22 + 4);
              if ( v11 < 0 )
              {
                v73 = v11;
                goto LABEL_212;
              }
              v24 += v78;
              v87 = v24;
            }
          }
        }
        if ( NextProcess == PsIdleProcess )
          break;
        NextProcessThread = 0LL;
        v100 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v108 = CurrentThread;
        v32 = v82;
        v33 = &v82[1].ActiveProcessors.StaticBitmap[6];
        v34 = 0;
        --CurrentThread->KernelApcDisable;
        p_Lock = (signed __int64 *)&v32[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v32[1], 0LL);
        for ( i = (unsigned __int64 *)*((_QWORD *)Object + 167); i != v33; i = (unsigned __int64 *)*i )
        {
          NextProcessThread = (unsigned int *)(i - 167);
          v100 = i - 167;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 167)) )
          {
            v34 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v34 )
        {
          NextProcessThread = 0LL;
          v100 = 0LL;
        }
        NextProcess = v82;
        v80 = v82;
        v11 = PackageIdentity;
        v15 = v74;
        v22 = v88;
        v84 = v88;
        v24 = v87;
LABEL_64:
        Object = NextProcessThread;
      }
      v68 = (_LIST_ENTRY *)*((_QWORD *)NextProcessThread + 95);
      if ( v68 != &NextProcess->ThreadListHead )
      {
        NextProcessThread = (unsigned int *)&v68[-48].Blink;
        KeSynchronizeWithDynamicProcessors();
        goto LABEL_64;
      }
      NextProcessThread = 0LL;
    }
  }
  return result;
}
