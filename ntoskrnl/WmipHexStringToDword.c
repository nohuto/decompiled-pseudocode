/*
 * XREFs of WmipHexStringToDword @ 0x14069B340
 * Callers:
 *     WmipUuidFromString @ 0x14069B1D8 (WmipUuidFromString.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmipHexStringToDword(_WORD *a1, _DWORD *a2, unsigned int a3, __int16 a4)
{
  int v4; // edi
  unsigned int i; // eax
  int v7; // ebx
  int v8; // edi

  v4 = 0;
  for ( i = 0; i < a3; ++a1 )
  {
    v7 = (unsigned __int16)*a1;
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 65) <= 5u )
      {
        v8 = 16 * v4 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          return 0;
        v8 = 16 * v4 - 87;
      }
    }
    else
    {
      v8 = 16 * v4 - 48;
    }
    v4 = v7 + v8;
    ++i;
  }
  *a2 = v4;
  return !a4 || *a1 == a4;
}
