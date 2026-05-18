/*
 * XREFs of sub_18007CFE4 @ 0x18007CFE4
 * Callers:
 *     sub_18007C6C0 @ 0x18007C6C0 (sub_18007C6C0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_18007CFE4(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  void *v5; // rax

  v2 = a2;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL || a2 <= 0 )
  {
LABEL_6:
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  else
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = operator new(16 * v4, (const struct std::nothrow_t *)&unk_1801D7CD8);
      if ( v5 )
        break;
      v4 /= 2LL;
      v2 = v4;
      if ( v4 <= 0 )
        goto LABEL_6;
    }
    *a1 = v5;
    a1[1] = v2;
  }
  return a1;
}
