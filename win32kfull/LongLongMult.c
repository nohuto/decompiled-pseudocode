/*
 * XREFs of LongLongMult @ 0x1C0293DE4
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongMult(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int128 v4; // rax

  v3 = 0;
  v4 = a1 * (__int128)a2;
  if ( (__int64)v4 >= 0 )
  {
    if ( !*((_QWORD *)&v4 + 1) )
      goto LABEL_3;
LABEL_6:
    *a3 = -1LL;
    return (unsigned int)-2147024362;
  }
  if ( *((_QWORD *)&v4 + 1) != -1LL )
    goto LABEL_6;
LABEL_3:
  *a3 = v4;
  return v3;
}
