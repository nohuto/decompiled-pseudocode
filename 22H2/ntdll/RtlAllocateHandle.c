/*
 * XREFs of RtlAllocateHandle @ 0x180059A90
 * Callers:
 *     RtlpInsertStringAtom @ 0x180059A00 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 *__fastcall RtlAllocateHandle(__int64 a1, _DWORD *a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  char *v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // esi
  void *ProcessHeap; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v2 = (unsigned __int64 *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v13 = *(_DWORD *)(a1 + 12);
      if ( v13 <= *(_DWORD *)a1 )
      {
        v14 = *(_DWORD *)(a1 + 4);
        v15 = *(_QWORD *)(a1 + 24);
        v16 = v13 * v14;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v18 = v16 + 8 * v14;
        v19 = v15
            ? RtlReAllocateHeap((__int64)ProcessHeap, 8u, v15, v16 + 8 * v14)
            : RtlAllocateHeap((__int64)ProcessHeap, 8u, (unsigned int)v18);
        v22 = v19;
        if ( v19 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          v11 = (char *)(v18 + v19);
          v10 = v19 + v16;
          *(_QWORD *)(a1 + 24) = v19;
          v21 = (unsigned __int64 *)v10;
LABEL_12:
          *(_QWORD *)(a1 + 32) = v11;
          v12 = v2;
          if ( v10 < (unsigned __int64)v11 )
          {
            do
            {
              *v12 = v10;
              v12 = v21;
              v10 = (unsigned __int64)v21 + *(unsigned int *)(a1 + 4);
              v21 = (unsigned __int64 *)v10;
            }
            while ( v10 < *(_QWORD *)(a1 + 32) );
          }
          goto LABEL_2;
        }
      }
    }
    else
    {
      v7 = *(unsigned __int64 **)(a1 + 32);
      if ( !v7 )
      {
        v8 = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
        v22 = 0LL;
        v23 = v8;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v23, 0x2000, 4) < 0 )
          return 0LL;
        v9 = v22;
        *(_QWORD *)(a1 + 32) = v22;
        v7 = *(unsigned __int64 **)(a1 + 32);
        *(_QWORD *)(a1 + 24) = v9;
        *(_QWORD *)(a1 + 40) = v23 + v9;
      }
      v21 = v7;
      if ( (unsigned __int64)v7 < *(_QWORD *)(a1 + 40) )
      {
        v20 = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v21, 0LL, &v20, 4096, 4) >= 0 )
        {
          v10 = (unsigned __int64)v21;
          v11 = (char *)v21 + v20;
          goto LABEL_12;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = (unsigned __int64 *)*v2;
  v21 = v5;
  *v2 = *v5;
  *v5 = 0LL;
  if ( a2 )
    *a2 = ((__int64)v21 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v21;
}
