__int64 MiInitializeSharedUserData()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  char *Pool; // r13
  unsigned __int64 i; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 *v9; // r14
  char v10; // di
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rsi
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v23[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa();
  v23[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidPte & 1) != 0 )
    {
      v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
      if ( v2 <= qword_140C65820 )
      {
        if ( _bittest64((const signed __int64 *)(48 * v2 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v0 = 2LL;
          v3 = ExGenRandom(1) & 0xF;
          v4 = 15LL;
          if ( v3 )
            v4 = (unsigned int)v3;
          qword_140C656B8 = (v4 + 524256) << 12;
        }
      }
    }
  }
  Pool = (char *)MiAllocatePool(274, 8 * v0, 0x74536D4Du);
  if ( !Pool )
    return 0LL;
  for ( i = 0LL; i < v0; ++i )
  {
    v7 = ((v23[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFFLL;
    ValidPte = MiMakeValidPte(v7, v8, 536870913);
    v9 = (__int64 *)&Pool[8 * i];
    v10 = ValidPte;
    v11 = 0;
    v12 = ValidPte;
    if ( !MiPteInShadowRange((unsigned __int64)v9) )
      goto LABEL_11;
    if ( MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_11;
      v18 = (v10 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v18 = (v10 & 1) == 0;
    }
    if ( !v18 )
      v12 |= 0x8000000000000000uLL;
LABEL_11:
    *v9 = v12;
    if ( v11 )
      MiWritePteShadow((__int64)&Pool[8 * i], v12, v13);
    qword_140C656A8[i] = (__int64)v9;
    v14 = 48 * v8 - 0x220000000000LL;
    v15 = (unsigned __int8)MiLockPageInline(v14);
    *(_QWORD *)(v14 + 16) = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
    *(_QWORD *)(v14 + 8) = v9;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v18 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v15);
  }
  v16 = v0 << 12;
  if ( (int)KasanTrackAddress(0xFFFFF78000000000uLL, v16, 0) >= 0 )
  {
    KasanMarkAddressRedZone(0xFFFFF78000000000uLL, 0x738uLL, v16, 0x85u);
    return 1LL;
  }
  return 0LL;
}
