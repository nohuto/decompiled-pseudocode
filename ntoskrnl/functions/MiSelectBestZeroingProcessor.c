void __fastcall MiSelectBestZeroingProcessor(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r12
  int v7; // r15d
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  KIRQL v23; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+34h] [rbp-CCh]
  unsigned int v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h]
  _OWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[38]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = a2;
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = *(_QWORD *)(v2 + 104);
  memset(v29, 0, 24);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( v4 == *(_QWORD *)(v2 + 120) && *(_WORD *)(v2 + 112) == *(_WORD *)(v2 + 128) && v4 )
  {
    ++dword_140C12F88;
    return;
  }
  ++dword_140C12F8C;
  v5 = *(_QWORD *)(a1 + 168);
  v26 = *(_QWORD *)(qword_140C65720 + 376LL * *(unsigned int *)(v5 + 56) + 368);
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( *(_QWORD *)(v2 + 104) )
    MiUnlinkZeroThreadFromActiveDomain(a1, v2);
  v6 = *(unsigned int *)(v5 + 92);
  LODWORD(BugCheckParameter3[4]) = *(_DWORD *)a1;
  HIDWORD(BugCheckParameter3[2]) = -1;
  MiObtainParkedCoreMasks(&BugCheckParameter3[5]);
  v7 = 0;
  v25 = -1;
  v8 = 5;
  v24 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_49;
  v9 = v26;
  do
  {
    v10 = *(_QWORD *)(a1 + 128);
    v11 = 0LL;
    v12 = v6;
    do
    {
      if ( *(_DWORD *)(v10 + 40) )
      {
        if ( v11 )
        {
          if ( *(_DWORD *)(v11 + 32) > *(_DWORD *)(v10 + 32) )
            v11 = v10;
        }
        else
        {
          v11 = v10;
        }
      }
      v10 += 48LL;
      --v12;
    }
    while ( v12 );
    v27 = 0xAAAAAAAAAAAAAAABuLL * ((v11 - *(_QWORD *)(a1 + 128)) >> 4);
    memmove(*(void **)(a1 + 152), *(const void **)(v11 + 8), 16LL * *(unsigned int *)(a1 + 20));
    HIDWORD(BugCheckParameter3[0]) = *(unsigned __int16 *)(v9 + 8);
    BugCheckParameter3[1] = *(_QWORD *)(a1 + 152);
    if ( (int)MiGetNextAffinityWalker(BugCheckParameter3, &v30) < 0 )
      break;
    if ( SDWORD2(v32) < v8 )
    {
      v25 = v27;
      *((_QWORD *)&v29[0] + 1) = *((_QWORD *)&v31 + 1);
      *(_QWORD *)&v29[1] = v32;
      v8 = DWORD2(v32);
    }
    if ( !v8 )
      break;
    ++v24;
  }
  while ( v24 < (unsigned int)v6 );
  v2 = a2;
  if ( v25 == -1 )
LABEL_49:
    KeBugCheckEx(0x1Au, 0x41300uLL, v2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( !v8 )
  {
    ++dword_140C12F90;
    goto LABEL_24;
  }
  if ( v8 == 1 )
  {
LABEL_39:
    ++dword_140C12F94;
    goto LABEL_24;
  }
  if ( v8 != 4 )
  {
    if ( v8 == 2 )
    {
      ++dword_140C12F90;
      goto LABEL_24;
    }
    if ( v8 != 3 )
      goto LABEL_24;
    goto LABEL_39;
  }
  ++dword_140C12FA0;
LABEL_24:
  ++*(_DWORD *)(a1 + 268);
  *(_DWORD *)(a2 + 96) = v25;
  v13 = (_QWORD *)(a2 + 184);
  *(_OWORD *)(a2 + 104) = *(_OWORD *)((char *)v29 + 8);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)((char *)v29 + 8);
  v14 = *(_QWORD *)(a1 + 128) + 48LL * v25;
  ++*(_DWORD *)(v14 + 32);
  v15 = *(_QWORD **)(v14 + 24);
  if ( *v15 != v14 + 16 )
    __fastfail(3u);
  *v13 = v14 + 16;
  *(_QWORD *)(a2 + 192) = v15;
  *v15 = v13;
  *(_QWORD *)(v14 + 24) = v13;
  v16 = *(_DWORD *)(a1 + 20);
  v17 = *(_QWORD *)(v14 + 8);
  if ( v16 )
  {
    while ( *(_WORD *)(v17 + 8) != *(_WORD *)(a2 + 112) )
    {
      v17 += 16LL;
      if ( ++v7 >= v16 )
        goto LABEL_28;
    }
    *(_QWORD *)v17 &= ~*(_QWORD *)(a2 + 104);
  }
LABEL_28:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v23 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v23 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v23);
  if ( *(_DWORD *)a1 )
    KeSetUserGroupAffinityThread(*(_QWORD *)(a2 + 80), a2 + 104);
}
