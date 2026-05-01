/*
 * XREFs of ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x18003BAAC
 * Callers:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BA18 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(void **a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  void *v12; // r8
  PVOID ProcessHeap; // rcx
  char *Heap; // rax
  PVOID v15; // rdi

  if ( *a2 < a3 )
  {
    v7 = a3 - 1;
    if ( ((unsigned int)v7 & a3) != 0 )
      v8 = ((((((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 8) | (((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7 | (((((((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 8) | (((((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 4) | (((v7 >> 1) | (unsigned int)v7) >> 2) | (v7 >> 1) | (unsigned int)v7) >> 16))
         + 1;
    else
      v8 = 2 * a3;
    if ( v8 <= 0xFFFFFFFF
      && (v9 = v8,
          v5 = 0,
          v11 = (unsigned int)v8,
          v10 = (unsigned int)v8 * (unsigned __int128)0x10uLL,
          is_mul_ok(v11, 0x10uLL)) )
    {
      v12 = *a1;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v10), v12, v10);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v10), v10);
      v15 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * (v9 - *a2));
        *a2 = v9;
        *a1 = v15;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
