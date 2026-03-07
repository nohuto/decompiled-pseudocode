__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  char v12; // r11
  int v13; // r9d
  char v14; // r10
  unsigned __int8 v15; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // bl
  _DWORD *v23; // r9
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // [rsp+40h] [rbp-40h] BYREF
  char v30; // [rsp+41h] [rbp-3Fh] BYREF
  char v31[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h]

  v33 = 0LL;
  v30 = 0;
  v31[0] = 0;
  v29 = 0;
  v4 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v30, (__int64)&v29) )
  {
    if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v35 = 1LL;
        *((_QWORD *)&v35 + 1) = a1;
        _EAX = 0;
        __asm { invpcid eax, [rbp+var_20] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v15 = v29;
      if ( v29 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = v29;
        v20 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v15 = v29;
    }
    __writecr8(v15);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v30 )
  {
    KiPrepareFlushParameters(a2, &v33, v31);
    v10 = KiFlushAffinity(a3);
    LOBYTE(v11) = v31[0];
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v13) = v12;
    v34 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v33, v10, v11, v13, v14, 1, (__int64)&v34);
    v4 |= result;
  }
  else
  {
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v8) = 1;
      result = KeFlushProcessWriteBuffers(v8);
    }
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  if ( VmTbFlushEnabled )
  {
    v32 = v9;
    result = VmFlushTb(1LL, &v32, a2);
  }
  if ( ExTbFlushActive )
  {
    v32 = v9;
    v22 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
    {
      v23 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v22 == 15 )
        LODWORD(v24) = 0x8000;
      else
        v24 = (-1LL << (v22 + 1)) & 0xFFFC;
      v23[5] |= v24;
    }
    ExFlushTb(1LL, &v32, a2);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v22 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v22 + 1));
        v21 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    result = v22;
    __writecr8(v22);
  }
  return result;
}
