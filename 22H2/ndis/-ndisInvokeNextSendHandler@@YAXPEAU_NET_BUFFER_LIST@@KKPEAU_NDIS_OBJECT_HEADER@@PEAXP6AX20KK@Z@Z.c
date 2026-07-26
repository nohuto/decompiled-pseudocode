/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C003ED50
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002550 (NdisSendNetBufferLists.c)
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C003EFF0 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0005980 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0069ECC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_OBJECT_HEADER *a4,
        void *a5,
        void (*a6)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_OBJECT_HEADER *v7; // rsi
  struct _NET_BUFFER_LIST *v8; // rdi
  struct _NET_BUFFER_LIST **v9; // r14
  void (*v10)(void); // r15
  void *v11; // r12
  bool v12; // zf
  struct _NDIS_OBJECT_HEADER *v13; // r13
  __int64 v14; // rdi
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  unsigned int ChildRefCount; // eax
  unsigned int NdisReserved2; // ecx
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  struct _NET_BUFFER_LIST *v22; // rbx
  int v23; // r8d
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *Alignment; // rcx
  unsigned int v26; // eax
  unsigned int v27; // [rsp+48h] [rbp-39h]
  _QWORD v28[3]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD Parameter[5]; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+94h] [rbp+13h]
  unsigned int v32; // [rsp+9Ch] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  char v34; // [rsp+F0h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v7 = a4;
  v8 = a1;
  if ( a4->Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((a3 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v9 = (struct _NET_BUFFER_LIST **)v28;
    v10 = a6;
    v11 = a5;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    v12 = a4->Type == 5;
    v27 = CurrentIrql;
    v28[2] = 0LL;
    v28[0] = a1;
    v28[1] = a1;
    if ( v12 )
    {
      while ( *v9 )
      {
        v13 = v7;
        v14 = *(_QWORD *)&v7[106].Type + 96 * CurrentIrql;
        v15 = *(_BYTE *)(v14 + 16);
        *(_BYTE *)(v14 + 16) = 1;
        v16 = *v9;
        v34 = v15;
        *v9 = 0LL;
        if ( v16 )
        {
          do
          {
            ChildRefCount = v16->ChildRefCount;
            NdisReserved2 = v16->NdisReserved2;
            Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
            v16->ChildRefCount = 0;
            ndisCallSendHandler(v7, v10, v11, v16, NdisReserved2, 0, ChildRefCount);
            v16 = Scratch;
          }
          while ( Scratch );
          v15 = v34;
        }
        *(_BYTE *)(v14 + 16) = 0;
        if ( v15 )
        {
          *(_BYTE *)(v14 + 16) = 1;
          v8 = *v9;
          goto LABEL_15;
        }
        v7 = *(struct _NDIS_OBJECT_HEADER **)&v7[114].Type;
        v9 = (struct _NET_BUFFER_LIST **)v14;
        v10 = *(void (**)(void))&v13[108].Type;
        v11 = *(void **)&v13[110].Type;
        CurrentIrql = v27;
        if ( v7->Type != 5 )
        {
          v8 = *(struct _NET_BUFFER_LIST **)v14;
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      if ( v8 )
      {
        *v9 = 0LL;
        do
        {
          v20 = v8->ChildRefCount;
          v21 = v8->NdisReserved2;
          v22 = (struct _NET_BUFFER_LIST *)v8->Scratch;
          v8->ChildRefCount = 0;
          ndisCallSendHandler(v7, v10, v11, v8, v21, 0, v20);
          v8 = v22;
        }
        while ( v22 );
      }
    }
  }
  else
  {
    Parameter[2] = a5;
    v30 = a2;
    v32 = a3;
    Parameter[3] = a6;
    Parameter[0] = 0LL;
    Parameter[1] = a4;
    v31 = 0LL;
    Parameter[4] = a1;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      if ( byte_1C00E4FD0 && (*(_DWORD *)&v7[211] & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)v7 + 792, (_DWORD)v8, v23, 2, -1073741670, -536866812);
      for ( i = v8; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        i->Status = -1073741670;
      Alignment = (_SLIST_HEADER *)v8;
      v26 = 0;
      if ( v8 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v26;
        }
        while ( Alignment );
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7[74], v26);
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v7, v8, 1u);
    }
  }
}
