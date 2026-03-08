/*
 * XREFs of MiLocateLowestConflictingVad @ 0x1402A6F9C
 * Callers:
 *     MiUpdateVadBits @ 0x140729534 (MiUpdateVadBits.c)
 *     MiExpandVadBitMap @ 0x1407295BC (MiExpandVadBitMap.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14034C30C (MiCheckForConflictingVad.c)
 */

__int64 __fastcall MiLocateLowestConflictingVad(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 i; // rdx

  result = MiCheckForConflictingVad();
  v4 = (unsigned __int64 *)result;
  if ( result )
  {
    while ( 1 )
    {
      v5 = *v4;
      v6 = v4;
      if ( *v4 )
      {
        for ( ; *(_QWORD *)(v5 + 8); v5 = *(_QWORD *)(v5 + 8) )
          ;
      }
      else
      {
        for ( i = v4[2]; ; i = *(_QWORD *)(v5 + 16) )
        {
          v5 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(unsigned __int64 **)(v5 + 8) == v6 )
            break;
          v6 = (unsigned __int64 *)v5;
        }
      }
      if ( !v5
        || (((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF) < a2 )
      {
        break;
      }
      v4 = (unsigned __int64 *)v5;
    }
    return (__int64)v4;
  }
  return result;
}
