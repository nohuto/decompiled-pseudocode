/*
 * XREFs of MiWritePageFileHash @ 0x1404670A6
 * Callers:
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiComputePageHash @ 0x140466BDC (MiComputePageHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageHashBugCheck @ 0x1406645D8 (MiPageHashBugCheck.c)
 *     MiWriteEntirePageHashEntry @ 0x14066481C (MiWriteEntirePageHashEntry.c)
 */

_BOOL8 __fastcall MiWritePageFileHash(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  int v6; // r12d
  unsigned __int8 v7; // r14
  _BOOL8 result; // rax
  __int64 v10; // rbx
  int v11; // r15d
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  volatile LONG *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  BOOL v22; // r8d
  unsigned int v23; // r10d
  int v24; // r9d
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  char v37; // [rsp+30h] [rbp-178h]
  int v38; // [rsp+34h] [rbp-174h]
  unsigned int v39; // [rsp+38h] [rbp-170h]
  BOOL v40; // [rsp+3Ch] [rbp-16Ch]
  unsigned int v42; // [rsp+48h] [rbp-160h]
  __int64 v43[34]; // [rsp+50h] [rbp-158h] BYREF

  v43[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  v42 = a4;
  v6 = 0;
  v38 = a3;
  v7 = 17;
  v37 = 17;
  result = dword_140C692D0 != 0;
  v10 = a1;
  v40 = dword_140C692D0 != 0;
  v11 = a3;
  v12 = 0;
  while ( 1 )
  {
    v39 = v12;
    if ( v12 >= a4 )
      break;
    v13 = 2LL * v4;
    LODWORD(v43[v13 + 2]) = 0;
    if ( result )
    {
      v43[2 * v4 + 3] = 0LL;
      HIDWORD(v43[2 * v4 + 2]) = 0;
    }
    v14 = *a2;
    if ( *a2 == qword_140C69378 )
    {
      ++v4;
      goto LABEL_19;
    }
    v15 = 48 * v14 - 0x220000000000LL;
    if ( !v5 )
    {
      v5 = 48 * v14 - 0x220000000000LL;
      v37 = MiLockPageInline(v5);
LABEL_9:
      v16 = *(_QWORD *)(v15 + 8);
      if ( (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) == v14 )
        v16 = 0xFFFFF6FB7DBEDF68uLL;
      v43[0] = *(_QWORD *)(v15 + 16);
      v17 = ((unsigned __int64)v43[0] >> 5) & 0x1F;
      if ( (dword_140D1D1D0 & 1) == 0 && (_DWORD)v17 != 31 )
      {
        if ( (unsigned int)v17 >> 3 == 3 )
        {
          if ( (((unsigned __int64)v43[0] >> 5) & 7) == 0 )
            goto LABEL_15;
LABEL_53:
          LODWORD(v43[v13 + 2]) = 2;
          v43[2 * v4 + 3] = v16 | 1;
          HIDWORD(v43[2 * v4 + 2]) = MiGetPagingFileOffset(v43);
LABEL_16:
          ++v4;
          if ( KeShouldYieldProcessor() )
            v6 = 1;
          goto LABEL_18;
        }
        if ( (unsigned int)v17 >> 3 == 1 )
          goto LABEL_53;
      }
LABEL_15:
      MiComputePageHash((__int64)&v43[v13 + 2], v15, v16);
      goto LABEL_16;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      goto LABEL_9;
    v6 = 1;
    v39 = v12 - 1;
    --a2;
LABEL_18:
    v10 = a1;
LABEL_19:
    v11 = v38;
    if ( v4 != 16 && !v6 )
      goto LABEL_57;
    v7 = v37;
LABEL_22:
    v18 = (volatile LONG *)(v10 + 232);
    v6 = 0;
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 232));
    v20 = 0;
    v21 = *(_QWORD *)(a1 + 216) + (unsigned int)(dword_140C692CC * v11);
    if ( v4 )
    {
      v22 = v40;
      v23 = 1;
      do
      {
        if ( (*(_DWORD *)v21 > v23 || v22 && ((unsigned __int8)v23 & *(_BYTE *)(v21 + 8)) != 0) && !dword_140C67BC4 )
          MiPageHashBugCheck(0x60uLL, v11 + v20, (int)&v43[2 * v20 + 2]);
        MiWriteEntirePageHashEntry(v21, &v43[2 * v20 + 2]);
        v20 = v23 + v24;
        v21 = (unsigned int)dword_140C692CC + v25;
      }
      while ( v20 < v4 );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v30 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v19);
    v11 += v4;
    v38 = v11;
    if ( v5 )
    {
      v31 = a2;
      if ( v4 )
      {
        do
        {
          if ( *v31 != qword_140C69378 )
          {
            v32 = 48LL * *v31 - 0x220000000000LL;
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v32 == v5 )
            {
              if ( KiIrqlFlags )
              {
                v33 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v7 <= 0xFu && v33 >= 2u )
                {
                  v34 = KeGetCurrentPrcb();
                  v35 = v34->SchedulerAssist;
                  v36 = ~(unsigned __int16)(-1LL << (v7 + 1));
                  v30 = (v36 & v35[5]) == 0;
                  v35[5] &= v36;
                  if ( v30 )
                    KiRemoveSystemWorkPriorityKick(v34);
                }
              }
              __writecr8(v7);
              v7 = 17;
              v5 = 0LL;
            }
          }
          --v31;
          --v4;
        }
        while ( v4 );
        v37 = v7;
      }
    }
    else
    {
      v4 = 0;
    }
LABEL_57:
    ++a2;
    v7 = v37;
    v12 = v39 + 1;
    result = v40;
    v10 = a1;
    a4 = v42;
  }
  if ( v4 )
  {
    --a2;
    goto LABEL_22;
  }
  return result;
}
