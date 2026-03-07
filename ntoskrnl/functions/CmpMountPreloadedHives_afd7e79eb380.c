void CmpMountPreloadedHives()
{
  int v0; // edi
  wchar_t *v1; // rbx
  __int64 v2; // rsi
  int v3; // eax
  int v4; // r13d
  int v5; // eax
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  int SystemPartition; // ebx
  unsigned int v9; // r12d
  ULONG v10; // ebx
  ULONG v11; // eax
  int v12; // r12d
  unsigned int v13; // r12d
  ULONG i; // r12d
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  PKRESOURCEMANAGER *v21; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v25; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+74h] [rbp-94h] BYREF
  int v27; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h] BYREF
  int v31; // [rsp+88h] [rbp-80h] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING *p_Destination_8; // [rsp+B0h] [rbp-58h] BYREF
  __int64 Pool2; // [rsp+B8h] [rbp-50h]
  _QWORD v38[54]; // [rsp+C8h] [rbp-40h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v39; // [rsp+278h] [rbp+170h] BYREF

  v0 = 0;
  v25 = 0;
  p_Destination_8 = 0LL;
  v31 = 0;
  v30 = 0;
  Destination_8 = 0LL;
  memset(v38, 0, sizeof(v38));
  v26 = 0;
  v34 = 0LL;
  v27 = 0;
  v35 = 0LL;
  memset(&v39, 0, sizeof(v39));
  v24 = 0;
  v33 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  Pool2 = ExAllocatePool2(256LL, 4096LL, 1649626435LL);
  v1 = (wchar_t *)Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 - 1464);
      v4 = v3 & 0x1000000;
      v28 = v3 & 0x1000000;
      if ( (v3 & 1) != 0 )
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
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v33, &v24, 7u, 0LL, (__int64)Length, 0LL, 0LL, (__int64)v38);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1568) = v38;
        v38[0] = v2 - 1624;
        SetFailureLocation(*(_QWORD *)(v2 - 1568), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        p_Destination_8 = &Destination_8;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination_8, 1, &v31);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1624, SystemPartition);
      }
      v9 = 2;
      if ( v24 == 2 )
        v9 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4, &v34, &v26, v9, 0LL, 0LL, 0LL, 0LL, (__int64)v38);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5, &v35, &v27, v9, 0LL, 0LL, 0LL, 0LL, (__int64)v38);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v10 = Length[0];
      *(_QWORD *)(v2 - 80) = v33;
      *(_QWORD *)(v2 - 48) = v34;
      *(_QWORD *)(v2 - 40) = v35;
      v11 = Length[1];
      *(_DWORD *)(v2 - 1464) &= ~2u;
      v12 = *(_DWORD *)(v2 - 1344);
      *(_DWORD *)(v2 - 1436) = v11;
      v13 = v12 + 4096;
      v29 = v13;
      if ( *(_DWORD *)(v2 - 1488) != v10 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1536); i += v10 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1536), i, v10) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1536), i, v10);
        }
        v15 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1536));
        v4 = v28;
        v13 = v29;
        *(_DWORD *)(v2 - 1520) = v15;
        *(_DWORD *)(v2 - 1488) = v10;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1624, &v30);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_52;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1624, 0, v13, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( v4 )
      {
        *(_QWORD *)(*(_QWORD *)(v2 - 1560) + 12LL) = MEMORY[0xFFFFF78000000014];
        HvCheckAndUpdateHiveBackupTimeStamp(v2 - 1624);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v4 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1536));
        *(_DWORD *)(v2 - 1520) = *(_DWORD *)(v2 - 1536);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1624);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_52;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v4 )
      {
        CmpUnlockRegistry(v17, v16, v18, v19);
        CmpFlushHive(v2 - 1624, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v20 = *(_DWORD *)(v2 - 1464);
      *(_DWORD *)(v2 - 1464) = v20 & 0xFFFFF7FF;
      CmpUnlockRegistry(v17, v16, v18, v19);
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v39);
      CmpInitCmRM(v2 - 1624, (v20 & 0x800) != 0);
      KiUnstackDetachProcess(&v39);
      v21 = *(PKRESOURCEMANAGER **)(v2 + 2528);
      *(_DWORD *)(v2 + 2488) |= 8u;
      if ( v21 )
      {
        TmEnableCallbacks(v21[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v21);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2528));
      }
      CmpLockRegistryExclusive();
      v1 = (wchar_t *)Pool2;
LABEL_45:
      *(_DWORD *)(v2 + 2488) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    v5 = *(_DWORD *)(v2 - 1464);
    if ( (v5 & 0x1000) != 0 )
    {
      v6 = PdcCreateWatchdogAroundClientCall();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v6) + 159);
      RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
      RtlAppendUnicodeToString(&Destination_8, Source);
      v7 = L":";
    }
    else
    {
      if ( (v5 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1, 4096LL, &v25);
        if ( SystemPartition < 0 )
          goto LABEL_52;
        goto LABEL_16;
      }
      if ( (v5 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v7 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination_8, v7);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(v1, 0);
}
