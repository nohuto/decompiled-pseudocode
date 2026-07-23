/*
 * XREFs of CmpMountPreloadedHives @ 0x1407AB024
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     RtlSetAllBits @ 0x1403536C0 (RtlSetAllBits.c)
 *     RtlAreBitsClear @ 0x1403621A0 (RtlAreBitsClear.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14069DDF8 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406A24AC (CmRmFinalizeRecovery.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407203B0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpInitializeActualFileSizes @ 0x140723838 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 *     HvpDropPagedBins @ 0x14079FB58 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x140876BF8 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140956160 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x1409735F0 (SyspartGetSystemPartition.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // edi
  wchar_t *v1; // rbx
  __int64 v2; // rsi
  int v3; // r13d
  int v4; // eax
  __int64 v5; // rax
  const WCHAR *v6; // rdx
  int SystemPartition; // ebx
  unsigned int v8; // r15d
  ULONG v9; // ebx
  unsigned int v10; // r15d
  ULONG i; // r15d
  ULONG v12; // eax
  int v13; // ebx
  _DWORD *v14; // r9
  PKRESOURCEMANAGER *v15; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v18[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v19; // [rsp+74h] [rbp-94h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING *p_Destination_8; // [rsp+80h] [rbp-88h] BYREF
  int v22; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+8Ch] [rbp-7Ch] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v25; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v26; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v27; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t *PoolWithTag; // [rsp+B0h] [rbp-58h]
  _QWORD v29[54]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v30[3]; // [rsp+268h] [rbp+160h] BYREF

  v0 = 0;
  v18[1] = 0;
  v23 = 0;
  v22 = 0;
  Destination_8 = 0LL;
  memset(v29, 0, sizeof(v29));
  v19 = 0;
  v26 = 0LL;
  LODWORD(v20) = 0;
  v27 = 0LL;
  v18[0] = 0;
  memset(v30, 0, sizeof(v30));
  v25 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 - 1456) & 0x1000000;
      if ( (*(_DWORD *)(v2 - 1456) & 1) != 0 )
        goto LABEL_45;
      *(_QWORD *)&Destination_8.Length = 0x10000000LL;
      Destination_8.Buffer = v1;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination_8) || Destination_8.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_OWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 202) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v25, v18, 7u, 0LL, (__int64)Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1560) = v29;
        v29[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        BYTE6(NlsMbCodePageTag) = 1;
        p_Destination_8 = &Destination_8;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination_8, 1, &v23);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      v8 = 2;
      if ( v18[0] == 2 )
        v8 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4u, &v26, &v19, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5u, &v27, (int *)&v20, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v9 = Length[0];
      *(_QWORD *)(v2 - 80) = v25;
      *(_QWORD *)(v2 - 48) = v26;
      *(_QWORD *)(v2 - 40) = v27;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      v10 = *(_DWORD *)(v2 - 1344) + 4096;
      *(_DWORD *)(v2 - 1432) = Length[1];
      LODWORD(p_Destination_8) = v10;
      if ( *(_DWORD *)(v2 - 1480) != v9 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v9 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v9) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v9);
        }
        v12 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        v10 = (unsigned int)p_Destination_8;
        *(_DWORD *)(v2 - 1512) = v12;
        *(_DWORD *)(v2 - 1480) = v9;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &v22);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_52;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1616, 0, v10, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( v3 )
      {
        *(_QWORD *)(*(_QWORD *)(v2 - 1552) + 12LL) = MEMORY[0xFFFFF78000000014];
        HvCheckAndUpdateHiveBackupTimeStamp(v2 - 1616);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) || v3 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1528));
        *(_DWORD *)(v2 - 1512) = *(_DWORD *)(v2 - 1528);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1616);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_52;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) || v3 )
      {
        CmpUnlockRegistry();
        CmpFlushHive(v2 - 1616, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v13 = *(_DWORD *)(v2 - 1456);
      *(_DWORD *)(v2 - 1456) = v13 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v30, v14);
      CmpInitCmRM(v2 - 1616, (v13 & 0x800) != 0);
      KiUnstackDetachProcess((__int64)v30, 0);
      v15 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v15 )
      {
        TmEnableCallbacks(v15[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v15);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2576));
      }
      CmpLockRegistryExclusive();
      v1 = PoolWithTag;
LABEL_45:
      *(_DWORD *)(v2 + 2536) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    v4 = *(_DWORD *)(v2 - 1456);
    if ( (v4 & 0x1000) != 0 )
    {
      v5 = HalSystemVectorDispatchEntry();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v5) + 135);
      RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
      RtlAppendUnicodeToString(&Destination_8, Source);
      v6 = L":";
    }
    else
    {
      if ( (v4 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1);
        if ( SystemPartition < 0 )
          goto LABEL_52;
        goto LABEL_16;
      }
      if ( (v4 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v6 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination_8, v6);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(v1, 0);
}
