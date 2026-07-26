/*
 * XREFs of ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C5070
 * Callers:
 *     ?ndisSendWithPause@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C5350 (-ndisSendWithPause@@YAHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CEF0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032B38 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisSendPacketsWithPause(char *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r15
  __int64 v6; // rdi
  KIRQL v8; // al
  int v9; // ecx
  struct _NDIS_PACKET **v10; // rax
  unsigned int v11; // r15d
  struct _NDIS_PACKET *v12; // r13
  _MDL *Head; // rbx
  KSPIN_LOCK *v15; // rdi
  struct _NDIS_STACK_RESERVED *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rsi
  struct _NDIS_PACKET **v19; // rax
  bool v20; // zf
  bool v21; // bl
  struct _NDIS_PACKET **v22; // [rsp+30h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  unsigned int v27; // [rsp+A8h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = (KSPIN_LOCK *)(a1 + 624);
  v6 = a3;
  v24 = v3;
  v23 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 78);
  v9 = *((_DWORD *)a1 + 160);
  a1[632] = v8;
  if ( v9 == 2 )
  {
    *((_DWORD *)a1 + 161) += v6;
    KeReleaseSpinLock(v4, v8);
    v27 = 0;
    v10 = a2;
    v22 = a2;
    v11 = 0;
    if ( !(_DWORD)v6 )
      return;
    v25 = v6;
    while ( 1 )
    {
      v12 = *v10;
      ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v12, &v23);
      *(_QWORD *)v23 = a1;
      Head = v12->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v3 + 928) & 2) == 0 )
        {
          v27 = 0;
          while ( (Head->MdlFlags & 5) != 0
                ? Head->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u) )
          {
            Head = Head->Next;
            if ( !Head )
              goto LABEL_15;
          }
          v27 = -1073741670;
        }
      }
      else
      {
        v27 = -1073741823;
      }
LABEL_15:
      v12->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen((__int64)a1, 9u);
      if ( !v27 )
        break;
      v15 = (KSPIN_LOCK *)(v3 + 96);
      NewIrql = KfRaiseIrql(2u);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 96));
      v16 = v23;
      v17 = v24;
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      v18 = *(_QWORD *)v16;
      *(_QWORD *)v16 = 1297040183LL;
      *(_QWORD *)(v17 + 520) = 0LL;
      KeReleaseSpinLockFromDpcLevel(v15);
      *((_DWORD *)v16 + 2) = 0;
      v12->Private.NdisPacketFlags &= 0xC0u;
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v18 + 112))(v18, v12, v27);
      if ( NewIrql != 2 )
        KeLowerIrql(NewIrql);
      v3 = v24;
      if ( !v11 )
        goto LABEL_21;
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v24 + 2024))(v24, a2, v11);
      v19 = v22;
      v11 = 0;
      a2 = v22 + 1;
LABEL_22:
      v10 = v19 + 1;
      v20 = v25-- == 1;
      v22 = v10;
      if ( v20 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v3 + 2024))(v3, a2, v11);
        return;
      }
    }
    ++v11;
LABEL_21:
    v19 = v22;
    goto LABEL_22;
  }
  v21 = 0;
  if ( v9 == 1 )
    v21 = *((_DWORD *)a1 + 161) == 0;
  KeReleaseSpinLock(v4, v8);
  if ( (_DWORD)v6 )
  {
    do
    {
      (*((void (__fastcall **)(_QWORD, _QWORD, __int64))a1 + 85))(*((_QWORD *)a1 + 66), *a2++, 3223519274LL);
      --v6;
    }
    while ( v6 );
  }
  if ( v21 )
    KeSetEvent((PRKEVENT)a1 + 27, 0, 0);
}
