__int64 __fastcall IommupHvFlushDomainTbs(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdi
  __int64 *v9; // rbx
  char v10; // r15
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17[6]; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v16 = 0LL;
  v17[0] = 0LL;
  if ( qword_140C62320 && qword_140C62218 && a3 )
  {
    v5 = a2 + a3 - 1;
    if ( v5 >= a2 )
    {
      _BitScanReverse64(&v5, a2 ^ v5);
      v7 = v5 + 1;
      LOBYTE(v5) = v5 + 1;
      if ( v7 <= 0xC )
      {
        LOBYTE(v7) = 12;
        LOBYTE(v5) = 12;
      }
      v6 = 1;
      v17[0] = a2 & -(1LL << v7) ^ ((unsigned __int8)(v5 - 12) ^ a2 & (unsigned __int8)-(char)(1 << v7)) & 0x3F;
    }
    else
    {
      v6 = 0;
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v9 = *(__int64 **)(a1 + 72);
    v10 = 0;
    while ( v9 != (__int64 *)(a1 + 72) )
    {
      v11 = *((unsigned int *)v9 + 4);
      if ( (_DWORD)v11 )
      {
        LOBYTE(v15) = 1;
        qword_140C62218(0LL, v11, v6, v17, v15);
      }
      else if ( !v10 )
      {
        v16 = 0LL;
        LODWORD(v16) = *(_DWORD *)(a1 + 48);
        BYTE4(v16) = 1;
        ((void (__fastcall *)(__int64 *))qword_140C62320)(&v16);
        v10 = 1;
      }
      v9 = (__int64 *)*v9;
    }
    result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 88));
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v8 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  return result;
}
