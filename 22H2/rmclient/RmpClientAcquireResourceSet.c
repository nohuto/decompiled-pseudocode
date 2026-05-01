/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180005B20
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180005B10 (RmAcquireResourceSetEx.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800083B0 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall RmpClientAcquireResourceSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rdi
  _QWORD *Heap; // rax
  _QWORD *v11; // r15
  int Pointer; // ebx
  __int64 v13; // rbx
  int v14; // edi
  int v15; // esi
  void *v16; // r14
  CLIENT_CALL_RETURN v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  int v21; // esi
  unsigned __int64 v22; // rax
  ULONG v24; // [rsp+40h] [rbp-88h]
  unsigned int v25; // [rsp+70h] [rbp-58h]
  PVOID P; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp-48h]
  int v32; // [rsp+100h] [rbp+38h]

  v9 = a1 + 24;
  v27 = a1 + 24;
  P = 0LL;
  v32 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v11 = Heap;
  if ( Heap )
  {
    Heap[7] = 0LL;
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = v9;
    Heap[6] = -1LL;
    Heap[9] = a5;
    Heap[10] = a6;
    Heap[8] = -1LL;
    P = Heap;
    Pointer = 0;
  }
  else
  {
    Pointer = -1073741801;
    v11 = 0LL;
  }
  if ( Pointer >= 0 )
    Pointer = 0;
  v25 = Pointer;
  if ( Pointer >= 0 )
  {
    v32 = 1;
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    v13 = *(_QWORD *)(a4 + 544);
    v14 = *(_DWORD *)(a4 + 536);
    v15 = *(_DWORD *)(a4 + 532);
    v16 = (void *)(a4 + 464);
    v24 = RtlLengthSid(v16);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800158B0,
                              4u,
                              0LL,
                              *(_QWORD *)(a1 + 16),
                              a2,
                              a3,
                              a4,
                              v16,
                              v24,
                              v15,
                              v14,
                              v13,
                              a8).Pointer;
    v25 = Pointer;
    v9 = v27;
    if ( Pointer >= 0 )
    {
      v11[6] = *a8;
      v18 = v11[5] + 24LL;
      v19 = *(_QWORD *)(v11[5] + 32LL);
      v20 = *(_QWORD *)v18;
      if ( (v19 & 1) != 0 )
      {
        if ( v20 )
          v20 ^= v18;
        else
          v20 = 0LL;
      }
      v21 = v19 & 1;
      LOBYTE(v17.Pointer) = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HampIpcChannelObjectCompareObjectsForTree)(
                      v11,
                      v20,
                      (CLIENT_CALL_RETURN)v17.Simple) < 0 )
          {
            v22 = *(_QWORD *)v20;
            if ( v21 )
            {
              if ( !v22 )
                goto LABEL_22;
              v22 ^= v20;
            }
            if ( !v22 )
            {
LABEL_22:
              LOBYTE(v17.Pointer) = 0;
              break;
            }
          }
          else
          {
            v22 = *(_QWORD *)(v20 + 8);
            if ( v21 )
            {
              if ( !v22 )
                goto LABEL_23;
              v22 ^= v20;
            }
            if ( !v22 )
            {
LABEL_23:
              LOBYTE(v17.Pointer) = 1;
              break;
            }
          }
          v20 = v22;
        }
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlRbInsertNodeEx)(
        v18,
        v20,
        (CLIENT_CALL_RETURN)v17.Simple,
        v11);
      v11 = 0LL;
      P = 0LL;
      v9 = v27;
    }
  }
  if ( v32 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
  }
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v25;
  }
  return (unsigned int)Pointer;
}
