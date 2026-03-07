LONG __fastcall PnpReplacePartitionUnit(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r14
  ULONG v2; // r12d
  ULONG_PTR *v3; // r15
  ULONG_PTR v4; // r8
  __int64 v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // rdx
  __int64 Pool2; // rax
  __int64 v9; // rbx
  int PluginDriver; // edi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _WORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  ULONG_PTR v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID *v43; // rsi
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // eax
  char v53; // r12
  int ReplaceFeatures; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // edx
  int v58; // edx
  __int64 v59; // rcx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  __int64 v67; // r8
  int FirstSetLeftAffinity; // eax
  unsigned int v69; // ecx
  ULONG_PTR v70; // rsi
  void (*v71)(void); // rax
  __int64 v72; // rsi
  __int64 v73; // r15
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  void *v77; // rcx
  ULONG Affinity; // [rsp+38h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity_8; // [rsp+40h] [rbp-C8h] BYREF
  ULONG_PTR *PreviousAffinity; // [rsp+50h] [rbp-B8h]
  struct _GROUP_AFFINITY PreviousAffinity_8; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v83[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+98h] [rbp-70h]
  int v85; // [rsp+A0h] [rbp-68h]
  _DWORD v86[68]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = a1;
  PreviousAffinity = a1;
  Affinity_8 = 0LL;
  memset(&v86[2], 0, 0x100uLL);
  v84 = 0LL;
  v85 = 0;
  PreviousAffinity_8 = 0LL;
  memset(v83, 0, sizeof(v83));
  Affinity = KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = Affinity;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  v3 = v1 + 1;
  if ( *((int *)v1 + 4) >= 0 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      if ( v5 && !_bittest((const signed __int32 *)(v5 + 396), 0x11u) )
      {
        v6 = *v1;
        if ( *v1 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          if ( v7 && !_bittest((const signed __int32 *)(v7 + 396), 0x11u) )
          {
            PnprLogStartEvent(v6, *v3);
            goto LABEL_9;
          }
          IoAddTriageDumpDataBlock(v6, (PVOID)*(unsigned __int16 *)(v6 + 2));
          v11 = *(_QWORD *)(*v1 + 8);
          if ( v11 )
          {
            IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
            v12 = (_WORD *)(*(_QWORD *)(*v1 + 8) + 56LL);
            if ( *v12 )
            {
              IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*v1 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v1 + 8) + 56LL));
            }
          }
          if ( *v1 )
          {
            v13 = *(_QWORD *)(*v1 + 312);
            if ( *(_QWORD *)(v13 + 40) )
            {
              v14 = *(_QWORD *)(v13 + 40);
              IoAddTriageDumpDataBlock(v14, (PVOID)0x388);
              if ( *(_WORD *)(v14 + 40) )
              {
                IoAddTriageDumpDataBlock(v14 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), (PVOID)*(unsigned __int16 *)(v14 + 40));
              }
              v15 = *v1 + 312;
              if ( *v1 )
                v16 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
              else
                v16 = 0LL;
              if ( *(_WORD *)(v16 + 56) )
              {
                if ( *v1 )
                  v17 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
                else
                  LODWORD(v17) = 0;
                IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
                if ( *v1 )
                {
                  v18 = *(_QWORD *)(*(_QWORD *)(*v1 + 312) + 40LL);
                  v19 = v18;
                }
                else
                {
                  v18 = 0LL;
                  v19 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
              }
              v20 = *v1;
              v21 = *v1 + 312;
              if ( *v1 )
                v22 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
              else
                v22 = 0LL;
              if ( *(_QWORD *)(v22 + 16) )
              {
                v23 = v20 ? *(_QWORD *)(*(_QWORD *)v21 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v23 + 16) + 56LL) )
                {
                  if ( v20 )
                    v24 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
                  else
                    v24 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v24 + 16) + 56, (PVOID)2);
                  if ( *v1 )
                  {
                    v25 = *(_QWORD *)(*(_QWORD *)(*v1 + 312) + 40LL);
                    v26 = v25;
                  }
                  else
                  {
                    v25 = 0LL;
                    v26 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v26 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, *v1, 0LL, 0LL);
      }
      IoAddTriageDumpDataBlock(*v3, (PVOID)*(unsigned __int16 *)(v4 + 2));
      v27 = *(_QWORD *)(*v3 + 8);
      if ( v27 )
      {
        IoAddTriageDumpDataBlock(v27, (PVOID)(unsigned int)*(__int16 *)(v27 + 2));
        v28 = (_WORD *)(*(_QWORD *)(*v3 + 8) + 56LL);
        if ( *v28 )
        {
          IoAddTriageDumpDataBlock((ULONG)v28, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*v3 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v3 + 8) + 56LL));
        }
      }
      if ( *v3 )
      {
        v29 = *(_QWORD *)(*v3 + 312);
        if ( *(_QWORD *)(v29 + 40) )
        {
          v30 = *(_QWORD *)(v29 + 40);
          IoAddTriageDumpDataBlock(v30, (PVOID)0x388);
          if ( *(_WORD *)(v30 + 40) )
          {
            IoAddTriageDumpDataBlock(v30 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 48), (PVOID)*(unsigned __int16 *)(v30 + 40));
          }
          v31 = *v3 + 312;
          if ( *v3 )
            v32 = *(_QWORD *)(*(_QWORD *)v31 + 40LL);
          else
            v32 = 0LL;
          if ( *(_WORD *)(v32 + 56) )
          {
            if ( *v3 )
              v33 = *(_QWORD *)(*(_QWORD *)v31 + 40LL);
            else
              LODWORD(v33) = 0;
            IoAddTriageDumpDataBlock(v33 + 56, (PVOID)2);
            if ( *v3 )
            {
              v34 = *(_QWORD *)(*(_QWORD *)(*v3 + 312) + 40LL);
              v35 = v34;
            }
            else
            {
              v34 = 0LL;
              v35 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v35 + 64), (PVOID)*(unsigned __int16 *)(v34 + 56));
          }
          v36 = *v3;
          v37 = *v3 + 312;
          if ( *v3 )
            v38 = *(_QWORD *)(*(_QWORD *)v37 + 40LL);
          else
            v38 = 0LL;
          if ( *(_QWORD *)(v38 + 16) )
          {
            v39 = v36 ? *(_QWORD *)(*(_QWORD *)v37 + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v39 + 16) + 56LL) )
            {
              if ( v36 )
                v40 = *(_QWORD *)(*(_QWORD *)v37 + 40LL);
              else
                v40 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v40 + 16) + 56, (PVOID)2);
              if ( *v3 )
              {
                v41 = *(_QWORD *)(*(_QWORD *)(*v3 + 312) + 40LL);
                v42 = v41;
              }
              else
              {
                v41 = 0LL;
                v42 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v42 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v41 + 16) + 56LL));
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *v3, 0LL, 0LL);
  }
LABEL_9:
  Pool2 = ExAllocatePool2(64LL, 33336LL, 1366322768LL);
  v9 = Pool2;
  if ( !Pool2 )
  {
    PluginDriver = -1073741670;
    goto LABEL_155;
  }
  v43 = (PVOID *)(Pool2 + 32);
  *(_QWORD *)Pool2 = *v1;
  *(_QWORD *)(Pool2 + 32) = *v3;
  *(_DWORD *)(Pool2 + 64) = *((_DWORD *)v1 + 4);
  *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
  *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
  PnprContext = Pool2;
  if ( !KeDynamicPartitioningSupported && *((int *)v1 + 4) >= 0 )
  {
    v44 = *(_DWORD *)(Pool2 + 33272);
    PluginDriver = -1073741637;
    if ( !v44 )
      v44 = 170;
    *(_DWORD *)(v9 + 33272) = v44;
    v45 = *(_DWORD *)(v9 + 33276);
    if ( !v45 )
      v45 = 2;
    *(_DWORD *)(v9 + 33276) = v45;
    goto LABEL_155;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v46 = PnprContext;
    v47 = *(_DWORD *)(PnprContext + 33272);
    if ( !v47 )
      v47 = 182;
    v48 = 7;
LABEL_90:
    PluginDriver = -1073741621;
LABEL_91:
    *(_DWORD *)(v46 + 33272) = v47;
    v49 = *(_DWORD *)(v46 + 33276);
    if ( !v49 )
      v49 = v48;
    *(_DWORD *)(v46 + 33276) = v49;
    goto LABEL_155;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)v1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v83);
    PnprWakeDevices(v83);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_155;
  }
  PluginDriver = PnprIdentifyUnits(*(PVOID *)v9, *v43);
  if ( PluginDriver < 0 )
  {
    v50 = PnprContext;
    v51 = *(_DWORD *)(PnprContext + 33272);
    if ( !v51 )
      v51 = 219;
    v52 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v51;
    if ( !v52 )
      v52 = 3;
    *(_DWORD *)(v50 + 33276) = v52;
    goto LABEL_155;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v46 = PnprContext;
    v47 = *(_DWORD *)(PnprContext + 33272);
    if ( !v47 )
      v47 = 232;
    v48 = 1;
    goto LABEL_91;
  }
  v53 = 0;
  PluginDriver = PnprLoadPluginDriver(v9 + 33152, v9 + 33176);
  if ( PluginDriver < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL) )
    {
      v58 = 258;
LABEL_116:
      v59 = PnprContext;
      v60 = *(_DWORD *)(PnprContext + 33272);
      if ( !v60 )
        v60 = v58;
      v61 = 1;
      goto LABEL_119;
    }
  }
  else
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 33176, (PVOID *)(v9 + 32));
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v53 = ReplaceFeatures;
  }
  v55 = *(_QWORD *)(v9 + 24);
  if ( !*(_DWORD *)(v55 + 4) )
  {
    v2 = Affinity;
    goto LABEL_139;
  }
  v56 = *(_DWORD *)(v9 + 33184);
  if ( (v56 & 1) == 0 || !*(_QWORD *)(v9 + 33216) )
  {
    v57 = 273;
    goto LABEL_135;
  }
  if ( (v56 & 2) == 0 || *(_QWORD *)(v9 + 33224) )
  {
    PluginDriver = PnprMmConstruct(v55, v9 + 152);
    if ( PluginDriver < 0 )
    {
      v58 = 293;
      goto LABEL_116;
    }
    if ( (v53 & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
    }
    else if ( !*(_QWORD *)(v9 + 33256) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
    {
      v57 = 317;
      goto LABEL_135;
    }
    v2 = Affinity;
    PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, Affinity);
    if ( PluginDriver < 0 )
    {
      v46 = PnprContext;
      v47 = *(_DWORD *)(PnprContext + 33272);
      if ( !v47 )
        v47 = 332;
      v48 = 10;
      goto LABEL_91;
    }
    *(_QWORD *)(v9 + 168) = 0LL;
LABEL_139:
    if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 33264) )
    {
      v46 = PnprContext;
      PluginDriver = -1073741637;
      v47 = *(_DWORD *)(PnprContext + 33272);
      if ( !v47 )
        v47 = 352;
      v48 = 9;
      goto LABEL_91;
    }
    *(_DWORD *)(v9 + 176) = v2;
    v86[0] = 2097153;
    memset(&v86[1], 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v86, 0x20u, (unsigned __int16 *)KeActiveProcessors);
    v63 = *(_QWORD *)(v9 + 16);
    v64 = *(_DWORD *)(v63 + 8);
    if ( v64 )
    {
      v65 = *(_QWORD *)v63 - (_QWORD)&v86[2];
      v66 = &v86[2];
      v67 = v64;
      do
      {
        *v66 &= ~*(_QWORD *)((char *)v66 + v65);
        ++v66;
        --v67;
      }
      while ( v67 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v86) )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v86, 0) )
        FirstSetLeftAffinity = 0;
      else
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(v86);
      *(_DWORD *)(v9 + 180) = FirstSetLeftAffinity;
      v69 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
      *(_QWORD *)&Affinity_8.Group = (unsigned __int16)(v69 >> 6);
      Affinity_8.Mask = 1LL << (v69 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity_8, &PreviousAffinity_8);
      PluginDriver = PnprInitiateReplaceOperation();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
      goto LABEL_155;
    }
    v46 = PnprContext;
    v47 = *(_DWORD *)(PnprContext + 33272);
    if ( !v47 )
      v47 = 379;
    v48 = 6;
    goto LABEL_90;
  }
  v57 = 281;
LABEL_135:
  v59 = PnprContext;
  PluginDriver = -1073741637;
  v60 = *(_DWORD *)(PnprContext + 33272);
  if ( !v60 )
    v60 = v57;
  v61 = 9;
LABEL_119:
  v2 = Affinity;
  *(_DWORD *)(v59 + 33272) = v60;
  v62 = *(_DWORD *)(v59 + 33276);
  if ( !v62 )
    v62 = v61;
  *(_DWORD *)(v59 + 33276) = v62;
LABEL_155:
  if ( *((int *)v1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*v1, *v3, (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 33328) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v70 = *(_QWORD *)(v9 + 33152);
    if ( v70 )
    {
      v71 = *(void (**)(void))(v9 + 33192);
      if ( v71 )
        v71();
      MmUnloadSystemImage(v70);
    }
    if ( *(_QWORD *)(v9 + 136) && *(_QWORD *)(v9 + 144) )
    {
      if ( v2 )
      {
        v72 = 0LL;
        v73 = v2;
        do
        {
          PnprFreeMappingReserve(v72 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v72 + *(_QWORD *)(v9 + 144));
          v72 += 24LL;
          --v73;
        }
        while ( v73 );
        v1 = PreviousAffinity;
      }
      ExFreePoolWithTag(*(PVOID *)(v9 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v74 = *(void **)(v9 + 16);
    if ( v74 )
    {
      ExFreePoolWithTag(v74, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v75 = *(void **)(v9 + 24);
    if ( v75 )
    {
      ExFreePoolWithTag(v75, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v76 = *(void **)(v9 + 48);
    if ( v76 )
    {
      ExFreePoolWithTag(v76, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v77 = *(void **)(v9 + 56);
    if ( v77 )
    {
      ExFreePoolWithTag(v77, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)v1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)v1 + 1, 0, 0);
}
