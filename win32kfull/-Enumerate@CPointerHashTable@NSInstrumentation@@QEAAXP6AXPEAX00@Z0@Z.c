/*
 * XREFs of ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C0125978
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C00D97F0 (-_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rax
  void *v8; // rcx

  v3 = *((_DWORD *)this + 12);
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v6 >= *((_DWORD *)this + 10) )
        break;
      v7 = *((_QWORD *)this + 4);
      v8 = *(void **)(v7 + 16LL * v6);
      if ( v8 )
      {
        UmfdAllocation::_RemoveAllocationFromLookup(v8, *(char **)(v7 + 16LL * v6 + 8), 0LL);
        ++v5;
      }
      ++v6;
    }
    while ( v5 < v3 );
  }
}
