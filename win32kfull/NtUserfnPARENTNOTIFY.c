/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C01E3E20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnDWORD @ 0x1C00CCEB0 (NtUserfnDWORD.c)
 *     NtUserfnPOINTERINPUT @ 0x1C01E3ED0 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  PtiCurrentShared(a1);
  if ( a2 == 528 && (_WORD)a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, a3, a4, a5, a6);
  else
    return NtUserfnDWORD(a1, a2, a3, a4, a5, a6);
}
