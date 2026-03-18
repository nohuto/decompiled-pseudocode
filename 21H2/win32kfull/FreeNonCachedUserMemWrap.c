/*
 * XREFs of FreeNonCachedUserMemWrap @ 0x1C013B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C015084C (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall FreeNonCachedUserMemWrap(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v4; // rcx

  if ( *(_DWORD *)(a1 + 424) && *(_DWORD *)(a1 + 408) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 56) )
  {
    v2 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    v4 = *(struct _UMPDHEAP **)(a1 + 56);
    if ( *(struct _UMPDHEAP **)(v2 + 56) != v4 )
      DestroyUMPDHeap(v4);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
