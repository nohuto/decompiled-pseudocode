/*
 * XREFs of sub_18010A070 @ 0x18010A070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

_QWORD *__fastcall sub_18010A070(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v4; // rdx

  a2[2] = 0LL;
  switch ( a3 )
  {
    case 0:
      a2[3] = 0LL;
      v4 = &qword_18020B678;
      goto LABEL_12;
    case 1:
      a2[3] = 0LL;
      v4 = &qword_18020B6B8;
      goto LABEL_12;
    case 2:
      a2[3] = 0LL;
      v4 = &qword_18020B698;
      goto LABEL_12;
    case 3:
      a2[3] = 0LL;
      v4 = &qword_18020B658;
      goto LABEL_12;
    case 5:
      a2[3] = 0LL;
      v4 = &qword_18020B6D8;
LABEL_12:
      sub_18001CDF8(a2, (__int64)v4);
      return a2;
  }
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
