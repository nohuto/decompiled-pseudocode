/*
 * XREFs of EditionAllocAndLinkThreadPointerData @ 0x1C01C7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EditionAllocAndLinkThreadPointerData(_DWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = (_QWORD *)Win32AllocPoolZInit(56LL, 1953526613LL);
  if ( result )
  {
    v3 = *(_QWORD *)a1;
    if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 )
      __fastfail(3u);
    *result = v3;
    result[1] = a1;
    *(_QWORD *)(v3 + 8) = result;
    *(_QWORD *)a1 = result;
    ++a1[4];
  }
  return result;
}
