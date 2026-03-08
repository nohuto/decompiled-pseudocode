/*
 * XREFs of HalpMcUpdateFindDataTableEntry @ 0x1403719E0
 * Callers:
 *     HalMcFinishMicrocode @ 0x1403ABA24 (HalMcFinishMicrocode.c)
 *     HalpMcUpdateInitialize @ 0x14080A96C (HalpMcUpdateInitialize.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 */

_QWORD *__fastcall HalpMcUpdateFindDataTableEntry(_QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( *((_WORD *)v1 + 44) != 24 || wcsicmp((const wchar_t *)v1[12], L"mcupdate.dll") )
  {
    v1 = (_QWORD *)*v1;
    if ( v1 == a1 )
      return 0LL;
  }
  return v1;
}
