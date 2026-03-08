/*
 * XREFs of IoGetSilo @ 0x140294DC0
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != IopRevocationExtension && (v2 = v1[8]) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
