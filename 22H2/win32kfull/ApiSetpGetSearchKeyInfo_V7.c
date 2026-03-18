/*
 * XREFs of ApiSetpGetSearchKeyInfo_V7 @ 0x1C0140E94
 * Callers:
 *     ApiSetResolveToHost_V7 @ 0x1C0140C78 (ApiSetResolveToHost_V7.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetpGetSearchKeyInfo_V7(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        _BYTE *a5)
{
  char v5; // r8
  char v6; // al
  char v7; // di
  unsigned __int16 v8; // r11
  bool v9; // cc
  char *v10; // r10
  unsigned __int16 v11; // cx

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a2 <= 1u;
  v10 = (char *)(a1 + 2LL * a2);
  v11 = a2;
  while ( !v9 )
  {
    v10 -= 2;
    --v11;
    if ( *v10 == 45 )
    {
      if ( (unsigned __int8)(v6 - 48) > 9u )
      {
        *a4 = a2;
LABEL_12:
        *a5 = 1;
      }
      else
      {
        *a4 = v11;
        *a5 = 0;
      }
      return 1;
    }
    if ( *v10 == 46 )
    {
      if ( v7 )
      {
        *a4 = v8;
        goto LABEL_12;
      }
      v8 = v11;
      v7 = 1;
    }
    v6 = *v10;
    v9 = v11 <= 1u;
  }
  return v5;
}
