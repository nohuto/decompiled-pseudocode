unsigned __int64 __fastcall MiChangePageAttributeContiguous(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // r12d
  BOOL v5; // edi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rsi
  int v12; // r15d
  unsigned __int64 v13; // rbp
  unsigned int v14; // ecx
  char v15; // al
  unsigned int v16; // ecx
  _QWORD *v17; // rcx
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  unsigned __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned int v28; // [rsp+98h] [rbp+10h]

  v24 = a4 & 1;
  v4 = a3;
  v5 = (a4 & 2) == 0;
  result = 48 * a1 - 0x220000000000LL;
  v7 = 0LL;
  v8 = result + 48 * a2;
  v27 = result;
  v26 = v8;
  v9 = result;
  v10 = 17;
  if ( result < v8 )
  {
    do
    {
      v11 = v7;
      v28 = v7;
      v12 = 1;
      v25 = v9;
      do
      {
        if ( v11 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v10 = MiLockPageInline(v9);
          LODWORD(v7) = 0;
        }
        if ( (*(_BYTE *)(v9 + 34) & 0xC0) != 0xC0 )
          v12 = v7;
        MiAbortCombineScan(v9);
        v7 = 0LL;
        if ( v5 && !v24 && (unsigned int)MiPfnZeroingNeeded(v9, v4, 0LL) )
          v5 = v7;
        ++v11;
        v9 += 48LL;
        if ( v10 < 2u && (v11 & 0x3F) == 0 )
        {
          ShouldYieldProcessor = KeShouldYieldProcessor();
          v7 = 0LL;
          if ( ShouldYieldProcessor )
            break;
        }
      }
      while ( v9 < v8 );
      if ( v12 )
      {
        a2 = v28;
      }
      else
      {
        MiFlushEntireTbDueToAttributeChange();
        if ( v11 < (unsigned int)dword_140C6578C || v4 == 1 )
        {
          a2 = v28;
        }
        else
        {
          ++dword_140C65784;
          KeInvalidateAllCaches();
          a2 = 1LL;
          v28 = 1;
        }
        v7 = 0LL;
      }
      v9 = v25;
      v13 = v7;
      if ( v11 )
      {
        do
        {
          v14 = *(unsigned __int8 *)(v9 + 34);
          v15 = ((_BYTE)v4 << 6) | v14 & 0x3F;
          v16 = v14 >> 6;
          *(_BYTE *)(v9 + 34) = v15;
          if ( !(_DWORD)a2 && !v12 && v16 == 1 && a3 != 1 )
          {
            ++dword_140C65788;
            MiFlushCacheForAttributeChange(
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4),
              1LL,
              a3,
              0LL);
            a2 = v28;
            v7 = 0LL;
          }
          *(_QWORD *)(v9 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
          if ( v13 < v11 - 1 )
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v9 += 48LL;
          ++v13;
        }
        while ( v13 < v11 );
        v8 = v26;
        v4 = a3;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 - 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << (v10 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)a2;
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = 0LL;
        }
      }
      __writecr8(v10);
    }
    while ( v9 < v8 );
    result = v27;
  }
  v17 = (_QWORD *)(result + 16);
  if ( !v5 )
    return MiSetOriginalPtePfnFromFreeList(v17, a2, v7);
  *v17 &= 0xFFFFFFFFFFFFFC1FuLL;
  return result;
}
