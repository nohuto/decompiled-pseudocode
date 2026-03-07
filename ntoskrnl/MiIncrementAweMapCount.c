__int64 __fastcall MiIncrementAweMapCount(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rsi
  volatile signed __int64 *v11; // r15
  unsigned int v12; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  int v23; // edi
  __int64 *v25; // rdx
  unsigned __int8 v26; // al
  bool v27; // cf
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  int v35; // eax
  _DWORD *v36; // r8
  unsigned __int64 v37; // [rsp+20h] [rbp-30h] BYREF
  __int128 v38; // [rsp+28h] [rbp-28h] BYREF
  __int128 v39; // [rsp+38h] [rbp-18h] BYREF
  char *v40; // [rsp+48h] [rbp-8h]

  v5 = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  v40 = 0LL;
  v7 = a3;
  v8 = a2;
  v38 = 0LL;
  v39 = 0LL;
  while ( 1 )
  {
    v9 = MiValidateAndLockAweMapCountPage(a1, v8, &v37);
    v10 = v9;
    if ( v9 == 17 )
      return 3221225496LL;
    if ( v37 < 0xFFFFDE0000000000uLL || v37 >= 48 * qword_140C65820 - 0x21FFFFFFFFD0LL )
      v5 = (_QWORD *)v37;
    else
      v6 = v37;
    v11 = (volatile signed __int64 *)(v6 + 24);
    if ( (*(_DWORD *)(a1 + 8) & 1) != 0 && (*v11 & 0x4000000000000000LL) != 0 )
      goto LABEL_34;
    if ( !v6 )
      break;
    v12 = *(unsigned __int8 *)(v6 + 34);
    if ( (v12 & 0x20) != 0 )
    {
      DWORD1(v39) = 0;
      v40 = (char *)&v39 + 8;
      *((_QWORD *)&v38 + 1) = v6;
      *((_QWORD *)&v39 + 1) = (char *)&v39 + 8;
      LOWORD(v39) = 263;
      BYTE2(v39) = 6;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
      *(_QWORD *)&v38 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = &v38;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
      _InterlockedAnd64(v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v10);
      KeWaitForGate((__int64)&v39, 18LL, 0);
    }
    else
    {
      v18 = *v11 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v12 >> 6 == v7 )
      {
        if ( v18 <= 1 || (*(_DWORD *)(a1 + 8) & 1) == 0 )
        {
          v25 = (__int64 *)(v6 + 24);
          if ( (*v11 & 0x3FFFFFFFFFFFFFFFLL) != 0x3FFFFFFFFFFFFFFFLL )
          {
LABEL_44:
            v28 = *v25;
            *(_QWORD *)(v6 + 8) = a4;
            *v11 = v28 ^ ((v28 + 1) ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64(v11, 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_59;
          }
        }
LABEL_34:
        _InterlockedAnd64(v11, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_48:
        if ( KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v10 <= 0xFu )
          {
            v27 = v29 < 2u;
LABEL_53:
            if ( !v27 )
            {
              v30 = KeGetCurrentPrcb();
              v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v32 = v30->SchedulerAssist;
              v17 = (v31 & v32[5]) == 0;
              v32[5] &= v31;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v30);
            }
          }
        }
LABEL_56:
        __writecr8(v10);
        return 3221225496LL;
      }
      if ( *(_WORD *)(v6 + 32) > 2u || v18 != 1 || (*v11 & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64(v11, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v26 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v10 <= 0xFu )
          {
            v27 = v26 < 2u;
            goto LABEL_53;
          }
        }
        goto LABEL_56;
      }
      if ( *(_QWORD *)(a1 + 16) == 1LL )
      {
        MiChangePageAttribute(v6, v7, 1u);
        v25 = (__int64 *)(v6 + 24);
        goto LABEL_44;
      }
      *(_BYTE *)(v6 + 34) = v12 | 0x20;
      _InterlockedAnd64(v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v19 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v17 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
      }
      __writecr8(v10);
      v23 = MiChangeAwePageAttributes(a1, v6, v7);
      MiWakeWaitersForAweCacheAttributeChange(a1, v6);
      if ( v23 < 0 )
        return (unsigned int)v23;
    }
    v7 = a3;
    v8 = a2;
  }
  if ( v7 != 1 || ((*v5 >> 17) & 0x3FFFFFuLL) >= 7 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v5 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v5 - qword_140C67A70) >> 3) & 0x1F)));
    goto LABEL_48;
  }
  *v5 ^= (*v5 ^ (*v5 + 0x20000LL)) & 0x7FFFFE0000LL;
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v5 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << ((((__int64)v5 - qword_140C67A70) >> 3) & 0x1F)));
LABEL_59:
  if ( KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v36 = v34->SchedulerAssist;
      v17 = (v35 & v36[5]) == 0;
      v36[5] &= v35;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v34);
    }
  }
  __writecr8(v10);
  return 0LL;
}
