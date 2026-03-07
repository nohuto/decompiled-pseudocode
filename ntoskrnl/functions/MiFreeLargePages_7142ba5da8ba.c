__int64 __fastcall MiFreeLargePages(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v9; // rsi
  _KPROCESS *Process; // rcx
  int v11; // ebx
  int v12; // r14d
  ULONG_PTR v13; // r8
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-1C8h]
  __int64 v31; // [rsp+28h] [rbp-1C0h]
  int v32; // [rsp+30h] [rbp-1B8h]
  __int64 v33; // [rsp+38h] [rbp-1B0h]
  __int64 v34; // [rsp+40h] [rbp-1A8h]
  int v35; // [rsp+48h] [rbp-1A0h]
  unsigned int PfnPageSizeIndex; // [rsp+4Ch] [rbp-19Ch]
  __int64 v37; // [rsp+50h] [rbp-198h]
  __int64 v38; // [rsp+58h] [rbp-190h]
  __int64 v39; // [rsp+60h] [rbp-188h]
  unsigned __int64 v40; // [rsp+68h] [rbp-180h]
  __int64 v42; // [rsp+78h] [rbp-170h]
  unsigned __int64 LeafPfnBuddy; // [rsp+80h] [rbp-168h]
  _QWORD v46[32]; // [rsp+A0h] [rbp-148h] BYREF

  v30 = 0;
  v5 = 0;
  v34 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v38 = 0LL;
  v9 = MiSwizzleInvalidPte(128LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 328);
  v39 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
  v32 = *(unsigned __int8 *)(a2 + 34) >> 6;
  v31 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v11 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 2);
LABEL_2:
  v40 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)a2);
  v12 = *(unsigned __int8 *)(a2 + 34) >> 6;
  v35 = v12;
  v37 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v14 = *((_DWORD *)MiSearchNumaNodeTable(v13) + 2);
  v15 = v31;
  if ( v37 == v31 && v12 == v32 && v14 == v11 )
    goto LABEL_15;
  while ( 1 )
  {
    v16 = v6;
    v17 = v7;
    if ( v5 )
    {
      MiFreeLargeProcessPagesToCache(v46, v5);
      v15 = v31;
      v5 = 0;
      v30 = 0;
    }
    if ( (a5 & 1) == 0 && v15 != v39 )
      MiReturnCrossPartitionCharges(v15, 2, 1, v33);
    v6 += v33;
    if ( v31 != a1 )
      v6 = v16;
    v7 += v34;
    v11 = v14;
    if ( v31 != a1 )
      v7 = v17;
    v31 = v37;
    v34 = 0LL;
    v32 = v35;
    v18 = v33 + v38;
    v38 += v33;
    v33 = 0LL;
    if ( !a2 )
      break;
LABEL_15:
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
    v19 = MiLargePageSizes[PfnPageSizeIndex];
    if ( PfnPageSizeIndex != 2 || v31 != v39 || !v42 )
      goto LABEL_34;
    v20 = 0;
    if ( v19 )
    {
      v21 = 0LL;
      do
      {
        if ( *(_WORD *)(a2 + 48 * v21 + 32) != 2 )
          break;
        if ( (*(_BYTE *)(a2 + 48 * v21 + 35) & 0x40) != 0 )
          break;
        v21 = ++v20;
      }
      while ( v20 < v19 );
    }
    if ( v20 != v19 )
      goto LABEL_34;
    if ( v5 == 32 )
    {
      MiFreeLargeProcessPagesToCache(v46, 32LL);
      v5 = 0;
    }
    v30 = v5 + 1;
    v46[v5] = v40;
    v22 = (unsigned __int8)MiLockPageInline(a2);
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
    *(_QWORD *)(a2 + 16) = v9;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v22);
    v28 = v19;
    if ( !v19 )
LABEL_34:
      v28 = MiFreeLargePageMemory(v40, PfnPageSizeIndex, 0);
    v34 += v28;
    v33 += v19;
    a2 = LeafPfnBuddy;
    v5 = v30;
    v15 = v31;
    if ( LeafPfnBuddy )
      goto LABEL_2;
  }
  *a3 = v7;
  *a4 = v18;
  return v6 - v7;
}
