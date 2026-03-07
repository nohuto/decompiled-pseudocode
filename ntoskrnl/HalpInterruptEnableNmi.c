__int64 HalpInterruptEnableNmi()
{
  unsigned __int8 v0; // al
  struct _KPRCB *CurrentPrcb; // r15
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // r12
  __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 i; // rdi
  char v7; // dl
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  __int64 Number; // rcx
  __int64 v17; // rax
  _QWORD *Lines; // rax
  __int64 v19; // rcx
  ULONG_PTR *v20; // r14
  int v21; // eax
  int v22; // eax
  int v23; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v25; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v30; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-51h]
  __int128 v32; // [rsp+58h] [rbp-49h] BYREF
  __int128 v33; // [rsp+68h] [rbp-39h] BYREF
  __int128 v34; // [rsp+78h] [rbp-29h]
  __int64 v35; // [rsp+88h] [rbp-19h]
  __int128 v36; // [rsp+90h] [rbp-11h] BYREF
  __int128 *v37; // [rsp+A0h] [rbp-1h]
  __int128 v38; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v39; // [rsp+B8h] [rbp+17h] BYREF

  v36 = 0LL;
  LODWORD(v37) = 0;
  v39 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v31 = 0;
  v34 = 0LL;
  v38 = 0LL;
  v0 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0LL;
  v3 = v0;
  v4 = (unsigned int)HalpInterruptProcessorCount;
  v5 = 0;
  if ( (_DWORD)HalpInterruptProcessorCount )
  {
    while ( 1 )
    {
      v2 = HalpInterruptProcessorState + ((unsigned __int64)v5 << 6);
      if ( *(_WORD *)(v2 + 16) == CurrentPrcb->Group && *(_BYTE *)(v2 + 18) == CurrentPrcb->GroupIndex )
        break;
      if ( ++v5 >= (unsigned int)HalpInterruptProcessorCount )
        goto LABEL_7;
    }
    v4 = v5;
  }
LABEL_7:
  if ( (_DWORD)v4 == (_DWORD)HalpInterruptProcessorCount )
    KeBugCheckEx(
      0x5Cu,
      0x104uLL,
      CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8),
      (unsigned int)HalpInterruptProcessorCount,
      0LL);
  for ( i = HalpInterruptNmiSources; i; i = *(_QWORD *)i )
  {
    v7 = 0;
    if ( *(_BYTE *)(i + 8) )
    {
      if ( !*(_BYTE *)(v2 + 13) )
        continue;
      v8 = *(_DWORD *)(i + 12);
      if ( v8 != -1 && v8 != *(_DWORD *)(v2 + 4) )
        continue;
      v7 = 1;
    }
    else if ( CurrentPrcb->Number )
    {
      continue;
    }
    v32 = 0LL;
    v35 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v38 = 0LL;
    v9 = *(_DWORD *)(i + 16);
    v10 = v9 & 0xC;
    if ( *(_BYTE *)(i + 8) )
    {
      v11 = DWORD2(v32);
      v12 = 0;
      if ( v10 != 12 )
        v11 = 1;
      DWORD2(v32) = v11;
      LOBYTE(v12) = (*(_BYTE *)(i + 16) & 3) == 3;
      v13 = v12 + 1;
    }
    else
    {
      if ( v10 == 4 || (v9 & 0xC) == 0 )
        DWORD2(v32) = 1;
      if ( (*(_DWORD *)(i + 16) & 3) == 0 || (v13 = 2, (*(_DWORD *)(i + 16) & 3) == 1) )
        v13 = 1;
    }
    *(_QWORD *)&v33 = 0x2FFFFFFFFLL;
    LODWORD(v32) = v13;
    LODWORD(v38) = v38 & 0x80000000 | 0x40000002;
    v37 = &v38;
    v36 = 0uLL;
    HIDWORD(v32) = 16;
    if ( v7 )
    {
      LODWORD(v36) = 5;
      v14 = *(_DWORD *)(HalpInterruptController + 256);
      HIDWORD(v30) = *(_DWORD *)(i + 20);
      LODWORD(v30) = v14;
    }
    else
    {
      v15 = HalpInterruptGsiToLine(*(unsigned int *)(i + 20), &v30);
      if ( v15 < 0 )
      {
        HalpInterruptSetProblemEx(0, 18, v15, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1494);
        continue;
      }
      if ( HalpInterruptPhysicalModeOnly )
      {
        LODWORD(v36) = 3;
      }
      else
      {
        v39 = 0LL;
        Number = CurrentPrcb->Number;
        LODWORD(v36) = 1;
        v17 = 0LL;
        _bittestandset64(&v17, KiProcessorIndexToNumberMappingTable[Number] & 0x3F);
        *(_QWORD *)&v39 = v17;
        *((_QWORD *)&v36 + 1) = &v39;
      }
      Lines = HalpInterruptFindLines((unsigned int *)&v30);
      if ( !Lines )
      {
        HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1517);
        goto LABEL_50;
      }
      if ( !*(_BYTE *)(Lines[6] + 16LL * v31 + 12) )
      {
        v20 = HalpInterruptLookupController(v30);
        if ( !v20 )
        {
          HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1533);
          goto LABEL_50;
        }
        v21 = HalpInterruptDestinationToTarget(v19, (__int64)&v36, (__int64)&v33 + 8);
        if ( v21 < 0 )
        {
          HalpInterruptSetProblemEx(
            (_DWORD)v20,
            19,
            v21,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            1554);
LABEL_50:
          v23 = -1073741275;
          goto LABEL_52;
        }
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
        {
          HalpIommuUpdateRemappingTableEntry(0, v38 & 0x3FFFFFFF, (__int64)&v32);
          DWORD2(v33) = 7;
          LODWORD(v34) = v38 & 0x3FFFFFFF;
        }
        if ( qword_140C62148 )
        {
          v22 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v20 + 64), &v32, 0LL);
          v23 = v22;
          if ( v22 < 0 )
          {
            HalpInterruptSetProblemEx(
              (_DWORD)v20,
              31,
              v22,
              (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
              1605);
            goto LABEL_52;
          }
        }
        HIDWORD(v32) &= ~0x10u;
        v23 = HalpInterruptSetRemappedLineStateInternal(v20, &v30, &v32);
        if ( v23 < 0 )
          goto LABEL_52;
        v13 = v32;
      }
    }
    LOBYTE(v4) = 15;
    v23 = HalpInterruptSetLineState(&v30, 0LL, v4, DWORD2(v32), v13, &v36, &v33);
    if ( v23 < 0 )
      goto LABEL_52;
  }
  v23 = 0;
LABEL_52:
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      SchedulerAssist = v25->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v28 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(v3);
  return (unsigned int)v23;
}
