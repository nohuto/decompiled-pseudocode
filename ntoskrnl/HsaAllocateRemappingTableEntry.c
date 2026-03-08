/*
 * XREFs of HsaAllocateRemappingTableEntry @ 0x14052C890
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051CE10 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051D17C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x14052DBF0 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14052F02C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HsaAllocateRemappingTableEntry(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        int a8,
        __int64 a9)
{
  char v12; // r15
  int PhysicalMemory; // ebx
  unsigned int v14; // ecx
  char *v15; // rax
  __int64 v16; // r13
  __int64 DeviceAperture; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rcx
  void *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // xmm0_8
  char v32; // r12
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  __int64 v39; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-30h] BYREF
  void *v42[2]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE Size[24]; // [rsp+58h] [rbp-18h] BYREF
  char v45; // [rsp+C0h] [rbp+50h]

  v39 = 0LL;
  if ( a3 && ((a3 - 1) & a3) == 0 )
  {
    v41 = 0LL;
    v12 = 0;
    v40 = 0LL;
    PhysicalMemory = 0;
    v42[0] = 0LL;
    *(_OWORD *)&Size[8] = 0LL;
    v42[1] = 0LL;
    if ( *(_DWORD *)(a1 + 160) == a4
      && (!a9 || *(_DWORD *)a9 != 1
        ? (HIDWORD(v39) = 0, v14 = a7 & 7 | (8 * (a6 & 0x1F | (32 * (unsigned __int8)a5))))
        : (v14 = *(unsigned __int16 *)(a9 + 12), HIDWORD(v39) = *(_WORD *)(a9 + 10) & 3),
          v15 = (char *)(*(_QWORD *)(a1 + 192) + ((unsigned __int64)v14 >> 3)),
          LODWORD(v39) = v14,
          ((*v15 >> (v14 & 7)) & 1) != 0) )
    {
      v16 = HIWORD(a2);
      if ( (unsigned int)v16 >= 0x20 || a2 >> 9 >= HsaTotalDeviceApertures || (a2 & 0x1FF) + a3 > 0x200 )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        byte_140C5F878 = HalpAcquireHighLevelLock(&qword_140C5F870);
        DeviceAperture = HsaGetDeviceAperture(a2);
        v18 = DeviceAperture;
        if ( DeviceAperture && *(_QWORD *)(DeviceAperture + 16) )
        {
          *(_DWORD *)(DeviceAperture + 48) += a3;
          v45 = 0;
        }
        else
        {
          v45 = 1;
        }
        v19 = (unsigned __int8)byte_140C5F878;
        KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5F870);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)CurrentIrql <= 0xFu
            && (unsigned __int8)v19 <= 0xFu
            && (unsigned __int8)CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentIrql = (unsigned int)(v19 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v19);
        if ( !v45 )
          return (unsigned int)PhysicalMemory;
        if ( v18 )
          goto LABEL_28;
        PhysicalMemory = ExtEnvAllocateMemory(CurrentIrql, 0x2000u, &v41);
        if ( PhysicalMemory >= 0 )
        {
          v12 = 1;
LABEL_28:
          *(_QWORD *)Size = 0x20000002000LL;
          PhysicalMemory = ExtEnvAllocatePhysicalMemory(
                             CurrentIrql,
                             0x2000u,
                             0,
                             MmCached,
                             (LARGE_INTEGER *)v42,
                             (__int64)&v42[1]);
          if ( PhysicalMemory >= 0 )
          {
            v26 = v42[1];
            memset(v42[1], 0, *(unsigned int *)Size);
            PhysicalMemory = ExtEnvAllocateMemory(
                               v27,
                               4 * (unsigned int)(((unsigned __int64)*(unsigned int *)&Size[4] + 31) >> 5),
                               &v40);
            if ( PhysicalMemory < 0 )
              goto LABEL_44;
            *(_DWORD *)&Size[8] = *(_DWORD *)&Size[4];
            *(_QWORD *)&Size[16] = v40;
            RtlClearBits((PRTL_BITMAP)&Size[8], 0, *(ULONG *)&Size[4]);
            byte_140C5F878 = HalpAcquireHighLevelLock(&qword_140C5F870);
            if ( !HsaDeviceApertureRanges[v16] )
            {
              HsaDeviceApertureRanges[v16] = v41;
              v28 = HsaGetDeviceAperture(a2);
              HsaAllocatedDeviceApertures += 128;
              v18 = v28;
              v12 = 0;
            }
            if ( *(_QWORD *)(v18 + 16) )
            {
              v32 = 1;
            }
            else
            {
              v29 = *(_OWORD *)Size;
              v30 = v39;
              *(_OWORD *)(v18 + 8) = *(_OWORD *)v42;
              v31 = *(_QWORD *)&Size[16];
              *(_OWORD *)(v18 + 24) = v29;
              *(_QWORD *)(v18 + 40) = v31;
              *(_QWORD *)v18 = a1;
              *(_QWORD *)(v18 + 52) = v30;
              HsaUpdateRemappingTableInDeviceTableEntry(a1, &v39, v42);
              v32 = 0;
            }
            *(_DWORD *)(v18 + 48) += a3;
            v33 = (unsigned __int8)byte_140C5F878;
            KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5F870);
            v25 = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              v34 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v34 >= 2u )
              {
                v35 = KeGetCurrentPrcb();
                v25 = (unsigned int)(v33 + 1);
                v36 = v35->SchedulerAssist;
                v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
                v24 = (v37 & v36[5]) == 0;
                v36[5] &= v37;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(v35);
                v26 = v42[1];
              }
            }
            __writecr8(v33);
            if ( v32 )
            {
LABEL_44:
              if ( v26 )
                ExtEnvFreePhysicalMemory(v25, v26, *(unsigned int *)Size, 1u);
              if ( v40 )
                ExtEnvFreeMemory(v25, v40);
            }
          }
          if ( v12 )
            ExtEnvFreeMemory(v25, v41);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
    return (unsigned int)PhysicalMemory;
  }
  return 3221225485LL;
}
