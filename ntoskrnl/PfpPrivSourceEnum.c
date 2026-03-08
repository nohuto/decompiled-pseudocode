/*
 * XREFs of PfpPrivSourceEnum @ 0x1407E7DC0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406AE494 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiFillSessionWorkingSetEntry @ 0x1402FBCF0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x1402FCE88 (MmQuerySystemMemoryInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     RtlStringCbCopyA @ 0x14035BCD8 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x14035BD70 (SmStoreExistsForProcess.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140650B98 (MmQueryProcessWorkingSetSwapPages.c)
 *     ExGetNextProcess @ 0x1406A8CF4 (ExGetNextProcess.c)
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14073AC00 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PfpPrivSourceAdd @ 0x1407E83E0 (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x1407E844C (PsGetProcessDeepFreezeStats.c)
 *     SmProcessQueryStoreStats @ 0x1408A1FF4 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v5; // r15
  struct _EPROCESS *v6; // rsi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  void *i; // rcx
  __int64 NextSession; // rax
  struct _EPROCESS *j; // rcx
  struct _EPROCESS *NextProcess; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int SystemInformation; // ebx
  __int64 v17; // rax
  __int64 *k; // rcx
  int v19; // ebx
  volatile unsigned __int64 NumberOfPrivatePages; // rax
  bool v21; // al
  unsigned int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v28; // [rsp+20h] [rbp-208h] BYREF
  char v29[3]; // [rsp+21h] [rbp-207h] BYREF
  int v30; // [rsp+24h] [rbp-204h]
  __int128 v31; // [rsp+28h] [rbp-200h] BYREF
  __int64 v32; // [rsp+38h] [rbp-1F0h]
  _QWORD v33[12]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-188h]
  _DWORD *v35; // [rsp+A8h] [rbp-180h]
  __int64 v36; // [rsp+B0h] [rbp-178h]
  _DWORD *v37; // [rsp+B8h] [rbp-170h]
  PVOID Object; // [rsp+C0h] [rbp-168h]
  _DWORD *v39; // [rsp+D0h] [rbp-158h]
  __int128 v40; // [rsp+D8h] [rbp-150h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-140h]
  __int64 v42; // [rsp+F8h] [rbp-130h]
  __int128 v43; // [rsp+100h] [rbp-128h] BYREF
  __int128 v44; // [rsp+110h] [rbp-118h]
  __int128 v45; // [rsp+120h] [rbp-108h] BYREF
  _QWORD v46[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+180h] [rbp-A8h]

  v35 = a3;
  v36 = a1;
  v39 = a3;
  memset(v46, 0, sizeof(v46));
  v45 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  LODWORD(v42) = 0;
  v28 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v37 = v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    SystemInformation = -1073741789;
    goto LABEL_46;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v47 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v47 != 8 || (DWORD1(v47) & 0xFFFFFFF8) != 0 || (BYTE4(v47) & 3) == 3 )
  {
    SystemInformation = -1073741811;
    goto LABEL_46;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v28);
    SystemInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v28 = 1;
      goto LABEL_12;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_46;
  }
  if ( !v28 )
  {
    *((_QWORD *)&v31 + 1) = 1LL;
    for ( i = 0LL; ; i = (void *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v5 = (__int64 *)NextSession;
      if ( !NextSession )
        break;
      ++*((_QWORD *)&v31 + 1);
    }
  }
LABEL_12:
  for ( j = 0LL; ; j = NextProcess )
  {
    NextProcess = (struct _EPROCESS *)ExGetNextProcess(j, 0);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v31 + 1);
  }
  if ( *((_QWORD *)&v31 + 1) > 0xFFFFFFFFuLL || (v14 = 96LL * *((_QWORD *)&v31 + 1) + 16, v14 > 0xFFFFFFFF) )
  {
    SystemInformation = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v7) = 96 * DWORD2(v31) + 16;
  v15 = *(_DWORD *)(v36 + 24);
  if ( (unsigned int)v14 > v15 )
  {
    SystemInformation = -1073741789;
    goto LABEL_46;
  }
  HIDWORD(v32) = (v15 - 16) / 0x60;
  *(_QWORD *)&v31 = v37;
  if ( !v28 )
  {
    memset(v33, 0, sizeof(v33));
    HIDWORD(v33[0]) = -1;
    v33[3] = 0xFFFFFFFFLL;
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, "KernelSpace");
    SystemInformation = ZwQuerySystemInformation(119LL, (__int64)v46);
    if ( SystemInformation < 0 )
      goto LABEL_46;
    SystemInformation = MmQuerySystemMemoryInformation(&v45);
    if ( SystemInformation < 0 )
      goto LABEL_46;
    v33[4] = v46[0] >> 12;
    v17 = v45;
    if ( (unsigned __int64)v45 <= v46[0] >> 12 )
      v17 = v46[0] >> 12;
    v33[5] = v17;
    SystemInformation = PfpPrivSourceAdd(&v31, v33);
    if ( SystemInformation < 0 )
      goto LABEL_46;
    for ( k = 0LL; ; k = v5 )
    {
      v5 = (__int64 *)MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v33, 0, sizeof(v33));
      LODWORD(v33[0]) = 1;
      HIDWORD(v33[0]) = MmGetSessionIdEx((__int64)v5);
      v33[3] = HIDWORD(v33[0]);
      MiFillSessionWorkingSetEntry((__int64)&v40, v5[171]);
      v33[4] = v42;
      v33[10] = *((_QWORD *)&v40 + 1);
      v33[9] = *((_QWORD *)&v41 + 1);
      v33[5] = v41;
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, "Session");
      SystemInformation = PfpPrivSourceAdd(&v31, v33);
      if ( SystemInformation < 0 )
        goto LABEL_46;
    }
  }
  v6 = (struct _EPROCESS *)ExGetNextProcess(0LL, v28);
  if ( v6 )
  {
    v19 = BYTE4(v47) & 4;
    v30 = v19;
    do
    {
      memset(v33, 0, sizeof(v33));
      if ( !v19 || (v6->Flags3 & 1) == 0 )
      {
        LODWORD(v33[0]) = 2;
        HIDWORD(v33[0]) = v6->UniqueProcessId;
        LODWORD(v33[1]) = v6->ImagePathHash;
        v33[2] = ((__int64)v6->UniqueProcessId ^ v6->CreateTime.QuadPart) & 0x1FFFFFFFFFFFFFFFLL;
        v33[3] = HIDWORD(v33[0]);
        v33[4] = v6->Vm.Instance.WorkingSetPrivateSize;
        if ( v33[4] > v6->Vm.Instance.WorkingSetSize )
          v33[10] = v33[4];
        else
          v33[10] = v6->Vm.Instance.WorkingSetSize;
        NumberOfPrivatePages = v6->NumberOfPrivatePages;
        v33[5] = NumberOfPrivatePages;
        if ( NumberOfPrivatePages <= v33[4] )
          NumberOfPrivatePages = v33[4];
        v33[5] = NumberOfPrivatePages;
        LODWORD(v33[6]) = MmGetSessionIdEx((__int64)v6);
        v29[0] = 0;
        PsQueryProcessAttributes((__int64)v6, (__int64)v29, 0LL);
        v21 = SmStoreExistsForProcess((__int64)v6);
        v22 = HIDWORD(v33[11]) & 0xFFFFFFE6 | v29[0] & 1 | (8 * v21) & 0xEF | (v6->VmContext != 0LL ? 0x10 : 0);
        HIDWORD(v33[11]) = v22;
        PsGetProcessDeepFreezeStats(v6, &v43);
        if ( *((_QWORD *)&v44 + 1) )
        {
          v22 |= 2u;
          HIDWORD(v33[11]) = v22;
          LODWORD(v33[11]) = *((_QWORD *)&v44 + 1) / 0x2710uLL;
        }
        if ( v6->Vm.Instance.Flags.MemoryPriority == 2 )
          HIDWORD(v33[11]) = v22 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v33[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)v6->ImageFileName);
        if ( (BYTE4(v47) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages((__int64)v6, &v33[9], v23, v24);
        }
        else if ( (BYTE4(v47) & 2) != 0 && (int)SmProcessQueryStoreStats(v6) >= 0 )
        {
          v33[9] = v34 >> 12;
        }
        SystemInformation = PfpPrivSourceAdd(&v31, v33);
        if ( SystemInformation < 0 )
          goto LABEL_46;
        v19 = v30;
      }
      v6 = (struct _EPROCESS *)ExGetNextProcess(v6, v28);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v32 + 16;
  SystemInformation = 0;
LABEL_46:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x6E457350u);
  if ( SystemInformation == -1073741789 )
  {
    v26 = *((_QWORD *)&v31 + 1);
    if ( (unsigned __int64)(unsigned int)(v32 + 1) > *((_QWORD *)&v31 + 1) )
      v26 = (unsigned int)(v32 + 1);
    v7 = 96 * v26 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      SystemInformation = -1073741670;
    }
  }
  *v35 = v7;
  return (unsigned int)SystemInformation;
}
