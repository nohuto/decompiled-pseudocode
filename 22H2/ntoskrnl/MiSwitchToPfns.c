/*
 * XREFs of MiSwitchToPfns @ 0x140A42F08
 * Callers:
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 * Callees:
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiInitializeUnusablePfns @ 0x1403ABE00 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1403AC2E0 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1404078B0 (RtlCompareMemoryUlong.c)
 *     MiCreateFreePfns @ 0x140A43180 (MiCreateFreePfns.c)
 *     MxCreateFreePfns @ 0x140A432FC (MxCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  int v10; // eax
  ULONG_PTR v11; // r15
  __int64 v12; // rcx
  __m128i *v13; // rsi
  unsigned __int128 v14; // rax
  _DWORD *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 result; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rbp
  unsigned int v21; // r9d
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  char v24; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  _QWORD *v30; // rbp
  BOOL v31; // r13d
  __int128 v32; // [rsp+40h] [rbp-68h] BYREF
  __int128 v33; // [rsp+50h] [rbp-58h]
  ULONG_PTR v34; // [rsp+60h] [rbp-48h]
  __int64 *v35; // [rsp+B0h] [rbp+8h]
  __int64 *v36; // [rsp+B8h] [rbp+10h]

  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v5 = MmPfnDatabase + 48 * qword_140C52880;
  if ( !qword_140C52880 && !*(_WORD *)(v5 + 32) )
  {
    v22 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_140C52880, a2, a3, a4);
    *(_QWORD *)(v5 + 40) &= 0xFFFFFFF000000000uLL;
    v23 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v5 + 32) = 0;
    v24 = *(_BYTE *)(v5 + 34) & 0xFD;
    *(_QWORD *)(v5 + 24) = v23 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v5 + 34) = v24 | 5;
    *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v5 + 40) |= 0x4000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
  }
  v6 = (__int64 *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 32);
  v35 = (__int64 *)(a1 + 32);
  v36 = v7;
  if ( v7 != (__int64 *)(a1 + 32) )
  {
    do
    {
      v8 = *((int *)v7 + 4);
      v9 = v7[4];
      if ( (v8 & 0x80000000) != 0LL )
      {
        *((_DWORD *)v7 + 4) = v8 & 0x7FFFFFFF;
        goto LABEL_24;
      }
      if ( (v8 & 0x40000000) != 0
        || (unsigned int)v8 <= 0x18 && (v10 = 16777524, _bittest(&v10, v8))
        || (_DWORD)v8 == 29 && (MiFlags & 0x2000) == 0 )
      {
        MiCreateFreePfns(v7);
        goto LABEL_24;
      }
      v11 = v7[3];
      if ( !v11 )
      {
        if ( !--v9 )
          goto LABEL_24;
        v11 = 1LL;
      }
      if ( (unsigned int)v8 <= 0x22 )
      {
        v12 = 0x5C0800040LL;
        if ( _bittest64(&v12, v8) )
          goto LABEL_23;
      }
      if ( (_DWORD)v8 == 3 )
      {
LABEL_57:
        if ( v11 <= BugCheckParameter3 && v11 + v9 > BugCheckParameter3 + 1 )
          v7[4] = BugCheckParameter3 - v11 + 1;
        goto LABEL_24;
      }
      if ( (_DWORD)v8 == 22 || (unsigned int)(v8 - 38) <= 2 )
        goto LABEL_23;
      v13 = (__m128i *)(48 * v11 - 0x58000000000LL);
      if ( !v9 )
        goto LABEL_22;
      do
      {
        v14 = RtlCompareMemoryUlong(v13, 48 * v9, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
        v16 = *((_QWORD *)&v14 + 1) >> 5;
        if ( !(*((_QWORD *)&v14 + 1) >> 5) )
        {
          if ( (_DWORD)v8 != 29 && (_DWORD)v8 != 36 )
            goto LABEL_19;
          v30 = (_QWORD *)v13->m128i_i64[1];
          if ( (_DWORD)v8 == 29 )
          {
            if ( v30 )
            {
              v31 = 0;
              if ( MiPteInShadowRange(v13->m128i_u64[1]) )
                v31 = MiPteHasShadow() != 0;
              *v30 = 0LL;
              if ( v31 )
                MiWritePteShadow((__int64)v30, 0LL, v16);
              v13->m128i_i64[1] = 0LL;
              v30 = 0LL;
              goto LABEL_54;
            }
LABEL_56:
            MiInitializeUnusablePfns(v13, 1uLL, 0, 0x80u, 0LL, 0LL, 0);
          }
          else
          {
LABEL_54:
            if ( !v30 )
              goto LABEL_56;
            MiMarkPfnVerified((ULONG_PTR)v13, 0, v16, v15);
          }
LABEL_19:
          --v9;
          v17 = 48LL;
          goto LABEL_20;
        }
        v11 = (__int64)v13[0x5800000000LL].m128i_i64 / 48;
        v19 = MiRestrictRangeToNode(v11, *((_QWORD *)&v14 + 1) >> 5);
        v20 = v19;
        if ( (((_DWORD)v8 - 9) & 0xFFFFFFFD) != 0 )
        {
          if ( (_DWORD)v8 == 29 || (v21 = 64, (_DWORD)v8 == 36) )
            v21 = 128;
          MiInitializeUnusablePfns(v13, v19, 0, v21, 0LL, 0LL, 0);
        }
        else
        {
          LODWORD(v33) = 2;
          *((_QWORD *)&v33 + 1) = (__int64)v13[0x5800000000LL].m128i_i64 / 48;
          v34 = v19;
          MxCreateFreePfns(&v32);
        }
        v9 -= v20;
        v17 = 48 * v20;
LABEL_20:
        v13 = (__m128i *)((char *)v13 + v17);
      }
      while ( v9 );
      v7 = v36;
LABEL_22:
      v6 = v35;
LABEL_23:
      if ( (_DWORD)v8 == 3 )
        goto LABEL_57;
LABEL_24:
      v7 = (__int64 *)*v7;
      v36 = v7;
    }
    while ( v7 != v6 );
  }
  result = KeFlushTb(3u, 2u);
  MiFlags |= 0x8000000u;
  return result;
}
