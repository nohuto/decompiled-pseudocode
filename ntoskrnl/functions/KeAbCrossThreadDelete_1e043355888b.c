char __fastcall KeAbCrossThreadDelete(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  int v5; // ecx
  __int64 v6; // rsi
  int SessionId; // r9d
  unsigned int v8; // r8d
  __m128i *v9; // r15
  int v10; // edx
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  __int64 v13; // rcx
  __int128 v14; // rt0
  unsigned __int8 v15; // tt
  bool v16; // zf
  __int64 v17; // rcx
  __int8 v18; // al
  __int64 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  unsigned __int8 v22; // r14
  unsigned __int64 v23; // r11
  char v24; // r12
  __int64 v25; // rsi
  volatile signed __int32 *v26; // rbx
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r12
  __int64 v31; // rax
  int v32; // r12d
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r8
  _DWORD *v35; // rbx
  int v36; // eax
  __int64 v37; // rbx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r8
  _DWORD *v40; // rbx
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v44; // rbx
  int v45; // eax
  signed __int32 v47[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v48[2]; // [rsp+30h] [rbp-89h] BYREF
  __int128 v49; // [rsp+40h] [rbp-79h]
  int v50; // [rsp+50h] [rbp-69h] BYREF
  __int64 v51; // [rsp+58h] [rbp-61h]
  __int128 Object; // [rsp+60h] [rbp-59h] BYREF
  __int128 v53; // [rsp+70h] [rbp-49h]
  __int128 v54; // [rsp+80h] [rbp-39h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-19h]
  __int128 v57; // [rsp+B0h] [rbp-9h]
  __int64 v58; // [rsp+C0h] [rbp+7h]
  unsigned __int64 v59; // [rsp+C8h] [rbp+Fh]
  char v61; // [rsp+128h] [rbp+6Fh]
  int v62; // [rsp+138h] [rbp+7Fh] BYREF

  v58 = 0LL;
  LODWORD(v59) = 0;
  LODWORD(v3) = *(unsigned __int8 *)(a2 + 792);
  v5 = v3 | *(unsigned __int8 *)(a2 + 870);
  Object = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( v5 == 63 )
    return v3;
  v48[0] = 0LL;
  v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  if ( (unsigned __int64)(a1 - qword_140C65668) >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  LODWORD(v3) = *(unsigned __int8 *)(a2 + 792);
  v8 = (v3 | *(unsigned __int8 *)(a2 + 870)) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v8);
    if ( v16 )
      return v3;
    v8 &= ~(1 << v17);
    v9 = (__m128i *)(96 * v17 + a2 + 1696);
    v3 = v9->m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v3 == v6 )
    {
      *(_QWORD *)&v11 = v9->m128i_i64[0];
      *((_QWORD *)&v11 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0];
      v12 = _InterlockedCompareExchange128(v9->m128i_i64, *((signed __int64 *)&v11 + 1), v11, (signed __int64 *)&v11);
      v10 = DWORD2(v11);
      v13 = v11;
      v49 = v11;
      if ( v12
        || (*(_QWORD *)&v14 = v9->m128i_i64[0],
            *((_QWORD *)&v14 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0],
            v15 = _InterlockedCompareExchange128(
                    v9->m128i_i64,
                    *((signed __int64 *)&v14 + 1),
                    v14,
                    (signed __int64 *)&v14),
            LOBYTE(v3) = v14,
            v10 = DWORD2(v14),
            v13 = v14,
            v49 = v14,
            v15) )
      {
        LOBYTE(v3) = v13 & 0xFC;
        if ( (v13 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v9[1].m128i_i8[2] && v10 == SessionId )
          break;
      }
    }
  }
  if ( v13 < 0 )
  {
    v18 = v9->m128i_i8[0] | 1;
LABEL_98:
    v37 = a1;
    v9->m128i_i8[0] = v18;
    goto LABEL_99;
  }
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v21 = 4;
    if ( (_BYTE)CurrentIrql != 2 )
      v21 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  v62 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v62);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v22 = v51;
  while ( 2 )
  {
    v23 = 0LL;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = 0LL;
          v61 = *(_BYTE *)(a2 + 388);
          v24 = v61;
          v26 = 0LL;
          if ( v61 != 1 )
            break;
          v30 = *(unsigned int *)(a2 + 536);
          if ( (int)v30 >= 0 )
          {
            v25 = KiProcessorBlock[v30];
            KiAcquirePrcbLocksForIsolationUnit(v25, 0, v48);
            if ( *(_BYTE *)(a2 + 388) != 1 || *(_DWORD *)(a2 + 536) != (_DWORD)v30 )
              goto LABEL_53;
            goto LABEL_55;
          }
          v31 = (unsigned int)v30;
          LODWORD(v31) = v30 & 0x7FFFFFFF;
          v50 = 0;
          v26 = *(volatile signed __int32 **)(KiProcessorBlock[v31] + 34888);
          while ( _interlockedbittestandset64(v26, 0LL) )
          {
            do
              KeYieldProcessorEx(&v50);
            while ( *(_QWORD *)v26 );
          }
          v22 = v51;
          if ( *(_BYTE *)(a2 + 388) == 1 && *(_DWORD *)(a2 + 536) == (_DWORD)v30 )
          {
            v24 = v61;
            v23 = 0LL;
            v25 = 0LL;
            goto LABEL_57;
          }
          v23 = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)v26, 0LL);
        }
        if ( v61 == 2 )
          break;
        if ( v61 != 3 )
        {
          if ( v61 != 5 )
            goto LABEL_57;
          v27 = *(_BYTE *)(a2 + 112) & 7;
          if ( v27 == 1 || (unsigned __int8)(v27 - 3) <= 3u )
            goto LABEL_57;
          v24 = 2;
          break;
        }
        v29 = *(unsigned int *)(a2 + 536);
        if ( (int)v29 >= 0 )
        {
          v25 = KiProcessorBlock[v29];
          KiAcquirePrcbLocksForIsolationUnit(v25, 0, v48);
          if ( a2 != *(_QWORD *)(v25 + 16) )
          {
            if ( *(_BYTE *)(a2 + 388) == 3 && *(_DWORD *)(a2 + 536) == (_DWORD)v29 )
              __fastfail(0x1Eu);
            goto LABEL_53;
          }
LABEL_55:
          v24 = v61;
          goto LABEL_56;
        }
      }
      v28 = *(unsigned int *)(a2 + 536);
    }
    while ( (int)v28 < 0 );
    v25 = KiProcessorBlock[v28];
    KiAcquirePrcbLocksForIsolationUnit(v25, 0, v48);
    if ( a2 != *(_QWORD *)(v25 + 8) )
    {
LABEL_53:
      KiReleasePrcbLocksForIsolationUnit(v48);
      continue;
    }
    break;
  }
LABEL_56:
  v23 = 0LL;
LABEL_57:
  if ( v24 != 2 )
  {
    if ( *(_BYTE *)(a2 + 113) )
    {
      if ( v25 )
        KiReleasePrcbLocksForIsolationUnit(v48);
      if ( v26 )
        _InterlockedAnd64((volatile signed __int64 *)v26, v23);
      *(_QWORD *)(a2 + 64) = v23;
      if ( KiIrqlFlags )
      {
        v42 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && v22 <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v44 = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v22 + 1));
          v16 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v22);
      KeGenericCallDpcEx((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
    }
    else
    {
      if ( v25 )
        KiReleasePrcbLocksForIsolationUnit(v48);
      if ( v26 )
        _InterlockedAnd64((volatile signed __int64 *)v26, v23);
      *(_QWORD *)(a2 + 64) = v23;
      if ( KiIrqlFlags )
      {
        v38 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && v22 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (v22 + 1));
          v16 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v39);
        }
      }
      __writecr8(v22);
    }
    v18 = v9->m128i_i8[0] | 1;
    goto LABEL_98;
  }
  v32 = *(_DWORD *)(a2 + 536);
  if ( v25 )
    KiReleasePrcbLocksForIsolationUnit(v48);
  if ( v26 )
    _InterlockedAnd64((volatile signed __int64 *)v26, v23);
  *(_QWORD *)(a2 + 64) = v23;
  if ( KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v22 <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v22 + 1));
      v16 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v16 )
      {
        KiRemoveSystemWorkPriorityKick((__int64)v34);
        v23 = 0LL;
      }
    }
  }
  __writecr8(v22);
  v37 = a1;
  *(_QWORD *)&v53 = (char *)&Object + 8;
  *((_QWORD *)&Object + 1) = (char *)&Object + 8;
  *((_QWORD *)&v56 + 1) = &KeAbCrossThreadDeleteDpcRoutine;
  *(_QWORD *)&v57 = &Object;
  v59 = v23;
  *((_QWORD *)&v53 + 1) = a1;
  *(_QWORD *)&v54 = v9;
  *((_QWORD *)&v54 + 1) = a2;
  LOWORD(Object) = 1;
  BYTE2(Object) = 6;
  DWORD1(Object) = v23;
  LODWORD(BugCheckParameter2[0]) = 275;
  *(_QWORD *)&v56 = v23;
  if ( !v23 )
    WORD1(BugCheckParameter2[0]) = v32 + 2048;
  KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, v23);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
LABEL_99:
  _InterlockedOr(v47, 0);
  LOBYTE(v3) = KiAbCrossThreadRelease(v37, (__int64)v9, a2);
  return v3;
}
