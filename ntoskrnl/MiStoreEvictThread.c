void __fastcall MiStoreEvictThread(_DWORD *P)
{
  __int64 v2; // r15
  int v3; // ebx
  struct _KEVENT *v4; // rbx
  struct _KEVENT *v5; // rax
  volatile LONG *v6; // rsi
  int v7; // edi
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned int v16; // ebx
  _DWORD *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // edx
  _DWORD *i; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // r10
  int v28; // eax
  unsigned int v29; // r13d
  __int64 v30; // rsi
  void *v31; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh]
  int v43; // [rsp+50h] [rbp-B8h]
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-B0h]
  int v46; // [rsp+5Ch] [rbp-ACh]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  union _MM_STORE_KEY v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h]
  _QWORD v50[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  _QWORD v53[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v54[144]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID Object[4]; // [rsp+148h] [rbp+40h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+168h] [rbp+60h] BYREF

  memset(v54, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = *(_QWORD *)P;
  v3 = P[8];
  v50[0] = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v3 )
  {
    KiInitializeTimer2((unsigned __int64)v54, 0LL, 0LL, 8);
    v53[1] = -1LL;
    v53[0] = 0LL;
    KeSetTimer2((__int64)v54, -600000000LL, 600000000LL, (__int64)v53);
    Object[2] = v54;
    v4 = (struct _KEVENT *)(v2 + 1240);
    Object[0] = (PVOID)(v2 + 1264);
    Object[1] = (PVOID)(v2 + 1240);
    v5 = (struct _KEVENT *)Object[KeWaitForMultipleObjects(
                                    3u,
                                    Object,
                                    WaitAny,
                                    WrVirtualMemory,
                                    0,
                                    0,
                                    0LL,
                                    &WaitBlockArray)];
    if ( v5 != (struct _KEVENT *)(v2 + 1264) )
    {
      v6 = (volatile LONG *)(v2 + 1224);
      do
      {
        if ( v5 == v4 )
          KeResetEvent(v4);
        while ( 1 )
        {
          v7 = *(_DWORD *)(v2 + 1200);
          v8 = 0;
          v9 = *(_DWORD *)(v2 + 17048);
          LODWORD(v47) = v7;
          v45 = v9;
          v46 = 0;
          if ( v9 )
          {
            do
            {
              v10 = *(_QWORD *)(v2 + 8LL * v8 + 17056);
              LOWORD(v42) = *(_WORD *)(v10 + 204);
              if ( (v42 & 0x40) != 0 )
              {
                v48.EntireKey = 0LL;
                v52 = 0LL;
                *(_OWORD *)&v50[1] = 0LL;
                v51 = 0LL;
                if ( *(_DWORD *)(v10 + 200) )
                {
                  MiRefPageFileSpaceBitmaps(v10, &v50[1]);
                  v12 = DWORD2(v51);
                  v13 = 0;
                  v14 = v52;
                  v15 = (unsigned __int16)v42;
                  do
                  {
                    v43 = 0;
                    if ( v12 <= v13 )
                      break;
                    v16 = 0;
                    v17 = (_DWORD *)(v14 + 4 * ((unsigned __int64)v13 >> 5));
                    v18 = v14 + 4 * ((unsigned __int64)(v12 - 1) >> 5);
                    v19 = ((1 << (v13 & 0x1F)) - 1) | *v17;
                    for ( i = v17 + 1; ; ++i )
                    {
                      v21 = ~v19;
                      if ( v21 )
                        break;
                      if ( (unsigned __int64)i > v18 )
                        goto LABEL_30;
                      v19 = *++v17;
                    }
                    _BitScanForward64((unsigned __int64 *)&v22, v21);
                    v23 = v22 + 32 * (((__int64)v17 - v14) >> 2);
                    v43 = v22;
                    if ( v23 > v12 )
                    {
LABEL_30:
                      v23 = v12;
                      goto LABEL_36;
                    }
                    v24 = ~(((1 << v22) - 1) | v21);
                    while ( !v24 )
                    {
                      if ( (unsigned __int64)(v17 + 1) > v18 )
                      {
                        LODWORD(v25) = 32;
                        goto LABEL_33;
                      }
                      v24 = v17[1];
                      ++v17;
                    }
                    _BitScanForward64((unsigned __int64 *)&v25, v24);
LABEL_33:
                    v43 = v25;
                    v26 = v25 + 32 * (((__int64)v17 - v14) >> 2);
                    if ( v26 > v12 )
                      v26 = v12;
                    v16 = v26 - v23;
LABEL_36:
                    if ( !v16 )
                      break;
                    v44 = 0;
                    v48.EntireKey = v23 | (unsigned __int64)(v15 << 60);
                    SmKeyConvert(&v48, (union _SM_PAGE_KEY *)&v44);
                    v49 = *(_QWORD *)(v27 + 24);
                    v41 = v44;
                    v28 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v49, &v41, v16);
                    v29 = v16 - v28;
                    if ( v16 != v28 )
                    {
                      v30 = v49;
                      do
                      {
                        v41 += v28;
                        v28 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v30, &v41, v29);
                        v29 -= v28;
                      }
                      while ( v29 );
                      v12 = DWORD2(v51);
                    }
                    MiStoreSetPageFileRunEvicted(v10, v23, v16);
                    if ( !*(_DWORD *)(v10 + 200) )
                      break;
                    v13 = v16 + v23;
                  }
                  while ( v16 + v23 < v12 );
                  v31 = (void *)MiDerefPageFileSpaceBitmaps(v10, &v50[1], 0LL);
                  v2 = v50[0];
                  v8 = v46;
                  if ( v31 )
                    ExFreePoolWithTag(v31, 0);
                  v9 = v45;
                }
                if ( *(_DWORD *)(v10 + 200) >= 0x100u )
                  --v8;
              }
              v46 = ++v8;
            }
            while ( v8 < v9 );
            v7 = v47;
            v6 = (volatile LONG *)(v2 + 1224);
          }
          v11 = ExAcquireSpinLockExclusive(v6);
          if ( v7 == *(_DWORD *)(v2 + 1200) )
            break;
          ExReleaseSpinLockExclusiveFromDpcLevel(v6);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v36 = (v35 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v35;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v11);
        }
        if ( v7 )
        {
          *(_DWORD *)(v2 + 1200) = 0;
          KeSetEvent((PRKEVENT)(v2 + 1312), 0, 0);
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        if ( KiIrqlFlags )
        {
          v37 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v36 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        __writecr8(v11);
        v4 = (struct _KEVENT *)(v2 + 1240);
        v5 = (struct _KEVENT *)Object[KeWaitForMultipleObjects(
                                        3u,
                                        Object,
                                        WaitAny,
                                        WrVirtualMemory,
                                        0,
                                        0,
                                        0LL,
                                        &WaitBlockArray)];
      }
      while ( v5 != (struct _KEVENT *)(v2 + 1264) );
    }
    KeDisableTimer2((__int64)v54, 1, 1, 0LL);
  }
}
