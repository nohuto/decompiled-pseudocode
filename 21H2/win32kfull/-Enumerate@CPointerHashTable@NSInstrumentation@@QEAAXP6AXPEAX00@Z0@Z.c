/*
 * XREFs of ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C00F7C00
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F7180 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C000B70C (-_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  _DWORD *v3; // rsi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rax
  NSInstrumentation::CPointerHashTable *v8; // rcx

  v3 = UmfdAllocation::s_allocationLookup;
  v4 = *((_DWORD *)UmfdAllocation::s_allocationLookup + 12);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v6 >= v3[10] )
        break;
      v7 = *((_QWORD *)v3 + 4);
      v8 = *(NSInstrumentation::CPointerHashTable **)(v7 + 16LL * v6);
      if ( v8 )
      {
        UmfdAllocation::_RemoveAllocationFromLookup(v8, *(char **)(v7 + 16LL * v6 + 8), 0LL);
        ++v5;
      }
      ++v6;
    }
    while ( v5 < v4 );
  }
}
