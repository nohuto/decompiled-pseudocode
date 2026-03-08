/*
 * XREFs of MiInitializeAllResidentPageBasePfns @ 0x140213BC4
 * Callers:
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializeAllResidentPageBasePfns(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // rcx
  __int64 v9; // r11
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // di
  char v13; // r9
  char v14; // r10
  __int64 updated; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  volatile signed __int32 *v18; // rbx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  __int128 v29; // [rsp+20h] [rbp-30h] BYREF
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __m128i v31; // [rsp+40h] [rbp-10h] BYREF

  v7 = *a1;
  v29 = xmmword_140C66F30;
  v9 = MiLargePageSizes[a4];
  v31.m128i_i64[0] = xmmword_140C66F50;
  v10 = _mm_srli_si128((__m128i)xmmword_140C66F50, 8).m128i_u64[0];
  v31.m128i_i64[1] = (v10 ^ (v7 << 43)) & 0x1FF80000000000LL ^ v10;
  v31.m128i_i8[4] = (BYTE4(xmmword_140C66F50) ^ ~(_BYTE)a4) & 3 ^ BYTE4(xmmword_140C66F50);
  v30 = xmmword_140C66F40;
  v11 = 48 * a2 - 0x220000000000LL;
  if ( a7 )
  {
    CurrentIrql = 17;
    *((_QWORD *)&v30 + 1) |= 0x8000000000000000uLL;
  }
  else
  {
    if ( (_DWORD)InitializationPhase )
      *((_QWORD *)&v30 + 1) |= 0x8000000000000000uLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v22) = 4;
      if ( CurrentIrql != 2 )
        v22 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v22;
    }
  }
  v13 = ((_BYTE)a5 << 6) | v31.m128i_i8[2] & 0x3F;
  v14 = ((_BYTE)a5 << 6) | v31.m128i_i8[2] & 0x3D;
  LOBYTE(updated) = ((_BYTE)a5 << 6) | v31.m128i_i8[2] & 0x38 | 5;
  v31.m128i_i8[2] = updated;
  if ( !a6 )
  {
    updated = MiUpdatePageFileHighInPte(v30, 4294967293LL);
    *(_QWORD *)&v30 = updated;
  }
  v16 = v11 + 48 * a3;
  v31.m128i_i8[2] = v14 ^ (v14 ^ v13) & 7;
  if ( v11 < v16 )
  {
    v17 = 48 * v9;
    v18 = (volatile signed __int32 *)(v11 + 24);
    do
    {
      if ( !a7 && (_DWORD)InitializationPhase )
      {
        a5 = 0;
        while ( _interlockedbittestandset64(v18, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&a5);
          while ( *(__int64 *)v18 < 0 );
        }
      }
      updated = v11;
      if ( (volatile signed __int32 *)v11 != v18 + 6 )
      {
        do
        {
          v19 = _mm_loadu_si128((const __m128i *)&v30);
          *(__m128i *)updated = _mm_loadu_si128((const __m128i *)&v29);
          v20 = _mm_loadu_si128(&v31);
          *(__m128i *)(updated + 16) = v19;
          *(__m128i *)(updated + 32) = v20;
          updated += 48LL;
        }
        while ( (volatile signed __int32 *)updated != v18 + 6 );
      }
      if ( !a7 && (_DWORD)InitializationPhase )
      {
        LOBYTE(updated) = -1;
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
      }
      v11 += v17;
      v18 = (volatile signed __int32 *)((char *)v18 + v17);
    }
    while ( v11 < v16 );
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LOBYTE(updated) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return updated;
}
