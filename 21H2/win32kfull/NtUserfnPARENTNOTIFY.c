/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C02037C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     NtUserfnDWORD @ 0x1C00E6550 (NtUserfnDWORD.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0203880 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 == 528 && (_WORD)a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, a3, a4, a5, a6);
  else
    return NtUserfnDWORD(a1, a2, a3, a4, a5, a6);
}
