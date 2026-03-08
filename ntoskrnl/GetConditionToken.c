/*
 * XREFs of GetConditionToken @ 0x1409D05B8
 * Callers:
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 * Callees:
 *     GetOperatorIndexByName @ 0x1409D0DC8 (GetOperatorIndexByName.c)
 */

char __fastcall GetConditionToken(wchar_t *a1, _DWORD *a2)
{
  wchar_t v2; // ax
  char v4; // di
  unsigned int OperatorIndexByName; // eax
  wchar_t *v6; // rax
  __int64 v7; // rcx

  v2 = *a1;
  *a2 = 0;
  v4 = 0;
  switch ( v2 )
  {
    case '(':
      v4 = -2;
LABEL_7:
      *a2 = 1;
      return v4;
    case '{':
      goto LABEL_7;
    case ')':
      v4 = -1;
      goto LABEL_7;
    case '}':
      goto LABEL_7;
  }
  OperatorIndexByName = GetOperatorIndexByName(a1);
  if ( OperatorIndexByName != -1 )
  {
    v4 = *((_BYTE *)&Operators + 24 * OperatorIndexByName + 8);
    v6 = (&Operators)[3 * OperatorIndexByName];
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    *a2 = v7;
  }
  return v4;
}
