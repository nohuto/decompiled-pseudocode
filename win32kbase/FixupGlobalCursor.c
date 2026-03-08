/*
 * XREFs of FixupGlobalCursor @ 0x1C00C5F20
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixupGlobalCursor(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r10

  if ( !*(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = a2;
  result = *(unsigned int *)(a1 + 80);
  if ( (result & 8) != 0 )
  {
    v4 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v5 = 0LL;
      do
      {
        result = *(_QWORD *)(a1 + 96);
        v6 = *(_QWORD *)(result + v5);
        if ( !*(_QWORD *)(v6 + 24) )
          *(_QWORD *)(v6 + 24) = a2;
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < *(_DWORD *)(a1 + 88) );
    }
  }
  return result;
}
