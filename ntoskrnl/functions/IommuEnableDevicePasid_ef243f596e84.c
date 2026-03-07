__int64 __fastcall IommuEnableDevicePasid(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  bool v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r12
  int v13; // edi
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  KIRQL v16; // si
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  _QWORD *v28; // r15
  __int64 v29; // rdx
  void (__fastcall *v30)(_QWORD, __int64, __int64); // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  int v36; // eax
  __int64 v37; // r13
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v45; // rdx
  volatile signed __int64 *v46; // r13
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rdx
  _QWORD *v51; // r8
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 *v55; // rsi
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  unsigned __int8 v59; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v61; // r9
  int v62; // eax
  bool v64; // [rsp+80h] [rbp+8h]
  KIRQL v65; // [rsp+88h] [rbp+10h]
  __int64 v66; // [rsp+90h] [rbp+18h]
  _QWORD *v67; // [rsp+98h] [rbp+20h]

  v2 = a1[1];
  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = 0LL;
  v6 = *a1;
  v7 = *(_DWORD *)(a2 + 392) == 1;
  v66 = v2;
  v8 = *(_QWORD *)(v4 + 24);
  v64 = v7;
  v65 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v10 = (_QWORD *)HalpMmAllocCtxAlloc(v9, 40LL);
  v67 = v10;
  v12 = v10;
  if ( !v10 )
    goto LABEL_2;
  v10[2] = *(_QWORD *)(v4 + 24);
  v10[4] = v10 + 3;
  v10[3] = v10 + 3;
  v21 = (_QWORD *)HalpMmAllocCtxAlloc(v11, 64LL);
  v3 = v21;
  if ( !v21 )
    goto LABEL_2;
  memset(v21, 0, 0x40uLL);
  v20 = HalpHvIommu == 0;
  v3[5] = v4;
  v3[6] = v2;
  if ( !v20 )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62230)(*(_QWORD *)(v4 + 40), *(unsigned int *)(v2 + 16));
    if ( v13 < 0 )
      goto LABEL_3;
    goto LABEL_41;
  }
  v23 = (__int64 *)(v8 + 400);
  v24 = *(_QWORD *)(v8 + 400);
  if ( v24 != v8 + 400 )
  {
    v22 = *(unsigned int *)(v6 + 16);
    do
    {
      v5 = v24;
      if ( *(_DWORD *)(v24 + 16) == (_DWORD)v22 )
        break;
      v24 = *(_QWORD *)v24;
    }
    while ( (__int64 *)v24 != v23 );
  }
  v25 = *(_QWORD *)(v4 + 56);
  if ( v25 && v25 != v5 )
  {
    v13 = -1073741823;
LABEL_19:
    v5 = 0LL;
    goto LABEL_3;
  }
  if ( v5 && *(_DWORD *)(v5 + 16) == *(_DWORD *)(v6 + 16) )
  {
    v2 = v66;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v8 + 232))(
            *(_QWORD *)(v8 + 16),
            v5,
            *(unsigned int *)(v66 + 16));
    if ( v13 < 0 )
      goto LABEL_19;
    if ( *(_QWORD *)(v5 + 56) )
    {
      v28 = *(_QWORD **)(v5 + 24);
      if ( v28 != (_QWORD *)(v5 + 24) )
      {
        do
        {
          LOBYTE(v27) = v7;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v8 + 224))(
            *(_QWORD *)(v8 + 16),
            *(v28 - 3),
            v5,
            v27);
          v28 = (_QWORD *)*v28;
        }
        while ( v28 != (_QWORD *)(v5 + 24) );
        v12 = v67;
      }
      v29 = *(_QWORD *)(v5 + 56);
      *(_QWORD *)(v5 + 56) = 0LL;
      v30 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v8 + 376);
      if ( v30 )
        v30(*(_QWORD *)(v8 + 16), v5, v29);
      else
        HalpMmAllocCtxFree(v26, v29);
      v2 = v66;
    }
    if ( !*(_QWORD *)(v4 + 56) )
    {
      v31 = *(_QWORD *)(v4 + 40);
      LOBYTE(v27) = v7;
      *(_QWORD *)(v4 + 56) = v5;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 224))(*(_QWORD *)(v8 + 16), v31, v5, v27);
      v32 = v5 + 24;
      v33 = (_QWORD *)(v4 + 64);
      v34 = *(_QWORD *)v32;
      if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
        goto LABEL_65;
      *v33 = v34;
      *(_QWORD *)(v4 + 72) = v32;
      *(_QWORD *)(v34 + 8) = v33;
      *(_QWORD *)v32 = v33;
    }
    v5 = 0LL;
    goto LABEL_41;
  }
  v35 = (void *)HalpMmAllocCtxAlloc(v22, 72LL);
  v5 = (__int64)v35;
  if ( !v35 )
  {
LABEL_2:
    v13 = -1073741670;
    goto LABEL_3;
  }
  memset(v35, 0, 0x48uLL);
  v36 = *(_DWORD *)(v6 + 16);
  v37 = v5 + 24;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 16) = v36;
  *(_QWORD *)(v5 + 32) = v5 + 24;
  *(_QWORD *)(v5 + 24) = v5 + 24;
  *(_BYTE *)(v5 + 64) = *(_BYTE *)(v6 + 64);
  *(_BYTE *)(v5 + 65) = *(_BYTE *)(v4 + 48) & 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v8 + 232))(
          *(_QWORD *)(v8 + 16),
          v5,
          *(unsigned int *)(v66 + 16));
  if ( v13 < 0 )
    goto LABEL_3;
  LOBYTE(v38) = v64;
  v39 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 56) = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 224))(*(_QWORD *)(v8 + 16), v39, v5, v38);
  v40 = *(_QWORD *)v37;
  v41 = (_QWORD *)(v4 + 64);
  if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
    goto LABEL_65;
  *v41 = v40;
  *(_QWORD *)(v4 + 72) = v37;
  *(_QWORD *)(v40 + 8) = v41;
  *(_QWORD *)v37 = v41;
  v42 = *v23;
  if ( *(__int64 **)(*v23 + 8) != v23 )
    goto LABEL_65;
  *(_QWORD *)(v5 + 8) = v23;
  *(_QWORD *)v5 = v42;
  *(_QWORD *)(v42 + 8) = v5;
  *v23 = v5;
  v5 = 0LL;
  v2 = v66;
LABEL_41:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v45) = 0x8000;
    else
      v45 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v45;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v46 = (volatile signed __int64 *)(v4 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 16));
  ++*(_DWORD *)(v4 + 36);
  v47 = (_QWORD *)(v66 + 40);
  v48 = *(_QWORD **)(v66 + 40);
  if ( v48 == (_QWORD *)(v66 + 40) )
    goto LABEL_53;
  v49 = *(_QWORD *)(v4 + 24);
  do
  {
    v50 = v48[2];
    v51 = v48;
    if ( v50 == v49 )
      goto LABEL_55;
    v48 = (_QWORD *)*v48;
  }
  while ( v48 != v47 );
  if ( v50 != v49 )
  {
LABEL_53:
    v52 = *v47;
    if ( *(_QWORD **)(*v47 + 8LL) != v47 )
      goto LABEL_65;
    *v12 = v52;
    v51 = v12;
    v12[1] = v47;
    *(_QWORD *)(v52 + 8) = v12;
    *v47 = v12;
    v12 = 0LL;
  }
LABEL_55:
  v53 = v51 + 3;
  v54 = v51[3];
  if ( *(_QWORD **)(v54 + 8) != v51 + 3 )
    goto LABEL_65;
  v3[1] = v53;
  v55 = (__int64 *)(v4 + 80);
  *v3 = v54;
  *(_QWORD *)(v54 + 8) = v3;
  *v53 = v3;
  v56 = v3;
  v57 = *v55;
  v3 = 0LL;
  v58 = v56 + 2;
  if ( *(__int64 **)(*v55 + 8) != v55 )
LABEL_65:
    __fastfail(3u);
  *v58 = v57;
  v58[1] = v55;
  *(_QWORD *)(v57 + 8) = v58;
  *v55 = (__int64)v58;
  KxReleaseSpinLock(v46);
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 24));
  if ( KiIrqlFlags )
  {
    v59 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v59 <= 0xFu && CurrentIrql <= 0xFu && v59 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v61 = CurrentPrcb->SchedulerAssist;
      v62 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v62 & v61[5]) == 0;
      v61[5] &= v62;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
LABEL_3:
  KxReleaseSpinLock((volatile signed __int64 *)&IommupPasidTableLock);
  v14 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (v15 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v15 <= 0xFu )
  {
    v16 = v65;
    if ( v65 <= 0xFu && v15 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v14 = (unsigned int)v65 + 1;
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (v65 + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  else
  {
    v16 = v65;
  }
  __writecr8(v16);
  if ( v12 )
    HalpMmAllocCtxFree(v14, (__int64)v12);
  if ( v3 )
    HalpMmAllocCtxFree(v14, (__int64)v3);
  if ( v5 )
    HalpMmAllocCtxFree(v14, v5);
  return (unsigned int)v13;
}
