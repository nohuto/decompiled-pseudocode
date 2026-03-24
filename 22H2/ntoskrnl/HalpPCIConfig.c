/*
 * XREFs of HalpPCIConfig @ 0x140309270
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140309200 (HaliPciInterfaceReadConfig.c)
 *     HaliPciInterfaceWriteConfig @ 0x14037CC80 (HaliPciInterfaceWriteConfig.c)
 *     HalpWritePCIConfig @ 0x14039E0DC (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x14039E3F4 (HalpReadPCIConfig.c)
 *     HalpPciHandleSecureAccess @ 0x1404D265C (HalpPciHandleSecureAccess.c)
 *     HaliHandlePCIConfigSpaceAccess @ 0x1404D68C0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdWritePCIConfig @ 0x1404DF250 (HalpKdWritePCIConfig.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     HalpPciAccessMmConfigSpace @ 0x1403093C0 (HalpPciAccessMmConfigSpace.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140309544 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPciAccessIoConfigSpace @ 0x1403BBD38 (HalpPciAccessIoConfigSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall HalpPCIConfig(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int BugCheckParameter3,
        unsigned int Size,
        int a7)
{
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r15
  unsigned int v10; // r12d
  __int64 *v11; // r8
  char v12; // r9
  int v13; // edx
  __int64 result; // rax
  int v15; // edx
  unsigned __int8 v16; // bl
  unsigned int v17; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  char v23[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3;
  v9 = a2;
  v10 = (unsigned __int16)a1;
  v23[0] = 0;
  if ( HalpIommuSkipPciConfigDisabled )
    goto LABEL_3;
  v11 = (__int64 *)HalpIommuList;
  v12 = 0;
  if ( (__int64 *)HalpIommuList == &HalpIommuList )
    goto LABEL_3;
  do
  {
    a1 = (unsigned int *)v11;
    v11 = (__int64 *)*v11;
    result = a1[114];
    if ( (result & 8) != 0 && a1[116] == v10 && a1[117] == (_DWORD)v9 )
    {
      v17 = a1[118];
      result = (unsigned int)v8 ^ v17;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a1 + 472)) & 0x1F) == 0
        && (((unsigned __int8)v8 ^ (unsigned __int8)v17) & 0xE0) == 0 )
      {
        v12 = 1;
      }
    }
  }
  while ( v11 != &HalpIommuList );
  if ( !v12 )
  {
LABEL_3:
    if ( qword_140C4A2C8 )
    {
      LOBYTE(a1) = a7 == 1;
      result = qword_140C4A2C8(
                 a1,
                 v10,
                 (unsigned int)v9,
                 v8 & 0x1F,
                 (unsigned __int8)v8 >> 5,
                 BugCheckParameter3,
                 Size,
                 a4);
      if ( (int)result >= 0 )
        return result;
      if ( (_DWORD)result != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v8, BugCheckParameter3, (int)result);
    }
    HalpPCIAcquireConfigSpaceLock(v23);
    LOBYTE(v13) = v9;
    result = HalpPciAccessMmConfigSpace((unsigned __int16)v10, v13, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
    if ( !(_BYTE)result )
    {
      LOBYTE(v15) = v9;
      result = HalpPciAccessIoConfigSpace((unsigned __int16)v10, v15, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
      if ( !(_BYTE)result && !a7 )
        result = (__int64)memset(a4, 255, Size);
    }
    if ( !HalpDoingCrashDump )
    {
      KxReleaseSpinLock(&HalpPCIConfigLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v16 = v23[0];
        if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = v23[0];
          v21 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v16 = v23[0];
      }
      result = v16;
      __writecr8(v16);
    }
  }
  else if ( !a7 )
  {
    return (__int64)memset(a4, 255, Size);
  }
  return result;
}
