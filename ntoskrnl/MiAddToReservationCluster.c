/*
 * XREFs of MiAddToReservationCluster @ 0x140635394
 * Callers:
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x140213038 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14029DAB8 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int *v25; // rdx
  int v26; // r9d
  int *v27; // r8
  bool v28; // zf
  bool i; // zf
  int v30; // r15d
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  _QWORD *v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v38; // edx
  _DWORD *SchedulerAssist; // r9
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+70h] [rbp+8h]

  v6 = 0;
  v41 = *(_QWORD *)(a1 + 248);
  v8 = v41 + 88LL * (*(_WORD *)(a1 + 204) & 0xF);
  v42 = v8;
  if ( a3 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 3920);
      if ( v9 == 0x3FFFFFFFFFLL )
        return v6;
      v10 = 48 * v9 - 0x220000000000LL;
      v11 = 0;
      v12 = (unsigned __int8)MiLockPageInline(v10);
      if ( v9 == *(_QWORD *)(v8 + 3920) )
      {
        v17 = *(_QWORD *)(v10 + 16);
        if ( qword_140C657C0 && (v17 & 0x10) == 0 )
          v17 &= ~qword_140C657C0;
        v18 = HIDWORD(v17);
        if ( (_DWORD)v18 != a4 )
        {
          v11 = v18 - a4;
          if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v41, (_WORD *)(v10 + 16))
            || (unsigned int)v18 < a4
            || v11 > 0x1F
            || v11 + v6 >= a3 )
          {
            goto LABEL_25;
          }
        }
        if ( _bittest64(*(const signed __int64 **)(a2 + 8), v18) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v28 = (v38 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v38;
              if ( v28 )
              {
                v23 = (__int64)CurrentPrcb;
LABEL_64:
                KiRemoveSystemWorkPriorityKick(v23);
              }
            }
          }
LABEL_65:
          __writecr8(v12);
          return v6;
        }
        if ( v11 )
        {
          if ( a4 >= *(_DWORD *)a2 )
            goto LABEL_25;
          if ( v11 > 1 )
          {
            if ( *(_DWORD *)a2 - a4 < v11 )
              goto LABEL_25;
            v24 = *(_QWORD *)(a2 + 8);
            v25 = (int *)(v24 + 4 * ((unsigned __int64)a4 >> 5));
            v26 = *v25;
            v27 = (int *)(v24 + 4 * ((unsigned __int64)(v11 + a4 - 1) >> 5));
            if ( v25 != v27 )
            {
              for ( i = (v26 & (-1 << a4)) == 0; i; i = *v25 == 0 )
              {
                if ( ++v25 == v27 )
                {
                  v28 = ((0xFFFFFFFF >> ~(v11 + a4 - 1)) & *v25) == 0;
                  goto LABEL_40;
                }
              }
LABEL_25:
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                v19 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v19 >= 2u )
                {
                  v20 = KeGetCurrentPrcb();
                  v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                  v22 = v20->SchedulerAssist;
                  v28 = (v21 & v22[5]) == 0;
                  v22[5] &= v21;
                  if ( v28 )
                  {
                    v23 = (__int64)v20;
                    goto LABEL_64;
                  }
                }
              }
              goto LABEL_65;
            }
            v28 = (v26 & (0xFFFFFFFF >> (32 - v11) << a4)) == 0;
LABEL_40:
            if ( !v28 )
              goto LABEL_25;
          }
          else if ( _bittest((const signed __int32 *)(*(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)a4 >> 5)), a4 & 0x1F) )
          {
            goto LABEL_25;
          }
        }
        v30 = MiReferencePageForModifiedWrite(48 * v9 - 0x220000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v31 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v28 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v32);
          }
        }
        __writecr8(v12);
        if ( !v30 )
          return v6;
        v35 = a5;
        if ( v11 )
        {
          v6 += v11;
          a4 += v11;
          *a6 += v11;
          do
          {
            *v35++ = qword_140C69378;
            --v11;
          }
          while ( v11 );
        }
        *v35 = v9;
        ++v6;
        ++a4;
        a5 = v35 + 1;
        if ( v30 == 3 && v6 >= 0x10 )
          return v6;
        v8 = v42;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v13 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v28 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
        __writecr8(v12);
      }
    }
    while ( v6 != a3 );
  }
  return v6;
}
