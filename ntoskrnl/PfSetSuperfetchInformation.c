__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edi
  int v11; // ecx
  int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  char *v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-A8h]
  int v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  int v23; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+68h] [rbp-80h]
  __int64 v25; // [rsp+70h] [rbp-78h]
  int v26; // [rsp+78h] [rbp-70h]
  void *Src[2]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+90h] [rbp-58h]
  int v29; // [rsp+94h] [rbp-54h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp-48h]
  __int128 v32; // [rsp+A8h] [rbp-40h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-30h]
  unsigned int v34; // [rsp+F0h] [rbp+8h] BYREF
  KPROCESSOR_MODE v35; // [rsp+108h] [rbp+20h]

  v35 = a4;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  v25 = 0LL;
  v26 = 0;
  v34 = 0;
  v31 = 0LL;
  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v9 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  v19 = 0LL;
  v20 = 0LL;
  v19 = *a2;
  v20 = a2[1];
  if ( (_QWORD)v19 != 0x6B7568430000002DLL )
    goto LABEL_111;
  if ( DWORD2(v19) == 14 )
  {
    v8 = PfpRpControlRequest((__int64)&v19, a4);
    goto LABEL_11;
  }
  if ( SDWORD2(v19) > 14 )
  {
    switch ( DWORD2(v19) )
    {
      case 0xF:
        if ( DWORD2(v20) != 4 )
          goto LABEL_86;
        if ( a4 && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v29 = *(_DWORD *)v20;
        v21 = v29 + dword_140C64C2C;
        v9 = PfpSetParameter(KeyHandle, 4u);
        if ( v9 >= 0 )
          dword_140C64C2C = v21;
        break;
      case 0x12:
        if ( DWORD2(v20) != 12 )
          goto LABEL_86;
        if ( a4 && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = *(_QWORD *)v20;
        v12 = *(_DWORD *)(v20 + 8);
        v23 = v12;
        if ( (_DWORD)v22 != 2 || HIDWORD(v22) >= 2 || (v12 & 0xFFFFFFFC) != 0 )
        {
LABEL_111:
          v9 = -1073741811;
          break;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
        if ( HIDWORD(v22) )
        {
          v15 = dword_140C64DC8 & ~v23;
          PfTCleanup(&PfTGlobals, &PfKernelGlobals);
          PfTInitialize(&PfTGlobals, &PfKernelGlobals, 1LL);
        }
        else
        {
          v15 = v23 & ~dword_140C64DC8;
        }
        v9 = PfTStart(&PfTGlobals, v14, v15);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
        KeAbPostRelease((ULONG_PTR)&PfTGlobals);
        KeLeaveCriticalRegion();
        PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_140C64C30);
        break;
      case 0x13:
        if ( DWORD2(v20) == 12 )
        {
          v9 = 0;
          if ( a4 && (v20 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v25 = *(_QWORD *)v20;
          v11 = *(_DWORD *)(v20 + 8);
          v26 = v11;
          if ( (_DWORD)v25 == 2 && SHIDWORD(v25) < 5 && (unsigned __int8)v26 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
          {
            LOBYTE(v34) = BYTE4(v25);
            BYTE1(v34) = v26;
            HIWORD(v34) = BYTE1(v11);
            MmSetTrimWhileAgingState(v34);
            break;
          }
          goto LABEL_111;
        }
        goto LABEL_86;
      case 0x16:
        goto LABEL_10;
      case 0x19:
        if ( DWORD2(v20) == 8 )
        {
          v9 = 0;
          if ( a4 && (v20 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v31 = *(_QWORD *)v20;
          if ( (_DWORD)v31 == 1 )
          {
            MmSetMinimumAgeRate(HIDWORD(v31));
            break;
          }
          goto LABEL_111;
        }
        goto LABEL_86;
      case 0x1A:
        LOBYTE(v7) = a4;
        v8 = PfpDeprioritizeOldPagesInWs(&v19, v7);
        goto LABEL_11;
      case 0x1D:
LABEL_10:
        v8 = PfpPfnPrioRequest((__int64)&v19, a4, &v34);
LABEL_11:
        v9 = v8;
        break;
      default:
LABEL_102:
        v9 = -1073741821;
        break;
    }
  }
  else
  {
    switch ( DWORD2(v19) )
    {
      case 3:
        v16 = 16;
        if ( DWORD2(v20) != 16 )
          goto LABEL_86;
        if ( a4 && (v20 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_OWORD *)Src = *(_OWORD *)v20;
        if ( !Src[1] )
          goto LABEL_111;
        v17 = LODWORD(Src[0]) >> 7;
        if ( !(_DWORD)v17 )
          goto LABEL_111;
        switch ( (__int64)Src[0] & 0x1F )
        {
          case 2LL:
          case 3LL:
            v16 = 36;
            break;
          case 5LL:
            v16 = 12;
            break;
          case 27LL:
            break;
          default:
            v9 = -1073741637;
            goto LABEL_12;
        }
        if ( (unsigned int)v17 < v16 || (unsigned int)v17 >= 0xFF0 )
          goto LABEL_111;
        P = (PVOID)ExAllocatePool2(256LL, v17, 1145398864LL);
        if ( P )
        {
          if ( a4 )
          {
            if ( ((__int64)Src[1] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v18 = (char *)Src[1] + ((unsigned __int64)LODWORD(Src[0]) >> 7);
            if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src[1] )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(P, Src[1], (unsigned __int64)LODWORD(Src[0]) >> 7);
          Src[1] = P;
          v8 = PfpLogEventRequest(Src);
          goto LABEL_11;
        }
        v9 = -1073741670;
        break;
      case 4:
        PfGenerateTrace((__int64)&Thread, 0);
        v9 = 0;
        break;
      case 5:
        v8 = PfpPrefetchRequest((__int64)&v19, a4);
        goto LABEL_11;
      case 7:
        goto LABEL_10;
      case 0xA:
        if ( DWORD2(v20) == 32 )
        {
          if ( a4 && (v20 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v32 = *(_OWORD *)v20;
          v33 = *(_OWORD *)(v20 + 16);
          LOBYTE(v7) = a4;
          v8 = PfpProcessScenarioPhase(&v32, v7);
          goto LABEL_11;
        }
        goto LABEL_86;
      case 0xB:
        if ( DWORD2(v20) != 4 )
          goto LABEL_86;
        if ( a4 && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v28 = *(_DWORD *)v20;
        v9 = -1073741431;
        if ( (int)PfTSetTraceWorkerPriority(v28) <= 31 )
          v9 = 0;
        break;
      case 0xD:
        if ( DWORD2(v20) == 8 )
        {
          if ( a4 && (v20 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v30 = *(_QWORD *)v20;
          if ( (_WORD)v30 == 1 && (unsigned int)(HIDWORD(v30) - 1) <= 4 )
          {
            v8 = PfpScenCtxPrefetchStateSet((ULONG_PTR)&qword_140C64C30);
            goto LABEL_11;
          }
          goto LABEL_111;
        }
LABEL_86:
        v9 = -1073741306;
        break;
      default:
        goto LABEL_102;
    }
  }
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
