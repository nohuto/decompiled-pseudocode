/*
 * XREFs of PpmUpdateArchitecturalEfficiencyClass @ 0x140B2F0F0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

__int64 PpmUpdateArchitecturalEfficiencyClass()
{
  __int64 result; // rax
  unsigned int v1; // esi
  unsigned int v2; // ebx
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // di
  unsigned int v5; // r14d
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // cl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = KeNumberProcessors_0;
  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v6 = *(_BYTE *)(KeGetPrcb(v5) + 34125);
      v7 = v6;
      if ( v6 <= v3 )
        v7 = v3;
      result = v4;
      v3 = v7;
      if ( v6 >= v4 )
        v6 = v4;
      ++v5;
      v4 = v6;
    }
    while ( v5 < v1 );
    if ( v7 != v6 && v1 )
    {
      do
      {
        result = KeGetPrcb(v2++);
        *(_BYTE *)(result + 34059) = *(_BYTE *)(result + 34125) != v4;
      }
      while ( v2 < v1 );
    }
  }
  return result;
}
