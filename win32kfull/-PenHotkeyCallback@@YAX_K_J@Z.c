/*
 * XREFs of ?PenHotkeyCallback@@YAX_K_J@Z @ 0x1C01AC210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenHotkeyCallback(unsigned __int64 a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1 <= 0x1D )
  {
    v1 = a1 - 25;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( !v3 )
        {
          HIDWORD(v5) = 2;
          goto LABEL_10;
        }
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 != 1 )
            return;
          v5 = 1LL;
          goto LABEL_10;
        }
        LODWORD(v5) = 1;
      }
      HIDWORD(v5) = 1;
    }
LABEL_10:
    SendMessageTo(16LL, &v5);
  }
}
