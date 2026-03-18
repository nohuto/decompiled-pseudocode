/*
 * XREFs of ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x1C01E7720
 * Callers:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C014297C (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(
        KeyboardProcessing *this,
        struct tagQ *a2,
        void *const a3)
{
  __m128i si128; // xmm0

  if ( this )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        *((_BYTE *)this + ((unsigned __int64)*((unsigned __int8 *)a2 + 16) >> 3) + 196) |= 1 << (*((_BYTE *)a2 + 16) & 7);
        if ( this != *((KeyboardProcessing **)a2 + 1) )
          *((_DWORD *)this + 97) |= 1u;
      }
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *((_DWORD *)this + 97) |= 1u;
      *(__m128i *)((char *)this + 196) = si128;
      *(__m128i *)((char *)this + 212) = si128;
    }
  }
}
