char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 SchedulerAssist,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r12
  void **v11; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  char *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  void *v19; // rsp
  void *v20; // rsp
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  _BYTE *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 EventNameFromEventMetadata; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  char v40; // [rsp+20h] [rbp+0h] BYREF
  char v41; // [rsp+21h] [rbp+1h]
  unsigned __int16 v42; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v44; // [rsp+30h] [rbp+10h]
  void **v45; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  v42 = 0;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  v11 = 0LL;
  v45 = 0LL;
  CurrentIrql = 0;
  v41 = 0;
  v40 = 1;
  if ( a5 )
  {
    v13 = 16LL * a3;
    if ( v13 )
    {
      if ( (SchedulerAssist & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + SchedulerAssist > 0x7FFFFFFF0000LL || v13 + SchedulerAssist < SchedulerAssist )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v14 = 0;
  v44 = 0;
  while ( v14 < a3 )
  {
    if ( *(_BYTE *)(SchedulerAssist + 16LL * v14 + 12) == 1 )
    {
      v11 = (void **)(SchedulerAssist + 16LL * v14);
      if ( a6 >= 2u )
      {
        v45 = (void **)(SchedulerAssist + 16LL * v14);
        P = *v11;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v11;
        v11 = Src;
        v45 = Src;
        v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v15 >= 0xFFFF )
        {
          v40 = 0;
          goto LABEL_80;
        }
        if ( a5 )
        {
          if ( v15 )
          {
            v16 = (char *)Src[0] + v15;
            if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v15 = (unsigned int)Src[1];
            }
          }
        }
        if ( v15 <= 0x100 )
        {
          v17 = v15 + 15LL;
          if ( v17 <= v15 )
            v17 = 0xFFFFFFFFFFFFFF0LL;
          v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = alloca(v18);
          v20 = alloca(v18);
          P = &v40;
        }
        else
        {
          P = (PVOID)ExAllocatePool2(66LL, v15, 1953985605LL);
          if ( !P )
          {
            v40 = 1;
            goto LABEL_80;
          }
          v41 = 1;
          v15 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v15);
      }
      break;
    }
    v44 = ++v14;
  }
  if ( !v11 || !P )
    goto LABEL_66;
  if ( a6 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v21) = 4;
        if ( CurrentIrql != 2 )
          v21 = (-1LL << (CurrentIrql + 1)) & 4;
        *(_DWORD *)(SchedulerAssist + 20) |= v21;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 384);
  if ( v22 )
  {
    v23 = 104 * v9;
    v24 = a9 ? *(_BYTE **)(v23 + v22 + 56) : *(_BYTE **)(v23 + v22 + 96);
    if ( v24 )
    {
      v25 = 0LL;
      v26 = *(_QWORD *)(a1 + 384);
      if ( v26 )
      {
        v27 = v26 + v23;
        if ( a9 )
        {
          if ( (*(_DWORD *)v27 & 0x80002000) == 0x80002000 )
            v25 = *(_QWORD *)(v27 + 56);
        }
        else
        {
          SchedulerAssist = 2147484672LL;
          if ( (*(_DWORD *)v27 & 0x80000400) == 0x80000400 )
            v25 = *(_QWORD *)(v27 + 96);
        }
        if ( v25 )
        {
          v28 = *(_BYTE *)(v25 + 1);
          if ( (a7 <= v28 || !v28)
            && (!a8 || (a8 & *(_QWORD *)(v25 + 8)) != 0 && (a8 & *(_QWORD *)(v25 + 16)) == *(_QWORD *)(v25 + 16)) )
          {
            EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(
                                           P,
                                           *((unsigned int *)v45 + 2),
                                           &v42,
                                           SchedulerAssist);
            if ( !EventNameFromEventMetadata )
            {
              if ( a6 < 2u )
              {
                if ( KiIrqlFlags )
                {
                  v30 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v32 = CurrentPrcb->SchedulerAssist;
                    v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v34 = (v33 & v32[5]) == 0;
                    v32[5] &= v33;
                    if ( v34 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                __writecr8(CurrentIrql);
              }
LABEL_66:
              v40 = 1;
              goto LABEL_80;
            }
            if ( v42 )
              v34 = *v24 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v42, v24);
            else
              v34 = *v24 == 0;
            v40 = v34;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v34 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_80:
  if ( v41 )
    ExFreePoolWithTag(P, 0);
  return v40;
}
