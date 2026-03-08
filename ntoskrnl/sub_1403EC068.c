/*
 * XREFs of sub_1403EC068 @ 0x1403EC068
 * Callers:
 *     sub_1403EC0EC @ 0x1403EC0EC (sub_1403EC0EC.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 *     sub_140B16300 @ 0x140B16300 (sub_140B16300.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403EC068(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  unsigned __int8 result; // al
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int8 i; // cl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1032))(a2, a3);
  if ( a3 )
  {
    v7 = a2 + 16;
    do
    {
      v8 = (_DWORD *)v7;
      v9 = 4LL;
      do
      {
        *v8 ^= v8[4];
        ++v8;
        --v9;
      }
      while ( v9 );
      result = *(_BYTE *)(v7 + 15);
      for ( i = result; ; i ^= result )
      {
        result >>= 7;
        if ( !result )
          break;
      }
      *(_BYTE *)(v7 + 15) = i & 0x7F;
      v7 += 48LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
