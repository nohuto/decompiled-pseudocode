_OWORD *__fastcall MiPreserveBootDecisions(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  _OWORD *v4; // rsi
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int64 *v9; // rbx
  signed __int64 v10; // rcx
  signed __int64 v11; // r14
  unsigned int *v12; // rax
  SIZE_T v13; // r12
  PVOID Pool; // r13
  unsigned int v15; // r15d
  unsigned int i; // edi
  KIRQL v17; // al
  __int64 *v18; // rcx
  _QWORD *v19; // r10
  unsigned __int64 v20; // rdi
  __int64 *v21; // rcx
  char *v22; // rax
  _QWORD *v23; // rcx
  __int64 ***v24; // rax
  __int64 **v25; // r9
  __int128 *v26; // rax
  __int64 *v27; // r8
  __int128 *v28; // rdx
  __int64 v29; // r8
  __int128 v30; // xmm0
  __int64 **v31; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  __int64 *v37; // rax
  signed __int64 v38; // [rsp+20h] [rbp-20h]
  __int64 *v39; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v40; // [rsp+30h] [rbp-10h]
  __int64 v42; // [rsp+90h] [rbp+50h]
  void *Src; // [rsp+98h] [rbp+58h]

  result = MiAllocatePool(64, 0x3D8uLL, 0x20206D4Du);
  v4 = result;
  if ( result )
  {
    v5 = 7LL;
    v6 = result;
    v7 = a2;
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6 += 8;
      v8 = v7[7];
      v7 += 8;
      *(v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    v42 = 0LL;
    v9 = (__int64 *)v4 + 35;
    *v6 = *v7;
    v10 = (char *)v4 - (char *)a2;
    v38 = (char *)v4 - (char *)a2;
    v11 = (char *)a2 - (char *)v4;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    *((_QWORD *)v6 + 10) = *((_QWORD *)v7 + 10);
    while ( 1 )
    {
      v40 = &v39;
      v39 = (__int64 *)&v39;
      *(__int64 *)((char *)v9 + v11 + v10 + 8) = (__int64)v9;
      *v9 = (__int64)v9;
      v12 = *(unsigned int **)((char *)v9 + v11 + 104);
      Src = v12;
      if ( v12 )
      {
        v13 = 16LL * *v12;
        Pool = MiAllocatePool(64, v13, 0x20206D4Du);
      }
      else
      {
        v13 = 0LL;
        Pool = 0LL;
      }
      v15 = *(_DWORD *)((char *)v9 + v11 - 180);
      for ( i = 0; i < v15; v40 = (__int64 **)v24 )
      {
        v22 = (char *)MiAllocatePool(64, 0x190uLL, 0x20206D4Du);
        if ( !v22 )
          break;
        v23 = v40;
        v24 = (__int64 ***)(v22 + 168);
        if ( *v40 != (__int64 *)&v39 )
LABEL_40:
          __fastfail(3u);
        v24[1] = v40;
        *v24 = &v39;
        ++i;
        *v23 = v24;
      }
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 23160));
      v18 = v39;
      v19 = *(_QWORD **)((char *)v9 + v11);
      v20 = v17;
      if ( v39 != (__int64 *)&v39 )
      {
        while ( v19 != (__int64 *)((char *)v9 + v11) )
        {
          v25 = (__int64 **)*v18;
          v26 = (__int128 *)(v19 - 21);
          v27 = (__int64 *)v18[1];
          v28 = (__int128 *)(v18 - 21);
          if ( *(__int64 **)(*v18 + 8) != v18 )
            goto LABEL_40;
          if ( (__int64 *)*v27 != v18 )
            goto LABEL_40;
          *v27 = (__int64)v25;
          v25[1] = v27;
          v29 = 3LL;
          do
          {
            v30 = *v26;
            v26 += 8;
            *v28 = v30;
            v28 += 8;
            *(v28 - 7) = *(v26 - 7);
            *(v28 - 6) = *(v26 - 6);
            *(v28 - 5) = *(v26 - 5);
            *(v28 - 4) = *(v26 - 4);
            *(v28 - 3) = *(v26 - 3);
            *(v28 - 2) = *(v26 - 2);
            *(v28 - 1) = *(v26 - 1);
            --v29;
          }
          while ( v29 );
          *v28 = *v26;
          v31 = (__int64 **)v9[1];
          if ( *v31 != v9 )
            goto LABEL_40;
          v18[1] = (__int64)v31;
          *v18 = (__int64)v9;
          *v31 = v18;
          v9[1] = (__int64)v18;
          v18 = (__int64 *)v25;
          v19 = (_QWORD *)*v19;
          if ( v25 == &v39 )
            break;
        }
      }
      if ( Pool )
        memmove(Pool, Src, v13);
      v9[13] = (__int64)Pool;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 23160));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v36 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v20);
      while ( 1 )
      {
        v21 = v39;
        if ( v39 == (__int64 *)&v39 )
          break;
        v37 = (__int64 *)*v39;
        if ( (__int64 **)v39[1] != &v39 || (__int64 *)v37[1] != v39 )
          goto LABEL_40;
        v39 = (__int64 *)*v39;
        v37[1] = (__int64)&v39;
        ExFreePoolWithTag(v21 - 21, 0);
      }
      v9 += 37;
      if ( ++v42 >= 3 )
        break;
      v10 = v38;
    }
    result = (_OWORD *)a1;
    *(_QWORD *)(a1 + 23144) = v4;
  }
  return result;
}
