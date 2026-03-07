__int64 __fastcall MiLookupIoPageNode(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r10
  unsigned __int8 v6; // r11
  _QWORD *v7; // r8
  ULONG_PTR v8; // rax
  int v9; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  MiIoSpaceGetBounds((__int64)&v18, BugCheckParameter2);
  if ( HIDWORD(v19) == 3 )
  {
    MiLockIoPfnTree(5);
    v7 = (_QWORD *)*((_QWORD *)&xmmword_140C69200 + 1);
    while ( v7 )
    {
      v8 = v7[3];
      if ( BugCheckParameter2 < v8 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( BugCheckParameter2 < v8 + 512 )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    if ( v7 )
    {
      v9 = *((_DWORD *)v7
           + ((unsigned __int64)(2
                               * (((unsigned int)BugCheckParameter2 & ((1 << (dword_140C65760 - 12)) - 1))
                                - *((_DWORD *)v7 + 6))) >> 5)
           + 11) >> ((2 * ((BugCheckParameter2 & ((1 << (dword_140C65760 - 12)) - 1)) - *((_BYTE *)v7 + 24))) & 0x1F);
      MiUnlockIoPfnTree(CurrentIrql, 1);
      return v9 & 3;
    }
    else
    {
      if ( a2 )
        KeBugCheckEx(0x1Au, 0x61949uLL, BugCheckParameter2, 1uLL, 0LL);
      return 3LL;
    }
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= v6 && CurrentIrql <= v6 && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(v5 << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return (unsigned int)v19;
  }
}
