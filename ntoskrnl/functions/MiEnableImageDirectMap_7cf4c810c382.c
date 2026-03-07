__int64 __fastcall MiEnableImageDirectMap(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v8; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // esi
  __int64 result; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2[12];
  if ( !a7 && (MiFlags & 0x1000) == 0 )
  {
    if ( a5 )
    {
      if ( (*(_DWORD *)(a3 + 8) & 0xFFF) == 0 )
      {
        v11 = ExAcquireSpinLockExclusive(&dword_140C651C0);
        v12 = **(_QWORD **)(a1 + 40);
        if ( !v12 || (*(_DWORD *)(v12 + 56) & 3) == 0 && (*(_BYTE *)(v12 + 62) & 0xC) != 4 )
          *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v11);
      }
    }
    else
    {
      *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 4;
    }
  }
  if ( a6 )
    *(_QWORD *)(v8 + 48) |= 1uLL;
  if ( (*((_BYTE *)a2 + 62) & 0xC) == 4 )
  {
    a2[8] = a1;
    v18 = MiInitializeImageExtents(a2);
    ObFastReplaceObject(a2 + 8, 0LL);
    if ( v18 >= 0 )
    {
      MiDeleteFileExtentList((PVOID)a4);
      return (unsigned int)v18;
    }
    if ( v18 != -1073741800 )
      return (unsigned int)v18;
    *((_BYTE *)a2 + 62) &= 0xF3u;
  }
  if ( a6 )
  {
    v20 = *a2;
    v21 = 0LL;
    result = MiAllocateEntireImageFileExtents(a1, (unsigned int)(*(_DWORD *)(v20 + 8) << 12), a4, &v21);
    if ( (int)result < 0 )
      return result;
    a4 = v21;
  }
  *(_QWORD *)(v8 + 48) |= a4;
  *((_BYTE *)a2 + 62) = *((_BYTE *)a2 + 62) & 0xF3 | 8;
  return 0LL;
}
