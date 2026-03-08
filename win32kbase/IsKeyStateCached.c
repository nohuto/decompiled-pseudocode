/*
 * XREFs of IsKeyStateCached @ 0x1C0078C00
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetKeyState @ 0x1C0078A00 (NtUserGetKeyState.c)
 * Callees:
 *     <none>
 */

char __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  int v1; // edx
  _BYTE *i; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 >= 0x20u )
  {
    v1 = 0;
    for ( i = &unk_1C028B418; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
      {
        v3 = a1 - 91;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 68;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                v7 = v6 - 1;
                if ( v7 )
                {
                  v8 = v7 - 1;
                  if ( v8 )
                  {
                    if ( (unsigned int)(v8 - 1) > 1 )
                      return 0;
                  }
                }
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 1;
}
