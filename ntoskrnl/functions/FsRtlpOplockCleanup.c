__int64 __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v4; // r15
  __int64 result; // rax
  char v6; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *v8; // rbx
  int v9; // r12d
  __int64 v10; // rbx
  char v11; // si
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // r11
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  _QWORD *i; // rbx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  char v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // [rsp+40h] [rbp-178h]
  __int64 v29; // [rsp+48h] [rbp-170h] BYREF
  int v30; // [rsp+50h] [rbp-168h] BYREF
  int v31; // [rsp+54h] [rbp-164h] BYREF
  __int64 v32; // [rsp+58h] [rbp-160h] BYREF
  __int64 v33; // [rsp+60h] [rbp-158h] BYREF
  __int64 v34; // [rsp+68h] [rbp-150h] BYREF
  __int64 v35; // [rsp+70h] [rbp-148h] BYREF
  __int64 v36; // [rsp+78h] [rbp-140h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-138h] BYREF
  char v38[32]; // [rsp+90h] [rbp-128h] BYREF
  __int64 *v39; // [rsp+B0h] [rbp-108h]
  __int64 v40; // [rsp+B8h] [rbp-100h]
  __int64 *v41; // [rsp+C0h] [rbp-F8h]
  __int64 v42; // [rsp+C8h] [rbp-F0h]
  _QWORD *v43; // [rsp+D0h] [rbp-E8h]
  __int64 v44; // [rsp+D8h] [rbp-E0h]
  __int64 *v45; // [rsp+E0h] [rbp-D8h]
  __int64 v46; // [rsp+E8h] [rbp-D0h]
  char v47[32]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 *v48; // [rsp+110h] [rbp-A8h]
  __int64 v49; // [rsp+118h] [rbp-A0h]
  __int64 *v50; // [rsp+120h] [rbp-98h]
  __int64 v51; // [rsp+128h] [rbp-90h]
  int *v52; // [rsp+130h] [rbp-88h]
  __int64 v53; // [rsp+138h] [rbp-80h]
  char v54[32]; // [rsp+140h] [rbp-78h] BYREF
  __int64 *v55; // [rsp+160h] [rbp-58h]
  __int64 v56; // [rsp+168h] [rbp-50h]
  int *v57; // [rsp+170h] [rbp-48h]
  __int64 v58; // [rsp+178h] [rbp-40h]

  v2 = a2;
  v29 = a2;
  v37[1] = a1;
  v4 = 0;
  v28 = 0;
  result = *(unsigned int *)(a1 + 144);
  if ( (_DWORD)result == 1 )
    goto LABEL_67;
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v33 = a1;
    v55 = &v33;
    v56 = 8LL;
    v30 = result;
    v57 = &v30;
    v58 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &byte_14002AAC7, 0LL, 0LL, 4, v54);
  }
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(v2 + 48));
  v32 = OplockFullFoExt;
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    v19 = (_QWORD *)(a1 + 104);
    for ( i = *(_QWORD **)(a1 + 104); ; i = (_QWORD *)*i )
    {
      if ( i == v19 )
        goto LABEL_48;
      if ( *(_QWORD *)(v2 + 48) == i[2] )
        break;
    }
    if ( (unsigned int)dword_140C03770 > 5 )
    {
      v34 = i[2];
      v48 = &v34;
      v49 = 8LL;
      v35 = a1;
      v50 = &v35;
      v51 = 8LL;
      v31 = *(_DWORD *)(a1 + 144);
      v52 = &v31;
      v53 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &byte_14002ABD7, 0LL, 0LL, 5, v47);
    }
    while ( 1 )
    {
      v21 = *(_QWORD **)(a1 + 88);
      if ( v21 == (_QWORD *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v21);
    }
    v22 = *(_QWORD **)i[1];
    v23 = *v22;
    v24 = (_QWORD *)v22[1];
    if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
      goto LABEL_64;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    ExFreePoolWithTag(i, 0);
    v6 = 1;
LABEL_48:
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( (_QWORD *)*v19 != v19 )
      v4 = v6;
    v28 = v4;
  }
  v8 = *(_QWORD **)(a1 + 40);
  v9 = 534;
  if ( v8 != (_QWORD *)(a1 + 40) )
  {
    v25 = 0;
    while ( v8 != (_QWORD *)(a1 + 40) )
    {
      v26 = v8[2];
      if ( *(_QWORD *)(v29 + 48) == *(_QWORD *)(v26 + 48) )
      {
        v8 = (_QWORD *)v8[1];
        if ( *(_DWORD *)(v26 + 24) == 590400 )
          v25 = v6;
        v27 = 534LL;
        if ( *(_DWORD *)(v26 + 24) != 590400 )
          v27 = 0LL;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v8, v27, 0LL, a1);
        if ( v25 )
          break;
        v6 = 1;
      }
      v8 = (_QWORD *)*v8;
    }
    FsRtlpComputeShareableOplockState(a1);
    v2 = v29;
  }
  if ( !OplockFullFoExt )
    goto LABEL_13;
  v10 = *(_QWORD *)(OplockFullFoExt + 40);
  OplockFullFoExt = 0LL;
  if ( !v10 )
    goto LABEL_13;
  v11 = 0;
  if ( (*(_DWORD *)(v10 + 48) & 0xF00000) != 0 )
  {
    FsRtlpOplockDequeueRH(v10);
    FsRtlpModifyThreadPriorities(a1, v10, 0LL);
    FsRtlpClearOwner(a1, v10);
    if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
      *(_BYTE *)(a1 + 32) = 0;
    ObfDereferenceObjectWithTag(*(PVOID *)(v10 + 24), 0x746C6644u);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v10 + 56) )
  {
    FsRtlpRemoveAndCompleteRHIrp(v10, a1, 534, 0, 0, 0, 0);
    goto LABEL_11;
  }
  FsRtlpOplockDequeueRH(v10);
  v17 = *v16;
  v18 = (_QWORD *)v16[1];
  if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
LABEL_64:
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
    *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
  if ( *(_QWORD *)(v10 + 40) )
    FsRtlpClearOwner(a1, v10);
LABEL_31:
  ExFreePoolWithTag((PVOID)v10, 0);
  v11 = 1;
LABEL_11:
  FsRtlpComputeShareableOplockState(a1);
  if ( v11 )
    FsRtlpReleaseIrpsWaitingForRH(a1);
LABEL_13:
  result = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v2 + 48) == result )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v13 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v13 + 104), OplockFullFoExt);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v13 + 69));
      if ( *(_DWORD *)(v14 + 24) == 590400 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        *(_OWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_DWORD *)v15 = 1572865;
        *(_DWORD *)(v15 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v13 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v13 + 56) = 8LL;
        v9 = OplockFullFoExt;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v9;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v4 = v28;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = OplockFullFoExt;
    *(_QWORD *)a1 = OplockFullFoExt;
    if ( *(_QWORD *)(a1 + 24) != OplockFullFoExt )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = OplockFullFoExt;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v12 = (_QWORD *)(a1 + 88);
      result = *(_QWORD *)(a1 + 88);
      if ( result == a1 + 88 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*(_QWORD **)(a1 + 88));
    }
  }
  else
  {
    v12 = (_QWORD *)(a1 + 88);
  }
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v36 = a1;
    v39 = &v36;
    v40 = 8LL;
    LODWORD(v29) = *(_DWORD *)(a1 + 144);
    v41 = &v29;
    v42 = 4LL;
    v37[0] = *v12;
    v43 = v37;
    v44 = 8LL;
    v32 = *(_QWORD *)(a1 + 96);
    v45 = &v32;
    v46 = 8LL;
    result = tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &byte_14002AB5F, 0LL, 0LL, 6, v38);
  }
LABEL_67:
  if ( v4 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
  return result;
}
