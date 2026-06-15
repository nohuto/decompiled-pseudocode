/*
 * XREFs of sub_180044920 @ 0x180044920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044920(__int64 a1, float *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  float v4; // xmm0_4

  v2 = 0LL;
  *a2 = 0.0;
  if ( *(_DWORD *)(a1 + 84) )
  {
    v3 = *(_QWORD *)(a1 + 104);
    do
    {
      v4 = *(float *)(v3 + 4 * v2);
      if ( v4 > *a2 )
        *a2 = v4;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 84) );
  }
  return 0LL;
}
