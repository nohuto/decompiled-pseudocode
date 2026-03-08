/*
 * XREFs of HalpInitializeNMI @ 0x14037D5B8
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A87F30 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C6A5A4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C6A5A8 = 0;
  }
  return 0LL;
}
