/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x1402EAD40
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiReduceShareCount @ 0x1402EADCC (MiReduceShareCount.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 168);
  MiFlushTbList(v1);
  if ( *(_DWORD *)(v1 + 208) )
  {
    v3 = 48LL * *(_QWORD *)(v1 + 216) - 0x220000000000LL;
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    MiReduceShareCount(v3, *(unsigned int *)(v1 + 208));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v1 + 208) = 0;
  }
  return 0LL;
}
