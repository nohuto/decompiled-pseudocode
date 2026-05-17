/*
 * XREFs of AVrfInitializeVerifier @ 0x1800D97D8
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A70 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D048 (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x1800765D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A27A0 (_alloca_probe.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D43FC (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DA4E8 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800DA9E4 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC38 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DAF60 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DB214 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB4A0 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  struct _PEB *v7; // rsi
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *j; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v23; // al
  int v24; // ecx
  int v25; // ebx
  char *v26; // rbx
  int ValueKey; // eax
  __int64 v28; // rsi
  int v29; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v32; // eax
  char *v33; // rbx
  int v34; // eax
  __int64 v35; // rsi
  int v36; // ecx
  void *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  char *v40; // rbx
  int v41; // eax
  __int64 v42; // rsi
  int v43; // ecx
  void *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  char *v47; // rbx
  int v48; // eax
  void *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  size_t v54; // r8
  __int64 v56; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v58[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v59; // [rsp+34h] [rbp-CCh]
  unsigned int v60; // [rsp+38h] [rbp-C8h]
  unsigned int v61; // [rsp+3Ch] [rbp-C4h]
  unsigned int v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v65[4]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v66; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v67[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v68; // [rsp+68h] [rbp-98h]
  unsigned __int16 v69[4]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  __int64 v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  _QWORD *v75; // [rsp+A0h] [rbp-60h]
  _BYTE v76[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-48h] BYREF
  char v78; // [rsp+C0h] [rbp-40h] BYREF
  char v79; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v80; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v81; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v73 = a5;
  v75 = a6;
  v74 = a2;
  v64 = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v63 = 1;
    }
    else
    {
      v23 = LdrpPayloadRestrictionMitigationsEnabled();
      v24 = 0;
      if ( v23 )
        v24 = 2;
      v63 = v24;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v25 = 0, a1) )
      v25 = 294916;
    AVrfpVerifierFlags = v25;
    AVrfpVerifierDllsString = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v65, (__int64)L"VerifierFlags") >= 0 )
    {
      v26 = &v78;
      ValueKey = NtQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v59);
            v28 = Heap;
            if ( !Heap )
              break;
            v26 = (char *)Heap;
            v32 = NtQueryValueKey();
            v6 = 0LL;
            if ( v32 >= 0 )
              goto LABEL_43;
            if ( v32 != -2147483643 )
              goto LABEL_59;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v26);
          }
          v6 = 0LL;
        }
      }
      else
      {
        v28 = 0LL;
LABEL_43:
        v29 = *((_DWORD *)v26 + 1);
        if ( ((v29 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v29 == 4 )
          {
            if ( *((_DWORD *)v26 + 2) == 4 )
            {
              v59 = 4;
              v64 = *((_DWORD *)v26 + 3);
            }
          }
          else if ( v29 == 1 && ((unsigned __int8)&v64 & 3) == 0 )
          {
            v59 = 4;
            v66 = v26 + 12;
            v65[0] = *((_WORD *)v26 + 4);
            v65[1] = *((_WORD *)v26 + 4);
            RtlUnicodeStringToInteger(v65, 0, &v64);
          }
        }
        else if ( v29 == 4 )
        {
          v59 = *((_DWORD *)v26 + 2);
          if ( *((_DWORD *)v26 + 2) <= 4u )
            memmove(&v64, v26 + 12, *((unsigned int *)v26 + 2));
        }
LABEL_59:
        if ( v28 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28);
        LOBYTE(v25) = v64;
        if ( v64 )
        {
          AVrfpVerifierFlags = v64;
LABEL_67:
          if ( !a3 )
            goto LABEL_131;
          if ( (v25 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v67, (__int64)L"HandleTraces") >= 0 )
          {
            v33 = &v79;
            v34 = NtQueryValueKey();
            if ( v34 < 0 )
            {
              if ( v34 == -2147483643 )
              {
                while ( 1 )
                {
                  v37 = NtCurrentPeb()->ProcessHeap;
                  if ( !v37 )
                    break;
                  v38 = RtlAllocateHeap((__int64)v37, NtdllBaseTag + 1572864, v60);
                  v35 = v38;
                  if ( !v38 )
                    break;
                  v33 = (char *)v38;
                  v39 = NtQueryValueKey();
                  v6 = 0LL;
                  if ( v39 >= 0 )
                    goto LABEL_72;
                  if ( v39 != -2147483643 )
                    goto LABEL_88;
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v33);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v35 = 0LL;
LABEL_72:
              v36 = *((_DWORD *)v33 + 1);
              if ( ((v36 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v36 == 4 )
                {
                  if ( *((_DWORD *)v33 + 2) == 4 )
                  {
                    v60 = 4;
                    AVrfpHandleTraces = *((_DWORD *)v33 + 3);
                  }
                }
                else if ( v36 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
                {
                  v60 = 4;
                  v68 = v33 + 12;
                  v67[0] = *((_WORD *)v33 + 4);
                  v67[1] = *((_WORD *)v33 + 4);
                  RtlUnicodeStringToInteger(v67, 0, &AVrfpHandleTraces);
                }
              }
              else if ( v36 == 4 )
              {
                v60 = *((_DWORD *)v33 + 2);
                if ( *((_DWORD *)v33 + 2) <= 4u )
                  memmove(&AVrfpHandleTraces, v33 + 12, *((unsigned int *)v33 + 2));
              }
LABEL_88:
              if ( v35 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v35);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v69, (__int64)L"VerifierDebug") >= 0 )
          {
            v40 = &v80;
            v41 = NtQueryValueKey();
            if ( v41 < 0 )
            {
              if ( v41 == -2147483643 )
              {
                while ( 1 )
                {
                  v44 = NtCurrentPeb()->ProcessHeap;
                  if ( !v44 )
                    break;
                  v45 = RtlAllocateHeap((__int64)v44, NtdllBaseTag + 1572864, v61);
                  v42 = v45;
                  if ( !v45 )
                    break;
                  v40 = (char *)v45;
                  v46 = NtQueryValueKey();
                  v6 = 0LL;
                  if ( v46 >= 0 )
                    goto LABEL_94;
                  if ( v46 != -2147483643 )
                    goto LABEL_110;
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v40);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v42 = 0LL;
LABEL_94:
              v43 = *((_DWORD *)v40 + 1);
              if ( ((v43 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v43 == 4 )
                {
                  if ( *((_DWORD *)v40 + 2) == 4 )
                  {
                    v61 = 4;
                    AVrfpDebug = *((_DWORD *)v40 + 3);
                  }
                }
                else if ( v43 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
                {
                  v61 = 4;
                  v70 = v40 + 12;
                  v69[0] = *((_WORD *)v40 + 4);
                  v69[1] = *((_WORD *)v40 + 4);
                  RtlUnicodeStringToInteger(v69, 0, &AVrfpDebug);
                }
              }
              else if ( v43 == 4 )
              {
                v61 = *((_DWORD *)v40 + 2);
                if ( *((_DWORD *)v40 + 2) <= 4u )
                  memmove(&AVrfpDebug, v40 + 12, *((unsigned int *)v40 + 2));
              }
LABEL_110:
              if ( v42 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v42);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v76, (__int64)L"VerifierDlls") < 0 )
            goto LABEL_131;
          v47 = &v81;
          v48 = NtQueryValueKey();
          if ( v48 < 0 )
          {
            if ( v48 == -2147483643 )
            {
              while ( 1 )
              {
                v49 = NtCurrentPeb()->ProcessHeap;
                if ( !v49 )
                  break;
                v50 = RtlAllocateHeap((__int64)v49, NtdllBaseTag + 1572864, v62);
                v6 = v50;
                if ( !v50 )
                  break;
                v47 = (char *)v50;
                v51 = NtQueryValueKey();
                if ( v51 >= 0 )
                  goto LABEL_121;
                if ( v51 != -2147483643 )
                  goto LABEL_129;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v47);
              }
            }
            goto LABEL_131;
          }
LABEL_121:
          v52 = *((_DWORD *)v47 + 1);
          if ( ((v52 - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( v52 == 1 )
            {
              v53 = *((_DWORD *)v47 + 2);
              v62 = v53;
              if ( v53 <= 0x200 )
              {
                v54 = v53;
LABEL_128:
                memmove(&AVrfpVerifierDllsString, v47 + 12, v54);
              }
            }
          }
          else if ( v52 == 1 )
          {
            v62 = *((_DWORD *)v47 + 2);
            if ( *((_DWORD *)v47 + 2) <= 0x200u )
            {
              v54 = *((unsigned int *)v47 + 2);
              goto LABEL_128;
            }
          }
LABEL_129:
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_131:
          Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, v74, a3, v73, (__int64)&AvrfpLoaderEntry);
          if ( Dll >= 0 )
          {
            *v75 = &AvrfpLoaderEntry;
            Dll = AVrfpEnableVerifierOptions();
            if ( Dll >= 0 )
            {
              LdrProtectMrdata(0);
              AvrfAppVerifierMode = v63;
              LdrProtectMrdata(1);
            }
          }
          return (unsigned int)Dll;
        }
      }
      LOBYTE(v25) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_67;
  }
  if ( a4 != 1 )
    return 0;
  qword_18016B718 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0LL, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      v58[0] = 0;
      Dll = LdrpInitializeGraphRecurse(qword_18016B840, 0LL, v58);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        93,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_18016C4D0 + 96),
        LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        LODWORD(v56) = NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          93,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_18016C4D0 + 96),
          v56);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return (unsigned int)Dll;
      }
      for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
      {
        if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
          return (unsigned int)-1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v71, 0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v16 = qword_18016B750;
      }
      else
      {
        v16 = *(_QWORD *)(v71 + 48);
        LdrpDereferenceModule(v71, v13, v14, v15);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v16, &AvrfpAPILookupCallbackName, 0, &v72, 1, retaddr);
      LdrProtectMrdata(0);
      if ( ProcedureAddressForCaller >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR8__(v72 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v19 = j[4];
        v57 = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v19 + 152), 0LL, &v57);
        if ( Dll < 0 )
          return (unsigned int)Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        v20 = (__int64 *)AVrfpVerifierProvidersList;
        while ( v20 != &AVrfpVerifierProvidersList )
        {
          v21 = v20[3];
          v20 = (__int64 *)*v20;
          DbgPrint("AVRF: provider %ws \n", v21);
        }
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3, (unsigned __int64)v7->ImageBaseAddress, 0LL, &v77);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
