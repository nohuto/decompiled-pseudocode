__int64 __fastcall HalpDmaFreeMapRegisters(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r14d
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // di
  char v13; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  void *v17; // rcx
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v20; // r10
  int v21; // eax
  bool v22; // zf
  _OWORD v23[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h]
  _QWORD *v25; // [rsp+B8h] [rbp+10h]

  result = 0LL;
  v4 = 0;
  v24 = 0LL;
  v8 = a2;
  memset(v23, 0, sizeof(v23));
  if ( a3 )
  {
    do
    {
      v9 = 2LL;
      v25 = (_QWORD *)v8[1];
      v10 = v8[6];
      if ( (v10 & 0x20) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
        v12 = 0;
        v13 = 0;
        v8[6] = v11;
        CurrentIrql = 0;
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql > 2u )
            KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
          if ( CurrentIrql < 2u )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
              {
                LODWORD(v16) = 4;
              }
              else
              {
                v9 = (unsigned int)CurrentIrql + 1;
                v16 = (-1LL << (CurrentIrql + 1)) & 4;
              }
              SchedulerAssist[5] |= v16;
            }
            v13 = 1;
          }
          HalpDmaAcquireBufferMappings(v9, v8, 1u, (__int64)v23);
          v12 = 1;
        }
        v17 = (void *)(v8[6] & 0xFFFFFFFFFFFFF000uLL);
        if ( v17 )
          memset(v17, 0, 0x1000uLL);
        if ( v12 )
          HalpDmaReleaseBufferMappings(v17, a2, 1LL, v23);
        if ( v13 )
        {
          if ( KiIrqlFlags )
          {
            v18 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v22 = (v21 & v20[5]) == 0;
              v20[5] &= v21;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      result = HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 160), v8);
      v8 = v25;
      ++v4;
    }
    while ( v4 < a3 );
  }
  return result;
}
