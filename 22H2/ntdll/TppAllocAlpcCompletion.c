/*
 * XREFs of TppAllocAlpcCompletion @ 0x18007A7D4
 * Callers:
 *     TpAllocAlpcCompletion @ 0x18007A6B0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x18007A7B0 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000C490 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtAlpcSetInformation @ 0x18009E670 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _PEB_LDR_DATA *v18; // rcx
  __int64 v19; // r15
  int v21; // [rsp+30h] [rbp-48h]
  _QWORD v22[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 296LL);
  v11 = Heap;
  v24 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v21 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) &= ~1u;
      *(_DWORD *)(v11 + 288) |= a6 != 0;
      *(_QWORD *)(v11 + 272) = a2;
      v17 = *(_QWORD *)(v11 + 216);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      if ( v17 )
      {
        TppGetCurrentThreadNumaNode(v17, (_DWORD *)(v11 + 64), (_BYTE *)(v11 + 68));
        v18 = (_PEB_LDR_DATA *)*(unsigned int *)(v11 + 64);
        LOBYTE(v13) = *(_BYTE *)(v11 + 68);
      }
      else
      {
        *(_DWORD *)(v11 + 64) = 0;
        *(_BYTE *)(v11 + 68) = 0;
        v18 = 0LL;
        LOBYTE(v13) = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = (_DWORD)v18;
      *(_BYTE *)(v11 + 12) = v13;
      v19 = *(_QWORD *)(v11 + 216);
      if ( v19 )
      {
        v18 = NtCurrentPeb()->Ldr;
        if ( !v18->ShutdownInProgress )
        {
          v22[1] = *(_QWORD *)(v19 + 64);
          v11 = v24;
          v22[0] = v24;
          v14 = NtAlpcSetInformation(a2, 2LL, v22);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v24;
      }
      TppRaiseInvalidParameter(v18, v13, v15, v16);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v24);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
