/*
 * XREFs of HalpInitializeNMI @ 0x140381048
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A8B540 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C6AA24 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C6AA28 = 0;
  }
  return 0LL;
}
