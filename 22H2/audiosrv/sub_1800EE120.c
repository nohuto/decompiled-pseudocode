/*
 * XREFs of sub_1800EE120 @ 0x1800EE120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EE120(__int64 a1)
{
  const wchar_t *v1; // rdx

  v1 = *(const wchar_t **)(a1 + 16);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const wchar_t **)v1;
  return sub_1800EC88C(*(_QWORD *)(a1 + 8), v1);
}
