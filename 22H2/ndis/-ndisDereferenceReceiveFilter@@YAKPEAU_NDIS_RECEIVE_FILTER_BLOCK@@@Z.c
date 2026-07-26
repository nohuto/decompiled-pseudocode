/*
 * XREFs of ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C0085C28
 * Callers:
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00859C4 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011F9C8 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0085DE4 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  unsigned int v2; // esi
  _DWORD *v4; // rbp
  __int64 v5; // r14
  char v6; // r15
  char v7; // r13
  bool v8; // r12
  _QWORD **v9; // rcx
  PVOID *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  KIRQL v18; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v2 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0LL;
  NewIrql = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  v21 = --*((_DWORD *)P + 20);
  if ( !v21 )
  {
    v6 = 1;
    v1->AllocatedReceiveFilterIndices[(unsigned __int64)v2 >> 3] &= ~(1 << (v2 & 7));
    v4 = (_DWORD *)P[9];
    if ( v4 )
    {
      v9 = (_QWORD **)P[2];
      if ( v9[1] != P + 2 )
        goto LABEL_24;
      v10 = (PVOID *)P[3];
      if ( *v10 != P + 2 )
        goto LABEL_24;
      *v10 = v9;
      v7 = 1;
      v9[1] = v10;
      --v4[21];
    }
    v11 = P[8];
    v12 = *P;
    if ( v11 )
      v5 = P[8];
    v8 = v11 != 0;
    if ( *(_QWORD **)(v12 + 8) == P )
    {
      v13 = (_QWORD *)P[1];
      if ( (_QWORD *)*v13 == P )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        --v1->NumReceiveFilters;
        if ( !P[22] )
        {
LABEL_16:
          ExFreePoolWithTag(P, 0);
          goto LABEL_17;
        }
        v14 = P[4];
        if ( *(_QWORD **)(v14 + 8) == P + 4 )
        {
          v15 = (_QWORD *)P[5];
          if ( (_QWORD *)*v15 == P + 4 )
          {
            *v15 = v14;
            *(_QWORD *)(v14 + 8) = v15;
            --*(_DWORD *)(P[22] + 864LL);
            v16 = P[22];
            v17 = *(_QWORD *)(v16 + 88);
            if ( *(_DWORD *)(v16 + 124) )
              --*(_DWORD *)(v17 + 656);
            else
              --*(_DWORD *)(v17 + 652);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_17:
  v18 = NewIrql;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v18);
  if ( v7 )
    ndisDereferenceReceiveQueue(v4);
  if ( v8 )
    ndisMDereferenceOpenUnlocked(v5, 11);
  if ( v6 )
    ndisDereferenceMiniport(v1, 0x46u);
  return v21;
}
