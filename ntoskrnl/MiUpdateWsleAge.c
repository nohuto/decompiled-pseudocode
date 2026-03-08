/*
 * XREFs of MiUpdateWsleAge @ 0x1402CF54C
 * Callers:
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 * Callees:
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiGetVaAge @ 0x140349610 (MiGetVaAge.c)
 */

__int64 __fastcall MiUpdateWsleAge(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r9

  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  result = MiGetVaAge(a1, v6);
  if ( a3 != (_BYTE)result && (unsigned __int8)result < 8u )
  {
    if ( a3 == 7 )
    {
LABEL_4:
      LOBYTE(v8) = a3;
      return MiSetVaAgeList(a1, v6, 1LL, v8);
    }
    if ( (_BYTE)result == 7 )
    {
      if ( !a3 )
        *a2 |= 0x20uLL;
      goto LABEL_4;
    }
  }
  return result;
}
