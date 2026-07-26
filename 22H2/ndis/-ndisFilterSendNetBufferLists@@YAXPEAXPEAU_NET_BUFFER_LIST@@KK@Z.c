/*
 * XREFs of ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0005540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0005980 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0068BE0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0069ECC (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisFilterSendNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v10; // rax
  int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // rcx
  void *v13; // r12
  __int64 v14; // r14
  void (*v15)(void); // r15
  unsigned int v16; // edi
  struct _NET_BUFFER_LIST *v17; // r15
  int v18; // r8d
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST *v22; // rax
  struct _NET_BUFFER_LIST **v23; // r13
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // al
  struct _NET_BUFFER_LIST *v28; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v30; // r9
  struct _NET_BUFFER_LIST *v31; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rax
  unsigned int Context; // [rsp+20h] [rbp-59h]
  unsigned int Contexta; // [rsp+20h] [rbp-59h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-49h]
  unsigned int v36; // [rsp+30h] [rbp-49h]
  _QWORD v37[3]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD Parameter[5]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+88h] [rbp+Fh]
  __int64 v40; // [rsp+8Ch] [rbp+13h]
  unsigned int v41; // [rsp+94h] [rbp+1Bh]
  struct _NET_BUFFER_LIST *v42; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+E8h] [rbp+6Fh]

  v42 = a2;
  v6 = a1[4];
  v8 = a1[57];
  if ( *(_BYTE *)v8 == 5
    && (*(_DWORD *)(v8 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v8 + 336)
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v8, a2, a3, a4, &v42);
    a2 = v42;
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = a1[53] + 96 * v4;
    if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 16) )
    {
      v11 = a4 | 1;
      if ( !*(_QWORD *)v10 )
      {
        v12 = v42;
        *(_QWORD *)v10 = v42;
LABEL_8:
        *(_QWORD *)(v10 + 8) = v12;
        v12->Scratch = 0LL;
        v12->ChildRefCount = v11;
        v12->Status = a3;
        return;
      }
      p_Next = *(struct _NET_BUFFER_LIST ***)(v10 + 8);
      if ( a3 != *((_DWORD *)p_Next + 35) || v11 != *((_DWORD *)p_Next + 33) || (v11 & 0x34) != 0 )
      {
        v12 = v42;
        p_Next[14] = v42;
        goto LABEL_8;
      }
      for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        p_Next = &i->Next;
      *p_Next = v42;
    }
    else
    {
      v13 = (void *)a1[55];
      v14 = a1[57];
      v15 = (void (*)(void))a1[54];
      if ( *(_BYTE *)v14 == 17 )
      {
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a1[54])(v13, v42, a3, a4);
      }
      else if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v22 = v42;
        v23 = (struct _NET_BUFFER_LIST **)v37;
        v43 = Number;
        v37[2] = 0LL;
        v42->Scratch = 0LL;
        v22->ChildRefCount = a4;
        v22->Status = a3;
        v24 = *(_BYTE *)v14 == 5;
        v37[0] = v22;
        v37[1] = v22;
        if ( v24 )
        {
          while ( *v23 )
          {
            v25 = v14;
            v26 = *(_QWORD *)(v14 + 424) + 96LL * Number;
            v27 = *(_BYTE *)(v26 + 16);
            *(_BYTE *)(v26 + 16) = 1;
            v28 = *v23;
            LOBYTE(v42) = v27;
            *v23 = 0LL;
            if ( v28 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v28->Scratch;
                ChildRefCount = v28->ChildRefCount;
                Context = v28->NdisReserved2;
                v28->ChildRefCount = 0;
                ndisCallSendHandler((void *)v14, v15, v13, v28, Context, 0, ChildRefCount);
                v28 = Scratch;
              }
              while ( Scratch );
              v27 = (char)v42;
              v25 = v14;
              Number = v43;
            }
            *(_BYTE *)(v26 + 16) = 0;
            if ( v27 )
            {
              *(_BYTE *)(v26 + 16) = 1;
              goto LABEL_44;
            }
            v14 = *(_QWORD *)(v14 + 456);
            v23 = (struct _NET_BUFFER_LIST **)v26;
            v15 = *(void (**)(void))(v25 + 432);
            v13 = *(void **)(v25 + 440);
            if ( *(_BYTE *)v14 != 5 )
              goto LABEL_44;
          }
        }
        else
        {
LABEL_44:
          v30 = *v23;
          if ( *v23 )
          {
            *v23 = 0LL;
            do
            {
              v31 = (struct _NET_BUFFER_LIST *)v30->Scratch;
              v36 = v30->ChildRefCount;
              Contexta = v30->NdisReserved2;
              v30->ChildRefCount = 0;
              ndisCallSendHandler((void *)v14, v15, v13, v30, Contexta, 0, v36);
              v30 = v31;
            }
            while ( v31 );
          }
        }
      }
      else
      {
        v16 = 0;
        Parameter[3] = v15;
        v17 = v42;
        Parameter[4] = v42;
        Parameter[0] = 0LL;
        Parameter[1] = v14;
        Parameter[2] = v13;
        v40 = 0LL;
        v39 = a3;
        v41 = a4;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          if ( byte_1C00E4FD0 && (*(_DWORD *)(v14 + 844) & 2) != 0 )
            PktMonClientNblDropNdis(v14 + 792, (_DWORD)v17, v18, 2, -1073741670, -536866812);
          Alignment = v17;
          do
          {
            Alignment->Status = -1073741670;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          do
          {
            v17 = (struct _NET_BUFFER_LIST *)v17->Link.Alignment;
            ++v16;
          }
          while ( v17 );
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 296), v16);
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v14, v42, 1u);
        }
      }
    }
  }
}
