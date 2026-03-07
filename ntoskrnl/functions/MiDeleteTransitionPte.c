__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  char v11; // r13
  __int16 v12; // r14
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // r14d
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v23; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  char v26; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+90h] [rbp+8h] BYREF
  __int64 v34; // [rsp+98h] [rbp+10h]
  unsigned __int8 v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  v33 = MiPteInShadowRange(BugCheckParameter2);
  if ( v33
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v25 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
      if ( (v25 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v25 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 40);
  v10 = v9 & 0xFFFFFFFFFFLL;
  v11 = 0;
  v12 = *(_WORD *)(a2 + 32);
  v13 = 0LL;
  v32 = 0LL;
  if ( !v12 )
  {
    MiUnlinkPageFromListEx(a2, 0LL);
    v9 = *(_QWORD *)(a2 + 40);
  }
  v14 = *(_QWORD *)(a2 + 16);
  v15 = a2 + 16;
  if ( (v14 & 0x400) != 0 )
  {
    if ( qword_140C657C0 && (v14 & 0x10) == 0 )
      v14 &= ~qword_140C657C0;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v14 >> 16), v14 >> 16, v8, 2LL);
    v14 = *(_QWORD *)(a2 + 16);
    v15 = a2 + 16;
    if ( (v14 & 0x400) != 0 )
      v16 = v14 & 0xFFFFFFFFFFFFF7FFuLL;
    else
      v16 = v14 & 0xFFFFFFFFFFFFFFF1uLL;
    v9 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v16 = 0LL;
  }
  v34 = 0LL;
  v17 = 1LL;
  if ( v12 )
  {
    v18 = 3;
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
    {
      v15 = *(_QWORD *)a2 - 32LL;
      v34 = v15;
      if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
        v34 = 0LL;
    }
  }
  else
  {
    if ( (v14 & 0x400) == 0 )
    {
      v23 = MiCapturePageFileInfoInline(v15, 0LL, 1LL);
      v9 = *(_QWORD *)(a2 + 40);
      v13 = v23;
      v15 = (v9 >> 43) & 0x3FF;
      v32 = *(_QWORD *)(qword_140C67048 + 8 * v15);
    }
    v18 = 4;
  }
  if ( (v9 & 0x20000000000000LL) != 0 )
  {
    v26 = *(_BYTE *)(a2 + 35);
    if ( (v26 & 0x10) == 0 )
      *(_BYTE *)(a2 + 35) = v26 | 0x10;
  }
  if ( !v33 )
    goto LABEL_18;
  if ( !(unsigned int)MiPteHasShadow(v15, v9, v17) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
LABEL_18:
    *(_QWORD *)BugCheckParameter2 = v16;
    goto LABEL_19;
  }
  if ( !HIBYTE(word_140C6697C) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v16;
  MiWritePteShadow(BugCheckParameter2, v16);
LABEL_19:
  if ( v18 == 4 )
    MiInsertPageInFreeOrZeroedList(v7, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 48 * v10 - 0x220000000000LL;
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
    MiBadShareCount(v19);
  v20 = *(_QWORD *)(v19 + 24);
  *(_QWORD *)(v19 + 24) = v20 ^ (((v20 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = v35;
  if ( v35 != 17 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v35 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v35 + 1));
        v31 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v21);
  }
  if ( v34 )
    MiInvalidateCollidedIos(v34);
  if ( v13 && v36 )
  {
    if ( (_BYTE)v21 == 17 )
      v11 = 1;
    MiReleasePageFileInfo(v32, v13, v11);
  }
  return v18;
}
