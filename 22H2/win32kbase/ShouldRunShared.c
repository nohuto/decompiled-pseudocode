/*
 * XREFs of ShouldRunShared @ 0x1C005C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ShouldRunShared(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool result; // al

  result = 1;
  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                if ( (unsigned int)(v6 - 1) >= 2 )
                  return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
