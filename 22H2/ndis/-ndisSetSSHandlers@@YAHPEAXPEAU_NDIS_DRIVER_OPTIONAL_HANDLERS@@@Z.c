/*
 * XREFs of ?ndisSetSSHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C01226A0
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0024530 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetSSHandlers(_BYTE *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  __int64 v2; // rax

  if ( *a1 != 2 || a1[24] <= 6u && (a1[24] != 6 || a1[25] < 0x1Eu) )
    return 3221225659LL;
  if ( a2->Header.Revision != 1 )
    return 3221225485LL;
  if ( a2->Header.Size < 0x18u )
    return 3221225485LL;
  if ( a2[1] )
    return 3221225485LL;
  v2 = *(_QWORD *)&a2[2].Header.Type;
  if ( !v2 || !*(_QWORD *)&a2[4].Header.Type )
    return 3221225485LL;
  *((_QWORD *)a1 + 105) = v2;
  *((_QWORD *)a1 + 106) = *(_QWORD *)&a2[4].Header.Type;
  return 0LL;
}
