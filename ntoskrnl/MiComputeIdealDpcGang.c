__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, int a2, unsigned int a3)
{
  char v3; // bl
  unsigned int ClosestNodeWithProcessors; // eax
  __int64 v7; // rbx
  unsigned __int16 *v8; // r12
  unsigned int v9; // r14d
  char *PoolMm; // rax
  char *v11; // r13
  int v12; // r13d
  __int64 v13; // rdx
  unsigned int *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // ebx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 result; // rax
  USHORT Count[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v32; // [rsp+24h] [rbp-DCh]
  _OWORD v33[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v34[38]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = a3;
  v32 = a3;
  memset(v34, 0, sizeof(v34));
  if ( KeGetCurrentIrql() >= 2u || (v3 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) |= 0x80u;
    *(_WORD *)(a1 + 154) = 1;
    result = 1LL;
    *(_DWORD *)(a1 + 188) = 1;
    *(_DWORD *)(a1 + 196) = a2;
    *(_DWORD *)(a1 + 192) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  }
  else
  {
    ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
    v7 = ClosestNodeWithProcessors;
    *(_DWORD *)(a1 + 192) = ClosestNodeWithProcessors;
    *(_DWORD *)(a1 + 196) = a2;
    v8 = (unsigned __int16 *)(a1 + 208);
    *(_QWORD *)(a1 + 216) = a1 + 232;
    *(_QWORD *)(a1 + 224) = a1 + 296;
    v9 = 0;
    if ( (int)KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, a1 + 232, 4u, (_WORD *)(a1 + 208)) < 0 )
    {
      PoolMm = (char *)ExAllocatePoolMm(64, 32LL * *v8, 0x6147694Du, (unsigned int)v7 | 0x80000000);
      v11 = PoolMm;
      if ( PoolMm )
      {
        KeQueryNodeActiveAffinity2(v7, (__int64)PoolMm, *v8, Count);
        *(_QWORD *)(a1 + 216) = v11;
        *(_QWORD *)(a1 + 224) = &v11[16 * *v8];
      }
      else
      {
        *v8 = 1;
        KeQueryNodeActiveAffinity(v7, *(PGROUP_AFFINITY *)(a1 + 216), Count);
      }
    }
    v12 = 0;
    v13 = 0LL;
    v14 = (unsigned int *)(*(_QWORD *)(qword_140C65720 + 376 * v7 + 368) + (~(_BYTE)v32 & 4 | 0x68LL));
    while ( 1 )
    {
      v32 = *v14;
      if ( v32 )
        break;
      ++v12;
      ++v13;
      v14 += 24;
      if ( v13 >= 3 )
        goto LABEL_26;
    }
    MiInitializeDpcGroupAffinity(*(_OWORD **)(a1 + 224), *(_QWORD *)(a1 + 216), *v8, v12);
    LOWORD(v15) = *v8;
    v16 = 0;
    if ( *v8 )
    {
      do
      {
        v17 = v16++;
        *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v17) = 0LL;
        v15 = *v8;
      }
      while ( v16 < v15 );
    }
    HIDWORD(v34[0]) = (unsigned __int16)v15;
    v34[1] = *(_QWORD *)(a1 + 224);
    LODWORD(v34[2]) = 0;
    v34[3] = __PAIR64__(a2, v7);
    v18 = KeNodeBlock[(unsigned __int16)v7];
    LODWORD(v34[4]) = v12;
    v19 = *(_DWORD *)(v18 + 292);
    if ( !v19 )
      v19 = 1;
    HIDWORD(v34[2]) = v19;
    MiObtainParkedCoreMasks(&v34[5]);
    v20 = v32;
    v21 = 0;
    if ( v32 )
    {
      do
      {
        memset(v33, 0, sizeof(v33));
        if ( (int)MiGetNextAffinityWalker(v34, v33) < 0 )
          break;
        v22 = 0;
        v23 = KiProcessorBlock[DWORD1(v33[0])];
        if ( *v8 )
        {
          v24 = *(_QWORD *)(a1 + 216);
          while ( *(unsigned __int8 *)(v23 + 208) != *(_WORD *)(v24 + 16LL * v22 + 8) )
          {
            if ( ++v22 >= *v8 )
              goto LABEL_23;
          }
          *(_QWORD *)(v24 + 16LL * v22) |= *(_QWORD *)(v23 + 200);
        }
LABEL_23:
        if ( v22 == *v8 )
          break;
        ++v21;
      }
      while ( v21 < v20 );
      if ( v21 )
        goto LABEL_31;
    }
LABEL_26:
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 1;
    v26 = 0;
    if ( !*v8 )
      return v21;
    do
    {
      v27 = *(_QWORD *)(a1 + 216);
      if ( v26 )
      {
        v28 = 2LL * v26;
        *(_WORD *)(v27 + 8 * v28 + 8) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v28) = 0LL;
      }
      else
      {
        *(_WORD *)(v27 + 8) = CurrentPrcb->Group;
        **(_QWORD **)(a1 + 216) = CurrentPrcb->GroupSetMember;
      }
      ++v26;
    }
    while ( v26 < *v8 );
LABEL_31:
    if ( *v8 )
    {
      do
      {
        v29 = v9++;
        *(_QWORD *)(*(_QWORD *)(a1 + 224) + 16 * v29) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v29);
      }
      while ( v9 < *v8 );
    }
    return v21;
  }
  return result;
}
