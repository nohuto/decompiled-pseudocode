/*
 * XREFs of ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E210
 * Callers:
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C2F0 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreQueryOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  int v2; // edi
  __int64 v3; // r15
  __int64 v5; // rcx
  char v6; // bp
  const void *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rbx
  struct _NDIS_MINIPORT_BLOCK *v10; // r13
  int v11; // ebx
  KIRQL v12; // dl
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  __int64 v14; // rax
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 3);
  v6 = 1;
  NewIrql = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( !v5 )
  {
    if ( v9 )
    {
      v10 = *(struct _NDIS_MINIPORT_BLOCK **)(v9 + 32);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v10, &NewIrql);
      v11 = *(_DWORD *)(v9 + 60);
      v12 = NewIrql;
      v10->MiniportThread = 0LL;
      KeReleaseSpinLock(&v10->Lock, v12);
      if ( (v11 & 1) != 0 )
      {
        Offload = v10->Offload;
        v7 = (const void *)((unsigned __int64)&Offload->TopSetEncapsulation & -(__int64)(Offload != 0LL));
        v8 = Offload != 0LL ? 0x1C : 0;
        goto LABEL_12;
      }
    }
    else if ( v1 )
    {
      v14 = *(_QWORD *)(v1 + 4096);
      if ( v14 )
      {
        v7 = (const void *)(v14 + 872);
        v8 = 28;
      }
    }
    v6 = 0;
LABEL_12:
    if ( !v8 )
      return v6;
    goto LABEL_13;
  }
  v7 = *(const void **)(v5 + 696);
  if ( !v7 )
  {
    *((_DWORD *)a1 + 10) = 0;
    *(_DWORD *)(v3 + 52) = 0;
    return v6;
  }
  v8 = 28;
LABEL_13:
  if ( v8 > *(_DWORD *)(v3 + 48) )
  {
    *(_DWORD *)(v3 + 56) = v8;
    v2 = -1073676266;
  }
  else
  {
    memmove(*(void **)(v3 + 40), v7, v8);
    *(_DWORD *)(v3 + 52) = v8;
  }
  *((_DWORD *)a1 + 10) = v2;
  return 1;
}
