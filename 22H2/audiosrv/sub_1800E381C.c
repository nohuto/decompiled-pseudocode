/*
 * XREFs of sub_1800E381C @ 0x1800E381C
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1800E381C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE *result; // rax
  __int64 v5; // rcx

  if ( **(_DWORD **)a1 != 1 )
  {
    if ( **(_BYTE **)(a1 + 8) )
    {
      v2 = **(_QWORD **)(a1 + 16);
      *(_OWORD *)(v2 + 16LL * (unsigned int)(*(_DWORD *)(v2 + 96))++ + 200) = xmmword_180160190;
    }
    if ( **(_BYTE **)(a1 + 24) || **(_BYTE **)(a1 + 32) )
    {
      v3 = **(_QWORD **)(a1 + 16);
      *(_OWORD *)(v3 + 16LL * (unsigned int)(*(_DWORD *)(v3 + 96))++ + 200) = xmmword_180160688;
    }
  }
  result = *(_BYTE **)(a1 + 40);
  if ( *result )
  {
    v5 = **(_QWORD **)(a1 + 16);
    result = (_BYTE *)(2LL * *(unsigned int *)(v5 + 96));
    *(_OWORD *)(v5 + 16LL * (unsigned int)(*(_DWORD *)(v5 + 96))++ + 200) = xmmword_180160678;
  }
  return result;
}
