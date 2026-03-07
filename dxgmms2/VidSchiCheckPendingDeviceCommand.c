_QWORD *__fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // r9
  _QWORD *v7; // rbx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *result; // rax
  unsigned int *i; // r12
  unsigned int *v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r10d
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned int *v24; // rsi
  __int64 v25; // rax
  unsigned int *v26; // rbx
  unsigned int *v27; // rdi
  unsigned int **v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // rdx
  __int64 *v33; // rbx
  __int64 **v34; // rcx
  __int64 **v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // rcx
  _QWORD *v38; // rcx
  void **v39; // rax
  bool v40; // zf
  _QWORD *v41; // r9
  unsigned int *v42; // rcx
  unsigned int *v43; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+60h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1[4];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(v1[1] + 768LL);
  KeAcquireInStackQueuedSpinLock(v1 + 220, &LockHandle);
  v5 = v1 + 224;
  v6 = (_QWORD *)v1[224];
  if ( v6 != v1 + 224 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, v6 - 25) )
      {
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 )
          goto LABEL_56;
        v10 = (_QWORD *)v8[1];
        if ( (_QWORD *)*v10 != v8 )
          goto LABEL_56;
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v8 - 24), (struct VIDMM_ALLOC *)(v8 - 25));
      }
      v6 = v7;
    }
    while ( v7 != v5 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = a1 + 201;
  for ( i = (unsigned int *)a1[201]; i != (unsigned int *)(a1 + 201); result = a1 + 201 )
  {
    v14 = i;
    i = *(unsigned int **)i;
    v15 = *((_QWORD *)v14 + 2);
    if ( v15 > a1[200] )
    {
      v11 = v14[16];
      v16 = 0;
      if ( (_DWORD)v11 )
      {
        v17 = *((_QWORD *)v14 + 3);
        do
        {
          v18 = *(_QWORD *)(v17 + 16LL * v16);
          if ( v18 )
          {
            result = *(_QWORD **)(v17 + 16LL * v16 + 8);
            if ( *(_QWORD *)(v18 + 160) < (unsigned __int64)result )
              return result;
          }
        }
        while ( ++v16 < (unsigned int)v11 );
      }
      v19 = v14[32];
      v20 = 0LL;
      if ( v19 )
      {
        v21 = *((_QWORD *)v14 + 9);
        while ( 1 )
        {
          v22 = *(_QWORD *)(v21 + 24 * v20);
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 148) )
              break;
          }
LABEL_21:
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= v19 )
            goto LABEL_22;
        }
        LODWORD(v11) = 0;
        v23 = (_QWORD *)(v21 + 8 * (3 * v20 + 1));
        result = (_QWORD *)(v22 + 64);
        while ( *result >= *v23 )
        {
          v11 = (unsigned int)(v11 + 1);
          result += 3;
          ++v23;
          if ( (unsigned int)v11 >= 2 )
            goto LABEL_21;
        }
        return result;
      }
LABEL_22:
      a1[200] = v15;
    }
    v24 = (unsigned int *)*((_QWORD *)v14 + 19);
    if ( v24 != v14 + 38 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        v26 = v24 - 54;
        v27 = v24;
        v24 = (unsigned int *)v25;
        if ( *(unsigned int **)(v25 + 8) != v27 )
          break;
        v28 = (unsigned int **)*((_QWORD *)v27 + 1);
        if ( *v28 != v27 )
          break;
        *v28 = (unsigned int *)v25;
        *(_QWORD *)(v25 + 8) = v28;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v26 + 12) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v29 = *((_QWORD *)v26 + 12);
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v29 + 4), 2, 1) == 1
            && bTracingEnabled
            && (byte_1C00769C1 & 1) != 0 )
          {
            McTemplateK0p_EtwWriteTransfer(v29, &EventCompleteOfferAllocation, v11, v26);
          }
        }
        *(_QWORD *)v27 = 0LL;
        *((_QWORD *)v26 + 28) = 0LL;
        if ( v24 == v14 + 38 )
          goto LABEL_32;
      }
LABEL_56:
      __fastfail(3u);
    }
LABEL_32:
    memset(&v46, 0, sizeof(v46));
    v30 = (__int64 *)*((_QWORD *)v14 + 17);
    while ( v30 != (__int64 *)(v14 + 34) )
    {
      v31 = *v30;
      v32 = v30 - 25;
      v33 = v30;
      v30 = (__int64 *)v31;
      if ( *(__int64 **)(v31 + 8) != v33 )
        goto LABEL_56;
      v34 = (__int64 **)v33[1];
      if ( *v34 != v33 )
        goto LABEL_56;
      *v34 = (__int64 *)v31;
      *(_QWORD *)(v31 + 8) = v34;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v34, v32) )
      {
        memset(&v45, 0, sizeof(v45));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 44392), &v45);
        v35 = *(__int64 ***)(v3 + 44408);
        if ( *v35 != (__int64 *)(v3 + 44400) )
          goto LABEL_56;
        v33[1] = (__int64)v35;
        *v33 = v3 + 44400;
        *v35 = v33;
        *(_QWORD *)(v3 + 44408) = v33;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45);
        KeSetEvent(*(PRKEVENT *)(v3 + 44384), 0, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1760LL), &v46);
        v36 = a1[4] + 1792LL;
        v37 = *(__int64 ***)(a1[4] + 1800LL);
        if ( *v37 != (__int64 *)v36 )
          goto LABEL_56;
        v33[1] = (__int64)v37;
        *v33 = v36;
        *v37 = v33;
        *(_QWORD *)(v36 + 8) = v33;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
      }
    }
    v38 = *(_QWORD **)v14;
    if ( *(unsigned int **)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_56;
    v39 = (void **)*((_QWORD *)v14 + 1);
    if ( *v39 != v14 )
      goto LABEL_56;
    v40 = bTracingEnabled == 0;
    *v39 = v38;
    v38[1] = v39;
    if ( !v40 )
    {
      v41 = (_QWORD *)a1[1];
      if ( !v41 )
        v41 = a1;
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v14 + 2), &EventRetireSyncPoint, v11, v41, *((_QWORD *)v14 + 2));
    }
    v42 = (unsigned int *)*((_QWORD *)v14 + 9);
    if ( v42 != v14 + 20 && v42 )
      ExFreePoolWithTag(v42, 0);
    *((_QWORD *)v14 + 9) = 0LL;
    v14[32] = 0;
    v43 = (unsigned int *)*((_QWORD *)v14 + 3);
    if ( v43 != v14 + 8 )
    {
      if ( v43 )
        ExFreePoolWithTag(v43, 0);
    }
    *((_QWORD *)v14 + 3) = 0LL;
    v14[16] = 0;
    ExFreePoolWithTag(v14, 0);
  }
  return result;
}
