unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 *a7,
        unsigned int a8,
        int a9)
{
  unsigned int v10; // ebx
  unsigned __int64 v11; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  ULONGLONG Ptr; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 ContiguousHeapPool; // r12
  unsigned __int64 v16; // r13
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // r10d
  int v20; // r11d
  int v21; // r15d
  unsigned __int16 v22; // r9
  unsigned int v23; // r9d
  unsigned int v24; // ebx
  _DWORD *v25; // r14
  _DWORD *v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // r15
  int v29; // r14d
  int v30; // r9d
  int v31; // edx
  _DWORD *v32; // rbx
  unsigned int v33; // ebx
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int8 v38; // r10
  char v39; // al
  unsigned __int64 *v40; // r14
  unsigned __int64 v41; // r14
  int v42; // ebx
  SIZE_T v44; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  unsigned __int8 v50; // [rsp+70h] [rbp-90h]
  unsigned __int8 v51; // [rsp+71h] [rbp-8Fh]
  unsigned int v52; // [rsp+74h] [rbp-8Ch]
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v56; // [rsp+90h] [rbp-70h]
  unsigned __int64 v57; // [rsp+98h] [rbp-68h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-60h]
  _DWORD *v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B4h] [rbp-4Ch]
  unsigned int v62; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-40h]
  _QWORD v64[7]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v65; // [rsp+108h] [rbp+8h]
  unsigned int v66; // [rsp+10Ch] [rbp+Ch]
  int v67; // [rsp+110h] [rbp+10h]
  unsigned int v68; // [rsp+114h] [rbp+14h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  int v71; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF

  v10 = a5;
  v11 = a3;
  v56 = a7;
  v58 = a4;
  v57 = a2;
  v52 = a5;
  UserData.Ptr = KeQueryPerformanceCounter(0LL).QuadPart;
  PhysicalAddress.QuadPart = -1LL;
  v50 = 0;
  Ptr = UserData.Ptr;
  v14 = *a1;
  v55 = -1LL;
  v63 = 0LL;
  v62 = MmProtectFreedNonPagedPool != 0;
  ContiguousHeapPool = 0LL;
  v16 = (v14 >> 12) + ((v14 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v10 = a5 & 0xFFFFFFFD;
    v52 = a5 & 0xFFFFFFFD;
  }
  if ( v58 && v16 > v58 || v57 > v11 || v57 + v16 <= v57 || v57 + v16 - 1 > v11 )
    goto LABEL_46;
  v21 = MiProtectionToCacheAttribute(v10);
  v61 = v21;
  if ( (unsigned __int16)KeNumberNodes > v22 )
  {
    v23 = a6;
    if ( a6 == 0x80000000 )
    {
      v24 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL);
      goto LABEL_9;
    }
  }
  else
  {
    v23 = v17;
    a6 = v17;
  }
  v24 = v23;
  if ( v23 >= (unsigned __int16)KeNumberNodes )
  {
LABEL_65:
    v11 = a3;
LABEL_46:
    v40 = a1;
    goto LABEL_42;
  }
LABEL_9:
  v25 = (_DWORD *)(qword_140C65718 + 4LL * v24 * (unsigned __int16)KeNumberNodes);
  v26 = &v25[(unsigned __int16)KeNumberNodes];
  if ( v23 != 0x80000000 )
    v26 = v25 + 1;
  v59 = v26;
  if ( (v52 & 2) == 0 && v56 == (unsigned __int16 *)&MiSystemPartition && !v18 && v21 == 1 && v16 <= 0x200 )
  {
    v27 = 1953394499;
    if ( a8 != 1416523587 )
      v27 = a8;
    v60 = v27;
    v28 = v16 << 12;
    while ( 1 )
    {
      ContiguousHeapPool = ExAllocateContiguousHeapPool(v19, a3, v20, (_DWORD)v16 << 12, *v25, v27);
      if ( ContiguousHeapPool )
        break;
      v27 = v60;
      ++v25;
      v19 = v57;
      v20 = v58;
      if ( v25 == v59 )
      {
        v21 = v61;
        goto LABEL_22;
      }
    }
    v39 = 1;
    v50 = 1;
    goto LABEL_38;
  }
LABEL_22:
  if ( (a9 & 1) != 0 )
    goto LABEL_63;
  v29 = 135266304;
  v30 = v20;
  v31 = v19;
  v32 = (_DWORD *)(qword_140C65718 + 4LL * v24 * (unsigned __int16)KeNumberNodes);
  while ( (int)MiFindContiguousPagesEx(
                 (_DWORD)v56,
                 v31,
                 a3,
                 v30,
                 0,
                 v16,
                 v21,
                 *v32,
                 0x80000000,
                 v29,
                 2,
                 0LL,
                 (__int64)&v55) < 0 )
  {
    if ( ++v32 == v59 )
      goto LABEL_63;
    v30 = v58;
    v29 &= ~0x8000000u;
    v31 = v57;
  }
  v33 = v62;
  v28 = v16 << 12;
  v63 = v16;
  v34 = MiMapContiguousMemory(v55 << 12, v16 << 12, v16 << 12, v52, v62);
  ContiguousHeapPool = v34;
  if ( v34 && !(unsigned int)ExInsertPoolTag(a8, v34, v16 << 12) )
  {
    v44 = v16 << 12;
    if ( v33 )
      v44 = v28 + 4096;
    MmUnmapIoSpace((PVOID)ContiguousHeapPool, v44);
    ContiguousHeapPool = 0LL;
  }
  v35 = 48 * v55 - 0x220000000000LL;
  v59 = (_DWORD *)(v35 + 48 * v16);
  v36 = ContiguousHeapPool ? ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL : 0LL;
  v37 = (unsigned __int64)v59;
  do
  {
    v38 = MiLockPageInline(v35);
    v51 = v38;
    *(_QWORD *)(v35 + 8) = v36;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (v38 + 1));
        v49 = (v48 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v48;
        if ( v49 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v38 = v51;
        }
      }
    }
    __writecr8(v38);
    v35 += 48LL;
    if ( v36 )
      v36 += 8LL;
  }
  while ( v35 < v37 );
  Ptr = UserData.Ptr;
  if ( !ContiguousHeapPool )
  {
LABEL_63:
    if ( v55 != -1 )
      MiFreeContiguousPages(v55, v63);
    goto LABEL_65;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, v16);
  v39 = 0;
LABEL_38:
  if ( !v39 && v56 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C69638, v16);
  v40 = a1;
  *a1 = v28;
  v11 = a3;
LABEL_42:
  v41 = *v40;
  v42 = *v56;
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION) )
  {
    if ( ContiguousHeapPool )
      PhysicalAddress = MmGetPhysicalAddress((PVOID)ContiguousHeapPool);
    v64[0] = EtwpGetDurationSince(Ptr);
    v64[2] = v57 << 12;
    v64[4] = v58 << 12;
    v65 = v52;
    v66 = a6;
    v68 = a8;
    v69 = a9;
    v70 = v50;
    UserData.Ptr = (ULONGLONG)v64;
    v64[1] = v41;
    v64[3] = (v11 << 12) | 0xFFF;
    v64[5] = PhysicalAddress.QuadPart;
    v64[6] = ContiguousHeapPool;
    v67 = v42;
    v71 = 0;
    *(_QWORD *)&UserData.Size = 84LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return ContiguousHeapPool;
}
