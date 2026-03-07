__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r12
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  int SharedResourceNtObject; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  _OWORD *v13; // rax
  __int64 v14; // rsi
  size_t v15; // r8
  const void *v16; // rdx
  size_t v17; // r8
  const void *v18; // rdx
  const void *v19; // rdi
  size_t v20; // r8
  ACCESS_MASK *v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // esi
  int EntryType; // r14d
  unsigned int v31; // edx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rcx
  PVOID *v35; // r14
  __int64 v36; // rsi
  PVOID *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r9
  PVOID *v40; // r14
  __int64 v41; // r9
  KPROCESSOR_MODE v42; // r14
  int v43; // eax
  _DWORD *v44; // rsi
  char *v45; // r14
  int v46; // r14d
  NTSTATUS inserted; // eax
  BOOLEAN IsKernelHandle; // al
  void **v49; // rdx
  unsigned int v50; // esi
  unsigned int i; // eax
  PVOID v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2D0h]
  unsigned __int8 v58; // [rsp+51h] [rbp-2A7h]
  PVOID Object; // [rsp+60h] [rbp-298h] BYREF
  int v60; // [rsp+68h] [rbp-290h] BYREF
  __int64 v61; // [rsp+70h] [rbp-288h]
  char v62; // [rsp+78h] [rbp-280h]
  HANDLE v63; // [rsp+80h] [rbp-278h] BYREF
  struct DXGPROCESS *v64; // [rsp+88h] [rbp-270h]
  void *Src[10]; // [rsp+90h] [rbp-268h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-218h]
  PVOID *v67; // [rsp+E8h] [rbp-210h]
  _BYTE v68[24]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v69; // [rsp+108h] [rbp-1F0h]
  __int128 v70; // [rsp+118h] [rbp-1E0h]
  __int128 v71; // [rsp+128h] [rbp-1D0h]
  ACCESS_MASK v72[16]; // [rsp+140h] [rbp-1B8h] BYREF
  _DWORD v73[16]; // [rsp+180h] [rbp-178h] BYREF
  PVOID v74[16]; // [rsp+1C0h] [rbp-138h] BYREF
  _QWORD v75[16]; // [rsp+240h] [rbp-B8h] BYREF

  v6 = a1;
  v58 = a1;
  v66 = a6;
  v60 = -1;
  v61 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v62 = 1;
    v60 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 2157);
  Current = DXGPROCESS::GetCurrent(v7);
  v64 = Current;
  if ( !Current )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  memset(Src, 0, sizeof(Src));
  if ( v6 == 1 )
  {
    v13 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v13;
    *(_OWORD *)&Src[2] = v13[1];
    *(_OWORD *)&Src[4] = v13[2];
    *(_OWORD *)&Src[6] = v13[3];
    *(_OWORD *)&Src[8] = v13[4];
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)&Src[2] = *(_OWORD *)(a5 + 16);
    *(_OWORD *)&Src[4] = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&Src[6] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&Src[8] = *(_OWORD *)(a5 + 64);
  }
  Src[9] = 0LL;
  v14 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) <= 0xF )
  {
    if ( ((-1 << SLOBYTE(Src[0])) & (__int64)Src[8]) != 0 )
    {
      SharedResourceNtObject = -1073741811;
      WdLogSingleEntry3(2LL, LODWORD(Src[8]), LODWORD(Src[0]), -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"AccessInheritMask (0x%I64x) is invalid for Input handle count (0x%I64x). Returning 0x%I64x",
        LODWORD(Src[8]),
        LODWORD(Src[0]),
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_7;
    }
    memset(v73, 0, sizeof(v73));
    memset(v75, 0, sizeof(v75));
    memset(v72, 0, sizeof(v72));
    if ( v6 == 1 )
    {
      v15 = 4LL * LODWORD(Src[0]);
      v16 = Src[1];
      if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v73, v16, v15);
      v17 = 8LL * LODWORD(Src[0]);
      v18 = Src[2];
      if ( (char *)Src[2] + v17 < Src[2] || (char *)Src[2] + v17 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v75, v18, v17);
      v19 = Src[3];
      if ( Src[3] )
      {
        v20 = 4LL * LODWORD(Src[0]);
        if ( (char *)Src[3] + v20 < Src[3] || (char *)Src[3] + v20 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v72, v19, v20);
        v19 = Src[3];
      }
      LODWORD(v14) = Src[0];
    }
    else
    {
      memmove(v73, Src[1], 4LL * LODWORD(Src[0]));
      memmove(v75, Src[2], 8 * v14);
      v19 = Src[3];
      if ( Src[3] )
        memmove(v72, Src[3], 4 * v14);
      Current = v64;
    }
    if ( !v19 )
    {
      v21 = v72;
      v22 = (unsigned int)v14;
      if ( (_DWORD)v14 )
      {
        if ( ((unsigned __int8)v72 & 4) != 0 )
        {
          v72[0] = 0x10000000;
          v22 = (unsigned int)v14 - 1LL;
          if ( (unsigned int)v14 == 1LL )
            goto LABEL_40;
          v21 = &v72[1];
        }
        memset64(v21, 0x1000000010000000uLL, v22 >> 1);
        if ( (v22 & 1) != 0 )
          v21[v22 - 1] = 0x10000000;
      }
    }
LABEL_40:
    Object = 0LL;
    memset(v74, 0, sizeof(v74));
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    v25 = 0;
    LODWORD(v63) = 0;
    if ( (_DWORD)v14 )
    {
      while ( 1 )
      {
        v26 = v25;
        v27 = v25;
        v28 = v66;
        if ( v66 && *(_QWORD *)(v66 + 8LL * v25) )
        {
          v29 = v73[v25];
          EntryType = v29;
        }
        else
        {
          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v68, Current);
          v29 = v73[v26];
          v31 = (v29 >> 6) & 0xFFFFFF;
          if ( v31 < *((_DWORD *)Current + 74)
            && (v32 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v31 + 8), v29 >> 30 == ((v32 >> 5) & 3))
            && (v32 & 0x2000) == 0
            && (v32 & 0x1F) != 0 )
          {
            EntryType = HMGRTABLE::GetEntryType((__int64)Current + 280, v31);
          }
          else
          {
            EntryType = 0;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
          v28 = v66;
        }
        if ( EntryType == 4 )
        {
          v40 = &v74[v27];
          v41 = 0LL;
          if ( v28 )
            v41 = *(_QWORD *)(v27 * 8 + v28);
          SharedResourceNtObject = CreateSharedResourceNtObject(v6, v28, v29, v41, v75[v27], 1, &v74[v27]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( !*v40 )
              goto LABEL_76;
            v36 = 2144LL;
            WdLogSingleEntry1(1LL, 2144LL);
LABEL_75:
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Objects[i] == NULL", v36, 0LL, 0LL, 0LL, 0LL);
LABEL_76:
            v42 = a2;
LABEL_100:
            if ( Src[9] )
            {
              ObCloseHandle(Src[9], v42);
              Src[9] = 0LL;
            }
            else if ( Object )
            {
              ObfDereferenceObject(Object);
              Object = 0LL;
            }
            else
            {
              v50 = 0;
              for ( i = (unsigned int)Src[0]; v50 < i; ++v50 )
              {
                v52 = v74[v50];
                if ( v52 )
                {
                  ObfDereferenceObject(v52);
                  v74[v50] = 0LL;
                  i = (unsigned int)Src[0];
                }
              }
            }
LABEL_7:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
            if ( v62 )
            {
              v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_116:
              if ( v12 )
                McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v60);
            }
            return (unsigned int)SharedResourceNtObject;
          }
        }
        else
        {
          if ( EntryType != 8 )
          {
            v33 = (unsigned int)(EntryType - 9);
            if ( EntryType == 9 )
            {
              v37 = &v74[v27];
              LODWORD(v33) = v6;
              SharedResourceNtObject = CreateSharedKeyedMutexNtObject(
                                         v33,
                                         v28,
                                         v29,
                                         v24,
                                         v75[v27],
                                         (__int64)Handle,
                                         &v74[v27]);
              if ( SharedResourceNtObject < 0 )
              {
                if ( !*v37 )
                  goto LABEL_76;
                v36 = 2163LL;
                WdLogSingleEntry1(1LL, 2163LL);
                goto LABEL_75;
              }
              goto LABEL_70;
            }
            v34 = (unsigned int)(EntryType - 11);
            if ( EntryType != 11 )
            {
              if ( EntryType != 14 )
              {
                SharedResourceNtObject = -1073741811;
                WdLogSingleEntry3(3LL, v29, EntryType, -1073741811LL);
                goto LABEL_76;
              }
              v35 = &v74[v27];
              LOBYTE(v34) = v6;
              SharedResourceNtObject = CreateSharedProtectedSessionNtObject(v34, 14, v29, v24, v75[v27], 1, &v74[v27]);
              if ( SharedResourceNtObject < 0 )
              {
                if ( !*v35 )
                  goto LABEL_76;
                v36 = 2202LL;
                WdLogSingleEntry1(1LL, 2202LL);
                goto LABEL_75;
              }
              goto LABEL_70;
            }
          }
          v67 = &v74[v27];
          v38 = v75[v27];
          v39 = 0LL;
          if ( v28 )
            v39 = *(_QWORD *)(v27 * 8 + v28);
          LOBYTE(v38) = v6;
          SharedResourceNtObject = CreateSharedSyncNtObject(v38, EntryType, v29, v39, v75[v27], 1, &v74[v27]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( !*v67 )
              goto LABEL_76;
            v36 = 2183LL;
            WdLogSingleEntry1(1LL, 2183LL);
            goto LABEL_75;
          }
        }
LABEL_70:
        v25 = (_DWORD)v63 + 1;
        LODWORD(v63) = v25;
        if ( v25 >= LODWORD(Src[0]) )
          break;
        Current = v64;
      }
    }
    v42 = a2;
    LOBYTE(v24) = a2;
    LOBYTE(v23) = v6;
    v43 = ObCreateObject(v23, g_pDxgkSharedBundleObjectType, Src[4], v24, 0LL, 248, 0, 0, &Object);
    SharedResourceNtObject = v43;
    if ( v43 < 0 )
    {
      WdLogSingleEntry2(3LL, v64, v43);
      if ( Object )
      {
        WdLogSingleEntry1(1LL, 2237LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pBundleObject == NULL", 2237LL, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_100;
    }
    v44 = Object;
    memset(Object, 0, 0xF8uLL);
    v44[6] = Src[0];
    memmove(v44 + 8, v74, 8LL * LODWORD(Src[0]));
    memmove(v44 + 40, v72, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v44 = *(_OWORD *)((char *)&Src[5] + 4);
    *((void **)v44 + 2) = *(void **)((char *)&Src[7] + 4);
    *((_BYTE *)v44 + 224) = a2;
    v45 = (char *)(v44 + 58);
    *((_QWORD *)v44 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v44 + 58, 0LL);
    ObfReferenceObject(v44);
    SharedResourceNtObject = ObInsertObject(Object, 0LL, (ACCESS_MASK)Src[5], 0, 0LL, &Src[9]);
    if ( SharedResourceNtObject >= 0 && Src[3] )
    {
      v46 = 0;
      if ( v44[6] )
      {
        while ( 1 )
        {
          v63 = 0LL;
          ObfReferenceObject(*(PVOID *)&v44[2 * v46 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v44[2 * v46 + 8], 0LL, v72[v46], 0, 0LL, &v63);
          SharedResourceNtObject = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v63);
          ObCloseHandle(v63, IsKernelHandle == 0);
          if ( (unsigned int)++v46 >= v44[6] )
            goto LABEL_87;
        }
        WdLogSingleEntry2(3LL, *(_QWORD *)&v44[2 * v46 + 8], inserted);
LABEL_87:
        v6 = v58;
      }
      v45 = (char *)(v44 + 58);
      if ( SharedResourceNtObject < 0 )
        goto LABEL_92;
      *((_BYTE *)v44 + 242) = 1;
      *((_BYTE *)v44 + 240) = 1;
    }
    if ( SharedResourceNtObject >= 0 )
      *((_BYTE *)v44 + 243) = 1;
LABEL_92:
    ExReleasePushLockExclusiveEx(v45, 0LL);
    ObfDereferenceObject(v44);
    if ( SharedResourceNtObject < 0 )
    {
      if ( !Src[9] )
        WdLogSingleEntry3(3LL, Object, v64, SharedResourceNtObject);
      Object = 0LL;
      memset(v74, 0, sizeof(v74));
      goto LABEL_76;
    }
    if ( v6 == 1 )
    {
      v49 = (void **)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v49 = (void **)MmUserProbeAddress;
      *v49 = Src[9];
    }
    else
    {
      *(void **)(a5 + 72) = Src[9];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v60);
    return 0LL;
  }
  SharedResourceNtObject = -1073741811;
  WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
    LODWORD(Src[0]),
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_116;
  }
  return (unsigned int)SharedResourceNtObject;
}
