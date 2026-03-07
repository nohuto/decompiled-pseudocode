__int64 __fastcall HalpInitializeGenericErrorSource(int a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  int inited; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  int v14; // eax
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  PVOID P; // [rsp+60h] [rbp+40h] BYREF

  P = 0LL;
  if ( !a1 )
    return 0LL;
  if ( !HalpGenericInitDone )
  {
    HalpGenericInitDone = 1;
    qword_140C618C8 = (__int64)&HalpGenericAssistErrorSourceListHead;
    HalpGenericAssistErrorSourceListHead = (__int64)&HalpGenericAssistErrorSourceListHead;
    qword_140C618A8 = (__int64)&HalpGenericSdeiErrorSourceListHead;
    HalpGenericSdeiErrorSourceListHead = (__int64)&HalpGenericSdeiErrorSourceListHead;
    qword_140C61768 = (__int64)&HalpGenericPeiErrorSourceListHead;
    HalpGenericPeiErrorSourceListHead = (__int64)&HalpGenericPeiErrorSourceListHead;
    qword_140C61798 = (__int64)&HalpGenericPolledErrorSourceListHead;
    HalpGenericPolledErrorSourceListHead = (__int64)&HalpGenericPolledErrorSourceListHead;
    qword_140C618B8 = (__int64)&HalpGenericNmiErrorSourceListHead;
    HalpGenericNmiErrorSourceListHead = (__int64)&HalpGenericNmiErrorSourceListHead;
    qword_140C61788 = (__int64)&HalpGenericSeaErrorSourceListHead;
    HalpGenericSeaErrorSourceListHead = (__int64)&HalpGenericSeaErrorSourceListHead;
    qword_140C61778 = (__int64)&HalpGenericSeiErrorSourceListHead;
    HalpGenericSeiErrorSourceListHead = (__int64)&HalpGenericSeiErrorSourceListHead;
  }
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(a2 + 8) == 12 )
      inited = HalpInitGenericErrorSourceEntryV2(a2, &P);
    else
      inited = HalpInitGenericErrorSourceEntry(a2, &P);
    v4 = inited;
    v11 = P;
    *((_QWORD *)P + 2) = MEMORY[0xFFFFF78000000320];
    if ( inited < 0 )
      return v4;
    v12 = (_QWORD *)qword_140C61798;
    if ( *(__int64 **)qword_140C61798 == &HalpGenericPolledErrorSourceListHead )
    {
      v13 = HalpGenericPollingInitDone == 0;
      *v11 = &HalpGenericPolledErrorSourceListHead;
      v11[1] = v12;
      *v12 = v11;
      qword_140C61798 = (__int64)v11;
      if ( v13 )
      {
        HalpGenericPollingInitDone = 1;
        HalpInitGenericErrorSourcePollingRoutine();
      }
      goto LABEL_18;
    }
    goto LABEL_59;
  }
  if ( *(_BYTE *)(a2 + 64) == 1 || *(_BYTE *)(a2 + 64) == 2 )
    return (unsigned int)-1073741637;
  if ( *(_BYTE *)(a2 + 64) != 4 )
  {
    switch ( *(_BYTE *)(a2 + 64) )
    {
      case 8:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v20 = HalpInitGenericErrorSourceEntryV2(a2, &P);
        else
          v20 = HalpInitGenericErrorSourceEntry(a2, &P);
        v4 = v20;
        if ( v20 >= 0 )
        {
          v21 = (_QWORD *)qword_140C61788;
          if ( *(__int64 **)qword_140C61788 != &HalpGenericSeaErrorSourceListHead )
            goto LABEL_59;
          v22 = P;
          *(_QWORD *)P = &HalpGenericSeaErrorSourceListHead;
          v22[1] = v21;
          *v21 = v22;
          qword_140C61788 = (__int64)v22;
        }
        if ( !HalpGenericSeaInitDone )
          HalpGenericSeaInitDone = 1;
        break;
      case 9:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v17 = HalpInitGenericErrorSourceEntryV2(a2, &P);
        else
          v17 = HalpInitGenericErrorSourceEntry(a2, &P);
        v4 = v17;
        if ( v17 >= 0 )
        {
          v18 = (_QWORD *)qword_140C61778;
          if ( *(__int64 **)qword_140C61778 != &HalpGenericSeiErrorSourceListHead )
            goto LABEL_59;
          v19 = P;
          *(_QWORD *)P = &HalpGenericSeiErrorSourceListHead;
          v19[1] = v18;
          *v18 = v19;
          qword_140C61778 = (__int64)v19;
        }
        if ( !HalpGenericSeiInitDone )
          HalpGenericSeiInitDone = 1;
        break;
      case 0xA:
        if ( *(_DWORD *)(a2 + 8) == 12 )
          v14 = HalpInitGenericErrorSourceEntryV2(a2, &P);
        else
          v14 = HalpInitGenericErrorSourceEntry(a2, &P);
        v4 = v14;
        if ( !HalpGenericPeiInitDone )
          HalpGenericPeiInitDone = 1;
        if ( v14 < 0 )
          return v4;
        v15 = P;
        v4 = HalpRegisterPeiErrorSource((unsigned __int64)P);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
        v16 = (_QWORD *)qword_140C61768;
        if ( *(__int64 **)qword_140C61768 == &HalpGenericPeiErrorSourceListHead )
        {
          *v15 = &HalpGenericPeiErrorSourceListHead;
          v15[1] = v16;
          *v16 = v15;
          qword_140C61768 = (__int64)v15;
          goto LABEL_18;
        }
        goto LABEL_59;
      default:
        return (unsigned int)-1073741637;
    }
LABEL_17:
    if ( (v4 & 0x80000000) != 0 )
      return v4;
LABEL_18:
    HalpGenInitialRead(a2);
    return v4;
  }
  if ( *(_DWORD *)(a2 + 8) == 12 )
    v3 = HalpInitGenericErrorSourceEntryV2(a2, &P);
  else
    v3 = HalpInitGenericErrorSourceEntry(a2, &P);
  v4 = v3;
  if ( v3 < 0 )
    goto LABEL_15;
  v5 = P;
  v6 = (__int64 *)*((_QWORD *)P + 5);
  if ( *v6 != -1 )
  {
    v7 = MmMapIoSpaceEx(*v6, *((unsigned int *)P + 12), 0x204u);
    v5[7] = v7;
    if ( v7 )
    {
      v8 = (_QWORD *)qword_140C618B8;
      if ( *(__int64 **)qword_140C618B8 == &HalpGenericNmiErrorSourceListHead )
      {
        *v5 = &HalpGenericNmiErrorSourceListHead;
        v5[1] = v8;
        *v8 = v5;
        qword_140C618B8 = (__int64)v5;
LABEL_15:
        if ( !HalpGenericNmiInitDone )
          HalpGenericNmiInitDone = 1;
        goto LABEL_17;
      }
LABEL_59:
      __fastfail(3u);
    }
  }
  ExFreePoolWithTag(v5, 0x576C6148u);
  return 3221225473LL;
}
