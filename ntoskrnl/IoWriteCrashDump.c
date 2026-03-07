char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  __int64 v11; // r14
  unsigned int v13; // esi
  int v14; // edi
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  char v19; // cl
  int v20; // eax
  char v21; // r13
  __int64 v22; // rdx
  int v23; // esi
  int v24; // r8d
  __int64 v25; // r11
  __int64 v26; // r9
  _OWORD *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  void *v33; // rcx
  int v34; // edx
  __int64 v35; // rsi
  unsigned int v36; // r14d
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  char v41; // [rsp+50h] [rbp-91h]
  unsigned int v42; // [rsp+54h] [rbp-8Dh]
  int v45; // [rsp+78h] [rbp-69h]
  _QWORD v46[6]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-29h]
  __int64 v49; // [rsp+C0h] [rbp-21h]
  __int64 v50; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v11 = a2;
  v41 = a8 == 0;
  v13 = 0;
  v45 = a2;
  v14 = 0;
  v42 = 0;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, v11, a3, a4, a5, (__int64)a6, a7);
  if ( !DWORD1(xmmword_140C64958) || byte_140C64954 )
  {
    v49 = a4;
    v50 = a5;
    v47 = v11;
    v48 = a3;
    MmSnapTriageDumpInformation(a6, &v47);
    if ( !CrashdmpDumpBlock )
      return v9;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      v16 = 0;
      v17 = (_DWORD *)(CrashdmpDumpBlock + 1372);
      while ( *v17 != a1 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
          goto LABEL_16;
      }
      *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    }
LABEL_16:
    if ( !a8 )
    {
      v13 = 1;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C6A8D0)(1LL, 0LL, v13);
    v18 = CrashdmpDumpBlock;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v19 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
      v19 = 0;
    if ( VslVsmEnabled )
    {
      v20 = 2 * HvlpForceAllPages;
      HvlpForceAllPages *= 2;
      if ( v19 )
        HvlpForceAllPages = v20 | 1;
    }
    LOBYTE(v18) = 1;
    ViVerifyDma = 0;
    v21 = ((__int64 (__fastcall *)(__int64))qword_140C6A900)(v18);
    IoSaveBugCheckProgress(32);
    v22 = 9LL;
    v23 = a3;
    v24 = a4;
    v25 = a5;
    v26 = (__int64)a6;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
    v27 = a6;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v28 = (_OWORD *)(CrashdmpDumpBlock + 64);
    do
    {
      *v28 = *v27;
      v28[1] = v27[1];
      v28[2] = v27[2];
      v28[3] = v27[3];
      v28[4] = v27[4];
      v28[5] = v27[5];
      v28[6] = v27[6];
      v28 += 8;
      v29 = v27[7];
      v27 += 8;
      *(v28 - 1) = v29;
      --v22;
    }
    while ( v22 );
    *v28 = *v27;
    v28[1] = v27[1];
    v28[2] = v27[2];
    v28[3] = v27[3];
    v28[4] = v27[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
    *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
    if ( a8 )
      v30 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
    else
      v30 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v30 & 0xFFFFFFFFFFFFF000uLL;
    v31 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
    if ( !v31 )
    {
      if ( v21 != 1 )
      {
LABEL_33:
        v32 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
        if ( v32 )
        {
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = v32 + 12316;
          *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
LABEL_38:
          v33 = *(void **)(CrashdmpDumpBlock + 1328);
          if ( !IoPreparedTriageDumpData )
          {
            v14 = IopCollectTriageDumpData(a1, v11, a3, a4, a5, (__int64)a6, a7, v41);
            if ( v14 >= 0 )
              goto LABEL_43;
            return v9;
          }
          if ( IoPreparedTriageDumpData != v33 )
          {
            memmove(v33, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_43:
            v25 = a5;
            v26 = (__int64)a6;
            v24 = a4;
          }
LABEL_44:
          v34 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
          if ( v34 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
            v14 = IoAddPagesForPartialKernelDump(a1, v11, a3, v24, v25, v26, a7);
            goto LABEL_57;
          }
          v35 = *(_QWORD *)(CrashdmpDumpBlock + 8);
          if ( !v35 )
          {
LABEL_56:
            v23 = a3;
LABEL_57:
            if ( v14 >= 0 )
              v14 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C6A8D8)(CrashdmpDumpBlock, a8);
            if ( v14 != -1073741267 )
              goto LABEL_67;
            if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
            {
              IoSaveBugCheckProgress(39);
              *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
              v14 = IoAddPagesForPartialKernelDump(a1, v11, v23, a4, a5, (__int64)a6, a7);
              if ( v14 < 0 )
                goto LABEL_67;
              v38 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C6A8D8)(CrashdmpDumpBlock, a8);
              v39 = 38;
            }
            else
            {
              if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
                goto LABEL_67;
              *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
              IoUpdateBugCheckProgressEnvVariable();
              IoPreparedTriageDumpData = 0LL;
              v14 = IopCollectTriageDumpData(a1, v11, v23, a4, a5, (__int64)a6, a7, v41);
              if ( v14 < 0 )
                goto LABEL_67;
              v38 = ((__int64 (__fastcall *)(__int64, __int64))qword_140C6A8D8)(CrashdmpDumpBlock, a8);
              v39 = 35;
            }
            v14 = v38;
            IoSaveBugCheckProgress(v39);
LABEL_67:
            if ( (DumpPolicyAttemptOffline & 1) != 0 && v14 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v21 )
            {
              IoSaveBugCheckProgress(36);
              if ( ((int (__fastcall *)(_QWORD))off_140C01CE8[0])(0LL) >= 0 )
              {
                if ( CrashdmpDumpBlock )
                {
                  *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x1000u;
                  IoUpdateBugCheckProgressEnvVariable();
                }
                while ( 1 )
                {
                  KeStallExecutionProcessor(0xF4240u);
                  ++AttemptOfflineStallCount;
                }
              }
            }
            else if ( v14 >= 0 )
            {
              if ( v21 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
                return 1;
              IoSetBugCheckProgressAndFlag();
              v40 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
              if ( CrashdmpDumpBlock )
              {
                *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
                IoUpdateBugCheckProgressEnvVariable();
              }
              if ( v40 >= 0 )
                return 1;
            }
            return v9;
          }
          v46[5] = 0LL;
          v36 = 1;
          v47 = *(_QWORD *)(v35 + 48);
          v48 = v35 + 56;
          v46[2] = &v47;
          v46[0] = IoSetDumpRange;
          v46[1] = IoFreeDumpRange;
          v46[3] = v35;
          v46[4] = 0LL;
          v37 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
          if ( v37 == 6 )
          {
            v42 = a9 != 0;
          }
          else
          {
            if ( v37 != 5 || !v34 )
              goto LABEL_55;
            v42 = 2;
          }
          v36 = 0;
LABEL_55:
          IopDumpCallAddPagesCallbacks(a1);
          IoSaveBugCheckProgress(33);
          MmGetDumpRange(v46, v36, v42);
          IopDumpCallRemovePagesCallbacks(a1);
          IoSaveBugCheckProgress(34);
          LODWORD(v11) = v45;
          *(_QWORD *)(v35 + 40) = RtlNumberOfSetBitsEx(&v47);
          goto LABEL_56;
        }
LABEL_35:
        if ( !v31 && !a8 )
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
        goto LABEL_38;
      }
      if ( a8 )
        goto LABEL_44;
    }
    if ( v21 == 1 )
      goto LABEL_35;
    goto LABEL_33;
  }
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400000u;
    IoUpdateBugCheckProgressEnvVariable();
  }
  return 0;
}
