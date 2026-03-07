__int64 __fastcall MiFreeSecureKernelPage(ULONG_PTR a1, __int64 a2, int a3, ULONG_PTR a4, _DWORD *a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  struct _KPRCB *v21; // r8
  __int64 CachedResidentAvailable; // rdx

  v8 = 48 * a1 - 0x220000000000LL;
  v9 = *(_QWORD *)(v8 + 16);
  if ( qword_140C657C0 && (v9 & 0x10) == 0 )
    v9 &= ~qword_140C657C0;
  v10 = HIDWORD(v9);
  if ( (v10 & 8) != 0 )
  {
    v11 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v11 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
    return result;
  }
  if ( (v10 & 2) != 0 )
  {
    v16 = (unsigned __int8)MiLockPageInline(48 * a1 - 0x220000000000LL);
    if ( !a3 )
      MiSetPfnIdentity(v8, 0);
    MiFreeSmallPageFromMdl(a1, 0, 3, 0LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = 1LL;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v16 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v15 = ((unsigned int)result & v20[5]) == 0;
        v17 = (unsigned int)result & v20[5];
        v20[5] = v17;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    __writecr8(v16);
    _InterlockedAdd64(&qword_140C65828, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 4) == 0 )
    {
      MiReturnCommit(a2, 1LL, v17);
      result = (__int64)MiSystemPartition;
      if ( (unsigned __int16 *)a2 != MiSystemPartition )
        goto LABEL_34;
      v21 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v21->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_34;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)&v21->CachedResidentAvailable,
                                   CachedResidentAvailable + 1,
                                   CachedResidentAvailable);
          v15 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
          CachedResidentAvailable = (int)result;
          if ( v15 )
            goto LABEL_35;
          if ( (_DWORD)result != -1 )
          {
            result = (int)result + 1LL;
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              continue;
          }
          break;
        }
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&v21->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v18 = (int)result + 1LL;
        }
      }
      if ( v18 )
LABEL_34:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v18);
LABEL_35:
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 17880), 0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    result = (unsigned int)*a5;
    *(_QWORD *)(a4 + 8 * result + 48) = a1;
    *a5 = result + 1;
    if ( (_DWORD)result == 15 )
    {
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 44) = 0;
      *(_DWORD *)(a4 + 40) = 0x10000;
      *(_WORD *)(a4 + 10) = 2;
      *(_WORD *)(a4 + 8) = 176;
      result = (__int64)MiFreePagesFromMdl(a4, 0);
      *a5 = 0;
    }
  }
  return result;
}
