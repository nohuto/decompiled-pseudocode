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
  ULONG_PTR *v11; // r8
  char v12; // r9
  __int64 result; // rax
  int v14; // edx
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
    goto LABEL_6;
  v11 = (ULONG_PTR *)HalpIommuList;
  v12 = 0;
  if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    goto LABEL_6;
  do
  {
    a1 = (unsigned int *)v11;
    v11 = (ULONG_PTR *)*v11;
    result = a1[122];
    if ( (result & 8) != 0 && a1[124] == v10 && a1[125] == (_DWORD)v9 )
    {
      v17 = a1[126];
      result = (unsigned int)v8 ^ v17;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a1 + 504)) & 0x1F) == 0
        && (((unsigned __int8)v8 ^ (unsigned __int8)v17) & 0xE0) == 0 )
      {
        v12 = 1;
      }
    }
  }
  while ( v11 != &HalpIommuList );
  if ( !v12 )
  {
LABEL_6:
    if ( qword_140C621E8 )
    {
      LOBYTE(a1) = a7 == 1;
      result = qword_140C621E8(
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
    LOBYTE(v14) = v9;
    result = HalpPciAccessMmConfigSpace((unsigned __int16)v10, v14, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
    if ( !(_BYTE)result )
    {
      LOBYTE(v15) = v9;
      result = HalpPciAccessIoConfigSpace((unsigned __int16)v10, v15, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
      if ( !(_BYTE)result && !a7 )
        result = (__int64)memset(a4, 255, Size);
    }
    if ( !HalpDoingCrashDump )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&HalpPCIConfigLock);
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
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
