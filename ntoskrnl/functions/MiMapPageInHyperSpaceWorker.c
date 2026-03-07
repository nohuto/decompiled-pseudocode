unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v4; // rbp
  int v5; // r8d
  int v7; // eax
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 result; // rax
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9

  LODWORD(v4) = 4;
  v5 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000000u;
LABEL_14:
      v5 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x220000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_14;
  }
  v5 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v4 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v4;
    }
    *a2 = CurrentIrql;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
  v11 = (__int64 *)(((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MmInternal[1543] = v11;
  *v11 = ValidPte;
  return result;
}
