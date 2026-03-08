/*
 * XREFs of PcMapTransfer @ 0x140519B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PcMapTransfer(__int64 *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5, unsigned int a6)
{
  unsigned int v7; // r10d
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int16 v11; // r8
  __int64 v12; // rdx
  char result; // al

  LOWORD(v7) = a6;
  if ( *((_BYTE *)a1 + 21) )
  {
    v7 = a6 >> 1;
    v8 = a5 >> 16;
    a5 = (__int64)a5 >> 1;
  }
  else
  {
    LOBYTE(v8) = BYTE2(a5);
  }
  v9 = *a1;
  v10 = (a3 != 0 ? 8 : 4) | *((_BYTE *)a1 + 17) & 0xF3;
  v11 = a1[2] & 3;
  if ( *((_BYTE *)a1 + 16) >= 4u )
  {
    __outbyte(v9 + 24, 0);
    __outbyte(*a1 + 22, v10);
    __outbyte(*a1 + 4 * v11, a5);
    __outbyte(*a1 + 4 * v11, BYTE1(a5));
    __outbyte(a1[1] + 128, v8);
    __outbyte(*a1 + 2 + 4 * v11, v7 - 1);
    __outbyte(*a1 + 2 + 4 * v11, (unsigned __int16)(v7 - 1) >> 8);
    v12 = *a1 + 20;
  }
  else
  {
    __outbyte(v9 + 12, 0);
    __outbyte(*a1 + 11, v10);
    __outbyte(*a1 + 2 * v11, a5);
    __outbyte(*a1 + 2 * v11, BYTE1(a5));
    __outbyte(a1[1] + 128, v8);
    __outbyte(*a1 + 1 + 2 * v11, v7 - 1);
    __outbyte(*a1 + 1 + 2 * v11, (unsigned __int16)(v7 - 1) >> 8);
    v12 = *a1 + 10;
  }
  __outbyte(v12, a1[2] & 3);
  result = *((_BYTE *)a1 + 16);
  *((_BYTE *)a1 + 19) = result;
  return result;
}
