/*
 * XREFs of ?Close@CPathEmitterEdge@EmitterShapes@@EEAAJXZ @ 0x1802665B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmitterShapes::CPathEmitterEdge::Close(EmitterShapes::CPathEmitterEdge *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  float v3; // xmm0_4

  *((_DWORD *)this + 4) = 0;
  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 3);
  if ( v2 != v1 )
  {
    v3 = 0.0;
    do
    {
      v3 = v3 + *(float *)(v2 + 48);
      v2 += 56LL;
      *((float *)this + 4) = v3;
    }
    while ( v2 != v1 );
  }
  return 0LL;
}
